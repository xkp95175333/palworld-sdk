#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionPairStandbyBase

#include "Basic.hpp"

#include "BP_ActionPairStandbyBase_classes.hpp"
#include "BP_ActionPairStandbyBase_parameters.hpp"


namespace SDK
{

// Function BP_ActionPairStandbyBase.BP_ActionPairStandbyBase_C.CancelEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionPairStandbyBase_C::CancelEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPairStandbyBase_C", "CancelEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionPairStandbyBase.BP_ActionPairStandbyBase_C.CheckCancel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Cancel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPairStandbyBase_C::CheckCancel(bool* Cancel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPairStandbyBase_C", "CheckCancel");

	Params::BP_ActionPairStandbyBase_C_CheckCancel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Cancel != nullptr)
		*Cancel = Parms.Cancel;
}


// Function BP_ActionPairStandbyBase.BP_ActionPairStandbyBase_C.ExecuteUbergraph_BP_ActionPairStandbyBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPairStandbyBase_C::ExecuteUbergraph_BP_ActionPairStandbyBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPairStandbyBase_C", "ExecuteUbergraph_BP_ActionPairStandbyBase");

	Params::BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionPairStandbyBase.BP_ActionPairStandbyBase_C.GetStandByAnime
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                     Montage                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPairStandbyBase_C::GetStandByAnime(class UAnimMontage** Montage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPairStandbyBase_C", "GetStandByAnime");

	Params::BP_ActionPairStandbyBase_C_GetStandByAnime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;
}


// Function BP_ActionPairStandbyBase.BP_ActionPairStandbyBase_C.IsValidTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPairStandbyBase_C::IsValidTarget(bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPairStandbyBase_C", "IsValidTarget");

	Params::BP_ActionPairStandbyBase_C_IsValidTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function BP_ActionPairStandbyBase.BP_ActionPairStandbyBase_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionPairStandbyBase_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPairStandbyBase_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionPairStandbyBase.BP_ActionPairStandbyBase_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionPairStandbyBase_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPairStandbyBase_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionPairStandbyBase.BP_ActionPairStandbyBase_C.OnSetCallAIAction
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionBase*                 CallAction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPairStandbyBase_C::OnSetCallAIAction(class UPalAIActionBase* CallAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPairStandbyBase_C", "OnSetCallAIAction");

	Params::BP_ActionPairStandbyBase_C_OnSetCallAIAction Parms{};

	Parms.CallAction = CallAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionPairStandbyBase.BP_ActionPairStandbyBase_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPairStandbyBase_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPairStandbyBase_C", "TickAction");

	Params::BP_ActionPairStandbyBase_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
