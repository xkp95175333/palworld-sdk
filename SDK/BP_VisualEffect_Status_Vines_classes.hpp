#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_Status_Vines

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VisualEffect_Status_Vines.BP_VisualEffect_Status_Vines_C
// 0x0028 (0x0098 - 0x0070)
class UBP_VisualEffect_Status_Vines_C final : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0070(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Effect;                                            // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        FadeOutTime;                                       // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FadeOutTimer;                                      // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            FadeOutCurve;                                      // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_VisualEffect_Status_Vines(int32 EntryPoint);
	void OnBeginVisualEffect();
	void OnEndVisualEffect();
	void TerminatingTickVisualEffect(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VisualEffect_Status_Vines_C">();
	}
	static class UBP_VisualEffect_Status_Vines_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VisualEffect_Status_Vines_C>();
	}
};
static_assert(alignof(UBP_VisualEffect_Status_Vines_C) == 0x000008, "Wrong alignment on UBP_VisualEffect_Status_Vines_C");
static_assert(sizeof(UBP_VisualEffect_Status_Vines_C) == 0x000098, "Wrong size on UBP_VisualEffect_Status_Vines_C");
static_assert(offsetof(UBP_VisualEffect_Status_Vines_C, UberGraphFrame) == 0x000070, "Member 'UBP_VisualEffect_Status_Vines_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Status_Vines_C, Effect) == 0x000078, "Member 'UBP_VisualEffect_Status_Vines_C::Effect' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Status_Vines_C, FadeOutTime) == 0x000080, "Member 'UBP_VisualEffect_Status_Vines_C::FadeOutTime' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Status_Vines_C, FadeOutTimer) == 0x000088, "Member 'UBP_VisualEffect_Status_Vines_C::FadeOutTimer' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Status_Vines_C, FadeOutCurve) == 0x000090, "Member 'UBP_VisualEffect_Status_Vines_C::FadeOutCurve' has a wrong offset!");

}
