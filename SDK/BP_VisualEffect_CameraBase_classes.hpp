#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_CameraBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VisualEffect_CameraBase.BP_VisualEffect_CameraBase_C
// 0x0038 (0x00A8 - 0x0070)
class UBP_VisualEffect_CameraBase_C : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0070(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        FadeInTime;                                        // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FadeOutTime;                                       // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TimeEventTime;                                     // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        Weight;                                            // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FTimerHandle                           FadeInTimerHanhdle;                                // 0x0098(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FTimerHandle                           FadeOutTimerHanhdle;                               // 0x00A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_VisualEffect_CameraBase(int32 EntryPoint);
	void OnBeginVisualEffect();
	void OnEndVisualEffect();
	void UpdateEffectValue(double WeightValue);
	void _________FadeIIn();
	void _________FadeOut();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VisualEffect_CameraBase_C">();
	}
	static class UBP_VisualEffect_CameraBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VisualEffect_CameraBase_C>();
	}
};
static_assert(alignof(UBP_VisualEffect_CameraBase_C) == 0x000008, "Wrong alignment on UBP_VisualEffect_CameraBase_C");
static_assert(sizeof(UBP_VisualEffect_CameraBase_C) == 0x0000A8, "Wrong size on UBP_VisualEffect_CameraBase_C");
static_assert(offsetof(UBP_VisualEffect_CameraBase_C, UberGraphFrame) == 0x000070, "Member 'UBP_VisualEffect_CameraBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_CameraBase_C, FadeInTime) == 0x000078, "Member 'UBP_VisualEffect_CameraBase_C::FadeInTime' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_CameraBase_C, FadeOutTime) == 0x000080, "Member 'UBP_VisualEffect_CameraBase_C::FadeOutTime' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_CameraBase_C, TimeEventTime) == 0x000088, "Member 'UBP_VisualEffect_CameraBase_C::TimeEventTime' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_CameraBase_C, Weight) == 0x000090, "Member 'UBP_VisualEffect_CameraBase_C::Weight' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_CameraBase_C, FadeInTimerHanhdle) == 0x000098, "Member 'UBP_VisualEffect_CameraBase_C::FadeInTimerHanhdle' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_CameraBase_C, FadeOutTimerHanhdle) == 0x0000A0, "Member 'UBP_VisualEffect_CameraBase_C::FadeOutTimerHanhdle' has a wrong offset!");

}
