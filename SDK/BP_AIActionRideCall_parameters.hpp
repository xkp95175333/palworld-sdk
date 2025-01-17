#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIActionRideCall

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_AIActionRideCall.BP_AIActionRideCall_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIActionRideCall_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionRideCall_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIActionRideCall_C_ActionTick");
static_assert(sizeof(BP_AIActionRideCall_C_ActionTick) == 0x000010, "Wrong size on BP_AIActionRideCall_C_ActionTick");
static_assert(offsetof(BP_AIActionRideCall_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIActionRideCall_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIActionRideCall_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIActionRideCall.BP_AIActionRideCall_C.CanRide
// 0x0018 (0x0018 - 0x0000)
struct BP_AIActionRideCall_C_CanRide final
{
public:
	bool                                          Param_CanRide;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalRiderComponent*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDisableRide_ReturnValue;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionRideCall_C_CanRide) == 0x000008, "Wrong alignment on BP_AIActionRideCall_C_CanRide");
static_assert(sizeof(BP_AIActionRideCall_C_CanRide) == 0x000018, "Wrong size on BP_AIActionRideCall_C_CanRide");
static_assert(offsetof(BP_AIActionRideCall_C_CanRide, Param_CanRide) == 0x000000, "Member 'BP_AIActionRideCall_C_CanRide::Param_CanRide' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CanRide, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_AIActionRideCall_C_CanRide::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CanRide, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_AIActionRideCall_C_CanRide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CanRide, CallFunc_IsDisableRide_ReturnValue) == 0x000011, "Member 'BP_AIActionRideCall_C_CanRide::CallFunc_IsDisableRide_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CanRide, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'BP_AIActionRideCall_C_CanRide::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_AIActionRideCall.BP_AIActionRideCall_C.DoRide
// 0x0028 (0x0028 - 0x0000)
struct BP_AIActionRideCall_C_DoRide final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIActionRiding_C*                   CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PushChildAction_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionRideCall_C_DoRide) == 0x000008, "Wrong alignment on BP_AIActionRideCall_C_DoRide");
static_assert(sizeof(BP_AIActionRideCall_C_DoRide) == 0x000028, "Wrong size on BP_AIActionRideCall_C_DoRide");
static_assert(offsetof(BP_AIActionRideCall_C_DoRide, ControlledPawn) == 0x000000, "Member 'BP_AIActionRideCall_C_DoRide::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_DoRide, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_AIActionRideCall_C_DoRide::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_DoRide, CallFunc_GetController_ReturnValue) == 0x000010, "Member 'BP_AIActionRideCall_C_DoRide::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_DoRide, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'BP_AIActionRideCall_C_DoRide::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_DoRide, CallFunc_PushChildAction_ReturnValue) == 0x000020, "Member 'BP_AIActionRideCall_C_DoRide::CallFunc_PushChildAction_ReturnValue' has a wrong offset!");

// Function BP_AIActionRideCall.BP_AIActionRideCall_C.ExecuteUbergraph_BP_AIActionRideCall
// 0x0058 (0x0058 - 0x0000)
struct BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanRide_CanRide;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE1[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCharacterRadius_ReturnValue;           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCharacterRadius_ReturnValue_1;         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE2[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInteractingPlayer_IsInteracting;        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE3[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoActor_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE4[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_IsNearTwoActor_distance_ImplicitCast;     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall) == 0x000008, "Wrong alignment on BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall");
static_assert(sizeof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall) == 0x000058, "Wrong size on BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, EntryPoint) == 0x000000, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_CanRide_CanRide) == 0x000004, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_CanRide_CanRide' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, K2Node_Event_ControlledPawn) == 0x000008, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_GetCharacterRadius_ReturnValue) == 0x000014, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_GetCharacterRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_GetCharacterRadius_ReturnValue_1) == 0x000018, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_GetCharacterRadius_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_IsInteractingPlayer_IsInteracting) == 0x000028, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_IsInteractingPlayer_IsInteracting' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000030, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_IsNearTwoActor_ReturnValue) == 0x000038, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_IsNearTwoActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000040, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000048, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_IsNearTwoActor_distance_ImplicitCast) == 0x000050, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_IsNearTwoActor_distance_ImplicitCast' has a wrong offset!");

}

