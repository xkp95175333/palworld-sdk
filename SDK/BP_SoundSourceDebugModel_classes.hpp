#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SoundSourceDebugModel

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SoundSourceDebugModel.BP_SoundSourceDebugModel_C
// 0x0010 (0x02A0 - 0x0290)
class ABP_SoundSourceDebugModel_C final : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SoundSourceDebugModel_C">();
	}
	static class ABP_SoundSourceDebugModel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SoundSourceDebugModel_C>();
	}
};
static_assert(alignof(ABP_SoundSourceDebugModel_C) == 0x000008, "Wrong alignment on ABP_SoundSourceDebugModel_C");
static_assert(sizeof(ABP_SoundSourceDebugModel_C) == 0x0002A0, "Wrong size on ABP_SoundSourceDebugModel_C");
static_assert(offsetof(ABP_SoundSourceDebugModel_C, StaticMesh) == 0x000290, "Member 'ABP_SoundSourceDebugModel_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_SoundSourceDebugModel_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_SoundSourceDebugModel_C::DefaultSceneRoot' has a wrong offset!");

}
