#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalDebugInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalDebugInfo.WBP_PalDebugInfo_C
// 0x0060 (0x0468 - 0x0408)
class UWBP_PalDebugInfo_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             RevisionText;                                      // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FString>            BuildConfigDisplayTextMap;                         // 0x0418(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Construct();
	void ExecuteUbergraph_WBP_PalDebugInfo(int32 EntryPoint);
	void OnSetup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalDebugInfo_C">();
	}
	static class UWBP_PalDebugInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalDebugInfo_C>();
	}
};
static_assert(alignof(UWBP_PalDebugInfo_C) == 0x000008, "Wrong alignment on UWBP_PalDebugInfo_C");
static_assert(sizeof(UWBP_PalDebugInfo_C) == 0x000468, "Wrong size on UWBP_PalDebugInfo_C");
static_assert(offsetof(UWBP_PalDebugInfo_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalDebugInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalDebugInfo_C, RevisionText) == 0x000410, "Member 'UWBP_PalDebugInfo_C::RevisionText' has a wrong offset!");
static_assert(offsetof(UWBP_PalDebugInfo_C, BuildConfigDisplayTextMap) == 0x000418, "Member 'UWBP_PalDebugInfo_C::BuildConfigDisplayTextMap' has a wrong offset!");

}
