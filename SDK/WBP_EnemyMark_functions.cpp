#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EnemyMark

#include "Basic.hpp"

#include "WBP_EnemyMark_classes.hpp"
#include "WBP_EnemyMark_parameters.hpp"


namespace SDK
{

// Function WBP_EnemyMark.WBP_EnemyMark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_EnemyMark_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyMark_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyMark.WBP_EnemyMark_C.ExecuteUbergraph_WBP_EnemyMark
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyMark_C::ExecuteUbergraph_WBP_EnemyMark(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyMark_C", "ExecuteUbergraph_WBP_EnemyMark");

	Params::WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyMark.WBP_EnemyMark_C.�������_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyMark_C::_________0(class APalCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyMark_C", "�������_0");

	Params::WBP_EnemyMark_C__________0 Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyMark.WBP_EnemyMark_C.�������_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyMark_C::_________1(class APalCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyMark_C", "�������_1");

	Params::WBP_EnemyMark_C__________1 Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);
}

}
