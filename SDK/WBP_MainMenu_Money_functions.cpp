#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu_Money

#include "Basic.hpp"

#include "WBP_MainMenu_Money_classes.hpp"
#include "WBP_MainMenu_Money_parameters.hpp"


namespace SDK
{

// Function WBP_MainMenu_Money.WBP_MainMenu_Money_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MainMenu_Money_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Money_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_Money.WBP_MainMenu_Money_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MainMenu_Money_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Money_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_Money.WBP_MainMenu_Money_C.ExecuteUbergraph_WBP_MainMenu_Money
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Money_C::ExecuteUbergraph_WBP_MainMenu_Money(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Money_C", "ExecuteUbergraph_WBP_MainMenu_Money");

	Params::WBP_MainMenu_Money_C_ExecuteUbergraph_WBP_MainMenu_Money Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_Money.WBP_MainMenu_Money_C.UpdateMoney
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NowMoney                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_MainMenu_Money_C::UpdateMoney(const class FString& NowMoney)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Money_C", "UpdateMoney");

	Params::WBP_MainMenu_Money_C_UpdateMoney Parms{};

	Parms.NowMoney = std::move(NowMoney);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_Money.WBP_MainMenu_Money_C.WBP_MainMenu_Money_AutoGenFunc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                                   NowMoney                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Money_C::WBP_MainMenu_Money_AutoGenFunc(int64 NowMoney)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Money_C", "WBP_MainMenu_Money_AutoGenFunc");

	Params::WBP_MainMenu_Money_C_WBP_MainMenu_Money_AutoGenFunc Parms{};

	Parms.NowMoney = NowMoney;

	UObject::ProcessEvent(Func, &Parms);
}

}
