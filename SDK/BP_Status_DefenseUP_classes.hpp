#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_DefenseUP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Status_DefenseUP.BP_Status_DefenseUP_C
// 0x0008 (0x0050 - 0x0048)
class UBP_Status_DefenseUP_C final : public UPalStatusBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0048(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Status_DefenseUP(int32 EntryPoint);
	void OnBeginStatus();
	void OnEndStatus();
	void OnLoaded_A2F777004366F513ABBD72ACA012C04D(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Status_DefenseUP_C">();
	}
	static class UBP_Status_DefenseUP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Status_DefenseUP_C>();
	}
};
static_assert(alignof(UBP_Status_DefenseUP_C) == 0x000008, "Wrong alignment on UBP_Status_DefenseUP_C");
static_assert(sizeof(UBP_Status_DefenseUP_C) == 0x000050, "Wrong size on UBP_Status_DefenseUP_C");
static_assert(offsetof(UBP_Status_DefenseUP_C, UberGraphFrame) == 0x000048, "Member 'UBP_Status_DefenseUP_C::UberGraphFrame' has a wrong offset!");

}

