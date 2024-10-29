#include <regex>
#include <string>
#include "memcury.h"
#include "globals.h"
#include "addresses.h"

void Addresses::SetupVersion()
{
	LOGFN("Entered SetupVersion!", LogLevel::Info);
	static SDK::FString(*GetEngineVersion)() = decltype(GetEngineVersion)(Memcury::Scanner::FindPattern("40 53 48 83 EC 20 48 8B D9 E8 ? ? ? ? 48 8B C8 41 B8 04 ? ? ? 48 8B D3").Get());

	std::string FullVersion;
	SDK::FString toFree;

	if (!GetEngineVersion)
	{
		auto VerStr = Memcury::Scanner::FindPattern("2B 2B 46 6F 72 74 6E 69 74 65 2B 52 65 6C 65 61 73 65 2D ? ? ? ?").Get();
		std::cout << "Found VerString!" << std::endl;

		// if (!VerStr)

		FullVersion = decltype(FullVersion.c_str())(VerStr);
		Engine_Version = 500;
	}

	else
	{
		toFree = GetEngineVersion();
		FullVersion = toFree.ToString();
	}

	std::string FNVer = FullVersion;
	std::string EngineVer = FullVersion;
	std::string CLStr;

	if (!FullVersion.contains("Live") && !FullVersion.contains(("Next")) && !FullVersion.contains(("Cert")))
	{
		if (GetEngineVersion)
		{
			FNVer.erase(0, FNVer.find_last_of(("-"), FNVer.length() - 1) + 1);
			EngineVer.erase(EngineVer.find_first_of(("-"), FNVer.length() - 1), 40);

			if (EngineVer.find_first_of(".") != EngineVer.find_last_of(".")) // this is for 4.21.0 and itll remove the .0
				EngineVer.erase(EngineVer.find_last_of((".")), 2);

			Engine_Version = std::stod(EngineVer) * 100;
		}

		else
		{
			const std::regex base_regex(("-([0-9.]*)-"));
			std::cmatch base_match;

			std::regex_search(FullVersion.c_str(), base_match, base_regex);

			FNVer = base_match[1];
		}

		Fortnite_Version = std::stod(FNVer);

		if (Fortnite_Version >= 16.00 && Fortnite_Version <= 18.40)
			Engine_Version = 427; // 4.26.1;
	}

	else
	{
		// TODO
		// Engine_Version = FullVersion.contains(("Next")) ? 419 : 416;
		CLStr = FullVersion.substr(FullVersion.find_first_of('-') + 1);
		CLStr = CLStr.substr(0, CLStr.find_first_of('+'));
		Fortnite_CL = std::stoi(CLStr);
		Engine_Version = Fortnite_CL <= 3775276 ? 416 : 419; // std::stoi(FullVersion.substr(0, FullVersion.find_first_of('-')));
		// Fortnite_Version = FullVersion.contains(("Next")) ? 2.4 : 1.8;
	}

	// Fortnite_Season = std::floor(Fortnite_Version);

	// SDK::FFastArraySerializer::bNewSerializer = Fortnite_Version >= 8.30;

	if (Fortnite_CL == 3700114)
		Fortnite_Version = 1.72;
	if (Fortnite_CL == 3724489)
		Fortnite_Version = 1.8;
	if (Fortnite_CL == 3757339)
		Fortnite_Version = 1.9;
	if (Fortnite_CL == 3775276)
		Fortnite_Version = 1.9; // 1.9.1
	if (Fortnite_CL == 3790078)
		Fortnite_Version = 1.10;
	if (Fortnite_CL == 3807424)
		Fortnite_Version = 1.11;
	if (Fortnite_CL == 3841827)
		Fortnite_Version = 2.2;
	if (Fortnite_CL == 3847564)
		Fortnite_Version = 2.3;
	if (Fortnite_CL == 3858292)
		Fortnite_Version = 2.4;
	if (Fortnite_CL == 3870737)
		Fortnite_Version = 2.42;

	// toFree.Free();
	LOGFN("Reached end of addresses find!", LogLevel::Warning);
}