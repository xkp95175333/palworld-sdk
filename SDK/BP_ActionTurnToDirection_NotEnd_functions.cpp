#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionTurnToDirection_NotEnd

#include "Basic.hpp"

#include "BP_ActionTurnToDirection_NotEnd_classes.hpp"
#include "BP_ActionTurnToDirection_NotEnd_parameters.hpp"


namespace SDK
{

// Function BP_ActionTurnToDirection_NotEnd.BP_ActionTurnToDirection_NotEnd_C.ExecuteUbergraph_BP_ActionTurnToDirection_NotEnd
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionTurnToDirection_NotEnd_C::ExecuteUbergraph_BP_ActionTurnToDirection_NotEnd(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionTurnToDirection_NotEnd_C", "ExecuteUbergraph_BP_ActionTurnToDirection_NotEnd");

	Params::BP_ActionTurnToDirection_NotEnd_C_ExecuteUbergraph_BP_ActionTurnToDirection_NotEnd Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionTurnToDirection_NotEnd.BP_ActionTurnToDirection_NotEnd_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionTurnToDirection_NotEnd_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionTurnToDirection_NotEnd_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionTurnToDirection_NotEnd.BP_ActionTurnToDirection_NotEnd_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionTurnToDirection_NotEnd_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionTurnToDirection_NotEnd_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionTurnToDirection_NotEnd.BP_ActionTurnToDirection_NotEnd_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionTurnToDirection_NotEnd_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionTurnToDirection_NotEnd_C", "TickAction");

	Params::BP_ActionTurnToDirection_NotEnd_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
