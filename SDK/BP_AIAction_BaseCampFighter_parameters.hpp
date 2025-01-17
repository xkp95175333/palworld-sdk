#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_BaseCampFighter

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_BaseCampFighter.BP_AIAction_BaseCampFighter_C.ActionResume
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_BaseCampFighter_C_ActionResume final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_BaseCampFighter_C_ActionResume) == 0x000008, "Wrong alignment on BP_AIAction_BaseCampFighter_C_ActionResume");
static_assert(sizeof(BP_AIAction_BaseCampFighter_C_ActionResume) == 0x000008, "Wrong size on BP_AIAction_BaseCampFighter_C_ActionResume");
static_assert(offsetof(BP_AIAction_BaseCampFighter_C_ActionResume, ControlledPawn) == 0x000000, "Member 'BP_AIAction_BaseCampFighter_C_ActionResume::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_BaseCampFighter.BP_AIAction_BaseCampFighter_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_BaseCampFighter_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_BaseCampFighter_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_BaseCampFighter_C_ActionStart");
static_assert(sizeof(BP_AIAction_BaseCampFighter_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_BaseCampFighter_C_ActionStart");
static_assert(offsetof(BP_AIAction_BaseCampFighter_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_BaseCampFighter_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_BaseCampFighter.BP_AIAction_BaseCampFighter_C.ExecuteUbergraph_BP_AIAction_BaseCampFighter
// 0x0030 (0x0030 - 0x0000)
struct BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4132[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPawnActionsComponent*                  CallFunc_GetOwnerComponent_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_BaseCampFighter_Wait_C*    CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalMapBaseCampWorkerOrderType                K2Node_Event_OrderType;                            // 0x0020(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBattleOrderType_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4133[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter) == 0x000008, "Wrong alignment on BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter");
static_assert(sizeof(BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter) == 0x000030, "Wrong size on BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter");
static_assert(offsetof(BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter, EntryPoint) == 0x000000, "Member 'BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter, CallFunc_GetOwnerComponent_ReturnValue) == 0x000008, "Member 'BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter::CallFunc_GetOwnerComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter, K2Node_Event_ControlledPawn_1) == 0x000010, "Member 'BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter, K2Node_Event_OrderType) == 0x000020, "Member 'BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter::K2Node_Event_OrderType' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter, CallFunc_IsBattleOrderType_ReturnValue) == 0x000021, "Member 'BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter::CallFunc_IsBattleOrderType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter, K2Node_Event_ControlledPawn) == 0x000028, "Member 'BP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter::K2Node_Event_ControlledPawn' has a wrong offset!");

// Function BP_AIAction_BaseCampFighter.BP_AIAction_BaseCampFighter_C.NotifyOrderCommand
// 0x0001 (0x0001 - 0x0000)
struct BP_AIAction_BaseCampFighter_C_NotifyOrderCommand final
{
public:
	EPalMapBaseCampWorkerOrderType                OrderType;                                         // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_BaseCampFighter_C_NotifyOrderCommand) == 0x000001, "Wrong alignment on BP_AIAction_BaseCampFighter_C_NotifyOrderCommand");
static_assert(sizeof(BP_AIAction_BaseCampFighter_C_NotifyOrderCommand) == 0x000001, "Wrong size on BP_AIAction_BaseCampFighter_C_NotifyOrderCommand");
static_assert(offsetof(BP_AIAction_BaseCampFighter_C_NotifyOrderCommand, OrderType) == 0x000000, "Member 'BP_AIAction_BaseCampFighter_C_NotifyOrderCommand::OrderType' has a wrong offset!");

}

