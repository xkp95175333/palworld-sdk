#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MenuESCPlayerListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MenuESCPlayerListItem.WBP_MenuESCPlayerListItem_C
// 0x00C0 (0x0338 - 0x0278)
class UWBP_MenuESCPlayerListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Network_OnToOff;                               // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_RoleTextColor;                                 // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_NormalToFocus;                                 // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Base;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PlayerName;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    OnlineMsgID;                                       // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    OfflineMsgID;                                      // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPalUIGuildMemberDisplayInfo           MyDisplayInfo;                                     // 0x02E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 Player_UId;                                        // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Player_Name;                                       // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 User_Id;                                           // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_PlayerListItem_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_MenuESCPlayerListItem(int32 EntryPoint);
	void GetDisplayInfo(struct FPalUIGuildMemberDisplayInfo* DisplayInfo);
	void GetFocusTarget(class UWidget** TargetWidget);
	void OnClicked__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
	void OnHovered__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
	void SetPlayerName(const class FString& PlayerName);
	void Setup(const class FString& PlayerName, const class FString& PlayerUId, const class FString& UserId);
	void ________(bool bResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MenuESCPlayerListItem_C">();
	}
	static class UWBP_MenuESCPlayerListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MenuESCPlayerListItem_C>();
	}
};
static_assert(alignof(UWBP_MenuESCPlayerListItem_C) == 0x000008, "Wrong alignment on UWBP_MenuESCPlayerListItem_C");
static_assert(sizeof(UWBP_MenuESCPlayerListItem_C) == 0x000338, "Wrong size on UWBP_MenuESCPlayerListItem_C");
static_assert(offsetof(UWBP_MenuESCPlayerListItem_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MenuESCPlayerListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MenuESCPlayerListItem_C, Anm_Network_OnToOff) == 0x000280, "Member 'UWBP_MenuESCPlayerListItem_C::Anm_Network_OnToOff' has a wrong offset!");
static_assert(offsetof(UWBP_MenuESCPlayerListItem_C, Anm_RoleTextColor) == 0x000288, "Member 'UWBP_MenuESCPlayerListItem_C::Anm_RoleTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_MenuESCPlayerListItem_C, Anm_NormalToFocus) == 0x000290, "Member 'UWBP_MenuESCPlayerListItem_C::Anm_NormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_MenuESCPlayerListItem_C, Base) == 0x000298, "Member 'UWBP_MenuESCPlayerListItem_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_MenuESCPlayerListItem_C, Text_PlayerName) == 0x0002A0, "Member 'UWBP_MenuESCPlayerListItem_C::Text_PlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_MenuESCPlayerListItem_C, WBP_PalInvisibleButton) == 0x0002A8, "Member 'UWBP_MenuESCPlayerListItem_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_MenuESCPlayerListItem_C, OnlineMsgID) == 0x0002B0, "Member 'UWBP_MenuESCPlayerListItem_C::OnlineMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_MenuESCPlayerListItem_C, OfflineMsgID) == 0x0002C0, "Member 'UWBP_MenuESCPlayerListItem_C::OfflineMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_MenuESCPlayerListItem_C, OnClicked) == 0x0002D0, "Member 'UWBP_MenuESCPlayerListItem_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_MenuESCPlayerListItem_C, MyDisplayInfo) == 0x0002E0, "Member 'UWBP_MenuESCPlayerListItem_C::MyDisplayInfo' has a wrong offset!");
static_assert(offsetof(UWBP_MenuESCPlayerListItem_C, OnHovered) == 0x0002F8, "Member 'UWBP_MenuESCPlayerListItem_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UWBP_MenuESCPlayerListItem_C, Player_UId) == 0x000308, "Member 'UWBP_MenuESCPlayerListItem_C::Player_UId' has a wrong offset!");
static_assert(offsetof(UWBP_MenuESCPlayerListItem_C, Player_Name) == 0x000318, "Member 'UWBP_MenuESCPlayerListItem_C::Player_Name' has a wrong offset!");
static_assert(offsetof(UWBP_MenuESCPlayerListItem_C, User_Id) == 0x000328, "Member 'UWBP_MenuESCPlayerListItem_C::User_Id' has a wrong offset!");

}
