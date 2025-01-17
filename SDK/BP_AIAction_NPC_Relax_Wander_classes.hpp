#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_NPC_Relax_Wander

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_AIAction_NPC_Relax_PathWalk_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_NPC_Relax_Wander.BP_AIAction_NPC_Relax_Wander_C
// 0x0050 (0x02C8 - 0x0278)
class UBP_AIAction_NPC_Relax_Wander_C : public UBP_AIAction_NPC_Relax_PathWalk_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIAction_NPC_Relax_Wander_C;     // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                WalkAreaCenter;                                    // 0x0280(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WalkRadius;                                        // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WaitSecMin;                                        // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WaitSecMax;                                        // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        NodeList;                                          // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         WalkAreaSplit_Num;                                 // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActionStart(class APawn* ControlledPawn);
	void Create_Inside_Nodes(double Radius, int32 SplitNum, TArray<struct FVector>* Nodes);
	void CreateCircumferenceNodes(double Radius, int32 SplitNum, TArray<struct FVector>* Nodes);
	void CreateNodes(const struct FVector& Center, double Radius, int32 SplitNum, TArray<struct FVector>* Nodes);
	void ExecuteUbergraph_BP_AIAction_NPC_Relax_Wander(int32 EntryPoint);
	void Get_Arrivable_Location(const struct FVector& V, bool* Result, struct FVector* Location);
	void HasNearPoint(TArray<struct FVector>& Nodes, const struct FVector& Point, bool* Result);
	void OnStuck();
	void OnTargetPointUpdateStart();
	void SelectTargetNode(struct FVector* Location, int32* Param_Index);
	void TryGetTargetLocation(int32 TryCount, bool* Result, struct FVector* Location);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_NPC_Relax_Wander_C">();
	}
	static class UBP_AIAction_NPC_Relax_Wander_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_NPC_Relax_Wander_C>();
	}
};
static_assert(alignof(UBP_AIAction_NPC_Relax_Wander_C) == 0x000008, "Wrong alignment on UBP_AIAction_NPC_Relax_Wander_C");
static_assert(sizeof(UBP_AIAction_NPC_Relax_Wander_C) == 0x0002C8, "Wrong size on UBP_AIAction_NPC_Relax_Wander_C");
static_assert(offsetof(UBP_AIAction_NPC_Relax_Wander_C, UberGraphFrame_BP_AIAction_NPC_Relax_Wander_C) == 0x000278, "Member 'UBP_AIAction_NPC_Relax_Wander_C::UberGraphFrame_BP_AIAction_NPC_Relax_Wander_C' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_Wander_C, WalkAreaCenter) == 0x000280, "Member 'UBP_AIAction_NPC_Relax_Wander_C::WalkAreaCenter' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_Wander_C, WalkRadius) == 0x000298, "Member 'UBP_AIAction_NPC_Relax_Wander_C::WalkRadius' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_Wander_C, WaitSecMin) == 0x0002A0, "Member 'UBP_AIAction_NPC_Relax_Wander_C::WaitSecMin' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_Wander_C, WaitSecMax) == 0x0002A8, "Member 'UBP_AIAction_NPC_Relax_Wander_C::WaitSecMax' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_Wander_C, NodeList) == 0x0002B0, "Member 'UBP_AIAction_NPC_Relax_Wander_C::NodeList' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_Wander_C, WalkAreaSplit_Num) == 0x0002C0, "Member 'UBP_AIAction_NPC_Relax_Wander_C::WalkAreaSplit_Num' has a wrong offset!");

}

