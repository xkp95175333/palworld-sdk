#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Option_HelpGuide

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_Option_HelpGuide.WBP_Option_HelpGuide_C.ChangeNoteContent
// 0x0050 (0x0050 - 0x0000)
struct WBP_Option_HelpGuide_C_ChangeNoteContent final
{
public:
	class FName                                   NoteTitle;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0008(0x0010)(NoDestructor)
	const class UPalNoteDataAsset*                CallFunc_GetHelpGuideDataAsset_ReturnValue;        // 0x0018(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0020(0x0018)()
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EF8[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalNoteData*                           CallFunc_Map_Find_Value;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Option_HelpGuide_C_ChangeNoteContent) == 0x000008, "Wrong alignment on WBP_Option_HelpGuide_C_ChangeNoteContent");
static_assert(sizeof(WBP_Option_HelpGuide_C_ChangeNoteContent) == 0x000050, "Wrong size on WBP_Option_HelpGuide_C_ChangeNoteContent");
static_assert(offsetof(WBP_Option_HelpGuide_C_ChangeNoteContent, NoteTitle) == 0x000000, "Member 'WBP_Option_HelpGuide_C_ChangeNoteContent::NoteTitle' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_ChangeNoteContent, K2Node_MakeStruct_DataTableRowHandle) == 0x000008, "Member 'WBP_Option_HelpGuide_C_ChangeNoteContent::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_ChangeNoteContent, CallFunc_GetHelpGuideDataAsset_ReturnValue) == 0x000018, "Member 'WBP_Option_HelpGuide_C_ChangeNoteContent::CallFunc_GetHelpGuideDataAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_ChangeNoteContent, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000020, "Member 'WBP_Option_HelpGuide_C_ChangeNoteContent::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_ChangeNoteContent, CallFunc_NotEqual_NameName_ReturnValue) == 0x000038, "Member 'WBP_Option_HelpGuide_C_ChangeNoteContent::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_ChangeNoteContent, CallFunc_Map_Find_Value) == 0x000040, "Member 'WBP_Option_HelpGuide_C_ChangeNoteContent::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_ChangeNoteContent, CallFunc_Map_Find_ReturnValue) == 0x000048, "Member 'WBP_Option_HelpGuide_C_ChangeNoteContent::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function WBP_Option_HelpGuide.WBP_Option_HelpGuide_C.ExecuteUbergraph_WBP_Option_HelpGuide
// 0x0060 (0x0060 - 0x0000)
struct WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EF9[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EFA[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EFB[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue;        // 0x005C(0x0004)(NoDestructor)
};
static_assert(alignof(WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide) == 0x000008, "Wrong alignment on WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide");
static_assert(sizeof(WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide) == 0x000060, "Wrong size on WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide");
static_assert(offsetof(WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide, EntryPoint) == 0x000000, "Member 'WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000040, "Member 'WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000048, "Member 'WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000050, "Member 'WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide, CallFunc_RegisterActionBinding_ReturnValue) == 0x00005C, "Member 'WBP_Option_HelpGuide_C_ExecuteUbergraph_WBP_Option_HelpGuide::CallFunc_RegisterActionBinding_ReturnValue' has a wrong offset!");

// Function WBP_Option_HelpGuide.WBP_Option_HelpGuide_C.OnAnalogValueChanged
// 0x0268 (0x0268 - 0x0000)
struct WBP_Option_HelpGuide_C_OnAnalogValueChanged final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FAnalogInputEvent                      InAnalogInputEvent;                                // 0x0040(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0088(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKeyEvent                              CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue; // 0x0140(0x0040)()
	float                                         CallFunc_GetAnalogValue_ReturnValue;               // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EFC[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0188(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EFD[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x01A8(0x00B8)()
	double                                        CallFunc_ChangeOffset_NewOffset_ImplicitCast;      // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Option_HelpGuide_C_OnAnalogValueChanged) == 0x000008, "Wrong alignment on WBP_Option_HelpGuide_C_OnAnalogValueChanged");
static_assert(sizeof(WBP_Option_HelpGuide_C_OnAnalogValueChanged) == 0x000268, "Wrong size on WBP_Option_HelpGuide_C_OnAnalogValueChanged");
static_assert(offsetof(WBP_Option_HelpGuide_C_OnAnalogValueChanged, MyGeometry) == 0x000000, "Member 'WBP_Option_HelpGuide_C_OnAnalogValueChanged::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_OnAnalogValueChanged, InAnalogInputEvent) == 0x000040, "Member 'WBP_Option_HelpGuide_C_OnAnalogValueChanged::InAnalogInputEvent' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_OnAnalogValueChanged, ReturnValue) == 0x000088, "Member 'WBP_Option_HelpGuide_C_OnAnalogValueChanged::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_OnAnalogValueChanged, CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue) == 0x000140, "Member 'WBP_Option_HelpGuide_C_OnAnalogValueChanged::CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_OnAnalogValueChanged, CallFunc_GetAnalogValue_ReturnValue) == 0x000180, "Member 'WBP_Option_HelpGuide_C_OnAnalogValueChanged::CallFunc_GetAnalogValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_OnAnalogValueChanged, CallFunc_GetKey_ReturnValue) == 0x000188, "Member 'WBP_Option_HelpGuide_C_OnAnalogValueChanged::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_OnAnalogValueChanged, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0001A0, "Member 'WBP_Option_HelpGuide_C_OnAnalogValueChanged::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_OnAnalogValueChanged, CallFunc_Handled_ReturnValue) == 0x0001A8, "Member 'WBP_Option_HelpGuide_C_OnAnalogValueChanged::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_OnAnalogValueChanged, CallFunc_ChangeOffset_NewOffset_ImplicitCast) == 0x000260, "Member 'WBP_Option_HelpGuide_C_OnAnalogValueChanged::CallFunc_ChangeOffset_NewOffset_ImplicitCast' has a wrong offset!");

