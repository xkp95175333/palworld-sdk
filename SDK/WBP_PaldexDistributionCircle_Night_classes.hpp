#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PaldexDistributionCircle_Night

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PaldexDistributionCircle_Night.WBP_PaldexDistributionCircle_Night_C
// 0x0010 (0x0288 - 0x0278)
class UWBP_PaldexDistributionCircle_Night_C final : public UUserWidget
{
public:
	class UCanvasPanel*                           CanvasPanel_35;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_10;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PaldexDistributionCircle_Night_C">();
	}
	static class UWBP_PaldexDistributionCircle_Night_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PaldexDistributionCircle_Night_C>();
	}
};
static_assert(alignof(UWBP_PaldexDistributionCircle_Night_C) == 0x000008, "Wrong alignment on UWBP_PaldexDistributionCircle_Night_C");
static_assert(sizeof(UWBP_PaldexDistributionCircle_Night_C) == 0x000288, "Wrong size on UWBP_PaldexDistributionCircle_Night_C");
static_assert(offsetof(UWBP_PaldexDistributionCircle_Night_C, CanvasPanel_35) == 0x000278, "Member 'UWBP_PaldexDistributionCircle_Night_C::CanvasPanel_35' has a wrong offset!");
static_assert(offsetof(UWBP_PaldexDistributionCircle_Night_C, Image_10) == 0x000280, "Member 'UWBP_PaldexDistributionCircle_Night_C::Image_10' has a wrong offset!");

}

