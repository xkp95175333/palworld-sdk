#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Sleep

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_Sleep.BP_AIAction_Sleep_C.ExecuteUbergraph_BP_AIAction_Sleep
// 0x00E0 (0x00E0 - 0x0000)
struct BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDamageResult& DamageResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4573[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionBase*                         CallFunc_PlayActionByType_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalActionComponent* ActionComponent)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint64                          CallFunc_Convert_FloatToFixedPoint64_ReturnValue;  // 0x0030(0x0008)(NoDestructor)
	struct FPalDamageResult                       K2Node_CustomEvent_DamageResult;                   // 0x0038(0x0050)(NoDestructor)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_2;        // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint64                          CallFunc_GetMP_ReturnValue;                        // 0x00A8(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue; // 0x00B0(0x0008)(NoDestructor)
	const class UPalActionComponent*              K2Node_CustomEvent_actionComponent;                // 0x00B8(0x0008)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4574[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue_3;        // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep) == 0x000008, "Wrong alignment on BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep");
static_assert(sizeof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep) == 0x0000E0, "Wrong size on BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep");
static_assert(offsetof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep, EntryPoint) == 0x000000, "Member 'BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep, CallFunc_PlayActionByType_ReturnValue) == 0x000018, "Member 'BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep::CallFunc_PlayActionByType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep, CallFunc_Convert_FloatToFixedPoint64_ReturnValue) == 0x000030, "Member 'BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep::CallFunc_Convert_FloatToFixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep, K2Node_CustomEvent_DamageResult) == 0x000038, "Member 'BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep::K2Node_CustomEvent_DamageResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep, CallFunc_GetComponentByClass_ReturnValue) == 0x000088, "Member 'BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000090, "Member 'BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep, K2Node_Event_ControlledPawn_1) == 0x000098, "Member 'BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep, CallFunc_GetComponentByClass_ReturnValue_2) == 0x0000A0, "Member 'BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep, CallFunc_GetMP_ReturnValue) == 0x0000A8, "Member 'BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep::CallFunc_GetMP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep, CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue) == 0x0000B0, "Member 'BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep::CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep, K2Node_CustomEvent_actionComponent) == 0x0000B8, "Member 'BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep::K2Node_CustomEvent_actionComponent' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep, K2Node_Event_ControlledPawn) == 0x0000C0, "Member 'BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep, K2Node_Event_WithResult) == 0x0000C8, "Member 'BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep, CallFunc_GetComponentByClass_ReturnValue_3) == 0x0000D0, "Member 'BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep, CallFunc_GetCharacter_ReturnValue) == 0x0000D8, "Member 'BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");

// Function BP_AIAction_Sleep.BP_AIAction_Sleep_C.OnAllActionFinishDelegate_����_0
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_Sleep_C_OnAllActionFinishDelegate______0 final
{
public:
	const class UPalActionComponent*              ActionComponent;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Sleep_C_OnAllActionFinishDelegate______0) == 0x000008, "Wrong alignment on BP_AIAction_Sleep_C_OnAllActionFinishDelegate______0");
static_assert(sizeof(BP_AIAction_Sleep_C_OnAllActionFinishDelegate______0) == 0x000008, "Wrong size on BP_AIAction_Sleep_C_OnAllActionFinishDelegate______0");
static_assert(offsetof(BP_AIAction_Sleep_C_OnAllActionFinishDelegate______0, ActionComponent) == 0x000000, "Member 'BP_AIAction_Sleep_C_OnAllActionFinishDelegate______0::ActionComponent' has a wrong offset!");

// Function BP_AIAction_Sleep.BP_AIAction_Sleep_C.OnDamageDelegate_����_0
// 0x0050 (0x0050 - 0x0000)
struct BP_AIAction_Sleep_C_OnDamageDelegate______0 final
{
public:
	struct FPalDamageResult                       DamageResult;                                      // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_AIAction_Sleep_C_OnDamageDelegate______0) == 0x000008, "Wrong alignment on BP_AIAction_Sleep_C_OnDamageDelegate______0");
static_assert(sizeof(BP_AIAction_Sleep_C_OnDamageDelegate______0) == 0x000050, "Wrong size on BP_AIAction_Sleep_C_OnDamageDelegate______0");
static_assert(offsetof(BP_AIAction_Sleep_C_OnDamageDelegate______0, DamageResult) == 0x000000, "Member 'BP_AIAction_Sleep_C_OnDamageDelegate______0::DamageResult' has a wrong offset!");

// Function BP_AIAction_Sleep.BP_AIAction_Sleep_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_Sleep_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Sleep_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_Sleep_C_ActionFinished");
static_assert(sizeof(BP_AIAction_Sleep_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_Sleep_C_ActionFinished");
static_assert(offsetof(BP_AIAction_Sleep_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Sleep_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Sleep_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_Sleep_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_Sleep.BP_AIAction_Sleep_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_Sleep_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Sleep_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_Sleep_C_ActionStart");
static_assert(sizeof(BP_AIAction_Sleep_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_Sleep_C_ActionStart");
static_assert(offsetof(BP_AIAction_Sleep_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Sleep_C_ActionStart::ControlledPawn' has a wrong offset!");

}
