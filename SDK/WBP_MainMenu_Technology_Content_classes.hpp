#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu_Technology_Content

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C
// 0x0158 (0x0560 - 0x0408)
class UWBP_MainMenu_Technology_Content_C final : public UPalUIRecipeTechnologyDetailButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Ancient_LockToUnlock;                          // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Ancient_Lock;                                  // 0x0418(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Ancient_UnLock;                                // 0x0420(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_LockToUnlock;                                  // 0x0428(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Disable;                                       // 0x0430(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Unlock;                                        // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Lock;                                          // 0x0440(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_NormalToFocus;                                 // 0x0448(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_Category;                          // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon_TechPoint_0;                            // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon_TechPoint_1;                            // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Prereq;                                    // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 RichText_TechnologyName_Lock;                      // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 RichText_TechnologyName_Unlock;                    // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Text;                                              // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Prereq;                                       // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_RequireBossDefeat;                            // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_RequirePointNum;                              // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_NewDot_C*                 WBP_MainMenu_NewDot;                               // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalDataTableRowName_RecipeTechnologyData Technology;                                        // 0x04C0(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnHoveredButton;                                   // 0x04C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhoveredButton;                                 // 0x04D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedButton;                                   // 0x04E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsFocused;                                         // 0x04F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3525[0x7];                                     // 0x04F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    UnlockBuildObjectInfoMsgId;                        // 0x0500(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    UnlockRecipeInfoMsgId;                             // 0x0510(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    MaskUnknownMsgId;                                  // 0x0520(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                   BindedTechnologyName;                              // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldMask;                                        // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Boss_Technology;                                // 0x0539(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3526[0x6];                                     // 0x053A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    BuildingMsgId;                                     // 0x0540(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ItemMsgId;                                         // 0x0550(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void AnmEvent_Focus();
	void AnmEvent_Unfocus();
	void AnmEvent_Unlock();
	void AnmEvent_UpdateDetail();
	void BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_MainMenu_Technology_Content(int32 EntryPoint);
	void GetBindedTechnologyName(class FName* TechnologyName);
	void IsUnlockable(bool* Param_IsUnlockable);
	void IsUnlocked(bool* Param_IsUnlocked);
	void OnClickedButton__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
	void OnHovered_Internal();
	void OnHoveredButton__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
	void OnInitialized();
	void OnUnhovered_Internal();
	void OnUnhoveredButton__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
	void PreConstruct(bool IsDesignTime);
	void SetShouldMaskSkillUnlock(TArray<class FName>& ItemRecipes);
	void Setup(class FName TechnologyName);
	void UpdateButtonDetail();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MainMenu_Technology_Content_C">();
	}
	static class UWBP_MainMenu_Technology_Content_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MainMenu_Technology_Content_C>();
	}
};
static_assert(alignof(UWBP_MainMenu_Technology_Content_C) == 0x000008, "Wrong alignment on UWBP_MainMenu_Technology_Content_C");
static_assert(sizeof(UWBP_MainMenu_Technology_Content_C) == 0x000560, "Wrong size on UWBP_MainMenu_Technology_Content_C");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, UberGraphFrame) == 0x000408, "Member 'UWBP_MainMenu_Technology_Content_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Anm_Ancient_LockToUnlock) == 0x000410, "Member 'UWBP_MainMenu_Technology_Content_C::Anm_Ancient_LockToUnlock' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Anm_Ancient_Lock) == 0x000418, "Member 'UWBP_MainMenu_Technology_Content_C::Anm_Ancient_Lock' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Anm_Ancient_UnLock) == 0x000420, "Member 'UWBP_MainMenu_Technology_Content_C::Anm_Ancient_UnLock' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Anm_LockToUnlock) == 0x000428, "Member 'UWBP_MainMenu_Technology_Content_C::Anm_LockToUnlock' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Anm_Disable) == 0x000430, "Member 'UWBP_MainMenu_Technology_Content_C::Anm_Disable' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Anm_Unlock) == 0x000438, "Member 'UWBP_MainMenu_Technology_Content_C::Anm_Unlock' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Anm_Lock) == 0x000440, "Member 'UWBP_MainMenu_Technology_Content_C::Anm_Lock' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Anm_NormalToFocus) == 0x000448, "Member 'UWBP_MainMenu_Technology_Content_C::Anm_NormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, BP_PalTextBlock_Category) == 0x000450, "Member 'UWBP_MainMenu_Technology_Content_C::BP_PalTextBlock_Category' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Image_Icon) == 0x000458, "Member 'UWBP_MainMenu_Technology_Content_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Image_Icon_TechPoint_0) == 0x000460, "Member 'UWBP_MainMenu_Technology_Content_C::Image_Icon_TechPoint_0' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Image_Icon_TechPoint_1) == 0x000468, "Member 'UWBP_MainMenu_Technology_Content_C::Image_Icon_TechPoint_1' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, InvalidationBox_0) == 0x000470, "Member 'UWBP_MainMenu_Technology_Content_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Overlay_Prereq) == 0x000478, "Member 'UWBP_MainMenu_Technology_Content_C::Overlay_Prereq' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, RichText_TechnologyName_Lock) == 0x000480, "Member 'UWBP_MainMenu_Technology_Content_C::RichText_TechnologyName_Lock' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, RichText_TechnologyName_Unlock) == 0x000488, "Member 'UWBP_MainMenu_Technology_Content_C::RichText_TechnologyName_Unlock' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Text) == 0x000490, "Member 'UWBP_MainMenu_Technology_Content_C::Text' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Text_Prereq) == 0x000498, "Member 'UWBP_MainMenu_Technology_Content_C::Text_Prereq' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Text_RequireBossDefeat) == 0x0004A0, "Member 'UWBP_MainMenu_Technology_Content_C::Text_RequireBossDefeat' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Text_RequirePointNum) == 0x0004A8, "Member 'UWBP_MainMenu_Technology_Content_C::Text_RequirePointNum' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, WBP_MainMenu_NewDot) == 0x0004B0, "Member 'UWBP_MainMenu_Technology_Content_C::WBP_MainMenu_NewDot' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, WBP_PalInvisibleButton) == 0x0004B8, "Member 'UWBP_MainMenu_Technology_Content_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Technology) == 0x0004C0, "Member 'UWBP_MainMenu_Technology_Content_C::Technology' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, OnHoveredButton) == 0x0004C8, "Member 'UWBP_MainMenu_Technology_Content_C::OnHoveredButton' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, OnUnhoveredButton) == 0x0004D8, "Member 'UWBP_MainMenu_Technology_Content_C::OnUnhoveredButton' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, OnClickedButton) == 0x0004E8, "Member 'UWBP_MainMenu_Technology_Content_C::OnClickedButton' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, IsFocused) == 0x0004F8, "Member 'UWBP_MainMenu_Technology_Content_C::IsFocused' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, UnlockBuildObjectInfoMsgId) == 0x000500, "Member 'UWBP_MainMenu_Technology_Content_C::UnlockBuildObjectInfoMsgId' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, UnlockRecipeInfoMsgId) == 0x000510, "Member 'UWBP_MainMenu_Technology_Content_C::UnlockRecipeInfoMsgId' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, MaskUnknownMsgId) == 0x000520, "Member 'UWBP_MainMenu_Technology_Content_C::MaskUnknownMsgId' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, BindedTechnologyName) == 0x000530, "Member 'UWBP_MainMenu_Technology_Content_C::BindedTechnologyName' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, ShouldMask) == 0x000538, "Member 'UWBP_MainMenu_Technology_Content_C::ShouldMask' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, Is_Boss_Technology) == 0x000539, "Member 'UWBP_MainMenu_Technology_Content_C::Is_Boss_Technology' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, BuildingMsgId) == 0x000540, "Member 'UWBP_MainMenu_Technology_Content_C::BuildingMsgId' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Technology_Content_C, ItemMsgId) == 0x000550, "Member 'UWBP_MainMenu_Technology_Content_C::ItemMsgId' has a wrong offset!");

}
