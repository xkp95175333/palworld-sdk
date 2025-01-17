#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Sleep_InNightWildPal

#include "Basic.hpp"

#include "BP_AIAction_Sleep_InNightWildPal_classes.hpp"
#include "BP_AIAction_Sleep_InNightWildPal_parameters.hpp"


namespace SDK
{

// Function BP_AIAction_Sleep_InNightWildPal.BP_AIAction_Sleep_InNightWildPal_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Sleep_InNightWildPal_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Sleep_InNightWildPal_C", "ActionTick");

	Params::BP_AIAction_Sleep_InNightWildPal_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Sleep_InNightWildPal.BP_AIAction_Sleep_InNightWildPal_C.ExecuteUbergraph_BP_AIAction_Sleep_InNightWildPal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Sleep_InNightWildPal_C::ExecuteUbergraph_BP_AIAction_Sleep_InNightWildPal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Sleep_InNightWildPal_C", "ExecuteUbergraph_BP_AIAction_Sleep_InNightWildPal");

	Params::BP_AIAction_Sleep_InNightWildPal_C_ExecuteUbergraph_BP_AIAction_Sleep_InNightWildPal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Sleep_InNightWildPal.BP_AIAction_Sleep_InNightWildPal_C.OnSquadMemberDeadEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInbfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_AIAction_Sleep_InNightWildPal_C::OnSquadMemberDeadEvent(const struct FPalDeadInfo& DeadInbfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Sleep_InNightWildPal_C", "OnSquadMemberDeadEvent");

	Params::BP_AIAction_Sleep_InNightWildPal_C_OnSquadMemberDeadEvent Parms{};

	Parms.DeadInbfo = std::move(DeadInbfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

