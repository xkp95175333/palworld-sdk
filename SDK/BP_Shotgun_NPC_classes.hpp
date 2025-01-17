#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Shotgun_NPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "BP_PumpActionShotgun_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Shotgun_NPC.BP_Shotgun_NPC_C
// 0x0010 (0x0580 - 0x0570)
class ABP_Shotgun_NPC_C final : public ABP_PumpActionShotgun_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Shotgun_NPC_C;                   // 0x0570(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         ReloadCount;                                       // 0x0578(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Shotgun_NPC(int32 EntryPoint);
	void OnWeaponNotify(EWeaponNotifyType Type);

	int32 GetNPCWeaponDamage() const;
	int32 GetWeaponDamage() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Shotgun_NPC_C">();
	}
	static class ABP_Shotgun_NPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Shotgun_NPC_C>();
	}
};
static_assert(alignof(ABP_Shotgun_NPC_C) == 0x000008, "Wrong alignment on ABP_Shotgun_NPC_C");
static_assert(sizeof(ABP_Shotgun_NPC_C) == 0x000580, "Wrong size on ABP_Shotgun_NPC_C");
static_assert(offsetof(ABP_Shotgun_NPC_C, UberGraphFrame_BP_Shotgun_NPC_C) == 0x000570, "Member 'ABP_Shotgun_NPC_C::UberGraphFrame_BP_Shotgun_NPC_C' has a wrong offset!");
static_assert(offsetof(ABP_Shotgun_NPC_C, ReloadCount) == 0x000578, "Member 'ABP_Shotgun_NPC_C::ReloadCount' has a wrong offset!");

}

