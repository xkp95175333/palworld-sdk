#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC_Female_Soldier

#include "Basic.hpp"

#include "BP_NPC_StandardHumanDataSet_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPC_Female_Soldier.BP_NPC_Female_Soldier_C
// 0x0000 (0x0980 - 0x0980)
class ABP_NPC_Female_Soldier_C final : public ABP_NPC_StandardHumanDataSet_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPC_Female_Soldier_C">();
	}
	static class ABP_NPC_Female_Soldier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPC_Female_Soldier_C>();
	}
};
static_assert(alignof(ABP_NPC_Female_Soldier_C) == 0x000010, "Wrong alignment on ABP_NPC_Female_Soldier_C");
static_assert(sizeof(ABP_NPC_Female_Soldier_C) == 0x000980, "Wrong size on ABP_NPC_Female_Soldier_C");

}
