#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionPalLiftup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionPalLiftup.BP_ActionPalLiftup_C
// 0x0010 (0x0150 - 0x0140)
class UBP_ActionPalLiftup_C final : public UPalAction_Liftup
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionPalLiftup(int32 EntryPoint);
	void OnBreakAction();
	void OnEndAction();
	void PlayStartLiftupMontage();
	void StopAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionPalLiftup_C">();
	}
	static class UBP_ActionPalLiftup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionPalLiftup_C>();
	}
};
static_assert(alignof(UBP_ActionPalLiftup_C) == 0x000010, "Wrong alignment on UBP_ActionPalLiftup_C");
static_assert(sizeof(UBP_ActionPalLiftup_C) == 0x000150, "Wrong size on UBP_ActionPalLiftup_C");
static_assert(offsetof(UBP_ActionPalLiftup_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionPalLiftup_C::UberGraphFrame' has a wrong offset!");

}
