#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WorkSuitabilityPreference

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_WorkSuitabilityPreference.WBP_WorkSuitabilityPreference_C.BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_1_OnChangedSuitabilitySetting__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_1_OnChangedSuitabilitySetting__DelegateSignature final
{
public:
	bool                                          IsOn;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalWorkSuitability                           Suitability;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A41[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            TargetSlot;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_1_OnChangedSuitabilitySetting__DelegateSignature) == 0x000008, "Wrong alignment on WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_1_OnChangedSuitabilitySetting__DelegateSignature");
static_assert(sizeof(WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_1_OnChangedSuitabilitySetting__DelegateSignature) == 0x000010, "Wrong size on WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_1_OnChangedSuitabilitySetting__DelegateSignature");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_1_OnChangedSuitabilitySetting__DelegateSignature, IsOn) == 0x000000, "Member 'WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_1_OnChangedSuitabilitySetting__DelegateSignature::IsOn' has a wrong offset!");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_1_OnChangedSuitabilitySetting__DelegateSignature, Suitability) == 0x000001, "Member 'WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_1_OnChangedSuitabilitySetting__DelegateSignature::Suitability' has a wrong offset!");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_1_OnChangedSuitabilitySetting__DelegateSignature, TargetSlot) == 0x000008, "Member 'WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_1_OnChangedSuitabilitySetting__DelegateSignature::TargetSlot' has a wrong offset!");

// Function WBP_WorkSuitabilityPreference.WBP_WorkSuitabilityPreference_C.BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_2_OnChangedBattleModeSetting__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_2_OnChangedBattleModeSetting__DelegateSignature final
{
public:
	bool                                          CanBattle;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A42[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            Param_Slot;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_2_OnChangedBattleModeSetting__DelegateSignature) == 0x000008, "Wrong alignment on WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_2_OnChangedBattleModeSetting__DelegateSignature");
static_assert(sizeof(WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_2_OnChangedBattleModeSetting__DelegateSignature) == 0x000010, "Wrong size on WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_2_OnChangedBattleModeSetting__DelegateSignature");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_2_OnChangedBattleModeSetting__DelegateSignature, CanBattle) == 0x000000, "Member 'WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_2_OnChangedBattleModeSetting__DelegateSignature::CanBattle' has a wrong offset!");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_2_OnChangedBattleModeSetting__DelegateSignature, Param_Slot) == 0x000008, "Member 'WBP_WorkSuitabilityPreference_C_BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_2_OnChangedBattleModeSetting__DelegateSignature::Param_Slot' has a wrong offset!");

// Function WBP_WorkSuitabilityPreference.WBP_WorkSuitabilityPreference_C.ExecuteUbergraph_WBP_WorkSuitabilityPreference
// 0x0020 (0x0020 - 0x0000)
struct WBP_WorkSuitabilityPreference_C_ExecuteUbergraph_WBP_WorkSuitabilityPreference final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_CanBattle;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A43[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            K2Node_ComponentBoundEvent_Slot;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_IsOn;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalWorkSuitability                           K2Node_ComponentBoundEvent_Suitability;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A44[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            K2Node_ComponentBoundEvent_TargetSlot;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorkSuitabilityPreference_C_ExecuteUbergraph_WBP_WorkSuitabilityPreference) == 0x000008, "Wrong alignment on WBP_WorkSuitabilityPreference_C_ExecuteUbergraph_WBP_WorkSuitabilityPreference");
static_assert(sizeof(WBP_WorkSuitabilityPreference_C_ExecuteUbergraph_WBP_WorkSuitabilityPreference) == 0x000020, "Wrong size on WBP_WorkSuitabilityPreference_C_ExecuteUbergraph_WBP_WorkSuitabilityPreference");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_ExecuteUbergraph_WBP_WorkSuitabilityPreference, EntryPoint) == 0x000000, "Member 'WBP_WorkSuitabilityPreference_C_ExecuteUbergraph_WBP_WorkSuitabilityPreference::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_ExecuteUbergraph_WBP_WorkSuitabilityPreference, K2Node_ComponentBoundEvent_CanBattle) == 0x000004, "Member 'WBP_WorkSuitabilityPreference_C_ExecuteUbergraph_WBP_WorkSuitabilityPreference::K2Node_ComponentBoundEvent_CanBattle' has a wrong offset!");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_ExecuteUbergraph_WBP_WorkSuitabilityPreference, K2Node_ComponentBoundEvent_Slot) == 0x000008, "Member 'WBP_WorkSuitabilityPreference_C_ExecuteUbergraph_WBP_WorkSuitabilityPreference::K2Node_ComponentBoundEvent_Slot' has a wrong offset!");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_ExecuteUbergraph_WBP_WorkSuitabilityPreference, K2Node_ComponentBoundEvent_IsOn) == 0x000010, "Member 'WBP_WorkSuitabilityPreference_C_ExecuteUbergraph_WBP_WorkSuitabilityPreference::K2Node_ComponentBoundEvent_IsOn' has a wrong offset!");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_ExecuteUbergraph_WBP_WorkSuitabilityPreference, K2Node_ComponentBoundEvent_Suitability) == 0x000011, "Member 'WBP_WorkSuitabilityPreference_C_ExecuteUbergraph_WBP_WorkSuitabilityPreference::K2Node_ComponentBoundEvent_Suitability' has a wrong offset!");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_ExecuteUbergraph_WBP_WorkSuitabilityPreference, K2Node_ComponentBoundEvent_TargetSlot) == 0x000018, "Member 'WBP_WorkSuitabilityPreference_C_ExecuteUbergraph_WBP_WorkSuitabilityPreference::K2Node_ComponentBoundEvent_TargetSlot' has a wrong offset!");

