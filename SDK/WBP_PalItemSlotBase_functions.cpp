#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalItemSlotBase

#include "Basic.hpp"

#include "WBP_PalItemSlotBase_classes.hpp"
#include "WBP_PalItemSlotBase_parameters.hpp"


namespace SDK
{

// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.BindEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalItemSlotBase_C::BindEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "BindEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalItemSlotBase_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.ExecuteUbergraph_WBP_PalItemSlotBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::ExecuteUbergraph_WBP_PalItemSlotBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "ExecuteUbergraph_WBP_PalItemSlotBase");

	Params::WBP_PalItemSlotBase_C_ExecuteUbergraph_WBP_PalItemSlotBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.On Update Slot Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                     Param_Slot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::On_Update_Slot_Internal(class UPalItemSlot* Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "On Update Slot Internal");

	Params::WBP_PalItemSlotBase_C_On_Update_Slot_Internal Parms{};

	Parms.Param_Slot = Param_Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnCorruptionUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PalItemSlotBase_C::OnCorruptionUpdate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnCorruptionUpdate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnFinishedLiftItem_Internal
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalItemSlotBase_C::OnFinishedLiftItem_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnFinishedLiftItem_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnFinishedLiftSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PalItemSlotBase_C::OnFinishedLiftSlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnFinishedLiftSlot__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalItemSlotBase_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnLiftedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LiftedItemNum                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::OnLiftedSlot__DelegateSignature(int32 LiftedItemNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnLiftedSlot__DelegateSignature");

	Params::WBP_PalItemSlotBase_C_OnLiftedSlot__DelegateSignature Parms{};

	Parms.LiftedItemNum = LiftedItemNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnLiftedSlot_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LiftItemNum                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::OnLiftedSlot_Internal(const int32 LiftItemNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnLiftedSlot_Internal");

	Params::WBP_PalItemSlotBase_C_OnLiftedSlot_Internal Parms{};

	Parms.LiftItemNum = LiftItemNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnNotifyDurability__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  MaxDurability                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NowDurability                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::OnNotifyDurability__DelegateSignature(double MaxDurability, double NowDurability)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnNotifyDurability__DelegateSignature");

	Params::WBP_PalItemSlotBase_C_OnNotifyDurability__DelegateSignature Parms{};

	Parms.MaxDurability = MaxDurability;
	Parms.NowDurability = NowDurability;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnSetEmpty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PalItemSlotBase_C::OnSetEmpty__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnSetEmpty__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnSetValidSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PalItemSlotBase_C::OnSetValidSlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnSetValidSlot__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnTimer_CheckDurability
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalItemSlotBase_C::OnTimer_CheckDurability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnTimer_CheckDurability");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnUpdateDurability_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   OldDurability                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   NewDurability                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::OnUpdateDurability_Internal(float OldDurability, float NewDurability)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnUpdateDurability_Internal");

	Params::WBP_PalItemSlotBase_C_OnUpdateDurability_Internal Parms{};

	Parms.OldDurability = OldDurability;
	Parms.NewDurability = NewDurability;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnUpdateSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                     Param_TargetSlot                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::OnUpdateSlot__DelegateSignature(class UPalItemSlot* Param_TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnUpdateSlot__DelegateSignature");

	Params::WBP_PalItemSlotBase_C_OnUpdateSlot__DelegateSignature Parms{};

	Parms.Param_TargetSlot = Param_TargetSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnUpdateSlotCorruption_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                     Param_Slot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::OnUpdateSlotCorruption_Internal(class UPalItemSlot* Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnUpdateSlotCorruption_Internal");

	Params::WBP_PalItemSlotBase_C_OnUpdateSlotCorruption_Internal Parms{};

	Parms.Param_Slot = Param_Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.RegisterItemIconWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemIconBase_C*           IconWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::RegisterItemIconWidget(class UWBP_PalItemIconBase_C** IconWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "RegisterItemIconWidget");

	Params::WBP_PalItemSlotBase_C_RegisterItemIconWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IconWidget != nullptr)
		*IconWidget = Parms.IconWidget;
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                     Param_TargetSlot                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::Setup(class UPalItemSlot* Param_TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "Setup");

	Params::WBP_PalItemSlotBase_C_Setup Parms{};

	Parms.Param_TargetSlot = Param_TargetSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.Unbind Event
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalItemSlotBase_C::Unbind_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "Unbind Event");

	UObject::ProcessEvent(Func, nullptr);
}

}
