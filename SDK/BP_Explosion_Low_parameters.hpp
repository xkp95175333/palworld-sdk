#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Explosion_Low

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Explosion_Low.BP_Explosion_Low_C.BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_Explosion_Low_C_BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature final
{
public:
	class UNiagaraComponent*                      PSystem;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Explosion_Low_C_BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature) == 0x000008, "Wrong alignment on BP_Explosion_Low_C_BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");
static_assert(sizeof(BP_Explosion_Low_C_BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature) == 0x000008, "Wrong size on BP_Explosion_Low_C_BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");
static_assert(offsetof(BP_Explosion_Low_C_BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature, PSystem) == 0x000000, "Member 'BP_Explosion_Low_C_BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature::PSystem' has a wrong offset!");

// Function BP_Explosion_Low.BP_Explosion_Low_C.ExecuteUbergraph_BP_Explosion_Low
// 0x0010 (0x0010 - 0x0000)
struct BP_Explosion_Low_C_ExecuteUbergraph_BP_Explosion_Low final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A77[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      K2Node_ComponentBoundEvent_PSystem;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Explosion_Low_C_ExecuteUbergraph_BP_Explosion_Low) == 0x000008, "Wrong alignment on BP_Explosion_Low_C_ExecuteUbergraph_BP_Explosion_Low");
static_assert(sizeof(BP_Explosion_Low_C_ExecuteUbergraph_BP_Explosion_Low) == 0x000010, "Wrong size on BP_Explosion_Low_C_ExecuteUbergraph_BP_Explosion_Low");
static_assert(offsetof(BP_Explosion_Low_C_ExecuteUbergraph_BP_Explosion_Low, EntryPoint) == 0x000000, "Member 'BP_Explosion_Low_C_ExecuteUbergraph_BP_Explosion_Low::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Explosion_Low_C_ExecuteUbergraph_BP_Explosion_Low, K2Node_ComponentBoundEvent_PSystem) == 0x000008, "Member 'BP_Explosion_Low_C_ExecuteUbergraph_BP_Explosion_Low::K2Node_ComponentBoundEvent_PSystem' has a wrong offset!");

}
