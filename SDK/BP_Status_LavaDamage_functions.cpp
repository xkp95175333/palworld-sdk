#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_LavaDamage

#include "Basic.hpp"

#include "BP_Status_LavaDamage_classes.hpp"
#include "BP_Status_LavaDamage_parameters.hpp"


namespace SDK
{

// Function BP_Status_LavaDamage.BP_Status_LavaDamage_C.ExecuteUbergraph_BP_Status_LavaDamage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_LavaDamage_C::ExecuteUbergraph_BP_Status_LavaDamage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_LavaDamage_C", "ExecuteUbergraph_BP_Status_LavaDamage");

	Params::BP_Status_LavaDamage_C_ExecuteUbergraph_BP_Status_LavaDamage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_LavaDamage.BP_Status_LavaDamage_C.GetLavaDamage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_Status_LavaDamage_C::GetLavaDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_LavaDamage_C", "GetLavaDamage");

	Params::BP_Status_LavaDamage_C_GetLavaDamage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Status_LavaDamage.BP_Status_LavaDamage_C.HasSelfPalElement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalElementType                         MyElement                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Has                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_LavaDamage_C::HasSelfPalElement(EPalElementType MyElement, bool* Has)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_LavaDamage_C", "HasSelfPalElement");

	Params::BP_Status_LavaDamage_C_HasSelfPalElement Parms{};

	Parms.MyElement = MyElement;

	UObject::ProcessEvent(Func, &Parms);

	if (Has != nullptr)
		*Has = Parms.Has;
}


// Function BP_Status_LavaDamage.BP_Status_LavaDamage_C.LavaDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Status_LavaDamage_C::LavaDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_LavaDamage_C", "LavaDamage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_LavaDamage.BP_Status_LavaDamage_C.OnBeginStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_LavaDamage_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_LavaDamage_C", "OnBeginStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_LavaDamage.BP_Status_LavaDamage_C.OnCompleteInitializeParameter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Status_LavaDamage_C::OnCompleteInitializeParameter(class APalCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_LavaDamage_C", "OnCompleteInitializeParameter");

	Params::BP_Status_LavaDamage_C_OnCompleteInitializeParameter Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_LavaDamage.BP_Status_LavaDamage_C.OnEndStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_LavaDamage_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_LavaDamage_C", "OnEndStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_LavaDamage.BP_Status_LavaDamage_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Status_LavaDamage_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_LavaDamage_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_LavaDamage.BP_Status_LavaDamage_C.TickStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_LavaDamage_C::TickStatus(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_LavaDamage_C", "TickStatus");

	Params::BP_Status_LavaDamage_C_TickStatus Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
