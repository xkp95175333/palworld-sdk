#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalBossBattleManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalBossBattleManager.BP_PalBossBattleManager_C
// 0x0008 (0x0218 - 0x0210)
class UBP_PalBossBattleManager_C final : public UPalBossBattleManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void DisableSky(bool Activce, class APPSkyCreator* Sky);
	void DisableSkyCreator(bool Disable);
	void ExecuteUbergraph_BP_PalBossBattleManager(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalBossBattleManager_C">();
	}
	static class UBP_PalBossBattleManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalBossBattleManager_C>();
	}
};
static_assert(alignof(UBP_PalBossBattleManager_C) == 0x000008, "Wrong alignment on UBP_PalBossBattleManager_C");
static_assert(sizeof(UBP_PalBossBattleManager_C) == 0x000218, "Wrong size on UBP_PalBossBattleManager_C");
static_assert(offsetof(UBP_PalBossBattleManager_C, UberGraphFrame) == 0x000210, "Member 'UBP_PalBossBattleManager_C::UberGraphFrame' has a wrong offset!");

}
