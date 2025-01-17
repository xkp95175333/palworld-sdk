#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapObject_PickupItem_PalEgg_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MapObject_PickupItem_PalEgg_Base.BP_MapObject_PickupItem_PalEgg_Base_C
// 0x0038 (0x03F0 - 0x03B8)
class ABP_MapObject_PickupItem_PalEgg_Base_C : public APalMapObjectPalEgg
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_basket;                                         // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative*  BP_InteractableSphere;                             // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Kurinuki_EggA;                                  // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Scale;                                             // 0x03E8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base(int32 EntryPoint);
	void GetPalEggScale(int32 PalRarity, double* PalEggScale);
	void OnRep_Scale();
	void ReceiveBeginPlay();
	void SetupPalEggScale();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObject_PickupItem_PalEgg_Base_C">();
	}
	static class ABP_MapObject_PickupItem_PalEgg_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapObject_PickupItem_PalEgg_Base_C>();
	}
};
static_assert(alignof(ABP_MapObject_PickupItem_PalEgg_Base_C) == 0x000008, "Wrong alignment on ABP_MapObject_PickupItem_PalEgg_Base_C");
static_assert(sizeof(ABP_MapObject_PickupItem_PalEgg_Base_C) == 0x0003F0, "Wrong size on ABP_MapObject_PickupItem_PalEgg_Base_C");
static_assert(offsetof(ABP_MapObject_PickupItem_PalEgg_Base_C, UberGraphFrame) == 0x0003B8, "Member 'ABP_MapObject_PickupItem_PalEgg_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_PalEgg_Base_C, Niagara) == 0x0003C0, "Member 'ABP_MapObject_PickupItem_PalEgg_Base_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_PalEgg_Base_C, SM_basket) == 0x0003C8, "Member 'ABP_MapObject_PickupItem_PalEgg_Base_C::SM_basket' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_PalEgg_Base_C, BP_InteractableSphere) == 0x0003D0, "Member 'ABP_MapObject_PickupItem_PalEgg_Base_C::BP_InteractableSphere' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_PalEgg_Base_C, Sphere) == 0x0003D8, "Member 'ABP_MapObject_PickupItem_PalEgg_Base_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_PalEgg_Base_C, SK_Kurinuki_EggA) == 0x0003E0, "Member 'ABP_MapObject_PickupItem_PalEgg_Base_C::SK_Kurinuki_EggA' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_PalEgg_Base_C, Scale) == 0x0003E8, "Member 'ABP_MapObject_PickupItem_PalEgg_Base_C::Scale' has a wrong offset!");

}

