#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_SpawnFromBallEmissive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VisualEffect_SpawnFromBallEmissive.BP_VisualEffect_SpawnFromBallEmissive_C
// 0x0060 (0x00D0 - 0x0070)
class UBP_VisualEffect_SpawnFromBallEmissive_C final : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0070(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        EmissionTime;                                      // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EmissionTimer;                                     // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentEmission;                                   // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EndEmission;                                       // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StartEmissive;                                     // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName;                                          // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScaleTime;                                         // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScaleTimer;                                        // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsScaleEnable;                                     // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DCF[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TickTimerHandle;                                   // 0x00C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        TickInterval;                                      // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_VisualEffect_SpawnFromBallEmissive(int32 EntryPoint);
	void ModifyEffectBySize(class UNiagaraComponent* Effect, EPalSizeType Size);
	void OnBeginVisualEffect();
	void OnEndVisualEffect();
	void SetScale(double Value);
	void ________Update();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VisualEffect_SpawnFromBallEmissive_C">();
	}
	static class UBP_VisualEffect_SpawnFromBallEmissive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VisualEffect_SpawnFromBallEmissive_C>();
	}
};
static_assert(alignof(UBP_VisualEffect_SpawnFromBallEmissive_C) == 0x000008, "Wrong alignment on UBP_VisualEffect_SpawnFromBallEmissive_C");
static_assert(sizeof(UBP_VisualEffect_SpawnFromBallEmissive_C) == 0x0000D0, "Wrong size on UBP_VisualEffect_SpawnFromBallEmissive_C");
static_assert(offsetof(UBP_VisualEffect_SpawnFromBallEmissive_C, UberGraphFrame) == 0x000070, "Member 'UBP_VisualEffect_SpawnFromBallEmissive_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_SpawnFromBallEmissive_C, EmissionTime) == 0x000078, "Member 'UBP_VisualEffect_SpawnFromBallEmissive_C::EmissionTime' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_SpawnFromBallEmissive_C, EmissionTimer) == 0x000080, "Member 'UBP_VisualEffect_SpawnFromBallEmissive_C::EmissionTimer' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_SpawnFromBallEmissive_C, CurrentEmission) == 0x000088, "Member 'UBP_VisualEffect_SpawnFromBallEmissive_C::CurrentEmission' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_SpawnFromBallEmissive_C, EndEmission) == 0x000090, "Member 'UBP_VisualEffect_SpawnFromBallEmissive_C::EndEmission' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_SpawnFromBallEmissive_C, StartEmissive) == 0x000098, "Member 'UBP_VisualEffect_SpawnFromBallEmissive_C::StartEmissive' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_SpawnFromBallEmissive_C, FlagName) == 0x0000A0, "Member 'UBP_VisualEffect_SpawnFromBallEmissive_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_SpawnFromBallEmissive_C, ScaleTime) == 0x0000A8, "Member 'UBP_VisualEffect_SpawnFromBallEmissive_C::ScaleTime' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_SpawnFromBallEmissive_C, ScaleTimer) == 0x0000B0, "Member 'UBP_VisualEffect_SpawnFromBallEmissive_C::ScaleTimer' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_SpawnFromBallEmissive_C, IsScaleEnable) == 0x0000B8, "Member 'UBP_VisualEffect_SpawnFromBallEmissive_C::IsScaleEnable' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_SpawnFromBallEmissive_C, TickTimerHandle) == 0x0000C0, "Member 'UBP_VisualEffect_SpawnFromBallEmissive_C::TickTimerHandle' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_SpawnFromBallEmissive_C, TickInterval) == 0x0000C8, "Member 'UBP_VisualEffect_SpawnFromBallEmissive_C::TickInterval' has a wrong offset!");

}
