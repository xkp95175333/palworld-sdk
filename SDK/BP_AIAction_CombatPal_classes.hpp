#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_CombatPal

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_CombatPal.BP_AIAction_CombatPal_C
// 0x00B0 (0x01E0 - 0x0130)
class UBP_AIAction_CombatPal_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 TargetActor;                                       // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          SelfActor;                                         // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        TempDeltaSecond;                                   // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 NextActionClass;                                   // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          NextIsWaza;                                        // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4297[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NextWazaSlotID;                                    // 0x015C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalAICombatModule*                     CombatModule;                                      // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldSelectWait;                                  // 0x0168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NextIsProvocation;                                 // 0x0169(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInterrupt;                                       // 0x016A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4298[0x1];                                     // 0x016B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InterrputSlotID;                                   // 0x016C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CantReachTimer;                                    // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PrevLocation;                                      // 0x0178(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StackTimer;                                        // 0x0190(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WarpStackTimer;                                    // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WarpStackPrevLocation;                             // 0x01A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DeadTimer;                                         // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ApproachTimer;                                     // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_ApproachEndTime;                             // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NotActionTimer;                                    // 0x01D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_FanShapeDegree;                              // 0x01D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void AddDamageResponse();
	void AddWarpStackTimer();
	void AttackNearestMapObject(bool* ReachAble);
	void ChangeCombatStartLocation(bool* Change);
	void ChangeNextAction();
	void CheckDeadTimer();
	void DamageResponseForCombatPal(const struct FPalDamageResult& DmgResult);
	void ExecuteUbergraph_BP_AIAction_CombatPal(int32 EntryPoint);
	void FindWazaClass(int32 SlotIndex, class UClass** WazaAction);
	void Get_Next_Action_Slot_ID(int32* SlotID);
	void GetActorActionComponentRef(class UPalActionComponent** ActionComp);
	void GetControllerRef(class APalAIController** PalAIController);
	void GetSelfPalBlackBoard(class UBP_PalAIBlackboard_Common_C** PalBB);
	void GetSkillSlotRef(class UPalActiveSkillSlot** SkillSlot);
	void GetStaticParamCompRef(class UPalStaticCharacterParameterComponent** StaticParamComp);
	void Interrupt_Action(int32 SlotID);
	void MoveToTarget();
	void NextAction_ByApproachFailure();
	void OnChildActionFinished(class UPawnAction* Action, EPawnActionResult WithResult);
	void OnDeadDelegate_Event(const struct FPalDeadInfo& DeadInfo);
	void OnPlayAction(class UPalActionBase* Action);
	void PlayerCameraCheck(bool* AttackAble);
	void PlayWazaAction();
	void PlayWazaDarknessStatus();
	void RemoveDamageResponse();
	void ResetWorpStackTimer();
	void SetupSkillSlot();
	void SightCheckAndResponseForCombatPal(bool* ChangeNextAction);
	void StartNextAction_Event(const class UPalActionComponent* ActionComponent);
	void TargetChange();
	void TargetIsValid(bool* Valid);
	void WarpToSpawnerPoint();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_CombatPal_C">();
	}
	static class UBP_AIAction_CombatPal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_CombatPal_C>();
	}
};
static_assert(alignof(UBP_AIAction_CombatPal_C) == 0x000008, "Wrong alignment on UBP_AIAction_CombatPal_C");
static_assert(sizeof(UBP_AIAction_CombatPal_C) == 0x0001E0, "Wrong size on UBP_AIAction_CombatPal_C");
static_assert(offsetof(UBP_AIAction_CombatPal_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIAction_CombatPal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, TargetActor) == 0x000138, "Member 'UBP_AIAction_CombatPal_C::TargetActor' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, SelfActor) == 0x000140, "Member 'UBP_AIAction_CombatPal_C::SelfActor' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, TempDeltaSecond) == 0x000148, "Member 'UBP_AIAction_CombatPal_C::TempDeltaSecond' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, NextActionClass) == 0x000150, "Member 'UBP_AIAction_CombatPal_C::NextActionClass' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, NextIsWaza) == 0x000158, "Member 'UBP_AIAction_CombatPal_C::NextIsWaza' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, NextWazaSlotID) == 0x00015C, "Member 'UBP_AIAction_CombatPal_C::NextWazaSlotID' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, CombatModule) == 0x000160, "Member 'UBP_AIAction_CombatPal_C::CombatModule' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, ShouldSelectWait) == 0x000168, "Member 'UBP_AIAction_CombatPal_C::ShouldSelectWait' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, NextIsProvocation) == 0x000169, "Member 'UBP_AIAction_CombatPal_C::NextIsProvocation' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, IsInterrupt) == 0x00016A, "Member 'UBP_AIAction_CombatPal_C::IsInterrupt' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, InterrputSlotID) == 0x00016C, "Member 'UBP_AIAction_CombatPal_C::InterrputSlotID' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, CantReachTimer) == 0x000170, "Member 'UBP_AIAction_CombatPal_C::CantReachTimer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, PrevLocation) == 0x000178, "Member 'UBP_AIAction_CombatPal_C::PrevLocation' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, StackTimer) == 0x000190, "Member 'UBP_AIAction_CombatPal_C::StackTimer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, WarpStackTimer) == 0x000198, "Member 'UBP_AIAction_CombatPal_C::WarpStackTimer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, WarpStackPrevLocation) == 0x0001A0, "Member 'UBP_AIAction_CombatPal_C::WarpStackPrevLocation' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, DeadTimer) == 0x0001B8, "Member 'UBP_AIAction_CombatPal_C::DeadTimer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, ApproachTimer) == 0x0001C0, "Member 'UBP_AIAction_CombatPal_C::ApproachTimer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, Const_ApproachEndTime) == 0x0001C8, "Member 'UBP_AIAction_CombatPal_C::Const_ApproachEndTime' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, NotActionTimer) == 0x0001D0, "Member 'UBP_AIAction_CombatPal_C::NotActionTimer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_C, Const_FanShapeDegree) == 0x0001D8, "Member 'UBP_AIAction_CombatPal_C::Const_FanShapeDegree' has a wrong offset!");

}
