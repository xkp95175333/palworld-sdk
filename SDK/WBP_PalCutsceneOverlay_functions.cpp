#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalCutsceneOverlay

#include "Basic.hpp"

#include "WBP_PalCutsceneOverlay_classes.hpp"
#include "WBP_PalCutsceneOverlay_parameters.hpp"


namespace SDK
{

// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalCutsceneOverlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCutsceneOverlay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalCutsceneOverlay_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCutsceneOverlay_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.Display
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalCutsceneOverlay_C::Display()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCutsceneOverlay_C", "Display");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.ExecuteUbergraph_WBP_PalCutsceneOverlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCutsceneOverlay_C::ExecuteUbergraph_WBP_PalCutsceneOverlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCutsceneOverlay_C", "ExecuteUbergraph_WBP_PalCutsceneOverlay");

	Params::WBP_PalCutsceneOverlay_C_ExecuteUbergraph_WBP_PalCutsceneOverlay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalCutsceneOverlay_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCutsceneOverlay_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent                InAnalogInputEvent                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PalCutsceneOverlay_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCutsceneOverlay_C", "OnAnalogValueChanged");

	Params::WBP_PalCutsceneOverlay_C_OnAnalogValueChanged Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InAnalogInputEvent = std::move(InAnalogInputEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PalCutsceneOverlay_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCutsceneOverlay_C", "OnPreviewKeyDown");

	Params::WBP_PalCutsceneOverlay_C_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PalCutsceneOverlay_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCutsceneOverlay_C", "OnPreviewMouseButtonDown");

	Params::WBP_PalCutsceneOverlay_C_OnPreviewMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.Skip
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalCutsceneOverlay_C::Skip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCutsceneOverlay_C", "Skip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCutsceneOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCutsceneOverlay_C", "Tick");

	Params::WBP_PalCutsceneOverlay_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PalCutsceneOverlay_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCutsceneOverlay_C", "BP_GetDesiredFocusTarget");

	Params::WBP_PalCutsceneOverlay_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
