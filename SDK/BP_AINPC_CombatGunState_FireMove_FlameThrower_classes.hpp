#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_CombatGunState_FireMove_FlameThrower

#include "Basic.hpp"

#include "BP_AINPC_CombatGunState_AimMove_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AINPC_CombatGunState_FireMove_FlameThrower.BP_AINPC_CombatGunState_FireMove_FlameThrower_C
// 0x0010 (0x0068 - 0x0058)
class UBP_AINPC_CombatGunState_FireMove_FlameThrower_C final : public UBP_AINPC_CombatGunState_AimMove_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AINPC_CombatGunState_FireMove_FlameThrower_C; // 0x0058(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Timer;                                             // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove_FlameThrower(int32 EntryPoint);
	void StateEnter();
	void StateExit();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AINPC_CombatGunState_FireMove_FlameThrower_C">();
	}
	static class UBP_AINPC_CombatGunState_FireMove_FlameThrower_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AINPC_CombatGunState_FireMove_FlameThrower_C>();
	}
};
static_assert(alignof(UBP_AINPC_CombatGunState_FireMove_FlameThrower_C) == 0x000008, "Wrong alignment on UBP_AINPC_CombatGunState_FireMove_FlameThrower_C");
static_assert(sizeof(UBP_AINPC_CombatGunState_FireMove_FlameThrower_C) == 0x000068, "Wrong size on UBP_AINPC_CombatGunState_FireMove_FlameThrower_C");
static_assert(offsetof(UBP_AINPC_CombatGunState_FireMove_FlameThrower_C, UberGraphFrame_BP_AINPC_CombatGunState_FireMove_FlameThrower_C) == 0x000058, "Member 'UBP_AINPC_CombatGunState_FireMove_FlameThrower_C::UberGraphFrame_BP_AINPC_CombatGunState_FireMove_FlameThrower_C' has a wrong offset!");
static_assert(offsetof(UBP_AINPC_CombatGunState_FireMove_FlameThrower_C, Timer) == 0x000060, "Member 'UBP_AINPC_CombatGunState_FireMove_FlameThrower_C::Timer' has a wrong offset!");

}
