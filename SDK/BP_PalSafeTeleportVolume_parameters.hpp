#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalSafeTeleportVolume

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_PalSafeTeleportVolume.BP_PalSafeTeleportVolume_C.BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_PalSafeTeleportVolume_C_BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54C1[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PalSafeTeleportVolume_C_BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_PalSafeTeleportVolume_C_BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_PalSafeTeleportVolume_C_BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_PalSafeTeleportVolume_C_BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_PalSafeTeleportVolume_C_BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_PalSafeTeleportVolume_C_BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_PalSafeTeleportVolume_C_BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_PalSafeTeleportVolume_C_BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_PalSafeTeleportVolume_C_BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_PalSafeTeleportVolume_C_BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_PalSafeTeleportVolume.BP_PalSafeTeleportVolume_C.ExecuteUbergraph_BP_PalSafeTeleportVolume
// 0x0138 (0x0138 - 0x0000)
struct BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInClientConnection_ReturnValue;         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54C2[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54C3[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54C4[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume) == 0x000008, "Wrong alignment on BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume");
static_assert(sizeof(BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume) == 0x000138, "Wrong size on BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume, EntryPoint) == 0x000000, "Member 'BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume, CallFunc_IsInClientConnection_ReturnValue) == 0x000004, "Member 'BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume::CallFunc_IsInClientConnection_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume, CallFunc_GetController_ReturnValue) == 0x000110, "Member 'BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume, K2Node_DynamicCast_AsPal_Character) == 0x000118, "Member 'BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume, K2Node_DynamicCast_bSuccess) == 0x000120, "Member 'BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000128, "Member 'BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume, K2Node_DynamicCast_bSuccess_1) == 0x000130, "Member 'BP_PalSafeTeleportVolume_C_ExecuteUbergraph_BP_PalSafeTeleportVolume::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}
