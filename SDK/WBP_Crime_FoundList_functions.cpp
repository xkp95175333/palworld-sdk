#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Crime_FoundList

#include "Basic.hpp"

#include "WBP_Crime_FoundList_classes.hpp"
#include "WBP_Crime_FoundList_parameters.hpp"


namespace SDK
{

// Function WBP_Crime_FoundList.WBP_Crime_FoundList_C.SetCrimeName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CrimeId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crime_FoundList_C::SetCrimeName(class FName CrimeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crime_FoundList_C", "SetCrimeName");

	Params::WBP_Crime_FoundList_C_SetCrimeName Parms{};

	Parms.CrimeId = CrimeId;

	UObject::ProcessEvent(Func, &Parms);
}

}
