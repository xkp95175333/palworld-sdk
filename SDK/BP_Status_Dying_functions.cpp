#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_Dying

#include "Basic.hpp"

#include "BP_Status_Dying_classes.hpp"
#include "BP_Status_Dying_parameters.hpp"


namespace SDK
{

// Function BP_Status_Dying.BP_Status_Dying_C.ExecuteUbergraph_BP_Status_Dying
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::ExecuteUbergraph_BP_Status_Dying(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Dying_C", "ExecuteUbergraph_BP_Status_Dying");

	Params::BP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_Dying.BP_Status_Dying_C.FlagControll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsDisable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::FlagControll(bool bIsDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Dying_C", "FlagControll");

	Params::BP_Status_Dying_C_FlagControll Parms{};

	Parms.bIsDisable = bIsDisable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_Dying.BP_Status_Dying_C.OnBeginStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_Dying_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Dying_C", "OnBeginStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_Dying.BP_Status_Dying_C.OnDyingEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_Status_Dying_C::OnDyingEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Dying_C", "OnDyingEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_Dying.BP_Status_Dying_C.OnDyingInterrupt__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInterrupting                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::OnDyingInterrupt__DelegateSignature(bool IsInterrupting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Dying_C", "OnDyingInterrupt__DelegateSignature");

	Params::BP_Status_Dying_C_OnDyingInterrupt__DelegateSignature Parms{};

	Parms.IsInterrupting = IsInterrupting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_Dying.BP_Status_Dying_C.OnEndRescue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalInteractiveObjectIndicatorType      IndicatorType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::OnEndRescue(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Dying_C", "OnEndRescue");

	Params::BP_Status_Dying_C_OnEndRescue Parms{};

	Parms.Other = Other;
	Parms.IndicatorType = IndicatorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_Dying.BP_Status_Dying_C.OnEndStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_Dying_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Dying_C", "OnEndStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_Dying.BP_Status_Dying_C.OnStartRescue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalInteractiveObjectIndicatorType      IndicatorType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::OnStartRescue(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Dying_C", "OnStartRescue");

	Params::BP_Status_Dying_C_OnStartRescue Parms{};

	Parms.Other = Other;
	Parms.IndicatorType = IndicatorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_Dying.BP_Status_Dying_C.OnUpdateDying__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DyingHP                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  MaxDyingHP                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::OnUpdateDying__DelegateSignature(double DyingHP, double MaxDyingHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Dying_C", "OnUpdateDying__DelegateSignature");

	Params::BP_Status_Dying_C_OnUpdateDying__DelegateSignature Parms{};

	Parms.DyingHP = DyingHP;
	Parms.MaxDyingHP = MaxDyingHP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_Dying.BP_Status_Dying_C.ProcessDeath
// (BlueprintCallable, BlueprintEvent)

void UBP_Status_Dying_C::ProcessDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Dying_C", "ProcessDeath");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_Dying.BP_Status_Dying_C.SetupInteractTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::SetupInteractTrigger(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Dying_C", "SetupInteractTrigger");

	Params::BP_Status_Dying_C_SetupInteractTrigger Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_Dying.BP_Status_Dying_C.StartBindInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalInteractDelegates*            InteractDelegates                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::StartBindInteract(class UPalInteractDelegates* InteractDelegates)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Dying_C", "StartBindInteract");

	Params::BP_Status_Dying_C_StartBindInteract Parms{};

	Parms.InteractDelegates = InteractDelegates;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_Dying.BP_Status_Dying_C.StartUnBindInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalInteractDelegates*            InteractDelegates                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::StartUnBindInteract(class UPalInteractDelegates* InteractDelegates)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Dying_C", "StartUnBindInteract");

	Params::BP_Status_Dying_C_StartUnBindInteract Parms{};

	Parms.InteractDelegates = InteractDelegates;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_Dying.BP_Status_Dying_C.TickStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::TickStatus(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Dying_C", "TickStatus");

	Params::BP_Status_Dying_C_TickStatus Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_Dying.BP_Status_Dying_C.UpdateDyingWidget
// (BlueprintCallable, BlueprintEvent)

void UBP_Status_Dying_C::UpdateDyingWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Dying_C", "UpdateDyingWidget");

	UObject::ProcessEvent(Func, nullptr);
}

}
