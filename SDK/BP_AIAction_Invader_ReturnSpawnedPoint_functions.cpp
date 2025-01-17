#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Invader_ReturnSpawnedPoint

#include "Basic.hpp"

#include "BP_AIAction_Invader_ReturnSpawnedPoint_classes.hpp"
#include "BP_AIAction_Invader_ReturnSpawnedPoint_parameters.hpp"


namespace SDK
{

// Function BP_AIAction_Invader_ReturnSpawnedPoint.BP_AIAction_Invader_ReturnSpawnedPoint_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Invader_ReturnSpawnedPoint_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Invader_ReturnSpawnedPoint_C", "ActionStart");

	Params::BP_AIAction_Invader_ReturnSpawnedPoint_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Invader_ReturnSpawnedPoint.BP_AIAction_Invader_ReturnSpawnedPoint_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Invader_ReturnSpawnedPoint_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Invader_ReturnSpawnedPoint_C", "ActionTick");

	Params::BP_AIAction_Invader_ReturnSpawnedPoint_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Invader_ReturnSpawnedPoint.BP_AIAction_Invader_ReturnSpawnedPoint_C.ExecuteUbergraph_BP_AIAction_Invader_ReturnSpawnedPoint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Invader_ReturnSpawnedPoint_C::ExecuteUbergraph_BP_AIAction_Invader_ReturnSpawnedPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Invader_ReturnSpawnedPoint_C", "ExecuteUbergraph_BP_AIAction_Invader_ReturnSpawnedPoint");

	Params::BP_AIAction_Invader_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Invader_ReturnSpawnedPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Invader_ReturnSpawnedPoint.BP_AIAction_Invader_ReturnSpawnedPoint_C.�������_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_AIAction_Invader_ReturnSpawnedPoint_C::_________0(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Invader_ReturnSpawnedPoint_C", "�������_0");

	Params::BP_AIAction_Invader_ReturnSpawnedPoint_C__________0 Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}

}