// Function WBP_Option_HelpGuide.WBP_Option_HelpGuide_C.Setup
// 0x0188 (0x0188 - 0x0000)
struct WBP_Option_HelpGuide_C_Setup final
{
public:
	int32                                         NoteUnlockedCount;                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EFE[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UPalNoteDataAsset*                CallFunc_GetHelpGuideDataAsset_ReturnValue;        // 0x0018(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Option_NoteListContent_C*          CallFunc_SpawnObject_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Length_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EFF[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0050)(HasGetValueTypeHash)
	class UScrollBoxSlot*                         CallFunc_SlotAsScrollBoxSlot_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_Map_Keys_Keys;                            // 0x0090(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x00A8(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F00[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x00C0(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F01[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00E8(0x0050)(HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F02[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0140(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0150(0x0018)()
	TDelegate<void(class FName Title)>            K2Node_CreateDelegate_OutputDelegate;              // 0x0168(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0178(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Option_HelpGuide_C_Setup) == 0x000008, "Wrong alignment on WBP_Option_HelpGuide_C_Setup");
static_assert(sizeof(WBP_Option_HelpGuide_C_Setup) == 0x000188, "Wrong size on WBP_Option_HelpGuide_C_Setup");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, NoteUnlockedCount) == 0x000000, "Member 'WBP_Option_HelpGuide_C_Setup::NoteUnlockedCount' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_Option_HelpGuide_C_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_Option_HelpGuide_C_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'WBP_Option_HelpGuide_C_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, Temp_bool_Has_Been_Initd_Variable) == 0x000010, "Member 'WBP_Option_HelpGuide_C_Setup::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, CallFunc_GetHelpGuideDataAsset_ReturnValue) == 0x000018, "Member 'WBP_Option_HelpGuide_C_Setup::CallFunc_GetHelpGuideDataAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, CallFunc_SpawnObject_ReturnValue) == 0x000020, "Member 'WBP_Option_HelpGuide_C_Setup::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, CallFunc_Map_Length_ReturnValue) == 0x000028, "Member 'WBP_Option_HelpGuide_C_Setup::CallFunc_Map_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000030, "Member 'WBP_Option_HelpGuide_C_Setup::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'WBP_Option_HelpGuide_C_Setup::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, CallFunc_SlotAsScrollBoxSlot_ReturnValue) == 0x000088, "Member 'WBP_Option_HelpGuide_C_Setup::CallFunc_SlotAsScrollBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, CallFunc_Map_Keys_Keys) == 0x000090, "Member 'WBP_Option_HelpGuide_C_Setup::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'WBP_Option_HelpGuide_C_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, K2Node_MakeStruct_DataTableRowHandle) == 0x0000A8, "Member 'WBP_Option_HelpGuide_C_Setup::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, CallFunc_Array_Length_ReturnValue) == 0x0000B8, "Member 'WBP_Option_HelpGuide_C_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, CallFunc_GetLocalizedTextFromHandle_Text) == 0x0000C0, "Member 'WBP_Option_HelpGuide_C_Setup::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x0000D8, "Member 'WBP_Option_HelpGuide_C_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, Temp_bool_IsClosed_Variable) == 0x0000D9, "Member 'WBP_Option_HelpGuide_C_Setup::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x0000E0, "Member 'WBP_Option_HelpGuide_C_Setup::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000E8, "Member 'WBP_Option_HelpGuide_C_Setup::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, CallFunc_Add_IntInt_ReturnValue_1) == 0x000138, "Member 'WBP_Option_HelpGuide_C_Setup::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, K2Node_MakeArray_Array) == 0x000140, "Member 'WBP_Option_HelpGuide_C_Setup::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, CallFunc_Format_ReturnValue) == 0x000150, "Member 'WBP_Option_HelpGuide_C_Setup::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000168, "Member 'WBP_Option_HelpGuide_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_Setup, K2Node_MakeStruct_Margin) == 0x000178, "Member 'WBP_Option_HelpGuide_C_Setup::K2Node_MakeStruct_Margin' has a wrong offset!");

// Function WBP_Option_HelpGuide.WBP_Option_HelpGuide_C.BP_GetDesiredFocusTarget
// 0x0010 (0x0010 - 0x0000)
struct WBP_Option_HelpGuide_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Option_HelpGuide_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_Option_HelpGuide_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_Option_HelpGuide_C_BP_GetDesiredFocusTarget) == 0x000010, "Wrong size on WBP_Option_HelpGuide_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_Option_HelpGuide_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_Option_HelpGuide_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_HelpGuide_C_BP_GetDesiredFocusTarget, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_Option_HelpGuide_C_BP_GetDesiredFocusTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
