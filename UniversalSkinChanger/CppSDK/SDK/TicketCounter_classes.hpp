#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TicketCounter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TicketCounter.TicketCounter_C
// 0x0038 (0x0268 - 0x0230)
class UTicketCounter_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URefundTicket_C*                        RefundTicket;                                      // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefundTicket_C*                        RefundTicket_C_2;                                  // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefundTicket_C*                        RefundTicket_C_3;                                  // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUserWidget*>                    TicketArray;                                       // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          HighlightPendingTicket;                            // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_TicketCounter(int32 EntryPoint);
	void Construct();
	void ConsumeTicket(int32 TicketIndex);
	void InitializeTickets(int32 NumTicketsAvailableToUse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TicketCounter_C">();
	}
	static class UTicketCounter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTicketCounter_C>();
	}
};
static_assert(alignof(UTicketCounter_C) == 0x000008, "Wrong alignment on UTicketCounter_C");
static_assert(sizeof(UTicketCounter_C) == 0x000268, "Wrong size on UTicketCounter_C");
static_assert(offsetof(UTicketCounter_C, UberGraphFrame) == 0x000230, "Member 'UTicketCounter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTicketCounter_C, RefundTicket) == 0x000238, "Member 'UTicketCounter_C::RefundTicket' has a wrong offset!");
static_assert(offsetof(UTicketCounter_C, RefundTicket_C_2) == 0x000240, "Member 'UTicketCounter_C::RefundTicket_C_2' has a wrong offset!");
static_assert(offsetof(UTicketCounter_C, RefundTicket_C_3) == 0x000248, "Member 'UTicketCounter_C::RefundTicket_C_3' has a wrong offset!");
static_assert(offsetof(UTicketCounter_C, TicketArray) == 0x000250, "Member 'UTicketCounter_C::TicketArray' has a wrong offset!");
static_assert(offsetof(UTicketCounter_C, HighlightPendingTicket) == 0x000260, "Member 'UTicketCounter_C::HighlightPendingTicket' has a wrong offset!");

}
