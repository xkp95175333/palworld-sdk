#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ConvertItemStatusIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C
// 0x0038 (0x0440 - 0x0408)
class UWBP_ConvertItemStatusIndicator_C final : public UPalUIMapObjectStatusIndicatorBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PalCraftInfo_C*                    WBP_PalCraftInfo;                                  // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsDisplayedDetail;                                 // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValidRecipe;                                     // 0x0419(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4818[0x6];                                     // 0x041A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DisplayDetailRange;                                // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           LocationCheckTimerHandle;                          // 0x0428(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFirstSetup;                                      // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4819[0x7];                                     // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectConvertItemModel*          Model;                                             // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CheckLocationEvent();
	void CloseDetail();
	void Construct();
	void Destruct();
	void DisplayDetail();
	void ExecuteUbergraph_WBP_ConvertItemStatusIndicator(int32 EntryPoint);
	void Initialize();
	void OnReflectWorkProgress(class UPalWorkProgress* WorkProgress);
	void OnSetup();
	void OnUpdatedWorkerPal(class UPalWorkBase* Work);
	void OnUpdateProductSlot(class UPalItemSlot* Param_Slot);
	void OnUpdateRecipe(class UPalMapObjectConvertItemModel* Param_Model);
	void UpdateProductNum(class UPalMapObjectConvertItemModel* Param_Model);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ConvertItemStatusIndicator_C">();
	}
	static class UWBP_ConvertItemStatusIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ConvertItemStatusIndicator_C>();
	}
};
static_assert(alignof(UWBP_ConvertItemStatusIndicator_C) == 0x000008, "Wrong alignment on UWBP_ConvertItemStatusIndicator_C");
static_assert(sizeof(UWBP_ConvertItemStatusIndicator_C) == 0x000440, "Wrong size on UWBP_ConvertItemStatusIndicator_C");
static_assert(offsetof(UWBP_ConvertItemStatusIndicator_C, UberGraphFrame) == 0x000408, "Member 'UWBP_ConvertItemStatusIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ConvertItemStatusIndicator_C, WBP_PalCraftInfo) == 0x000410, "Member 'UWBP_ConvertItemStatusIndicator_C::WBP_PalCraftInfo' has a wrong offset!");
static_assert(offsetof(UWBP_ConvertItemStatusIndicator_C, IsDisplayedDetail) == 0x000418, "Member 'UWBP_ConvertItemStatusIndicator_C::IsDisplayedDetail' has a wrong offset!");
static_assert(offsetof(UWBP_ConvertItemStatusIndicator_C, IsValidRecipe) == 0x000419, "Member 'UWBP_ConvertItemStatusIndicator_C::IsValidRecipe' has a wrong offset!");
static_assert(offsetof(UWBP_ConvertItemStatusIndicator_C, DisplayDetailRange) == 0x000420, "Member 'UWBP_ConvertItemStatusIndicator_C::DisplayDetailRange' has a wrong offset!");
static_assert(offsetof(UWBP_ConvertItemStatusIndicator_C, LocationCheckTimerHandle) == 0x000428, "Member 'UWBP_ConvertItemStatusIndicator_C::LocationCheckTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_ConvertItemStatusIndicator_C, IsFirstSetup) == 0x000430, "Member 'UWBP_ConvertItemStatusIndicator_C::IsFirstSetup' has a wrong offset!");
static_assert(offsetof(UWBP_ConvertItemStatusIndicator_C, Model) == 0x000438, "Member 'UWBP_ConvertItemStatusIndicator_C::Model' has a wrong offset!");

}
