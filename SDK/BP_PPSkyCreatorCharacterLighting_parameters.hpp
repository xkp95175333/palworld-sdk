#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PPSkyCreatorCharacterLighting

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PPSkyCreatorCharacterLighting.BP_PPSkyCreatorCharacterLighting_C.ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting
// 0x0090 (0x0090 - 0x0000)
struct BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A86[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A87[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APPSkyCreator*                          K2Node_DynamicCast_AsPPSky_Creator;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A88[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast; // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting) == 0x000008, "Wrong alignment on BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting");
static_assert(sizeof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting) == 0x000090, "Wrong size on BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting, EntryPoint) == 0x000000, "Member 'BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting, Temp_object_Variable) == 0x000018, "Member 'BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting, K2Node_DynamicCast_AsPPSky_Creator) == 0x000020, "Member 'BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting::K2Node_DynamicCast_AsPPSky_Creator' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting, K2Node_Event_DeltaSeconds) == 0x00002C, "Member 'BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000040, "Member 'BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting, CallFunc_BreakVector_X) == 0x000058, "Member 'BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting, CallFunc_BreakVector_Y) == 0x000060, "Member 'BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting, CallFunc_BreakVector_Z) == 0x000068, "Member 'BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting, CallFunc_FClamp_ReturnValue) == 0x000070, "Member 'BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000078, "Member 'BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting, CallFunc_Lerp_ReturnValue) == 0x000080, "Member 'BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast) == 0x000088, "Member 'BP_PPSkyCreatorCharacterLighting_C_ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast' has a wrong offset!");

// Function BP_PPSkyCreatorCharacterLighting.BP_PPSkyCreatorCharacterLighting_C.OnLoaded_406982714B2B2A9091DBB5A252BA6489
// 0x0008 (0x0008 - 0x0000)
struct BP_PPSkyCreatorCharacterLighting_C_OnLoaded_406982714B2B2A9091DBB5A252BA6489 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PPSkyCreatorCharacterLighting_C_OnLoaded_406982714B2B2A9091DBB5A252BA6489) == 0x000008, "Wrong alignment on BP_PPSkyCreatorCharacterLighting_C_OnLoaded_406982714B2B2A9091DBB5A252BA6489");
static_assert(sizeof(BP_PPSkyCreatorCharacterLighting_C_OnLoaded_406982714B2B2A9091DBB5A252BA6489) == 0x000008, "Wrong size on BP_PPSkyCreatorCharacterLighting_C_OnLoaded_406982714B2B2A9091DBB5A252BA6489");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_OnLoaded_406982714B2B2A9091DBB5A252BA6489, Loaded) == 0x000000, "Member 'BP_PPSkyCreatorCharacterLighting_C_OnLoaded_406982714B2B2A9091DBB5A252BA6489::Loaded' has a wrong offset!");

// Function BP_PPSkyCreatorCharacterLighting.BP_PPSkyCreatorCharacterLighting_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PPSkyCreatorCharacterLighting_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PPSkyCreatorCharacterLighting_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PPSkyCreatorCharacterLighting_C_ReceiveTick");
static_assert(sizeof(BP_PPSkyCreatorCharacterLighting_C_ReceiveTick) == 0x000004, "Wrong size on BP_PPSkyCreatorCharacterLighting_C_ReceiveTick");
static_assert(offsetof(BP_PPSkyCreatorCharacterLighting_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PPSkyCreatorCharacterLighting_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
