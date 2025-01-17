#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Map_Base

#include "Basic.hpp"

#include "WBP_Map_Base_classes.hpp"
#include "WBP_Map_Base_parameters.hpp"


namespace SDK
{

// Function WBP_Map_Base.WBP_Map_Base_C.AddBossIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PalSpawner_Standard_C*        Spawner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::AddBossIcon(class ABP_PalSpawner_Standard_C* Spawner, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "AddBossIcon");

	Params::WBP_Map_Base_C_AddBossIcon Parms{};

	Parms.Spawner = Spawner;
	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.ChangeCustomIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Map_IconCustom_C*            Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::ChangeCustomIcon(class UWBP_Map_IconCustom_C* Icon, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "ChangeCustomIcon");

	Params::WBP_Map_Base_C_ChangeCustomIcon Parms{};

	Parms.Icon = Icon;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.ChangeFilter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalLocationType                        FilterMap                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::ChangeFilter(EPalLocationType FilterMap, bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "ChangeFilter");

	Params::WBP_Map_Base_C_ChangeFilter Parms{};

	Parms.FilterMap = FilterMap;
	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.CloseMap
// (BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::CloseMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "CloseMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.Collect Boss Pal Spawner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::Collect_Boss_Pal_Spawner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "Collect Boss Pal Spawner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.Collect Icon in Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::Collect_Icon_in_Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "Collect Icon in Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.CollectAndAddIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           CollectActorClass                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                           AddWidgetClass                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::CollectAndAddIcon(class UClass* CollectActorClass, class UClass* AddWidgetClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "CollectAndAddIcon");

	Params::WBP_Map_Base_C_CollectAndAddIcon Parms{};

	Parms.CollectActorClass = CollectActorClass;
	Parms.AddWidgetClass = AddWidgetClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.EnableCustomMark
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::EnableCustomMark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "EnableCustomMark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.ExecuteUbergraph_WBP_Map_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::ExecuteUbergraph_WBP_Map_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "ExecuteUbergraph_WBP_Map_Base");

	Params::WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnCloseAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::OnCloseAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnCloseAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnCustomMarkChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::OnCustomMarkChanged(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnCustomMarkChanged");

	Params::WBP_Map_Base_C_OnCustomMarkChanged Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnIconClicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WorldMap_IconBase_NoDesign_C*Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::OnIconClicked(class UWBP_WorldMap_IconBase_NoDesign_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnIconClicked");

	Params::WBP_Map_Base_C_OnIconClicked Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnInputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        InputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::OnInputMethodChanged(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnInputMethodChanged");

	Params::WBP_Map_Base_C_OnInputMethodChanged Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Map_Base_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnKeyDown");

	Params::WBP_Map_Base_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Map_Base_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnMouseButtonDown");

	Params::WBP_Map_Base_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnRemovedLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            LocationId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalLocationBase*                 Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::OnRemovedLocation(const struct FGuid& LocationId, class UPalLocationBase* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnRemovedLocation");

	Params::WBP_Map_Base_C_OnRemovedLocation Parms{};

	Parms.LocationId = std::move(LocationId);
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnRepliedDialog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOK                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::OnRepliedDialog(bool bOK)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnRepliedDialog");

	Params::WBP_Map_Base_C_OnRepliedDialog Parms{};

	Parms.bOK = bOK;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnRequestCampDismantal
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::OnRequestCampDismantal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnRequestCampDismantal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.RefreshDeathMark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FGuid, class UPalLocationBase*>LocationMap                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Map_Base_C::RefreshDeathMark(const TMap<struct FGuid, class UPalLocationBase*>& LocationMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "RefreshDeathMark");

	Params::WBP_Map_Base_C_RefreshDeathMark Parms{};

	Parms.LocationMap = std::move(LocationMap);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.RemoveCustomIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Map_IconCustom_C*            Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::RemoveCustomIcon(class UWBP_Map_IconCustom_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "RemoveCustomIcon");

	Params::WBP_Map_Base_C_RemoveCustomIcon Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.SetFilter
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::SetFilter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "SetFilter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.SetupIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalLocationType                        LocationType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalLocationPoint*                LocationPoint                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_WorldMap_IconBase_NoDesign_C*Icon                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::SetupIcon(EPalLocationType LocationType, class UPalLocationPoint* LocationPoint, class UWBP_WorldMap_IconBase_NoDesign_C** Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "SetupIcon");

	Params::WBP_Map_Base_C_SetupIcon Parms{};

	Parms.LocationType = LocationType;
	Parms.LocationPoint = LocationPoint;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;
}


// Function WBP_Map_Base.WBP_Map_Base_C.SetupLocationIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Base_C::SetupLocationIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "SetupLocationIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Base.WBP_Map_Base_C.SetupLocationPointIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            LocationId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalLocationBase*                 Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::SetupLocationPointIcon(const struct FGuid& LocationId, class UPalLocationBase* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "SetupLocationPointIcon");

	Params::WBP_Map_Base_C_SetupLocationPointIcon Parms{};

	Parms.LocationId = std::move(LocationId);
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "Tick");

	Params::WBP_Map_Base_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Base.WBP_Map_Base_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Map_Base_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Base_C", "BP_GetDesiredFocusTarget");

	Params::WBP_Map_Base_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

