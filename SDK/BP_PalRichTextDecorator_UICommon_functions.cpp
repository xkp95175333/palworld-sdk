#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalRichTextDecorator_UICommon

#include "Basic.hpp"

#include "BP_PalRichTextDecorator_UICommon_classes.hpp"
#include "BP_PalRichTextDecorator_UICommon_parameters.hpp"


namespace SDK
{

// Function BP_PalRichTextDecorator_UICommon.BP_PalRichTextDecorator_UICommon_C.GetTagName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_PalRichTextDecorator_UICommon_C::GetTagName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRichTextDecorator_UICommon_C", "GetTagName");

	Params::BP_PalRichTextDecorator_UICommon_C_GetTagName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalRichTextDecorator_UICommon.BP_PalRichTextDecorator_UICommon_C.GetTextStringInternal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_PalRichTextDecorator_UICommon_C::GetTextStringInternal(const class UObject* WorldContextObject, class FName ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRichTextDecorator_UICommon_C", "GetTextStringInternal");

	Params::BP_PalRichTextDecorator_UICommon_C_GetTextStringInternal Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

