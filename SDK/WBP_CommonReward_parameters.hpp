#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CommonReward

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_CommonReward.WBP_CommonReward_C.ChangeColor
// 0x0001 (0x0001 - 0x0000)
struct WBP_CommonReward_C_ChangeColor final
{
public:
	bool                                          IsPurple;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommonReward_C_ChangeColor) == 0x000001, "Wrong alignment on WBP_CommonReward_C_ChangeColor");
static_assert(sizeof(WBP_CommonReward_C_ChangeColor) == 0x000001, "Wrong size on WBP_CommonReward_C_ChangeColor");
static_assert(offsetof(WBP_CommonReward_C_ChangeColor, IsPurple) == 0x000000, "Member 'WBP_CommonReward_C_ChangeColor::IsPurple' has a wrong offset!");

// Function WBP_CommonReward.WBP_CommonReward_C.ExecuteUbergraph_WBP_CommonReward
// 0x01F8 (0x01F8 - 0x0000)
struct WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB2[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB3[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_1;  // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUICommonRewardDisplayData          K2Node_CustomEvent_Info_1;                         // 0x0050(0x0058)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB4[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalUICommonRewardDisplayData          CallFunc_Array_Get_Item;                           // 0x00B0(0x0058)()
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB5[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalUICommonRewardDisplayData          K2Node_CustomEvent_Info;                           // 0x0110(0x0058)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB6[0x5];                                     // 0x016B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Map_Find_Value;                           // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB7[0x3];                                     // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    CallFunc_Map_Find_Value_1;                         // 0x0180(0x0010)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB8[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x01A0(0x0018)()
	bool                                          K2Node_CustomEvent_IsPurple;                       // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB9[0x3];                                     // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x01BC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EBA[0x4];                                     // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Select_Default;                             // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       K2Node_Select_Default_1;                           // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RetriggerableDelay_Duration_ImplicitCast; // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward) == 0x000008, "Wrong alignment on WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward");
static_assert(sizeof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward) == 0x0001F8, "Wrong size on WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, EntryPoint) == 0x000000, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, Temp_bool_Variable) == 0x000014, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, Temp_bool_Variable_1) == 0x000015, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000018, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000020, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_CreatePlayAnimationProxyObject_Result_1) == 0x000040, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_CreatePlayAnimationProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1) == 0x000048, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, K2Node_CustomEvent_Info_1) == 0x000050, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::K2Node_CustomEvent_Info_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_IsValid_ReturnValue_1) == 0x0000A8, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_Array_Add_ReturnValue) == 0x0000AC, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_Array_IsEmpty_ReturnValue) == 0x000108, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, K2Node_CustomEvent_Info) == 0x000110, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::K2Node_CustomEvent_Info' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000168, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000169, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_IsValid_ReturnValue_2) == 0x00016A, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_GetGameSetting_ReturnValue) == 0x000170, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_Map_Find_Value) == 0x000178, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_Map_Find_ReturnValue) == 0x00017C, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_Map_Find_Value_1) == 0x000180, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_Map_Find_ReturnValue_1) == 0x000190, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_SelectFloat_ReturnValue) == 0x000198, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_GetLocalizedTextFromHandle_Text) == 0x0001A0, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, K2Node_CustomEvent_IsPurple) == 0x0001B8, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::K2Node_CustomEvent_IsPurple' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_SelectColor_ReturnValue) == 0x0001BC, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, K2Node_Select_Default) == 0x0001D0, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_PlayAnimation_ReturnValue) == 0x0001D8, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, K2Node_Select_Default_1) == 0x0001E0, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_SelectFloat_A_ImplicitCast) == 0x0001E8, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_SelectFloat_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward, CallFunc_RetriggerableDelay_Duration_ImplicitCast) == 0x0001F0, "Member 'WBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward::CallFunc_RetriggerableDelay_Duration_ImplicitCast' has a wrong offset!");

// Function WBP_CommonReward.WBP_CommonReward_C.QueueRewardInfo
// 0x0058 (0x0058 - 0x0000)
struct WBP_CommonReward_C_QueueRewardInfo final
{
public:
	struct FPalUICommonRewardDisplayData          Info;                                              // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CommonReward_C_QueueRewardInfo) == 0x000008, "Wrong alignment on WBP_CommonReward_C_QueueRewardInfo");
static_assert(sizeof(WBP_CommonReward_C_QueueRewardInfo) == 0x000058, "Wrong size on WBP_CommonReward_C_QueueRewardInfo");
static_assert(offsetof(WBP_CommonReward_C_QueueRewardInfo, Info) == 0x000000, "Member 'WBP_CommonReward_C_QueueRewardInfo::Info' has a wrong offset!");

// Function WBP_CommonReward.WBP_CommonReward_C.SetInfo
// 0x0058 (0x0058 - 0x0000)
struct WBP_CommonReward_C_SetInfo final
{
public:
	struct FPalUICommonRewardDisplayData          Info;                                              // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CommonReward_C_SetInfo) == 0x000008, "Wrong alignment on WBP_CommonReward_C_SetInfo");
static_assert(sizeof(WBP_CommonReward_C_SetInfo) == 0x000058, "Wrong size on WBP_CommonReward_C_SetInfo");
static_assert(offsetof(WBP_CommonReward_C_SetInfo, Info) == 0x000000, "Member 'WBP_CommonReward_C_SetInfo::Info' has a wrong offset!");

}
