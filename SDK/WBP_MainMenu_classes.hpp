#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EPalUIInGameMainMenuTabType_structs.hpp"
#include "WBP_PanelWidgetChildrenSelectorBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MainMenu.WBP_MainMenu_C
// 0x00B0 (0x0510 - 0x0460)
class UWBP_MainMenu_C final : public UWBP_PanelWidgetChildrenSelectorBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_MainMenu_C;                     // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Close_Main_Menu;                               // 0x0468(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open_Main_menu;                                // 0x0470(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Tab;                                 // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Tab_C*                    WBP_Tab_00;                                        // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Tab_C*                    WBP_Tab_01;                                        // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Tab_C*                    WBP_Tab_02;                                        // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Tab_C*                    WBP_Tab_03;                                        // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Tab_C*                    WBP_Tab_04;                                        // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Tab_C*                    WBP_Tab_05;                                        // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Main_Menu_Tab_Key_C*               WBP_Tab_Key_L;                                     // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Main_Menu_Tab_Key_C*               WBP_Tab_Key_R;                                     // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<EPalUIInGameMainMenuTabType, class UWBP_MainMenu_Tab_C*> TabWidgetMap;                                      // 0x04C0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void Anm_Focus(EPalUIInGameMainMenuTabType Type);
	void Anm_FocusToNormal(EPalUIInGameMainMenuTabType Type);
	void Anm_Open();
	void BndEvt__WBP_MainMenu_WBP_Tab_Key_L_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_MainMenu_WBP_Tab_Key_R_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_MainMenu(int32 EntryPoint);
	void GetTabWidgetByMenuType(EPalUIInGameMainMenuTabType MenuType, class UWBP_MainMenu_Tab_C** TabWidget);
	void OnChangedIndexEvent(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
	void OnClickedTabEvent(class UWBP_MainMenu_Tab_C* TabWidget);
	void OnNextEvent(int32 OldIndex, int32 NewIndex);
	void OnPrevEvent(int32 OldIndex, int32 NewIndex);
	void SelectByMainMenuType(EPalUIInGameMainMenuTabType Type);
	void OnInitialized();
	void RegisterPanelWidget(class UPanelWidget** PanelWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MainMenu_C">();
	}
	static class UWBP_MainMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MainMenu_C>();
	}
};
static_assert(alignof(UWBP_MainMenu_C) == 0x000008, "Wrong alignment on UWBP_MainMenu_C");
static_assert(sizeof(UWBP_MainMenu_C) == 0x000510, "Wrong size on UWBP_MainMenu_C");
static_assert(offsetof(UWBP_MainMenu_C, UberGraphFrame_WBP_MainMenu_C) == 0x000460, "Member 'UWBP_MainMenu_C::UberGraphFrame_WBP_MainMenu_C' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_C, Anm_Close_Main_Menu) == 0x000468, "Member 'UWBP_MainMenu_C::Anm_Close_Main_Menu' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_C, Anm_Open_Main_menu) == 0x000470, "Member 'UWBP_MainMenu_C::Anm_Open_Main_menu' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_C, HorizontalBox_Tab) == 0x000478, "Member 'UWBP_MainMenu_C::HorizontalBox_Tab' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_C, WBP_Tab_00) == 0x000480, "Member 'UWBP_MainMenu_C::WBP_Tab_00' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_C, WBP_Tab_01) == 0x000488, "Member 'UWBP_MainMenu_C::WBP_Tab_01' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_C, WBP_Tab_02) == 0x000490, "Member 'UWBP_MainMenu_C::WBP_Tab_02' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_C, WBP_Tab_03) == 0x000498, "Member 'UWBP_MainMenu_C::WBP_Tab_03' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_C, WBP_Tab_04) == 0x0004A0, "Member 'UWBP_MainMenu_C::WBP_Tab_04' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_C, WBP_Tab_05) == 0x0004A8, "Member 'UWBP_MainMenu_C::WBP_Tab_05' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_C, WBP_Tab_Key_L) == 0x0004B0, "Member 'UWBP_MainMenu_C::WBP_Tab_Key_L' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_C, WBP_Tab_Key_R) == 0x0004B8, "Member 'UWBP_MainMenu_C::WBP_Tab_Key_R' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_C, TabWidgetMap) == 0x0004C0, "Member 'UWBP_MainMenu_C::TabWidgetMap' has a wrong offset!");

}
