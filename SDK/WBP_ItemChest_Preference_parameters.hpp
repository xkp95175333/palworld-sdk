#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemChest_Preference

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_ItemChest_Preference.WBP_ItemChest_Preference_C.ExecuteUbergraph_WBP_ItemChest_Preference
// 0x0008 (0x0008 - 0x0000)
struct WBP_ItemChest_Preference_C_ExecuteUbergraph_WBP_ItemChest_Preference final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemChest_Preference_C_ExecuteUbergraph_WBP_ItemChest_Preference) == 0x000004, "Wrong alignment on WBP_ItemChest_Preference_C_ExecuteUbergraph_WBP_ItemChest_Preference");
static_assert(sizeof(WBP_ItemChest_Preference_C_ExecuteUbergraph_WBP_ItemChest_Preference) == 0x000008, "Wrong size on WBP_ItemChest_Preference_C_ExecuteUbergraph_WBP_ItemChest_Preference");
static_assert(offsetof(WBP_ItemChest_Preference_C_ExecuteUbergraph_WBP_ItemChest_Preference, EntryPoint) == 0x000000, "Member 'WBP_ItemChest_Preference_C_ExecuteUbergraph_WBP_ItemChest_Preference::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_ExecuteUbergraph_WBP_ItemChest_Preference, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_ItemChest_Preference_C_ExecuteUbergraph_WBP_ItemChest_Preference::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_ItemChest_Preference.WBP_ItemChest_Preference_C.OnClickedCheck
// 0x000C (0x000C - 0x0000)
struct WBP_ItemChest_Preference_C_OnClickedCheck final
{
public:
	class FName                                   FilterId;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bChecked;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemChest_Preference_C_OnClickedCheck) == 0x000004, "Wrong alignment on WBP_ItemChest_Preference_C_OnClickedCheck");
static_assert(sizeof(WBP_ItemChest_Preference_C_OnClickedCheck) == 0x00000C, "Wrong size on WBP_ItemChest_Preference_C_OnClickedCheck");
static_assert(offsetof(WBP_ItemChest_Preference_C_OnClickedCheck, FilterId) == 0x000000, "Member 'WBP_ItemChest_Preference_C_OnClickedCheck::FilterId' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_OnClickedCheck, bChecked) == 0x000008, "Member 'WBP_ItemChest_Preference_C_OnClickedCheck::bChecked' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_OnClickedCheck, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'WBP_ItemChest_Preference_C_OnClickedCheck::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_ItemChest_Preference.WBP_ItemChest_Preference_C.Setup
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_ItemChest_Preference_C_Setup final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName FilterId, bool bChecked)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A3E[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUIItemChestFilterModel*             CallFunc_SpawnObject_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class FName>                CallFunc_GetFilterIdAndDisplayTextId_ReturnValue;  // 0x0028(0x0050)()
	TArray<class FName>                           CallFunc_Map_Keys_Keys;                            // 0x0078(0x0010)(ReferenceParm)
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_MapObject*     K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object; // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A3F[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Map_Find_Value;                           // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A40[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_IngameMenu_Chest_FilterContent_C*  CallFunc_AddContentItem_ReturnValue;               // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemChest_Preference_C_Setup) == 0x000008, "Wrong alignment on WBP_ItemChest_Preference_C_Setup");
static_assert(sizeof(WBP_ItemChest_Preference_C_Setup) == 0x0000C0, "Wrong size on WBP_ItemChest_Preference_C_Setup");
static_assert(offsetof(WBP_ItemChest_Preference_C_Setup, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_ItemChest_Preference_C_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_Setup, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_ItemChest_Preference_C_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_ItemChest_Preference_C_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'WBP_ItemChest_Preference_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_Setup, CallFunc_SpawnObject_ReturnValue) == 0x000020, "Member 'WBP_ItemChest_Preference_C_Setup::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_Setup, CallFunc_GetFilterIdAndDisplayTextId_ReturnValue) == 0x000028, "Member 'WBP_ItemChest_Preference_C_Setup::CallFunc_GetFilterIdAndDisplayTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_Setup, CallFunc_Map_Keys_Keys) == 0x000078, "Member 'WBP_ItemChest_Preference_C_Setup::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_Setup, CallFunc_GetParam_ReturnValue) == 0x000088, "Member 'WBP_ItemChest_Preference_C_Setup::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_Setup, CallFunc_Array_Get_Item) == 0x000090, "Member 'WBP_ItemChest_Preference_C_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_Setup, K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object) == 0x000098, "Member 'WBP_ItemChest_Preference_C_Setup::K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_Setup, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'WBP_ItemChest_Preference_C_Setup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_Setup, CallFunc_Map_Find_Value) == 0x0000A4, "Member 'WBP_ItemChest_Preference_C_Setup::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_Setup, CallFunc_Map_Find_ReturnValue) == 0x0000AC, "Member 'WBP_ItemChest_Preference_C_Setup::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_Setup, CallFunc_AddContentItem_ReturnValue) == 0x0000B0, "Member 'WBP_ItemChest_Preference_C_Setup::CallFunc_AddContentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_Setup, CallFunc_Array_Length_ReturnValue) == 0x0000B8, "Member 'WBP_ItemChest_Preference_C_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x0000BC, "Member 'WBP_ItemChest_Preference_C_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_ItemChest_Preference.WBP_ItemChest_Preference_C.BP_GetDesiredFocusTarget
// 0x0010 (0x0010 - 0x0000)
struct WBP_ItemChest_Preference_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetDesiredFocusTarget_NewParam;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemChest_Preference_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_ItemChest_Preference_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_ItemChest_Preference_C_BP_GetDesiredFocusTarget) == 0x000010, "Wrong size on WBP_ItemChest_Preference_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_ItemChest_Preference_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_ItemChest_Preference_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_Preference_C_BP_GetDesiredFocusTarget, CallFunc_GetDesiredFocusTarget_NewParam) == 0x000008, "Member 'WBP_ItemChest_Preference_C_BP_GetDesiredFocusTarget::CallFunc_GetDesiredFocusTarget_NewParam' has a wrong offset!");

}
