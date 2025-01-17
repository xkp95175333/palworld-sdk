#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Paldex_Task

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_Paldex_Task.WBP_Paldex_Task_C.ExecuteUbergraph_WBP_Paldex_Task
// 0x0030 (0x0030 - 0x0000)
struct WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EC7[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EC8[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Paldex_TaskIcon_C*                 CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_Paldex_TaskIcon_C*>         K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task) == 0x000008, "Wrong alignment on WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task");
static_assert(sizeof(WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task) == 0x000030, "Wrong size on WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task");
static_assert(offsetof(WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task, EntryPoint) == 0x000000, "Member 'WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task, CallFunc_Less_IntInt_ReturnValue) == 0x000004, "Member 'WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task, CallFunc_Array_Get_Item) == 0x000010, "Member 'WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task, K2Node_MakeArray_Array) == 0x000020, "Member 'WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task::K2Node_MakeArray_Array' has a wrong offset!");

// Function WBP_Paldex_Task.WBP_Paldex_Task_C.GetBonusExpMsg
// 0x0090 (0x0090 - 0x0000)
struct WBP_Paldex_Task_C_GetBonusExpMsg final
{
public:
	int32                                         CaptureCount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EC9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0008(0x0018)(Parm, OutParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ECA[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0028(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ECB[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x0048(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_2;        // 0x0060(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_3;        // 0x0078(0x0018)()
};
static_assert(alignof(WBP_Paldex_Task_C_GetBonusExpMsg) == 0x000008, "Wrong alignment on WBP_Paldex_Task_C_GetBonusExpMsg");
static_assert(sizeof(WBP_Paldex_Task_C_GetBonusExpMsg) == 0x000090, "Wrong size on WBP_Paldex_Task_C_GetBonusExpMsg");
static_assert(offsetof(WBP_Paldex_Task_C_GetBonusExpMsg, CaptureCount) == 0x000000, "Member 'WBP_Paldex_Task_C_GetBonusExpMsg::CaptureCount' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_GetBonusExpMsg, Text) == 0x000008, "Member 'WBP_Paldex_Task_C_GetBonusExpMsg::Text' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_GetBonusExpMsg, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000020, "Member 'WBP_Paldex_Task_C_GetBonusExpMsg::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_GetBonusExpMsg, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000028, "Member 'WBP_Paldex_Task_C_GetBonusExpMsg::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_GetBonusExpMsg, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000040, "Member 'WBP_Paldex_Task_C_GetBonusExpMsg::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_GetBonusExpMsg, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000041, "Member 'WBP_Paldex_Task_C_GetBonusExpMsg::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_GetBonusExpMsg, CallFunc_GetLocalizedTextFromHandle_Text_1) == 0x000048, "Member 'WBP_Paldex_Task_C_GetBonusExpMsg::CallFunc_GetLocalizedTextFromHandle_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_GetBonusExpMsg, CallFunc_GetLocalizedTextFromHandle_Text_2) == 0x000060, "Member 'WBP_Paldex_Task_C_GetBonusExpMsg::CallFunc_GetLocalizedTextFromHandle_Text_2' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_GetBonusExpMsg, CallFunc_GetLocalizedTextFromHandle_Text_3) == 0x000078, "Member 'WBP_Paldex_Task_C_GetBonusExpMsg::CallFunc_GetLocalizedTextFromHandle_Text_3' has a wrong offset!");

// Function WBP_Paldex_Task.WBP_Paldex_Task_C.PreSetup
// 0x0178 (0x0178 - 0x0000)
struct WBP_Paldex_Task_C_PreSetup final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CaptureCount;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ECC[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetBonusExpMsg_Text;                      // 0x0018(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ECD[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0098(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ECE[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ECF[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ED0[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Paldex_TaskIcon_C*                 CallFunc_Array_Get_Item;                           // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ED1[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalExpDatabase*                        CallFunc_GetExpDatabase_ReturnValue;               // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalcPaldexBonusExp_ReturnValue;           // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ED2[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0100(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0150(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0160(0x0018)()
};
static_assert(alignof(WBP_Paldex_Task_C_PreSetup) == 0x000008, "Wrong alignment on WBP_Paldex_Task_C_PreSetup");
static_assert(sizeof(WBP_Paldex_Task_C_PreSetup) == 0x000178, "Wrong size on WBP_Paldex_Task_C_PreSetup");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CharacterID) == 0x000000, "Member 'WBP_Paldex_Task_C_PreSetup::CharacterID' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CaptureCount) == 0x000008, "Member 'WBP_Paldex_Task_C_PreSetup::CaptureCount' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000010, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_GetBonusExpMsg_Text) == 0x000018, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_GetBonusExpMsg_Text' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'WBP_Paldex_Task_C_PreSetup::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, K2Node_MakeArray_Array) == 0x000080, "Member 'WBP_Paldex_Task_C_PreSetup::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, Temp_int_Array_Index_Variable) == 0x000090, "Member 'WBP_Paldex_Task_C_PreSetup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Format_ReturnValue) == 0x000098, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, Temp_int_Loop_Counter_Variable) == 0x0000B0, "Member 'WBP_Paldex_Task_C_PreSetup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_GetLocalPlayerState_ReturnValue) == 0x0000B8, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Add_IntInt_ReturnValue) == 0x0000C0, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_PlayAnimation_ReturnValue) == 0x0000C8, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000D0, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Less_IntInt_ReturnValue) == 0x0000D4, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000E4, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_GetExpDatabase_ReturnValue) == 0x0000E8, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_GetExpDatabase_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_CalcPaldexBonusExp_ReturnValue) == 0x0000F0, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_CalcPaldexBonusExp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x0000F8, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, K2Node_MakeStruct_FormatArgumentData_1) == 0x000100, "Member 'WBP_Paldex_Task_C_PreSetup::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, K2Node_MakeArray_Array_1) == 0x000150, "Member 'WBP_Paldex_Task_C_PreSetup::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Format_ReturnValue_1) == 0x000160, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Format_ReturnValue_1' has a wrong offset!");

