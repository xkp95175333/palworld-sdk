#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PaldexScrollList

#include "Basic.hpp"

#include "WBP_PaldexScrollList_classes.hpp"
#include "WBP_PaldexScrollList_parameters.hpp"


namespace SDK
{

// Function WBP_PaldexScrollList.WBP_PaldexScrollList_C.AddDisplayInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPalUIPaldex_DisplayInfo> InfoArray                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PaldexScrollList_C::AddDisplayInfo(TArray<struct FPalUIPaldex_DisplayInfo>& InfoArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaldexScrollList_C", "AddDisplayInfo");

	Params::WBP_PaldexScrollList_C_AddDisplayInfo Parms{};

	Parms.InfoArray = std::move(InfoArray);

	UObject::ProcessEvent(Func, &Parms);

	InfoArray = std::move(Parms.InfoArray);
}


// Function WBP_PaldexScrollList.WBP_PaldexScrollList_C.ClickByCharacterID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PaldexScrollList_C::ClickByCharacterID(class FName CharacterID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaldexScrollList_C", "ClickByCharacterID");

	Params::WBP_PaldexScrollList_C_ClickByCharacterID Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PaldexScrollList.WBP_PaldexScrollList_C.ClickByIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PaldexScrollList_C::ClickByIndex(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaldexScrollList_C", "ClickByIndex");

	Params::WBP_PaldexScrollList_C_ClickByIndex Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PaldexScrollList.WBP_PaldexScrollList_C.CreateChild
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPaldex_DisplayInfo         DisplayInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PaldexScrollList_C::CreateChild(const struct FPalUIPaldex_DisplayInfo& DisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaldexScrollList_C", "CreateChild");

	Params::WBP_PaldexScrollList_C_CreateChild Parms{};

	Parms.DisplayInfo = std::move(DisplayInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PaldexScrollList.WBP_PaldexScrollList_C.FocusByCharatcerID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PaldexScrollList_C::FocusByCharatcerID(class FName CharacterID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaldexScrollList_C", "FocusByCharatcerID");

	Params::WBP_PaldexScrollList_C_FocusByCharatcerID Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PaldexScrollList.WBP_PaldexScrollList_C.FocusByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PaldexScrollList_C::FocusByIndex(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaldexScrollList_C", "FocusByIndex");

	Params::WBP_PaldexScrollList_C_FocusByIndex Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PaldexScrollList.WBP_PaldexScrollList_C.GetFocusTargetByCharacterID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PaldexScrollList_C::GetFocusTargetByCharacterID(class FName CharacterID, class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaldexScrollList_C", "GetFocusTargetByCharacterID");

	Params::WBP_PaldexScrollList_C_GetFocusTargetByCharacterID Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function WBP_PaldexScrollList.WBP_PaldexScrollList_C.GetFocusTargetByIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          Target                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PaldexScrollList_C::GetFocusTargetByIndex(int32 Param_Index, class UWidget** Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaldexScrollList_C", "GetFocusTargetByIndex");

	Params::WBP_PaldexScrollList_C_GetFocusTargetByIndex Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;
}


// Function WBP_PaldexScrollList.WBP_PaldexScrollList_C.GetWidgetByIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Paldex_List_C*               Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PaldexScrollList_C::GetWidgetByIndex(int32 Param_Index, class UWBP_Paldex_List_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaldexScrollList_C", "GetWidgetByIndex");

	Params::WBP_PaldexScrollList_C_GetWidgetByIndex Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function WBP_PaldexScrollList.WBP_PaldexScrollList_C.OnClickedAnyPanel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Paldex_List_C*               Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PaldexScrollList_C::OnClickedAnyPanel__DelegateSignature(class FName CharacterID, class UWBP_Paldex_List_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaldexScrollList_C", "OnClickedAnyPanel__DelegateSignature");

	Params::WBP_PaldexScrollList_C_OnClickedAnyPanel__DelegateSignature Parms{};

	Parms.CharacterID = CharacterID;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PaldexScrollList.WBP_PaldexScrollList_C.OnClickedPanel_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Paldex_List_C*               Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PaldexScrollList_C::OnClickedPanel_Internal(class FName CharacterID, class UWBP_Paldex_List_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaldexScrollList_C", "OnClickedPanel_Internal");

	Params::WBP_PaldexScrollList_C_OnClickedPanel_Internal Parms{};

	Parms.CharacterID = CharacterID;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PaldexScrollList.WBP_PaldexScrollList_C.OnHoveredAnyPanel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Paldex_List_C*               SelfWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PaldexScrollList_C::OnHoveredAnyPanel__DelegateSignature(class FName CharacterID, class UWBP_Paldex_List_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaldexScrollList_C", "OnHoveredAnyPanel__DelegateSignature");

	Params::WBP_PaldexScrollList_C_OnHoveredAnyPanel__DelegateSignature Parms{};

	Parms.CharacterID = CharacterID;
	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PaldexScrollList.WBP_PaldexScrollList_C.OnHoveredPanel_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Paldex_List_C*               SelfWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PaldexScrollList_C::OnHoveredPanel_Internal(class FName CharacterID, class UWBP_Paldex_List_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaldexScrollList_C", "OnHoveredPanel_Internal");

	Params::WBP_PaldexScrollList_C_OnHoveredPanel_Internal Parms{};

	Parms.CharacterID = CharacterID;
	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);
}

}
