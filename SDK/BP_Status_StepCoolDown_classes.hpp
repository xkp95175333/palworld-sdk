#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_StepCoolDown

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Status_StepCoolDown.BP_Status_StepCoolDown_C
// 0x0010 (0x0058 - 0x0048)
class UBP_Status_StepCoolDown_C final : public UPalStatusBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0048(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Timer;                                             // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Status_StepCoolDown(int32 EntryPoint);
	void OnBeginStatus();
	void TickStatus(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Status_StepCoolDown_C">();
	}
	static class UBP_Status_StepCoolDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Status_StepCoolDown_C>();
	}
};
static_assert(alignof(UBP_Status_StepCoolDown_C) == 0x000008, "Wrong alignment on UBP_Status_StepCoolDown_C");
static_assert(sizeof(UBP_Status_StepCoolDown_C) == 0x000058, "Wrong size on UBP_Status_StepCoolDown_C");
static_assert(offsetof(UBP_Status_StepCoolDown_C, UberGraphFrame) == 0x000048, "Member 'UBP_Status_StepCoolDown_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Status_StepCoolDown_C, Timer) == 0x000050, "Member 'UBP_Status_StepCoolDown_C::Timer' has a wrong offset!");

}
