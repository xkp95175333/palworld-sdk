#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WorlSuitabilityPreference_PalList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "WBP_IndividualParameterBindWidget_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_WorlSuitabilityPreference_PalList.WBP_WorlSuitabilityPreference_PalList_C
// 0x01C8 (0x0768 - 0x05A0)
class UWBP_WorlSuitabilityPreference_PalList_C final : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_WorlSuitabilityPreference_PalList_C; // 0x05A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_PalInfo_Simple;                        // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_PalInfo_TaskDetail;                    // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_CheckBox;                            // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_97;                                          // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_203;                                         // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PalIcon;                                     // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_FixedAssign;                               // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_FreeAssign;                                // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Night;                                     // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_CurrentTask;                                  // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Pal_LevelValue;                               // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Pal_name;                                     // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Task_Fix;                                     // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Task_Free;                                    // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Task_Free_1;                                  // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EnemyGauge_SAN_C*                  WBP_EnemyGauge_SAN;                                // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*              WBP_MainMenu_Pal_State_0;                          // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*              WBP_MainMenu_Pal_State_1;                          // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*              WBP_MainMenu_Pal_State_2;                          // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_MainMenu_Pal_State_C*>      ConditionWidgets;                                  // 0x0670(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FTimerHandle                           UpdateWorkDetailTimerHandle;                       // 0x0680(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UPalIndividualCharacterSlot> bindedSlot;                                        // 0x0688(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    FixedAssignMsgID;                                  // 0x06B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    FreeAssignMsgID;                                   // 0x06C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TMap<EPalWorkSuitability, class UWBP_WorkSuitabilityPreference_CheckBox_0_C*> SuitabilityCheckBoxMap;                            // 0x06D8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnChangedSuitabilityCheck;                         // 0x0728(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_WorkSuitabilityPreference_CheckBox_0_C* BattleModeCheckBox;                                // 0x0738(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangedBattleModeCheck;                          // 0x0740(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHoveredCheckBox;                                 // 0x0750(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         LastHoveredCheckBoxIndex;                          // 0x0760(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ArrangeHorizontalSlot_ForCheckBox(class UHorizontalBoxSlot* Param_Slot);
	void BindFromSlot(class UPalIndividualCharacterSlot* TargetSlot);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_WorlSuitabilityPreference_PalList(int32 EntryPoint);
	void GetFocusTargetByCheckBoxIndex(int32 Param_Index, class UWidget** TargetWidget);
	void GetLastHoveredCheckBoxIndex(int32* Param_Index);
	void GetTopFocusTarget(class UWidget** Target);
	void OnChangedBattleModeCheck__DelegateSignature(bool IsChecked, class UPalIndividualCharacterSlot* TargetSlot);
	void OnChangedBattleModeCheckState_Internal(bool IsChecked, EPalWorkSuitability Suitability);
	void OnChangedSuitabilityCheck__DelegateSignature(bool IsChecked, EPalWorkSuitability Suitability, class UPalIndividualCharacterSlot* TargetSlot);
	void OnChangedSuitabilityCheckState_Internal(bool IsChecked, EPalWorkSuitability Suitability);
	void OnHoveredCheckBox__DelegateSignature(class UWBP_WorlSuitabilityPreference_PalList_C* SelfWidget);
	void OnHoveredCheckBox_Internal(class UWBP_WorkSuitabilityPreference_CheckBox_0_C* CheckBox);
	void OnInitialized();
	void OnUpdateCondition_Binded();
	void OnUpdateLevel_binded(int32 NewLevel);
	void OnUpdateNickName_Binded(const class FString& NewNickName);
	void OnUpdateSanity_Binded(double NowSanity, double NowMaxSanity);
	void OnUpdateSlotHandle(class UPalIndividualCharacterSlot* Param_Slot, class UPalIndividualCharacterHandle* LastHandle);
	void OnUpdateWorkSuitabilityOption_Binded(const struct FPalWorkSuitabilityPreferenceInfo& Info);
	void Set_Work_Suitability(const TMap<EPalWorkSuitability, int32>& WorkSuitabilities);
	void SetEnableTaskDetail(bool IsEnable);
	void SetFixedAssignMode(bool IsFixedAssign);
	void SetupCheckBox();
	void Unbind();
	void UpdateWorkDetail_Timer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_WorlSuitabilityPreference_PalList_C">();
	}
	static class UWBP_WorlSuitabilityPreference_PalList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WorlSuitabilityPreference_PalList_C>();
	}
};
static_assert(alignof(UWBP_WorlSuitabilityPreference_PalList_C) == 0x000008, "Wrong alignment on UWBP_WorlSuitabilityPreference_PalList_C");
static_assert(sizeof(UWBP_WorlSuitabilityPreference_PalList_C) == 0x000768, "Wrong size on UWBP_WorlSuitabilityPreference_PalList_C");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, UberGraphFrame_WBP_WorlSuitabilityPreference_PalList_C) == 0x0005A0, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::UberGraphFrame_WBP_WorlSuitabilityPreference_PalList_C' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, CanvasPanel_PalInfo_Simple) == 0x0005A8, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::CanvasPanel_PalInfo_Simple' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, CanvasPanel_PalInfo_TaskDetail) == 0x0005B0, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::CanvasPanel_PalInfo_TaskDetail' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, HorizontalBox_CheckBox) == 0x0005B8, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::HorizontalBox_CheckBox' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Image) == 0x0005C0, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Image_1) == 0x0005C8, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Image_2) == 0x0005D0, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Image_3) == 0x0005D8, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Image_3' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Image_4) == 0x0005E0, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Image_4' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Image_5) == 0x0005E8, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Image_5' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Image_97) == 0x0005F0, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Image_97' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Image_203) == 0x0005F8, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Image_203' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Image_PalIcon) == 0x000600, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Image_PalIcon' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Overlay_FixedAssign) == 0x000608, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Overlay_FixedAssign' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Overlay_FreeAssign) == 0x000610, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Overlay_FreeAssign' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Overlay_Night) == 0x000618, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Overlay_Night' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Text_CurrentTask) == 0x000620, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Text_CurrentTask' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Text_Pal_LevelValue) == 0x000628, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Text_Pal_LevelValue' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Text_Pal_name) == 0x000630, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Text_Pal_name' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Text_Task_Fix) == 0x000638, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Text_Task_Fix' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Text_Task_Free) == 0x000640, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Text_Task_Free' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, Text_Task_Free_1) == 0x000648, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::Text_Task_Free_1' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, WBP_EnemyGauge_SAN) == 0x000650, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::WBP_EnemyGauge_SAN' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, WBP_MainMenu_Pal_State_0) == 0x000658, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::WBP_MainMenu_Pal_State_0' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, WBP_MainMenu_Pal_State_1) == 0x000660, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::WBP_MainMenu_Pal_State_1' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, WBP_MainMenu_Pal_State_2) == 0x000668, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::WBP_MainMenu_Pal_State_2' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, ConditionWidgets) == 0x000670, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::ConditionWidgets' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, UpdateWorkDetailTimerHandle) == 0x000680, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::UpdateWorkDetailTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, bindedSlot) == 0x000688, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::bindedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, FixedAssignMsgID) == 0x0006B8, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::FixedAssignMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, FreeAssignMsgID) == 0x0006C8, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::FreeAssignMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, SuitabilityCheckBoxMap) == 0x0006D8, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::SuitabilityCheckBoxMap' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, OnChangedSuitabilityCheck) == 0x000728, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::OnChangedSuitabilityCheck' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, BattleModeCheckBox) == 0x000738, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::BattleModeCheckBox' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, OnChangedBattleModeCheck) == 0x000740, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::OnChangedBattleModeCheck' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, OnHoveredCheckBox) == 0x000750, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::OnHoveredCheckBox' has a wrong offset!");
static_assert(offsetof(UWBP_WorlSuitabilityPreference_PalList_C, LastHoveredCheckBoxIndex) == 0x000760, "Member 'UWBP_WorlSuitabilityPreference_PalList_C::LastHoveredCheckBoxIndex' has a wrong offset!");

}
