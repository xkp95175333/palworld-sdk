#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIActionProtecting

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIActionProtecting.BP_AIActionProtecting_C
// 0x0030 (0x0160 - 0x0130)
class UBP_AIActionProtecting_C final : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                          ProtectCharacter;                                  // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   RidingSpeedUpFlagName;                             // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          OwnerPawn;                                         // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalPartnerSkillParameterComponent*     PartnerSkillParam;                                 // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAborted;                                         // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsGliding;                                         // 0x0159(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsReleased;                                        // 0x015A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void BindCoopReleaseEvent();
	void CancelCheck();
	void CoopRelease();
	void DeadProc(const struct FPalDeadInfo& DeadInfo);
	void ExecuteUbergraph_BP_AIActionProtecting(int32 EntryPoint);
	void OnCoopEnd();
	void OnCoopRelease();
	void OnDamage(const struct FPalDamageResult& DamageResult);
	void OnDead(const struct FPalDeadInfo& DeadInfo);
	void OnLanded(class UPalCharacterMovementComponent* Component, const struct FHitResult& Hit);
	void SetProtectCharacter(class APalCharacter* RidingCharacter);
	void SetupAction(class APawn* ControlledPawn);
	void StartPartnerSkill();
	void StopPartnerSkill();
	void UnbindCoopReleaseEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIActionProtecting_C">();
	}
	static class UBP_AIActionProtecting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIActionProtecting_C>();
	}
};
static_assert(alignof(UBP_AIActionProtecting_C) == 0x000008, "Wrong alignment on UBP_AIActionProtecting_C");
static_assert(sizeof(UBP_AIActionProtecting_C) == 0x000160, "Wrong size on UBP_AIActionProtecting_C");
static_assert(offsetof(UBP_AIActionProtecting_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIActionProtecting_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIActionProtecting_C, ProtectCharacter) == 0x000138, "Member 'UBP_AIActionProtecting_C::ProtectCharacter' has a wrong offset!");
static_assert(offsetof(UBP_AIActionProtecting_C, RidingSpeedUpFlagName) == 0x000140, "Member 'UBP_AIActionProtecting_C::RidingSpeedUpFlagName' has a wrong offset!");
static_assert(offsetof(UBP_AIActionProtecting_C, OwnerPawn) == 0x000148, "Member 'UBP_AIActionProtecting_C::OwnerPawn' has a wrong offset!");
static_assert(offsetof(UBP_AIActionProtecting_C, PartnerSkillParam) == 0x000150, "Member 'UBP_AIActionProtecting_C::PartnerSkillParam' has a wrong offset!");
static_assert(offsetof(UBP_AIActionProtecting_C, IsAborted) == 0x000158, "Member 'UBP_AIActionProtecting_C::IsAborted' has a wrong offset!");
static_assert(offsetof(UBP_AIActionProtecting_C, IsGliding) == 0x000159, "Member 'UBP_AIActionProtecting_C::IsGliding' has a wrong offset!");
static_assert(offsetof(UBP_AIActionProtecting_C, IsReleased) == 0x00015A, "Member 'UBP_AIActionProtecting_C::IsReleased' has a wrong offset!");

}
