#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPCAIController_Invader

#include "Basic.hpp"

#include "BP_NPCAIController_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPCAIController_Invader.BP_NPCAIController_Invader_C
// 0x0018 (0x05A0 - 0x0588)
class ABP_NPCAIController_Invader_C final : public ABP_NPCAIController_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_NPCAIController_Invader_C;       // 0x0588(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnInvaderArrivedDelegate;                          // 0x0590(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BindOnInvaderArrivedDelegate(TDelegate<void()> Event);
	void ExecuteUbergraph_BP_NPCAIController_Invader(int32 EntryPoint);
	void ForceBattleStartForOutside(class AActor* StartActor);
	void OnInvaderArrived();
	void OnInvaderArrivedDelegate__DelegateSignature();
	void ReturnSpawnedPoint(const struct FVector& ReturnPos);
	void StartMarch(const struct FVector& GoalPos);
	void ReceiveBeginPlay();
	void SetAutoDefaultAIAction();
	void StartDefaultAIAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCAIController_Invader_C">();
	}
	static class ABP_NPCAIController_Invader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPCAIController_Invader_C>();
	}
};
static_assert(alignof(ABP_NPCAIController_Invader_C) == 0x000008, "Wrong alignment on ABP_NPCAIController_Invader_C");
static_assert(sizeof(ABP_NPCAIController_Invader_C) == 0x0005A0, "Wrong size on ABP_NPCAIController_Invader_C");
static_assert(offsetof(ABP_NPCAIController_Invader_C, UberGraphFrame_BP_NPCAIController_Invader_C) == 0x000588, "Member 'ABP_NPCAIController_Invader_C::UberGraphFrame_BP_NPCAIController_Invader_C' has a wrong offset!");
static_assert(offsetof(ABP_NPCAIController_Invader_C, OnInvaderArrivedDelegate) == 0x000590, "Member 'ABP_NPCAIController_Invader_C::OnInvaderArrivedDelegate' has a wrong offset!");

}
