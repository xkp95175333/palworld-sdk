#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalPlayerCaptureSet

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C
// 0x00B0 (0x0340 - 0x0290)
class ABP_PalPlayerCaptureSet_C : public APalUIInframeRenderer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URectLightComponent*                    RectLight;                                         // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_Rim_Up;                                 // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_Rim_BackL;                              // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_Rim_BackR;                              // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_Main;                                   // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor;                                        // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCompletedSetup;                                  // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           DelayHandle;                                       // 0x02E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               DefaultRotation;                                   // 0x02F0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               TargetRotation;                                    // 0x0308(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                DefaultCameraPosition;                             // 0x0320(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RotateInterpolationRate;                           // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Add_Camera_Relative_Location(const struct FVector& AddLocation);
	void AddRotation(const struct FRotator& AddRotator);
	void AdjustCamera(double TargetActorBoundSize);
	void CancelDelayHandle();
	void DelayCompleteSetup();
	void ExecuteUbergraph_BP_PalPlayerCaptureSet(int32 EntryPoint);
	void GetDisplayCharacterActor(class ABP_Player_ForUI_C** UIDisplayPlayer);
	void OnCompletedSetup__DelegateSignature();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void RequestByCharacterMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo);
	void RequestMyPlayer();
	void Reset();
	void ResetCameraLocation();
	void ResetRotation();
	void SetupDelayHandle();
	void UpdateShowOnlyActors();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalPlayerCaptureSet_C">();
	}
	static class ABP_PalPlayerCaptureSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalPlayerCaptureSet_C>();
	}
};
static_assert(alignof(ABP_PalPlayerCaptureSet_C) == 0x000008, "Wrong alignment on ABP_PalPlayerCaptureSet_C");
static_assert(sizeof(ABP_PalPlayerCaptureSet_C) == 0x000340, "Wrong size on ABP_PalPlayerCaptureSet_C");
static_assert(offsetof(ABP_PalPlayerCaptureSet_C, UberGraphFrame) == 0x000290, "Member 'ABP_PalPlayerCaptureSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerCaptureSet_C, RectLight) == 0x000298, "Member 'ABP_PalPlayerCaptureSet_C::RectLight' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerCaptureSet_C, PointLight_Rim_Up) == 0x0002A0, "Member 'ABP_PalPlayerCaptureSet_C::PointLight_Rim_Up' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerCaptureSet_C, PointLight_Rim_BackL) == 0x0002A8, "Member 'ABP_PalPlayerCaptureSet_C::PointLight_Rim_BackL' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerCaptureSet_C, PointLight_Rim_BackR) == 0x0002B0, "Member 'ABP_PalPlayerCaptureSet_C::PointLight_Rim_BackR' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerCaptureSet_C, PointLight_Main) == 0x0002B8, "Member 'ABP_PalPlayerCaptureSet_C::PointLight_Main' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerCaptureSet_C, ChildActor) == 0x0002C0, "Member 'ABP_PalPlayerCaptureSet_C::ChildActor' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerCaptureSet_C, SceneCaptureComponent2D) == 0x0002C8, "Member 'ABP_PalPlayerCaptureSet_C::SceneCaptureComponent2D' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerCaptureSet_C, DefaultSceneRoot) == 0x0002D0, "Member 'ABP_PalPlayerCaptureSet_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerCaptureSet_C, OnCompletedSetup) == 0x0002D8, "Member 'ABP_PalPlayerCaptureSet_C::OnCompletedSetup' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerCaptureSet_C, DelayHandle) == 0x0002E8, "Member 'ABP_PalPlayerCaptureSet_C::DelayHandle' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerCaptureSet_C, DefaultRotation) == 0x0002F0, "Member 'ABP_PalPlayerCaptureSet_C::DefaultRotation' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerCaptureSet_C, TargetRotation) == 0x000308, "Member 'ABP_PalPlayerCaptureSet_C::TargetRotation' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerCaptureSet_C, DefaultCameraPosition) == 0x000320, "Member 'ABP_PalPlayerCaptureSet_C::DefaultCameraPosition' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerCaptureSet_C, RotateInterpolationRate) == 0x000338, "Member 'ABP_PalPlayerCaptureSet_C::RotateInterpolationRate' has a wrong offset!");

}

