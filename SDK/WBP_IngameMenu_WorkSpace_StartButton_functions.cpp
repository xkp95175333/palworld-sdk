#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IngameMenu_WorkSpace_StartButton

#include "Basic.hpp"

#include "WBP_IngameMenu_WorkSpace_StartButton_classes.hpp"
#include "WBP_IngameMenu_WorkSpace_StartButton_parameters.hpp"


namespace SDK
{

// Function WBP_IngameMenu_WorkSpace_StartButton.WBP_IngameMenu_WorkSpace_StartButton_C.BndEvt__WBP_IngameMenu_WorkSpace_StartButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_StartButton_C::BndEvt__WBP_IngameMenu_WorkSpace_StartButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_StartButton_C", "BndEvt__WBP_IngameMenu_WorkSpace_StartButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_IngameMenu_WorkSpace_StartButton_C_BndEvt__WBP_IngameMenu_WorkSpace_StartButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_WorkSpace_StartButton.WBP_IngameMenu_WorkSpace_StartButton_C.ExecuteUbergraph_WBP_IngameMenu_WorkSpace_StartButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_StartButton_C::ExecuteUbergraph_WBP_IngameMenu_WorkSpace_StartButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_StartButton_C", "ExecuteUbergraph_WBP_IngameMenu_WorkSpace_StartButton");

	Params::WBP_IngameMenu_WorkSpace_StartButton_C_ExecuteUbergraph_WBP_IngameMenu_WorkSpace_StartButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_WorkSpace_StartButton.WBP_IngameMenu_WorkSpace_StartButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_WorkSpace_StartButton_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_StartButton_C", "OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_WorkSpace_StartButton.WBP_IngameMenu_WorkSpace_StartButton_C.SetEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_StartButton_C::SetEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_StartButton_C", "SetEnable");

	Params::WBP_IngameMenu_WorkSpace_StartButton_C_SetEnable Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}

}
