#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalMapObjectSpawner_Treasure_Grass_Grade_01

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalMapObjectSpawner_Treasure_Grass_Grade_01.BP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C
// 0x0020 (0x0308 - 0x02E8)
class ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C : public APalMapObjectSpawnerTreasureBox
{
public:
	class UArrowComponent*                        Arrow1;                                            // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LocationBenchmark;                                 // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   VisualActor;                                       // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C">();
	}
	static class ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C>();
	}
};
static_assert(alignof(ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C) == 0x000008, "Wrong alignment on ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C");
static_assert(sizeof(ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C) == 0x000308, "Wrong size on ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C");
static_assert(offsetof(ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C, Arrow1) == 0x0002E8, "Member 'ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C::Arrow1' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C, LocationBenchmark) == 0x0002F0, "Member 'ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C::LocationBenchmark' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C, Arrow) == 0x0002F8, "Member 'ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C, VisualActor) == 0x000300, "Member 'ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C::VisualActor' has a wrong offset!");

}
