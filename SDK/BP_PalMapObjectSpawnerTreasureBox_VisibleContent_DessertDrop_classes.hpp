#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop.BP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop_C
// 0x0020 (0x0308 - 0x02E8)
class ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop_C final : public APalMapObjectSpawnerTreasureBox
{
public:
	class UArrowComponent*                        DebugMarker;                                       // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   VisualActor;                                       // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop_C">();
	}
	static class ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop_C>();
	}
};
static_assert(alignof(ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop_C) == 0x000008, "Wrong alignment on ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop_C");
static_assert(sizeof(ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop_C) == 0x000308, "Wrong size on ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop_C");
static_assert(offsetof(ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop_C, DebugMarker) == 0x0002E8, "Member 'ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop_C::DebugMarker' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop_C, Scene) == 0x0002F0, "Member 'ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop_C, Arrow) == 0x0002F8, "Member 'ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop_C, VisualActor) == 0x000300, "Member 'ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_DessertDrop_C::VisualActor' has a wrong offset!");

}

