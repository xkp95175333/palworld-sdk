#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Lamp

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Lamp.BP_Lamp_C.CheckLightEnable
// 0x0070 (0x0070 - 0x0000)
struct BP_Lamp_C_CheckLightEnable final
{
public:
	bool                                          IsNight;                                           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E40[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E41[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCrouching_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E42[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue_1;      // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E43[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APPSkyCreator*                          K2Node_DynamicCast_AsPPSky_Creator;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E44[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTime_ReturnValue;                      // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E45[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Lamp_C_CheckLightEnable) == 0x000008, "Wrong alignment on BP_Lamp_C_CheckLightEnable");
static_assert(sizeof(BP_Lamp_C_CheckLightEnable) == 0x000070, "Wrong size on BP_Lamp_C_CheckLightEnable");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, IsNight) == 0x000000, "Member 'BP_Lamp_C_CheckLightEnable::IsNight' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000008, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000018, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_IsCrouching_ReturnValue) == 0x000028, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_IsCrouching_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_FindOwnerPalCharacter_ReturnValue_1) == 0x000030, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_FindOwnerPalCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000038, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, K2Node_DynamicCast_AsPPSky_Creator) == 0x000048, "Member 'BP_Lamp_C_CheckLightEnable::K2Node_DynamicCast_AsPPSky_Creator' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_Lamp_C_CheckLightEnable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_IsValid_ReturnValue_2) == 0x000051, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_GetTime_ReturnValue) == 0x000054, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_GetTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000058, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000059, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x00005A, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_BooleanOR_ReturnValue) == 0x00005B, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_BooleanAND_ReturnValue) == 0x00005C, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000060, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_CheckLightEnable, CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast) == 0x000068, "Member 'BP_Lamp_C_CheckLightEnable::CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_Lamp.BP_Lamp_C.ExecuteUbergraph_BP_Lamp
// 0x00A0 (0x00A0 - 0x0000)
struct BP_Lamp_C_ExecuteUbergraph_BP_Lamp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalCharacterMovementComponent* Component, bool IsInCrouch)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E46[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	class APPSkyCreator*                          CallFunc_GetActorOfClass_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class APPSkyCreator>           CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0038(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E47[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         K2Node_CustomEvent_component;                      // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsInCrouch;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E48[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Lamp_C_ExecuteUbergraph_BP_Lamp) == 0x000008, "Wrong alignment on BP_Lamp_C_ExecuteUbergraph_BP_Lamp");
static_assert(sizeof(BP_Lamp_C_ExecuteUbergraph_BP_Lamp) == 0x0000A0, "Wrong size on BP_Lamp_C_ExecuteUbergraph_BP_Lamp");
static_assert(offsetof(BP_Lamp_C_ExecuteUbergraph_BP_Lamp, EntryPoint) == 0x000000, "Member 'BP_Lamp_C_ExecuteUbergraph_BP_Lamp::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_ExecuteUbergraph_BP_Lamp, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_Lamp_C_ExecuteUbergraph_BP_Lamp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_ExecuteUbergraph_BP_Lamp, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_Lamp_C_ExecuteUbergraph_BP_Lamp::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_ExecuteUbergraph_BP_Lamp, K2Node_Event_EndPlayReason) == 0x000024, "Member 'BP_Lamp_C_ExecuteUbergraph_BP_Lamp::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_ExecuteUbergraph_BP_Lamp, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'BP_Lamp_C_ExecuteUbergraph_BP_Lamp::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_ExecuteUbergraph_BP_Lamp, CallFunc_GetActorOfClass_ReturnValue) == 0x000030, "Member 'BP_Lamp_C_ExecuteUbergraph_BP_Lamp::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_ExecuteUbergraph_BP_Lamp, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000038, "Member 'BP_Lamp_C_ExecuteUbergraph_BP_Lamp::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_ExecuteUbergraph_BP_Lamp, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'BP_Lamp_C_ExecuteUbergraph_BP_Lamp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_ExecuteUbergraph_BP_Lamp, CallFunc_GetDisplayName_ReturnValue) == 0x000070, "Member 'BP_Lamp_C_ExecuteUbergraph_BP_Lamp::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_ExecuteUbergraph_BP_Lamp, K2Node_CustomEvent_component) == 0x000080, "Member 'BP_Lamp_C_ExecuteUbergraph_BP_Lamp::K2Node_CustomEvent_component' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_ExecuteUbergraph_BP_Lamp, K2Node_CustomEvent_IsInCrouch) == 0x000088, "Member 'BP_Lamp_C_ExecuteUbergraph_BP_Lamp::K2Node_CustomEvent_IsInCrouch' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_ExecuteUbergraph_BP_Lamp, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000090, "Member 'BP_Lamp_C_ExecuteUbergraph_BP_Lamp::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_ExecuteUbergraph_BP_Lamp, CallFunc_GetComponentByClass_ReturnValue) == 0x000098, "Member 'BP_Lamp_C_ExecuteUbergraph_BP_Lamp::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_Lamp.BP_Lamp_C.OnChangeCrouchDelegate_����_0
// 0x0010 (0x0010 - 0x0000)
struct BP_Lamp_C_OnChangeCrouchDelegate______0 final
{
public:
	class UPalCharacterMovementComponent*         Component;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInCrouch;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Lamp_C_OnChangeCrouchDelegate______0) == 0x000008, "Wrong alignment on BP_Lamp_C_OnChangeCrouchDelegate______0");
static_assert(sizeof(BP_Lamp_C_OnChangeCrouchDelegate______0) == 0x000010, "Wrong size on BP_Lamp_C_OnChangeCrouchDelegate______0");
static_assert(offsetof(BP_Lamp_C_OnChangeCrouchDelegate______0, Component) == 0x000000, "Member 'BP_Lamp_C_OnChangeCrouchDelegate______0::Component' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_OnChangeCrouchDelegate______0, IsInCrouch) == 0x000008, "Member 'BP_Lamp_C_OnChangeCrouchDelegate______0::IsInCrouch' has a wrong offset!");

// Function BP_Lamp.BP_Lamp_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_Lamp_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Lamp_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_Lamp_C_ReceiveEndPlay");
static_assert(sizeof(BP_Lamp_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_Lamp_C_ReceiveEndPlay");
static_assert(offsetof(BP_Lamp_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_Lamp_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_Lamp.BP_Lamp_C.SetLightEnable
// 0x0020 (0x0020 - 0x0000)
struct BP_Lamp_C_SetLightEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E49[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCrouching_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Lamp_C_SetLightEnable) == 0x000008, "Wrong alignment on BP_Lamp_C_SetLightEnable");
static_assert(sizeof(BP_Lamp_C_SetLightEnable) == 0x000020, "Wrong size on BP_Lamp_C_SetLightEnable");
static_assert(offsetof(BP_Lamp_C_SetLightEnable, IsEnable) == 0x000000, "Member 'BP_Lamp_C_SetLightEnable::IsEnable' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_SetLightEnable, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_Lamp_C_SetLightEnable::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_SetLightEnable, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_Lamp_C_SetLightEnable::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_SetLightEnable, CallFunc_IsCrouching_ReturnValue) == 0x000018, "Member 'BP_Lamp_C_SetLightEnable::CallFunc_IsCrouching_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_SetLightEnable, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'BP_Lamp_C_SetLightEnable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_SetLightEnable, CallFunc_BooleanAND_ReturnValue) == 0x00001A, "Member 'BP_Lamp_C_SetLightEnable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lamp_C_SetLightEnable, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x00001B, "Member 'BP_Lamp_C_SetLightEnable::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

}
