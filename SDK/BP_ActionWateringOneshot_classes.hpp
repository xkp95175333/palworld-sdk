#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionWateringOneshot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionSimpleMonoMontage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionWateringOneshot.BP_ActionWateringOneshot_C
// 0x0010 (0x0180 - 0x0170)
class UBP_ActionWateringOneshot_C final : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionWateringOneshot_C;         // 0x0168(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   WateredNotifyName;                                 // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionWateringOneshot(int32 EntryPoint);
	void NotifyWatered(class FName NotifyName);
	void OnNotifyBegin(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionWateringOneshot_C">();
	}
	static class UBP_ActionWateringOneshot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionWateringOneshot_C>();
	}
};
static_assert(alignof(UBP_ActionWateringOneshot_C) == 0x000010, "Wrong alignment on UBP_ActionWateringOneshot_C");
static_assert(sizeof(UBP_ActionWateringOneshot_C) == 0x000180, "Wrong size on UBP_ActionWateringOneshot_C");
static_assert(offsetof(UBP_ActionWateringOneshot_C, UberGraphFrame_BP_ActionWateringOneshot_C) == 0x000168, "Member 'UBP_ActionWateringOneshot_C::UberGraphFrame_BP_ActionWateringOneshot_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionWateringOneshot_C, WateredNotifyName) == 0x000170, "Member 'UBP_ActionWateringOneshot_C::WateredNotifyName' has a wrong offset!");

}
