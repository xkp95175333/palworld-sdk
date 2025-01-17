#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MultiTalk_OrderByName

#include "Basic.hpp"

#include "BP_MultiTalk_OrderByName_classes.hpp"
#include "BP_MultiTalk_OrderByName_parameters.hpp"


namespace SDK
{

// Function BP_MultiTalk_OrderByName.BP_MultiTalk_OrderByName_C.ExecuteUbergraph_BP_MultiTalk_OrderByName
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MultiTalk_OrderByName_C::ExecuteUbergraph_BP_MultiTalk_OrderByName(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MultiTalk_OrderByName_C", "ExecuteUbergraph_BP_MultiTalk_OrderByName");

	Params::BP_MultiTalk_OrderByName_C_ExecuteUbergraph_BP_MultiTalk_OrderByName Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MultiTalk_OrderByName.BP_MultiTalk_OrderByName_C.GetStartTalkSequence
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Sequence                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_MultiTalk_OrderByName_C::GetStartTalkSequence(class FString* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MultiTalk_OrderByName_C", "GetStartTalkSequence");

	Params::BP_MultiTalk_OrderByName_C_GetStartTalkSequence Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Sequence != nullptr)
		*Sequence = std::move(Parms.Sequence);
}


// Function BP_MultiTalk_OrderByName.BP_MultiTalk_OrderByName_C.GetTalkData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InTalkID                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UDataTable* UBP_MultiTalk_OrderByName_C::GetTalkData(const class FName& InTalkID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MultiTalk_OrderByName_C", "GetTalkData");

	Params::BP_MultiTalk_OrderByName_C_GetTalkData Parms{};

	Parms.InTalkID = InTalkID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MultiTalk_OrderByName.BP_MultiTalk_OrderByName_C.OnFinishOneTalk
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_MultiTalk_OrderByName_C::OnFinishOneTalk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MultiTalk_OrderByName_C", "OnFinishOneTalk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MultiTalk_OrderByName.BP_MultiTalk_OrderByName_C.GetMaxTalkCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   MaxTalkCount                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MultiTalk_OrderByName_C::GetMaxTalkCount(int32* MaxTalkCount) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MultiTalk_OrderByName_C", "GetMaxTalkCount");

	Params::BP_MultiTalk_OrderByName_C_GetMaxTalkCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MaxTalkCount != nullptr)
		*MaxTalkCount = Parms.MaxTalkCount;
}

}

