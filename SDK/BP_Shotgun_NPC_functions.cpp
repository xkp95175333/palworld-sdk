#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Shotgun_NPC

#include "Basic.hpp"

#include "BP_Shotgun_NPC_classes.hpp"
#include "BP_Shotgun_NPC_parameters.hpp"


namespace SDK
{

// Function BP_Shotgun_NPC.BP_Shotgun_NPC_C.ExecuteUbergraph_BP_Shotgun_NPC
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Shotgun_NPC_C::ExecuteUbergraph_BP_Shotgun_NPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shotgun_NPC_C", "ExecuteUbergraph_BP_Shotgun_NPC");

	Params::BP_Shotgun_NPC_C_ExecuteUbergraph_BP_Shotgun_NPC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Shotgun_NPC.BP_Shotgun_NPC_C.OnWeaponNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// EWeaponNotifyType                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Shotgun_NPC_C::OnWeaponNotify(EWeaponNotifyType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shotgun_NPC_C", "OnWeaponNotify");

	Params::BP_Shotgun_NPC_C_OnWeaponNotify Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Shotgun_NPC.BP_Shotgun_NPC_C.GetNPCWeaponDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_Shotgun_NPC_C::GetNPCWeaponDamage() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shotgun_NPC_C", "GetNPCWeaponDamage");

	Params::BP_Shotgun_NPC_C_GetNPCWeaponDamage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Shotgun_NPC.BP_Shotgun_NPC_C.GetWeaponDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_Shotgun_NPC_C::GetWeaponDamage() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shotgun_NPC_C", "GetWeaponDamage");

	Params::BP_Shotgun_NPC_C_GetWeaponDamage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
