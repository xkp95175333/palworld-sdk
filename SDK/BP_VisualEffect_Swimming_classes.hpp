#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_Swimming

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VisualEffect_Swimming.BP_VisualEffect_Swimming_C
// 0x0098 (0x0108 - 0x0070)
class UBP_VisualEffect_Swimming_C final : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0070(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_SplashBody;                                     // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Swim;                                           // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_InWater;                                        // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         Movement;                                          // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        InWaterRate_Feet;                                  // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InWaterRate_Body;                                  // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FeetEffectWaitTimeSec;                             // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMoving;                                          // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D53[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FallingVelocityMin;                                // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Effect_Offset_Z_Feet;                              // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Effect_Offset_Z_Body;                              // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Effect_Offset_Z_Swim;                              // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Effect_Offset_Z_InWater;                           // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Effect_Offset_Z_Dive;                              // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CreateDiveEffectDelay;                             // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasRayCastCash;                                    // 0x00E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D54[0x6];                                     // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LengthToBottomCash;                                // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNsSplashBodyActive;                              // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNsSwimActive;                                    // 0x00F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNsInWaterActive;                                 // 0x00FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D55[0x5];                                     // 0x00FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MovimgVelocityThreshold;                           // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Create_NS_Dive();
	void Create_NS_Splash_Body();
	void Create_NS_InWater();
	void Create_NS_SplashFeet();
	void Create_NS_Swim();
	void CreateInWaterEffect();
	void ExecuteUbergraph_BP_VisualEffect_Swimming(int32 EntryPoint);
	void Get_Effect_Transform(double OffsetDistance, bool IsUseWaterPlaneNormal, struct FTransform* NewParam);
	void GetInWaterRate(double* Rate);
	void GetOwnerHalfHeight(double* HalfHeight);
	void GetVelocityLengthXY(double* Velocity);
	void GetWaterDepth(double* Length);
	void HasMovingVelocity(bool* HasVelocity);
	void IsMakeDiveEffect(bool* IsFalling);
	void OnBeginVisualEffect();
	void OnEndVisualEffect();
	void TickVisualEffect(float DeltaTime);
	void Update_NS_InWater(double DeltaTime);
	void Update_Water_Plane_Effect_Transform(class UNiagaraComponent* EffectInst, double OffsetDistance);
	void Update_NS_Dive();
	void Update_NS_SplashBody();
	void Update_NS_SplashFeet(double DeltaTime);
	void Update_NS_Swim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VisualEffect_Swimming_C">();
	}
	static class UBP_VisualEffect_Swimming_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VisualEffect_Swimming_C>();
	}
};
static_assert(alignof(UBP_VisualEffect_Swimming_C) == 0x000008, "Wrong alignment on UBP_VisualEffect_Swimming_C");
static_assert(sizeof(UBP_VisualEffect_Swimming_C) == 0x000108, "Wrong size on UBP_VisualEffect_Swimming_C");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, UberGraphFrame) == 0x000070, "Member 'UBP_VisualEffect_Swimming_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, NS_SplashBody) == 0x000078, "Member 'UBP_VisualEffect_Swimming_C::NS_SplashBody' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, NS_Swim) == 0x000080, "Member 'UBP_VisualEffect_Swimming_C::NS_Swim' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, NS_InWater) == 0x000088, "Member 'UBP_VisualEffect_Swimming_C::NS_InWater' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, Movement) == 0x000090, "Member 'UBP_VisualEffect_Swimming_C::Movement' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, InWaterRate_Feet) == 0x000098, "Member 'UBP_VisualEffect_Swimming_C::InWaterRate_Feet' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, InWaterRate_Body) == 0x0000A0, "Member 'UBP_VisualEffect_Swimming_C::InWaterRate_Body' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, FeetEffectWaitTimeSec) == 0x0000A8, "Member 'UBP_VisualEffect_Swimming_C::FeetEffectWaitTimeSec' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, IsMoving) == 0x0000B0, "Member 'UBP_VisualEffect_Swimming_C::IsMoving' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, FallingVelocityMin) == 0x0000B8, "Member 'UBP_VisualEffect_Swimming_C::FallingVelocityMin' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, Effect_Offset_Z_Feet) == 0x0000C0, "Member 'UBP_VisualEffect_Swimming_C::Effect_Offset_Z_Feet' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, Effect_Offset_Z_Body) == 0x0000C8, "Member 'UBP_VisualEffect_Swimming_C::Effect_Offset_Z_Body' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, Effect_Offset_Z_Swim) == 0x0000D0, "Member 'UBP_VisualEffect_Swimming_C::Effect_Offset_Z_Swim' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, Effect_Offset_Z_InWater) == 0x0000D8, "Member 'UBP_VisualEffect_Swimming_C::Effect_Offset_Z_InWater' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, Effect_Offset_Z_Dive) == 0x0000E0, "Member 'UBP_VisualEffect_Swimming_C::Effect_Offset_Z_Dive' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, CreateDiveEffectDelay) == 0x0000E8, "Member 'UBP_VisualEffect_Swimming_C::CreateDiveEffectDelay' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, HasRayCastCash) == 0x0000E9, "Member 'UBP_VisualEffect_Swimming_C::HasRayCastCash' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, LengthToBottomCash) == 0x0000F0, "Member 'UBP_VisualEffect_Swimming_C::LengthToBottomCash' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, IsNsSplashBodyActive) == 0x0000F8, "Member 'UBP_VisualEffect_Swimming_C::IsNsSplashBodyActive' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, IsNsSwimActive) == 0x0000F9, "Member 'UBP_VisualEffect_Swimming_C::IsNsSwimActive' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, IsNsInWaterActive) == 0x0000FA, "Member 'UBP_VisualEffect_Swimming_C::IsNsInWaterActive' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Swimming_C, MovimgVelocityThreshold) == 0x000100, "Member 'UBP_VisualEffect_Swimming_C::MovimgVelocityThreshold' has a wrong offset!");

}
