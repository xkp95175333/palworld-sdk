#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_Wetness

#include "Basic.hpp"

#include "BP_Status_Wetness_classes.hpp"
#include "BP_Status_Wetness_parameters.hpp"


namespace SDK
{

// Function BP_Status_Wetness.BP_Status_Wetness_C.ExecuteUbergraph_BP_Status_Wetness
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Wetness_C::ExecuteUbergraph_BP_Status_Wetness(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Wetness_C", "ExecuteUbergraph_BP_Status_Wetness");

	Params::BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_Wetness.BP_Status_Wetness_C.IsOwnerActivate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsActivate                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Wetness_C::IsOwnerActivate(bool* IsActivate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Wetness_C", "IsOwnerActivate");

	Params::BP_Status_Wetness_C_IsOwnerActivate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsActivate != nullptr)
		*IsActivate = Parms.IsActivate;
}


// Function BP_Status_Wetness.BP_Status_Wetness_C.OnBeginStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_Wetness_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Wetness_C", "OnBeginStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_Wetness.BP_Status_Wetness_C.OnEndStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_Wetness_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Wetness_C", "OnEndStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_Wetness.BP_Status_Wetness_C.TickStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Wetness_C::TickStatus(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Wetness_C", "TickStatus");

	Params::BP_Status_Wetness_C_TickStatus Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
