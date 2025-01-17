#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Control_Settings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Control_Settings.WBP_Control_Settings_C
// 0x01A0 (0x0418 - 0x0278)
class UWBP_Control_Settings_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VerticalBox_GP;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_KM;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_UI;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_AIM;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Dash;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_GP_AIM;                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_GP_Dash;                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_GP_ToggleLongPress;             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_HideChat;                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_LStick_Threshold;               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_RStick_Sensitivity;             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_RStick_Threshold;               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_RStick_X;                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_RStick_Y;                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Sensitivity;                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_ToggleLongPress;                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_UI_DamageScale;                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_UI_MaxDamageDisplayNum;         // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_UI_TutorialDisplay;             // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Vibration;                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_X;                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Y;                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalOptionAudioSettings                AudioSettingCache;                                 // 0x0330(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_39A0[0x4];                                     // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDataTableRowHandle>            LevelMsgIds;                                       // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          SomethingChanged;                                  // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39A1[0x3];                                     // 0x0361(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalOptionKeyboardSettings             KeyboardSettingCache;                              // 0x0364(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalOptionLocalStaticSettings          LocalStaticSettingCache;                           // 0x0378(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalOptionPadSettings                  PadSettingCache;                                   // 0x03C8(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_39A2[0x4];                                     // 0x03E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UVerticalBox*>                   VerticalBoxs;                                      // 0x03E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_PalCommonButtonBase_C*>     FirstRows;                                         // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         Current;                                           // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalOptionUISettings                   UISettingCache;                                    // 0x040C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void OnRStickSensiChanged(double Value);
	void OnMouseYChanged(bool IsOn);
	void OnMouseXChanged(bool IsOn);
	void OnMouseSensiChanged(double Value);
	void OnMouseAIMChanged(double Value);
	void OnLStickThreChanged(double Value);
	void OnHideChatChanged(bool IsOn);
	void OnGPDashChanged(bool IsOn);
	void OnGPAimChanged(double Value);
	void OnDashChanged(bool IsOn);
	void OnChangedMaxDamageDisplayNum(double Value);
	void OnChangedDamageTextScale(double Value);
	void GetDesiredFocusTarget(class UWidget** Target);
	void ExecuteUbergraph_WBP_Control_Settings(int32 EntryPoint);
	void Construct();
	void ApplySettings();
	void OnRStickThreChanged(double Value);
	void OnRStickXChanged(bool IsOn);
	void OnRStickYChanged(bool IsOn);
	void OnToggleLongPressChanged(bool IsOn);
	void OnToggleLongPressChanged_GP(bool IsOn);
	void OnTutorialDisplayChanged(bool IsOn);
	void OnVibChanged(bool IsOn);
	void SetDefault();
	void SwitchPanel(int32 Param_Index);
	void SwitchTab(bool Next);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Control_Settings_C">();
	}
	static class UWBP_Control_Settings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Control_Settings_C>();
	}
};
static_assert(alignof(UWBP_Control_Settings_C) == 0x000008, "Wrong alignment on UWBP_Control_Settings_C");
static_assert(sizeof(UWBP_Control_Settings_C) == 0x000418, "Wrong size on UWBP_Control_Settings_C");
static_assert(offsetof(UWBP_Control_Settings_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Control_Settings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, VerticalBox_GP) == 0x000280, "Member 'UWBP_Control_Settings_C::VerticalBox_GP' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, VerticalBox_KM) == 0x000288, "Member 'UWBP_Control_Settings_C::VerticalBox_KM' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, VerticalBox_UI) == 0x000290, "Member 'UWBP_Control_Settings_C::VerticalBox_UI' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_AIM) == 0x000298, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_AIM' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_Dash) == 0x0002A0, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_Dash' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_GP_AIM) == 0x0002A8, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_GP_AIM' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_GP_Dash) == 0x0002B0, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_GP_Dash' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_GP_ToggleLongPress) == 0x0002B8, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_GP_ToggleLongPress' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_HideChat) == 0x0002C0, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_HideChat' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_LStick_Threshold) == 0x0002C8, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_LStick_Threshold' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_RStick_Sensitivity) == 0x0002D0, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_RStick_Sensitivity' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_RStick_Threshold) == 0x0002D8, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_RStick_Threshold' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_RStick_X) == 0x0002E0, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_RStick_X' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_RStick_Y) == 0x0002E8, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_RStick_Y' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_Sensitivity) == 0x0002F0, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_Sensitivity' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_ToggleLongPress) == 0x0002F8, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_ToggleLongPress' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_UI_DamageScale) == 0x000300, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_UI_DamageScale' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_UI_MaxDamageDisplayNum) == 0x000308, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_UI_MaxDamageDisplayNum' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_UI_TutorialDisplay) == 0x000310, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_UI_TutorialDisplay' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_Vibration) == 0x000318, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_Vibration' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_X) == 0x000320, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_X' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_Y) == 0x000328, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_Y' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, AudioSettingCache) == 0x000330, "Member 'UWBP_Control_Settings_C::AudioSettingCache' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, LevelMsgIds) == 0x000350, "Member 'UWBP_Control_Settings_C::LevelMsgIds' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, SomethingChanged) == 0x000360, "Member 'UWBP_Control_Settings_C::SomethingChanged' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, KeyboardSettingCache) == 0x000364, "Member 'UWBP_Control_Settings_C::KeyboardSettingCache' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, LocalStaticSettingCache) == 0x000378, "Member 'UWBP_Control_Settings_C::LocalStaticSettingCache' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, PadSettingCache) == 0x0003C8, "Member 'UWBP_Control_Settings_C::PadSettingCache' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, VerticalBoxs) == 0x0003E8, "Member 'UWBP_Control_Settings_C::VerticalBoxs' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, FirstRows) == 0x0003F8, "Member 'UWBP_Control_Settings_C::FirstRows' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, Current) == 0x000408, "Member 'UWBP_Control_Settings_C::Current' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, UISettingCache) == 0x00040C, "Member 'UWBP_Control_Settings_C::UISettingCache' has a wrong offset!");

}

