#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkillEffectBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SkillEffectBase.BP_SkillEffectBase_C
// 0x0090 (0x03C0 - 0x0330)
class ABP_SkillEffectBase_C : public APalSkillEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       HomingLimit;                                       // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       MovementSphereRoot;                                // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          SpanwHitGroundEffect;                              // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalWazaID                                    Waza;                                              // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CA2[0x6];                                     // 0x034A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNiagaraSystem*>                 Load_Cache;                                        // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 Foliage_Index;                                     // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Is_Poison;                                         // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoDestroyOnHitGround;                              // 0x0371(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartEffectFadeOut;                                // 0x0372(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CA3[0x5];                                     // 0x0373(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FadeOutTimer;                                      // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FadeOutTime;                                       // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            FadeOutCurve;                                      // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 HitEffectSlot;                                     // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTimerHandle>                   TimerHandles;                                      // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_PredictedTarget_C*                  PredictedTarget;                                   // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableDisplayHitNum;                               // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CA4[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    Other_Hit_Component;                               // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyDamageCustomHit(class AActor* Defender, class USceneComponent* AttackerHitComponent, class USceneComponent* DefenderHitComponent, const struct FVector& HitLocation, TArray<int32>& FoliageIndex);
	void BndEvt__BP_SkillEffectBase_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void CheckToStopHoming();
	void ExecuteUbergraph_BP_SkillEffectBase(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void FindTargetConsiderRide(class AActor** TargetActor);
	void FindTargetLocationConsiderRide(struct FVector* TargetPos);
	void GetHomingEndDot(double* Dot);
	void GetOwnerAction(class UPalActionBase** Action);
	void GetPredictedTargetLocation(struct FVector* Location);
	bool HasProjectileMoveComp();
	void Is_Hitable_Target_Collision(class UPrimitiveComponent* MyHitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherHitComp, bool* IsHitAble);
	void IsValidHitCustomRange(class AActor* HitTarget, class UPrimitiveComponent* MyHitComponent, class UPrimitiveComponent* HitTargetComponent, bool* IsHit);
	void LoadAndPlayEffect(TSoftObjectPtr<class UNiagaraSystem> Niagara_System, const struct FTransform& Transform);
	void OnHitCustomRange(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount);
	void OnHitDelegate_____(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount);
	void OnHitGround();
	void OnLoaded_15409DED4FCA4A2F1D5599B619A24205(class UObject* Loaded);
	void Print_Log_When_Collision_Object_Type_Is_Bullet();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void SetHomingTarget(class AActor* Target, bool* Success);
	void Spawn_Elemental_Hit_Effect_Far(const struct FVector& Location, double EffectScale);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffectBase_C">();
	}
	static class ABP_SkillEffectBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffectBase_C>();
	}
};
static_assert(alignof(ABP_SkillEffectBase_C) == 0x000008, "Wrong alignment on ABP_SkillEffectBase_C");
static_assert(sizeof(ABP_SkillEffectBase_C) == 0x0003C0, "Wrong size on ABP_SkillEffectBase_C");
static_assert(offsetof(ABP_SkillEffectBase_C, UberGraphFrame) == 0x000330, "Member 'ABP_SkillEffectBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectBase_C, HomingLimit) == 0x000338, "Member 'ABP_SkillEffectBase_C::HomingLimit' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectBase_C, MovementSphereRoot) == 0x000340, "Member 'ABP_SkillEffectBase_C::MovementSphereRoot' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectBase_C, SpanwHitGroundEffect) == 0x000348, "Member 'ABP_SkillEffectBase_C::SpanwHitGroundEffect' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectBase_C, Waza) == 0x000349, "Member 'ABP_SkillEffectBase_C::Waza' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectBase_C, Load_Cache) == 0x000350, "Member 'ABP_SkillEffectBase_C::Load_Cache' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectBase_C, Foliage_Index) == 0x000360, "Member 'ABP_SkillEffectBase_C::Foliage_Index' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectBase_C, Is_Poison) == 0x000370, "Member 'ABP_SkillEffectBase_C::Is_Poison' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectBase_C, DoDestroyOnHitGround) == 0x000371, "Member 'ABP_SkillEffectBase_C::DoDestroyOnHitGround' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectBase_C, StartEffectFadeOut) == 0x000372, "Member 'ABP_SkillEffectBase_C::StartEffectFadeOut' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectBase_C, FadeOutTimer) == 0x000378, "Member 'ABP_SkillEffectBase_C::FadeOutTimer' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectBase_C, FadeOutTime) == 0x000380, "Member 'ABP_SkillEffectBase_C::FadeOutTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectBase_C, FadeOutCurve) == 0x000388, "Member 'ABP_SkillEffectBase_C::FadeOutCurve' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectBase_C, HitEffectSlot) == 0x000390, "Member 'ABP_SkillEffectBase_C::HitEffectSlot' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectBase_C, TimerHandles) == 0x000398, "Member 'ABP_SkillEffectBase_C::TimerHandles' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectBase_C, PredictedTarget) == 0x0003A8, "Member 'ABP_SkillEffectBase_C::PredictedTarget' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectBase_C, EnableDisplayHitNum) == 0x0003B0, "Member 'ABP_SkillEffectBase_C::EnableDisplayHitNum' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectBase_C, Other_Hit_Component) == 0x0003B8, "Member 'ABP_SkillEffectBase_C::Other_Hit_Component' has a wrong offset!");

}