// Function WBP_WorkSuitabilityPreference.WBP_WorkSuitabilityPreference_C.OnTrigger_ToggleDetail
// 0x0001 (0x0001 - 0x0000)
struct WBP_WorkSuitabilityPreference_C_OnTrigger_ToggleDetail final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorkSuitabilityPreference_C_OnTrigger_ToggleDetail) == 0x000001, "Wrong alignment on WBP_WorkSuitabilityPreference_C_OnTrigger_ToggleDetail");
static_assert(sizeof(WBP_WorkSuitabilityPreference_C_OnTrigger_ToggleDetail) == 0x000001, "Wrong size on WBP_WorkSuitabilityPreference_C_OnTrigger_ToggleDetail");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_OnTrigger_ToggleDetail, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'WBP_WorkSuitabilityPreference_C_OnTrigger_ToggleDetail::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_WorkSuitabilityPreference.WBP_WorkSuitabilityPreference_C.Setup
// 0x0030 (0x0030 - 0x0000)
struct WBP_WorkSuitabilityPreference_C_Setup final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetTopFocusTarget_TargetWidget;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue;        // 0x0018(0x0004)(NoDestructor)
	uint8                                         Pad_5A45[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterContainer*       CallFunc_GetTargetCharacterContainer_OutContainer; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTargetCharacterContainer_ReturnValue;  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorkSuitabilityPreference_C_Setup) == 0x000008, "Wrong alignment on WBP_WorkSuitabilityPreference_C_Setup");
static_assert(sizeof(WBP_WorkSuitabilityPreference_C_Setup) == 0x000030, "Wrong size on WBP_WorkSuitabilityPreference_C_Setup");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_WorkSuitabilityPreference_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_Setup, CallFunc_GetTopFocusTarget_TargetWidget) == 0x000010, "Member 'WBP_WorkSuitabilityPreference_C_Setup::CallFunc_GetTopFocusTarget_TargetWidget' has a wrong offset!");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_Setup, CallFunc_RegisterActionBinding_ReturnValue) == 0x000018, "Member 'WBP_WorkSuitabilityPreference_C_Setup::CallFunc_RegisterActionBinding_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_Setup, CallFunc_GetTargetCharacterContainer_OutContainer) == 0x000020, "Member 'WBP_WorkSuitabilityPreference_C_Setup::CallFunc_GetTargetCharacterContainer_OutContainer' has a wrong offset!");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_Setup, CallFunc_GetTargetCharacterContainer_ReturnValue) == 0x000028, "Member 'WBP_WorkSuitabilityPreference_C_Setup::CallFunc_GetTargetCharacterContainer_ReturnValue' has a wrong offset!");

// Function WBP_WorkSuitabilityPreference.WBP_WorkSuitabilityPreference_C.BP_GetDesiredFocusTarget
// 0x0010 (0x0010 - 0x0000)
struct WBP_WorkSuitabilityPreference_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetTopFocusTarget_TargetWidget;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorkSuitabilityPreference_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_WorkSuitabilityPreference_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_WorkSuitabilityPreference_C_BP_GetDesiredFocusTarget) == 0x000010, "Wrong size on WBP_WorkSuitabilityPreference_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_WorkSuitabilityPreference_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WorkSuitabilityPreference_C_BP_GetDesiredFocusTarget, CallFunc_GetTopFocusTarget_TargetWidget) == 0x000008, "Member 'WBP_WorkSuitabilityPreference_C_BP_GetDesiredFocusTarget::CallFunc_GetTopFocusTarget_TargetWidget' has a wrong offset!");

}
