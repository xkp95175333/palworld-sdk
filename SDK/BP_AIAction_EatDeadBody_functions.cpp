#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_EatDeadBody

#include "Basic.hpp"

#include "BP_AIAction_EatDeadBody_classes.hpp"
#include "BP_AIAction_EatDeadBody_parameters.hpp"


namespace SDK
{

// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_EatDeadBody_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_EatDeadBody_C", "ActionTick");

	Params::BP_AIAction_EatDeadBody_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.ExecuteUbergraph_BP_AIAction_EatDeadBody
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_EatDeadBody_C::ExecuteUbergraph_BP_AIAction_EatDeadBody(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_EatDeadBody_C", "ExecuteUbergraph_BP_AIAction_EatDeadBody");

	Params::BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.RecoverHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_EatDeadBody_C::RecoverHP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_EatDeadBody_C", "RecoverHP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.SelfPawn
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Param_SelfPawn                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_EatDeadBody_C::SelfPawn(class AActor** Param_SelfPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_EatDeadBody_C", "SelfPawn");

	Params::BP_AIAction_EatDeadBody_C_SelfPawn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SelfPawn != nullptr)
		*Param_SelfPawn = Parms.Param_SelfPawn;
}


// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_EatDeadBody_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_EatDeadBody_C", "ActionFinished");

	Params::BP_AIAction_EatDeadBody_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_EatDeadBody_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_EatDeadBody_C", "ActionPause");

	Params::BP_AIAction_EatDeadBody_C_ActionPause Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_EatDeadBody_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_EatDeadBody_C", "ActionStart");

	Params::BP_AIAction_EatDeadBody_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}
