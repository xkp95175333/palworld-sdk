#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IngameMenu_WorkSpace_NumArrow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_WorkSpace_NumArrow.WBP_IngameMenu_WorkSpace_NumArrow_C
// 0x0050 (0x0458 - 0x0408)
class UWBP_IngameMenu_WorkSpace_NumArrow_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_SelectArrow;                                   // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ArrowHover;                                        // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DoubleArrowHover;                                  // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   InputActionName;                                   // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoubleArrow;                                       // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_Trigger();
	void BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void ExecuteUbergraph_WBP_IngameMenu_WorkSpace_NumArrow(int32 EntryPoint);
	void OnArrowClicked();
	void OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_WorkSpace_NumArrow_C">();
	}
	static class UWBP_IngameMenu_WorkSpace_NumArrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_WorkSpace_NumArrow_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_WorkSpace_NumArrow_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_WorkSpace_NumArrow_C");
static_assert(sizeof(UWBP_IngameMenu_WorkSpace_NumArrow_C) == 0x000458, "Wrong size on UWBP_IngameMenu_WorkSpace_NumArrow_C");
static_assert(offsetof(UWBP_IngameMenu_WorkSpace_NumArrow_C, UberGraphFrame) == 0x000408, "Member 'UWBP_IngameMenu_WorkSpace_NumArrow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_WorkSpace_NumArrow_C, Anm_SelectArrow) == 0x000410, "Member 'UWBP_IngameMenu_WorkSpace_NumArrow_C::Anm_SelectArrow' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_WorkSpace_NumArrow_C, ArrowHover) == 0x000418, "Member 'UWBP_IngameMenu_WorkSpace_NumArrow_C::ArrowHover' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_WorkSpace_NumArrow_C, DoubleArrowHover) == 0x000420, "Member 'UWBP_IngameMenu_WorkSpace_NumArrow_C::DoubleArrowHover' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_WorkSpace_NumArrow_C, WBP_PalInvisibleButton) == 0x000428, "Member 'UWBP_IngameMenu_WorkSpace_NumArrow_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_WorkSpace_NumArrow_C, WidgetSwitcher) == 0x000430, "Member 'UWBP_IngameMenu_WorkSpace_NumArrow_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_WorkSpace_NumArrow_C, OnClicked) == 0x000438, "Member 'UWBP_IngameMenu_WorkSpace_NumArrow_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_WorkSpace_NumArrow_C, InputActionName) == 0x000448, "Member 'UWBP_IngameMenu_WorkSpace_NumArrow_C::InputActionName' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_WorkSpace_NumArrow_C, DoubleArrow) == 0x000450, "Member 'UWBP_IngameMenu_WorkSpace_NumArrow_C::DoubleArrow' has a wrong offset!");

}
