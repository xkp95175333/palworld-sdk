#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionPalLiftup

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ActionPalLiftup.BP_ActionPalLiftup_C.ExecuteUbergraph_BP_ActionPalLiftup
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionPalLiftup_C_ExecuteUbergraph_BP_ActionPalLiftup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPalLiftup_C_ExecuteUbergraph_BP_ActionPalLiftup) == 0x000004, "Wrong alignment on BP_ActionPalLiftup_C_ExecuteUbergraph_BP_ActionPalLiftup");
static_assert(sizeof(BP_ActionPalLiftup_C_ExecuteUbergraph_BP_ActionPalLiftup) == 0x000004, "Wrong size on BP_ActionPalLiftup_C_ExecuteUbergraph_BP_ActionPalLiftup");
static_assert(offsetof(BP_ActionPalLiftup_C_ExecuteUbergraph_BP_ActionPalLiftup, EntryPoint) == 0x000000, "Member 'BP_ActionPalLiftup_C_ExecuteUbergraph_BP_ActionPalLiftup::EntryPoint' has a wrong offset!");

// Function BP_ActionPalLiftup.BP_ActionPalLiftup_C.StopAnimation
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionPalLiftup_C_StopAnimation final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPalLiftup_C_StopAnimation) == 0x000008, "Wrong alignment on BP_ActionPalLiftup_C_StopAnimation");
static_assert(sizeof(BP_ActionPalLiftup_C_StopAnimation) == 0x000008, "Wrong size on BP_ActionPalLiftup_C_StopAnimation");
static_assert(offsetof(BP_ActionPalLiftup_C_StopAnimation, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_ActionPalLiftup_C_StopAnimation::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");

}
