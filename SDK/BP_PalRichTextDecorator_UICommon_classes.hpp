#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalRichTextDecorator_UICommon

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalRichTextDecorator_UICommon.BP_PalRichTextDecorator_UICommon_C
// 0x0000 (0x0028 - 0x0028)
class UBP_PalRichTextDecorator_UICommon_C final : public UPalRichTextDecorator_TagText
{
public:
	class FString GetTagName();
	class FString GetTextStringInternal(const class UObject* WorldContextObject, class FName ID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalRichTextDecorator_UICommon_C">();
	}
	static class UBP_PalRichTextDecorator_UICommon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalRichTextDecorator_UICommon_C>();
	}
};
static_assert(alignof(UBP_PalRichTextDecorator_UICommon_C) == 0x000008, "Wrong alignment on UBP_PalRichTextDecorator_UICommon_C");
static_assert(sizeof(UBP_PalRichTextDecorator_UICommon_C) == 0x000028, "Wrong size on UBP_PalRichTextDecorator_UICommon_C");

}
