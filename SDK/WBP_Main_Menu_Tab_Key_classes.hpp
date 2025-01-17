#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Main_Menu_Tab_Key

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Main_Menu_Tab_Key.WBP_Main_Menu_Tab_Key_C
// 0x0050 (0x02C8 - 0x0278)
class UWBP_Main_Menu_Tab_Key_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Push;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Normal;                                        // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Focus;                                         // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 WBP_PalKeyGuideIcon;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPalDataTableRowName_UIInputAction     bindActionName;                                    // 0x02C0(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_Focus();
	void AnmEvent_Push();
	void AnmEvent_Unfocus();
	void BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void ExecuteUbergraph_WBP_Main_Menu_Tab_Key(int32 EntryPoint);
	void OnClicked__DelegateSignature();
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Main_Menu_Tab_Key_C">();
	}
	static class UWBP_Main_Menu_Tab_Key_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Main_Menu_Tab_Key_C>();
	}
};
static_assert(alignof(UWBP_Main_Menu_Tab_Key_C) == 0x000008, "Wrong alignment on UWBP_Main_Menu_Tab_Key_C");
static_assert(sizeof(UWBP_Main_Menu_Tab_Key_C) == 0x0002C8, "Wrong size on UWBP_Main_Menu_Tab_Key_C");
static_assert(offsetof(UWBP_Main_Menu_Tab_Key_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Main_Menu_Tab_Key_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Main_Menu_Tab_Key_C, Anm_Push) == 0x000280, "Member 'UWBP_Main_Menu_Tab_Key_C::Anm_Push' has a wrong offset!");
static_assert(offsetof(UWBP_Main_Menu_Tab_Key_C, Anm_Normal) == 0x000288, "Member 'UWBP_Main_Menu_Tab_Key_C::Anm_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_Main_Menu_Tab_Key_C, Anm_Focus) == 0x000290, "Member 'UWBP_Main_Menu_Tab_Key_C::Anm_Focus' has a wrong offset!");
static_assert(offsetof(UWBP_Main_Menu_Tab_Key_C, Image) == 0x000298, "Member 'UWBP_Main_Menu_Tab_Key_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_Main_Menu_Tab_Key_C, WBP_PalInvisibleButton) == 0x0002A0, "Member 'UWBP_Main_Menu_Tab_Key_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_Main_Menu_Tab_Key_C, WBP_PalKeyGuideIcon) == 0x0002A8, "Member 'UWBP_Main_Menu_Tab_Key_C::WBP_PalKeyGuideIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Main_Menu_Tab_Key_C, OnClicked) == 0x0002B0, "Member 'UWBP_Main_Menu_Tab_Key_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_Main_Menu_Tab_Key_C, bindActionName) == 0x0002C0, "Member 'UWBP_Main_Menu_Tab_Key_C::bindActionName' has a wrong offset!");

}

