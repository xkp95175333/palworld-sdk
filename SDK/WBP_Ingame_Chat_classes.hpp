#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Ingame_Chat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Ingame_Chat.WBP_Ingame_Chat_C
// 0x00C0 (0x04E8 - 0x0428)
class UWBP_Ingame_Chat_C final : public UPalUIChat
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_OpenToClose;                                   // 0x0430(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_SendToLog;                                     // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEditableText*                          EditableText_ChatInput;                            // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_44;                                          // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_256;                                         // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_356;                                         // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           InputVisualBox;                                    // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_ChatSendCategory;                             // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonScrollList_C*             WBP_PalCommonScrollList;                           // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 WBP_PalKeyGuideIcon;                               // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCompleteInput;                                   // 0x04B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPalUIActionBindData                   OpenInventoryActionHandle;                         // 0x04C8(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	EPalChatCategory                              SelectCategory;                                    // 0x04CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59C2[0x3];                                     // 0x04CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ChatCloseTimer;                                    // 0x04D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    ChatHintTextMsgID;                                 // 0x04D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void BndEvt__WBP_Ingame_Chat_EditableText_ChatInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void CanChat(bool* Result);
	void ChangeCategory();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_Ingame_Chat(int32 EntryPoint);
	void Hide_Chat_Log_UI();
	void HideChatInputUI();
	void OnCompleteInput__DelegateSignature();
	void OnRecivedChat(const struct FPalChatMessage& Message);
	void OpenChatUI();
	void ShowChatInputUI();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Ingame_Chat_C">();
	}
	static class UWBP_Ingame_Chat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Ingame_Chat_C>();
	}
};
static_assert(alignof(UWBP_Ingame_Chat_C) == 0x000008, "Wrong alignment on UWBP_Ingame_Chat_C");
static_assert(sizeof(UWBP_Ingame_Chat_C) == 0x0004E8, "Wrong size on UWBP_Ingame_Chat_C");
static_assert(offsetof(UWBP_Ingame_Chat_C, UberGraphFrame) == 0x000428, "Member 'UWBP_Ingame_Chat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, Anm_OpenToClose) == 0x000430, "Member 'UWBP_Ingame_Chat_C::Anm_OpenToClose' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, Anm_SendToLog) == 0x000438, "Member 'UWBP_Ingame_Chat_C::Anm_SendToLog' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, EditableText_ChatInput) == 0x000440, "Member 'UWBP_Ingame_Chat_C::EditableText_ChatInput' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, Image) == 0x000448, "Member 'UWBP_Ingame_Chat_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, Image_1) == 0x000450, "Member 'UWBP_Ingame_Chat_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, Image_2) == 0x000458, "Member 'UWBP_Ingame_Chat_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, Image_3) == 0x000460, "Member 'UWBP_Ingame_Chat_C::Image_3' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, Image_4) == 0x000468, "Member 'UWBP_Ingame_Chat_C::Image_4' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, Image_5) == 0x000470, "Member 'UWBP_Ingame_Chat_C::Image_5' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, Image_6) == 0x000478, "Member 'UWBP_Ingame_Chat_C::Image_6' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, Image_44) == 0x000480, "Member 'UWBP_Ingame_Chat_C::Image_44' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, Image_256) == 0x000488, "Member 'UWBP_Ingame_Chat_C::Image_256' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, Image_356) == 0x000490, "Member 'UWBP_Ingame_Chat_C::Image_356' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, InputVisualBox) == 0x000498, "Member 'UWBP_Ingame_Chat_C::InputVisualBox' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, Text_ChatSendCategory) == 0x0004A0, "Member 'UWBP_Ingame_Chat_C::Text_ChatSendCategory' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, WBP_PalCommonScrollList) == 0x0004A8, "Member 'UWBP_Ingame_Chat_C::WBP_PalCommonScrollList' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, WBP_PalKeyGuideIcon) == 0x0004B0, "Member 'UWBP_Ingame_Chat_C::WBP_PalKeyGuideIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, OnCompleteInput) == 0x0004B8, "Member 'UWBP_Ingame_Chat_C::OnCompleteInput' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, OpenInventoryActionHandle) == 0x0004C8, "Member 'UWBP_Ingame_Chat_C::OpenInventoryActionHandle' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, SelectCategory) == 0x0004CC, "Member 'UWBP_Ingame_Chat_C::SelectCategory' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, ChatCloseTimer) == 0x0004D0, "Member 'UWBP_Ingame_Chat_C::ChatCloseTimer' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Chat_C, ChatHintTextMsgID) == 0x0004D8, "Member 'UWBP_Ingame_Chat_C::ChatHintTextMsgID' has a wrong offset!");

}
