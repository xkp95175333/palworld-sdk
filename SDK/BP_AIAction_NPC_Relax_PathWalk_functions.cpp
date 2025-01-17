#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_NPC_Relax_PathWalk

#include "Basic.hpp"

#include "BP_AIAction_NPC_Relax_PathWalk_classes.hpp"
#include "BP_AIAction_NPC_Relax_PathWalk_parameters.hpp"


namespace SDK
{

// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_PathWalk_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_PathWalk_C", "ActionFinished");

	Params::BP_AIAction_NPC_Relax_PathWalk_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_PathWalk_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_PathWalk_C", "ActionPause");

	Params::BP_AIAction_NPC_Relax_PathWalk_C_ActionPause Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.ActionPostTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_PathWalk_C::ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_PathWalk_C", "ActionPostTick");

	Params::BP_AIAction_NPC_Relax_PathWalk_C_ActionPostTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_PathWalk_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_PathWalk_C", "ActionResume");

	Params::BP_AIAction_NPC_Relax_PathWalk_C_ActionResume Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_PathWalk_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_PathWalk_C", "ActionStart");

	Params::BP_AIAction_NPC_Relax_PathWalk_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_PathWalk_C::ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_PathWalk_C", "ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk");

	Params::BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.OnStuck
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_NPC_Relax_PathWalk_C::OnStuck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_PathWalk_C", "OnStuck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.OnTargetPointUpdateStart
// (Protected, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_NPC_Relax_PathWalk_C::OnTargetPointUpdateStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_PathWalk_C", "OnTargetPointUpdateStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.PlayWaitAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_NPC_Relax_PathWalk_C::PlayWaitAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_PathWalk_C", "PlayWaitAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.SetupWalkPath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_NPC_PathWalkArray             PathInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_PathWalk_C::SetupWalkPath(const struct FF_NPC_PathWalkArray& PathInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_PathWalk_C", "SetupWalkPath");

	Params::BP_AIAction_NPC_Relax_PathWalk_C_SetupWalkPath Parms{};

	Parms.PathInfo = std::move(PathInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.UpdateNextTargetPoint
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_NPC_Relax_PathWalk_C::UpdateNextTargetPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_PathWalk_C", "UpdateNextTargetPoint");

	UObject::ProcessEvent(Func, nullptr);
}

}

