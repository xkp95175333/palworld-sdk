#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WorkerRadialMenu

#include "Basic.hpp"

#include "WBP_WorkerRadialMenu_classes.hpp"
#include "WBP_WorkerRadialMenu_parameters.hpp"


namespace SDK
{

// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.CreateContent
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_WorkerRadialMenuContent_C*   CreatedWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_WorkerRadialMenu_C::CreateContent(const class FText& Text, class UWBP_WorkerRadialMenuContent_C** CreatedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "CreateContent");

	Params::WBP_WorkerRadialMenu_C_CreateContent Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;
}


// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.ExecuteUbergraph_WBP_WorkerRadialMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorkerRadialMenu_C::ExecuteUbergraph_WBP_WorkerRadialMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "ExecuteUbergraph_WBP_WorkerRadialMenu");

	Params::WBP_WorkerRadialMenu_C_ExecuteUbergraph_WBP_WorkerRadialMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.OnClosed
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_WorkerRadialMenu_C::OnClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "OnClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.OnSelectedMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalWorkerRadialMenuResult              Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorkerRadialMenu_C::OnSelectedMenu__DelegateSignature(EPalWorkerRadialMenuResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "OnSelectedMenu__DelegateSignature");

	Params::WBP_WorkerRadialMenu_C_OnSelectedMenu__DelegateSignature Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.OnSelectedMenu_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorkerRadialMenu_C::OnSelectedMenu_Internal(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "OnSelectedMenu_Internal");

	Params::WBP_WorkerRadialMenu_C_OnSelectedMenu_Internal Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.SetupContents
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_WorkerRadialMenu_C::SetupContents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "SetupContents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_WorkerRadialMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_WorkerRadialMenu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorkerRadialMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "Tick");

	Params::WBP_WorkerRadialMenu_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
