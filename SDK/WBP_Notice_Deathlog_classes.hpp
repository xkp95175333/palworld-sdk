#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Notice_Deathlog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Notice_Deathlog.WBP_Notice_Deathlog_C
// 0x0048 (0x02C0 - 0x0278)
class UWBP_Notice_Deathlog_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_out;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_In;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 BP_PalRichTextBlock_LogText;                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PalIcon;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Pal_Level;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Is_Short;                                          // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NowDisplayed;                                      // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShortDisplayEnd;                                   // 0x02AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LongDisplayEnd;                                    // 0x02AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2240[0x4];                                     // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnDeathLogEnd;                                     // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void CheckDisplay_Long();
	void CheckDisplay_Short();
	void ExecuteUbergraph_WBP_Notice_Deathlog(int32 EntryPoint);
	void Finished_594550FE491318B188D5B8A2D194C1DB();
	void OnDeathLogEnd__DelegateSignature(class UWBP_Notice_Deathlog_C* EndedLog);
	void SetDeathLog(const class FText& LogText, TSoftObjectPtr<class UTexture2D> Icon);
	void SetDisplayTime(double ShortDisplayTime, double LongDisplayTime);
	void SetDisplayTimeType(bool IsShort);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Notice_Deathlog_C">();
	}
	static class UWBP_Notice_Deathlog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Notice_Deathlog_C>();
	}
};
static_assert(alignof(UWBP_Notice_Deathlog_C) == 0x000008, "Wrong alignment on UWBP_Notice_Deathlog_C");
static_assert(sizeof(UWBP_Notice_Deathlog_C) == 0x0002C0, "Wrong size on UWBP_Notice_Deathlog_C");
static_assert(offsetof(UWBP_Notice_Deathlog_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Notice_Deathlog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, Anm_out) == 0x000280, "Member 'UWBP_Notice_Deathlog_C::Anm_out' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, Anm_In) == 0x000288, "Member 'UWBP_Notice_Deathlog_C::Anm_In' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, BP_PalRichTextBlock_LogText) == 0x000290, "Member 'UWBP_Notice_Deathlog_C::BP_PalRichTextBlock_LogText' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, Image_PalIcon) == 0x000298, "Member 'UWBP_Notice_Deathlog_C::Image_PalIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, Text_Pal_Level) == 0x0002A0, "Member 'UWBP_Notice_Deathlog_C::Text_Pal_Level' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, Is_Short) == 0x0002A8, "Member 'UWBP_Notice_Deathlog_C::Is_Short' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, NowDisplayed) == 0x0002A9, "Member 'UWBP_Notice_Deathlog_C::NowDisplayed' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, ShortDisplayEnd) == 0x0002AA, "Member 'UWBP_Notice_Deathlog_C::ShortDisplayEnd' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, LongDisplayEnd) == 0x0002AB, "Member 'UWBP_Notice_Deathlog_C::LongDisplayEnd' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, OnDeathLogEnd) == 0x0002B0, "Member 'UWBP_Notice_Deathlog_C::OnDeathLogEnd' has a wrong offset!");

}