// Function WBP_Paldex_Task.WBP_Paldex_Task_C.SetupForMenu
// 0x00F0 (0x00F0 - 0x0000)
struct WBP_Paldex_Task_C_SetupForMenu final
{
public:
	int32                                         CaptureCount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0050)(HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ED3[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ED4[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0080(0x0018)()
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ED5[0x2];                                     // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ED6[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ED7[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ED8[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Paldex_TaskIcon_C*                 CallFunc_Array_Get_Item;                           // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Paldex_TaskIcon_C*                 CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Paldex_Task_C_SetupForMenu) == 0x000008, "Wrong alignment on WBP_Paldex_Task_C_SetupForMenu");
static_assert(sizeof(WBP_Paldex_Task_C_SetupForMenu) == 0x0000F0, "Wrong size on WBP_Paldex_Task_C_SetupForMenu");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CaptureCount) == 0x000000, "Member 'WBP_Paldex_Task_C_SetupForMenu::CaptureCount' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_Paldex_Task_C_SetupForMenu::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000008, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'WBP_Paldex_Task_C_SetupForMenu::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Subtract_IntInt_ReturnValue) == 0x000060, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, K2Node_MakeArray_Array) == 0x000068, "Member 'WBP_Paldex_Task_C_SetupForMenu::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Min_ReturnValue) == 0x000078, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Format_ReturnValue) == 0x000080, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Max_ReturnValue) == 0x000098, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Greater_IntInt_ReturnValue) == 0x00009C, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00009D, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, Temp_int_Loop_Counter_Variable) == 0x0000A0, "Member 'WBP_Paldex_Task_C_SetupForMenu::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Add_IntInt_ReturnValue) == 0x0000A4, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, Temp_int_Array_Index_Variable_1) == 0x0000A8, "Member 'WBP_Paldex_Task_C_SetupForMenu::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000AC, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_PlayAnimation_ReturnValue) == 0x0000B0, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, Temp_int_Loop_Counter_Variable_1) == 0x0000B8, "Member 'WBP_Paldex_Task_C_SetupForMenu::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000C0, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000C8, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Array_Length_ReturnValue_1) == 0x0000E4, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Less_IntInt_ReturnValue) == 0x0000E8, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000E9, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

}

