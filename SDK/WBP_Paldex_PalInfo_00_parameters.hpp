#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Paldex_PalInfo_00

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.ExecuteUbergraph_WBP_Paldex_PalInfo_00
// 0x0018 (0x0018 - 0x0000)
struct WBP_Paldex_PalInfo_00_C_ExecuteUbergraph_WBP_Paldex_PalInfo_00 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46E1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_Paldex_DropItem_C*>         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_Paldex_PalInfo_00_C_ExecuteUbergraph_WBP_Paldex_PalInfo_00) == 0x000008, "Wrong alignment on WBP_Paldex_PalInfo_00_C_ExecuteUbergraph_WBP_Paldex_PalInfo_00");
static_assert(sizeof(WBP_Paldex_PalInfo_00_C_ExecuteUbergraph_WBP_Paldex_PalInfo_00) == 0x000018, "Wrong size on WBP_Paldex_PalInfo_00_C_ExecuteUbergraph_WBP_Paldex_PalInfo_00");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_ExecuteUbergraph_WBP_Paldex_PalInfo_00, EntryPoint) == 0x000000, "Member 'WBP_Paldex_PalInfo_00_C_ExecuteUbergraph_WBP_Paldex_PalInfo_00::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_ExecuteUbergraph_WBP_Paldex_PalInfo_00, K2Node_MakeArray_Array) == 0x000008, "Member 'WBP_Paldex_PalInfo_00_C_ExecuteUbergraph_WBP_Paldex_PalInfo_00::K2Node_MakeArray_Array' has a wrong offset!");

// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.HideDropItems
// 0x0020 (0x0020 - 0x0000)
struct WBP_Paldex_PalInfo_00_C_HideDropItems final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46E2[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Paldex_DropItem_C*                 CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Paldex_PalInfo_00_C_HideDropItems) == 0x000008, "Wrong alignment on WBP_Paldex_PalInfo_00_C_HideDropItems");
static_assert(sizeof(WBP_Paldex_PalInfo_00_C_HideDropItems) == 0x000020, "Wrong size on WBP_Paldex_PalInfo_00_C_HideDropItems");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_HideDropItems, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_Paldex_PalInfo_00_C_HideDropItems::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_HideDropItems, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_Paldex_PalInfo_00_C_HideDropItems::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_HideDropItems, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_Paldex_PalInfo_00_C_HideDropItems::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_HideDropItems, CallFunc_Array_Get_Item) == 0x000010, "Member 'WBP_Paldex_PalInfo_00_C_HideDropItems::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_HideDropItems, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'WBP_Paldex_PalInfo_00_C_HideDropItems::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_HideDropItems, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_Paldex_PalInfo_00_C_HideDropItems::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.Setup
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_Paldex_PalInfo_00_C_Setup final
{
public:
	struct FPalUIPaldex_DisplayInfo               DisplayInfo;                                       // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue_1; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalTribeID                                   CallFunc_GetTribe_ReturnValue;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46E3[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPalWorkSuitability, int32>              CallFunc_GetWorkSuitabilityRank_WorkSuitabilities; // 0x0050(0x0050)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46E4[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPlayerRecordData*                   CallFunc_GetLocalRecordData_ReturnValue;           // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRecordData_TribeIdCount_ReturnValue;   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Paldex_PalInfo_00_C_Setup) == 0x000008, "Wrong alignment on WBP_Paldex_PalInfo_00_C_Setup");
static_assert(sizeof(WBP_Paldex_PalInfo_00_C_Setup) == 0x0000B8, "Wrong size on WBP_Paldex_PalInfo_00_C_Setup");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup, DisplayInfo) == 0x000000, "Member 'WBP_Paldex_PalInfo_00_C_Setup::DisplayInfo' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000038, "Member 'WBP_Paldex_PalInfo_00_C_Setup::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup, CallFunc_GetDatabaseCharacterParameter_ReturnValue_1) == 0x000040, "Member 'WBP_Paldex_PalInfo_00_C_Setup::CallFunc_GetDatabaseCharacterParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup, CallFunc_GetTribe_ReturnValue) == 0x000048, "Member 'WBP_Paldex_PalInfo_00_C_Setup::CallFunc_GetTribe_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup, CallFunc_GetWorkSuitabilityRank_WorkSuitabilities) == 0x000050, "Member 'WBP_Paldex_PalInfo_00_C_Setup::CallFunc_GetWorkSuitabilityRank_WorkSuitabilities' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup, K2Node_SwitchEnum_CmpSuccess) == 0x0000A0, "Member 'WBP_Paldex_PalInfo_00_C_Setup::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup, CallFunc_GetLocalRecordData_ReturnValue) == 0x0000A8, "Member 'WBP_Paldex_PalInfo_00_C_Setup::CallFunc_GetLocalRecordData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup, CallFunc_GetRecordData_TribeIdCount_ReturnValue) == 0x0000B0, "Member 'WBP_Paldex_PalInfo_00_C_Setup::CallFunc_GetRecordData_TribeIdCount_ReturnValue' has a wrong offset!");

// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.Setup_Captured
// 0x01F8 (0x01F8 - 0x0000)
struct WBP_Paldex_PalInfo_00_C_Setup_Captured final
{
public:
	struct FPalUIPaldex_DisplayInfo               DisplayInfo;                                       // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_GetPalFirstActivatedInfo_outName;         // 0x0038(0x0018)()
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46E5[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerRecordData*                   CallFunc_GetLocalRecordData_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalTribeID                                   CallFunc_GetTribe_ReturnValue;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46E6[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRecordData_TribeIdCount_ReturnValue;   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0070(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46E7[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue_1; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46E8[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetFoodAmount_ReturnValue;                // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46E9[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDropItemDatabaseRow                CallFunc_GetDropItemData_outData;                  // 0x00A8(0x00E0)()
	bool                                          CallFunc_GetDropItemData_ReturnValue;              // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46EA[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0190(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46EB[0x3];                                     // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x01AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46EC[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Paldex_DropItem_C*                 CallFunc_Array_Get_Item_1;                         // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46ED[0x6];                                     // 0x01C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue_2; // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46EE[0x3];                                     // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetPartnerSkillMsgID_OutMsgID;            // 0x01D4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46EF[0x4];                                     // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x01E0(0x0018)()
};
static_assert(alignof(WBP_Paldex_PalInfo_00_C_Setup_Captured) == 0x000008, "Wrong alignment on WBP_Paldex_PalInfo_00_C_Setup_Captured");
static_assert(sizeof(WBP_Paldex_PalInfo_00_C_Setup_Captured) == 0x0001F8, "Wrong size on WBP_Paldex_PalInfo_00_C_Setup_Captured");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, DisplayInfo) == 0x000000, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::DisplayInfo' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_GetPalFirstActivatedInfo_outName) == 0x000038, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_GetPalFirstActivatedInfo_outName' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_Array_LastIndex_ReturnValue) == 0x000050, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000058, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_GetLocalRecordData_ReturnValue) == 0x000060, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_GetLocalRecordData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_GetTribe_ReturnValue) == 0x000068, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_GetTribe_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_GetRecordData_TribeIdCount_ReturnValue) == 0x00006C, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_GetRecordData_TribeIdCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_Conv_IntToText_ReturnValue) == 0x000070, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, Temp_int_Loop_Counter_Variable) == 0x000088, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_GetDatabaseCharacterParameter_ReturnValue_1) == 0x000090, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_GetDatabaseCharacterParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_Add_IntInt_ReturnValue) == 0x000098, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_IsValid_ReturnValue) == 0x00009C, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_GetFoodAmount_ReturnValue) == 0x0000A0, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_GetFoodAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_GetDropItemData_outData) == 0x0000A8, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_GetDropItemData_outData' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_GetDropItemData_ReturnValue) == 0x000188, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_GetDropItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, K2Node_MakeArray_Array) == 0x000190, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_Array_Length_ReturnValue) == 0x0001A0, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_Less_IntInt_ReturnValue) == 0x0001A4, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, Temp_int_Array_Index_Variable) == 0x0001A8, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_Array_Get_Item) == 0x0001AC, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_Array_Get_Item_1) == 0x0001B8, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_NotEqual_NameName_ReturnValue) == 0x0001C0, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_Greater_IntInt_ReturnValue) == 0x0001C1, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_GetDatabaseCharacterParameter_ReturnValue_2) == 0x0001C8, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_GetDatabaseCharacterParameter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_IsValid_ReturnValue_1) == 0x0001D0, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_GetPartnerSkillMsgID_OutMsgID) == 0x0001D4, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_GetPartnerSkillMsgID_OutMsgID' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Captured, CallFunc_GetLocalizedText_ReturnValue) == 0x0001E0, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Captured::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");

// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.Setup_Encounted
// 0x0038 (0x0038 - 0x0000)
struct WBP_Paldex_PalInfo_00_C_Setup_Encounted final
{
public:
	struct FPalUIPaldex_DisplayInfo               DisplayInfo;                                       // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Paldex_PalInfo_00_C_Setup_Encounted) == 0x000008, "Wrong alignment on WBP_Paldex_PalInfo_00_C_Setup_Encounted");
static_assert(sizeof(WBP_Paldex_PalInfo_00_C_Setup_Encounted) == 0x000038, "Wrong size on WBP_Paldex_PalInfo_00_C_Setup_Encounted");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_Encounted, DisplayInfo) == 0x000000, "Member 'WBP_Paldex_PalInfo_00_C_Setup_Encounted::DisplayInfo' has a wrong offset!");

// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.Setup_NotEncounted
// 0x0038 (0x0038 - 0x0000)
struct WBP_Paldex_PalInfo_00_C_Setup_NotEncounted final
{
public:
	struct FPalUIPaldex_DisplayInfo               DisplayInfo;                                       // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Paldex_PalInfo_00_C_Setup_NotEncounted) == 0x000008, "Wrong alignment on WBP_Paldex_PalInfo_00_C_Setup_NotEncounted");
static_assert(sizeof(WBP_Paldex_PalInfo_00_C_Setup_NotEncounted) == 0x000038, "Wrong size on WBP_Paldex_PalInfo_00_C_Setup_NotEncounted");
static_assert(offsetof(WBP_Paldex_PalInfo_00_C_Setup_NotEncounted, DisplayInfo) == 0x000000, "Member 'WBP_Paldex_PalInfo_00_C_Setup_NotEncounted::DisplayInfo' has a wrong offset!");

}
