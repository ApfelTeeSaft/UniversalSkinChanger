using System;
using System.Diagnostics;
using System.IO;
using System.Runtime.InteropServices;
using System.Text;
using System.IO.Pipes;

class Program
{
    [DllImport("kernel32.dll")]
    private static extern IntPtr OpenProcess(uint processAccess, bool bInheritHandle, int processId);

    [DllImport("kernel32.dll", SetLastError = true, ExactSpelling = true)]
    private static extern IntPtr VirtualAllocEx(IntPtr hProcess, IntPtr lpAddress, uint dwSize, uint flAllocationType, uint flProtect);

    [DllImport("kernel32.dll", SetLastError = true)]
    private static extern bool WriteProcessMemory(IntPtr hProcess, IntPtr lpBaseAddress, byte[] lpBuffer, uint nSize, out IntPtr lpNumberOfBytesWritten);

    [DllImport("kernel32.dll")]
    private static extern IntPtr CreateRemoteThread(IntPtr hProcess, IntPtr lpThreadAttributes, uint dwStackSize, IntPtr lpStartAddress, IntPtr lpParameter, uint dwCreationFlags, out IntPtr lpThreadId);

    [DllImport("kernel32.dll")]
    private static extern bool CloseHandle(IntPtr hObject);

    [DllImport("kernel32.dll", SetLastError = true)]
    private static extern IntPtr GetModuleHandle(string lpModuleName);

    [DllImport("kernel32.dll", SetLastError = true)]
    private static extern IntPtr GetProcAddress(IntPtr hModule, string lpProcName);

    [DllImport("kernel32.dll", SetLastError = true)]
    private static extern uint WaitForSingleObject(IntPtr hHandle, uint dwMilliseconds);

    private const uint PROCESS_ALL_ACCESS = 0x001F0FFF;
    private const uint MEM_COMMIT = 0x1000;
    private const uint MEM_RESERVE = 0x2000;
    private const uint PAGE_READWRITE = 0x04;

    static void Main(string[] args)
    {
        Console.WriteLine("UniversalSkinPartPicker");
        Console.WriteLine("Made with <3 by ApfelTeeSaft");
        Console.WriteLine("Currently only Supports 7.40 and Backpacks for Testing");

        Console.Write("Enter the full path of the DLL to inject: ");
        string dllPath = Console.ReadLine();

        if (!File.Exists(dllPath))
        {
            Console.WriteLine("Error: The specified file does not exist.");
            return;
        }

        Console.WriteLine($"Selected DLL: {dllPath}");

        Process targetProcess = null;
        foreach (var process in Process.GetProcessesByName("Fortnite"))
        {
            targetProcess = process;
            break;
        }

        if (targetProcess == null)
        {
            Console.WriteLine("Error: Could not find a process named 'Fortnite.exe'.");
            return;
        }

        Console.WriteLine($"Target process found: {targetProcess.ProcessName} (PID: {targetProcess.Id})");

        if (InjectDLL(targetProcess, dllPath))
        {
            Console.WriteLine("DLL successfully injected!");
        }
        else
        {
            Console.WriteLine("DLL injection failed.");
            return;
        }

        Console.WriteLine("Starting command loop...");
        CommandLoop();
    }

    static bool InjectDLL(Process process, string dllPath)
    {
        IntPtr processHandle = OpenProcess(PROCESS_ALL_ACCESS, false, process.Id);
        if (processHandle == IntPtr.Zero)
        {
            Console.WriteLine("Error: Unable to open target process.");
            return false;
        }

        IntPtr allocMemAddress = VirtualAllocEx(processHandle, IntPtr.Zero, (uint)((dllPath.Length + 1) * Marshal.SizeOf(typeof(char))), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
        if (allocMemAddress == IntPtr.Zero)
        {
            Console.WriteLine("Error: Unable to allocate memory in target process.");
            CloseHandle(processHandle);
            return false;
        }

        IntPtr bytesWritten;
        if (!WriteProcessMemory(processHandle, allocMemAddress, Encoding.Default.GetBytes(dllPath), (uint)((dllPath.Length + 1) * Marshal.SizeOf(typeof(char))), out bytesWritten))
        {
            Console.WriteLine("Error: Unable to write DLL path to target process memory.");
            CloseHandle(processHandle);
            return false;
        }

        IntPtr loadLibraryAddr = GetProcAddress(GetModuleHandle("kernel32.dll"), "LoadLibraryA");
        if (loadLibraryAddr == IntPtr.Zero)
        {
            Console.WriteLine("Error: Unable to get address of LoadLibraryA.");
            CloseHandle(processHandle);
            return false;
        }

        IntPtr threadId;
        IntPtr remoteThread = CreateRemoteThread(processHandle, IntPtr.Zero, 0, loadLibraryAddr, allocMemAddress, 0, out threadId);
        if (remoteThread == IntPtr.Zero)
        {
            Console.WriteLine("Error: Unable to create remote thread in target process.");
            CloseHandle(processHandle);
            return false;
        }

        Console.WriteLine("DLL injected. Waiting for the remote thread to complete...");
        WaitForSingleObject(remoteThread, uint.MaxValue);

        CloseHandle(remoteThread);
        CloseHandle(processHandle);

        return true;
    }

    static void CommandLoop()
    {
        Console.WriteLine("Command loop started.");
        Console.WriteLine("Commands: 'backpack' to change backpack, 'process' to list actors, 'exit' to quit.\n");

        while (true)
        {
            Console.Write("Enter a command (backpack/process/exit): ");
            string command = Console.ReadLine();

            if (command.Equals("exit", StringComparison.OrdinalIgnoreCase))
            {
                Console.WriteLine("Exiting...");
                break;
            }

            if (command.Equals("backpack", StringComparison.OrdinalIgnoreCase))
            {
                Console.Write("Enter a backpack ID to change to: ");
                string backpackName = Console.ReadLine();

                try
                {
                    using (NamedPipeClientStream pipeClient = new NamedPipeClientStream(".", "UniversalSkinChanger", PipeDirection.Out))
                    {
                        pipeClient.Connect();
                        using (StreamWriter writer = new StreamWriter(pipeClient))
                        {
                            writer.AutoFlush = true;
                            writer.WriteLine(backpackName);
                        }
                    }

                    Console.WriteLine($"Backpack ID '{backpackName}' sent successfully!");
                }
                catch (Exception ex)
                {
                    Console.WriteLine($"Error sending backpack ID: {ex.Message}");
                }
            }
            else if (command.Equals("process", StringComparison.OrdinalIgnoreCase))
            {
                try
                {
                    using (NamedPipeClientStream pipeClient = new NamedPipeClientStream(".", "UniversalSkinChanger_Actors", PipeDirection.InOut))
                    {
                        pipeClient.Connect();
                        using (StreamWriter writer = new StreamWriter(pipeClient))
                        using (StreamReader reader = new StreamReader(pipeClient))
                        {
                            writer.AutoFlush = true;
                            writer.WriteLine("process_actors");

                            string response = reader.ReadToEnd();
                            Console.WriteLine("Actors Found:");
                            Console.WriteLine(response);
                        }
                    }
                }
                catch (Exception ex)
                {
                    Console.WriteLine($"Error processing actors: {ex.Message}");
                }
            }
            else
            {
                Console.WriteLine("Invalid command. Please use 'backpack', 'process', or 'exit'.");
            }

            Console.WriteLine();
        }
    }
}