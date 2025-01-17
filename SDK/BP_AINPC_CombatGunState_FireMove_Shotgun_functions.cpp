#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_CombatGunState_FireMove_Shotgun

#include "Basic.hpp"

#include "BP_AINPC_CombatGunState_FireMove_Shotgun_classes.hpp"
#include "BP_AINPC_CombatGunState_FireMove_Shotgun_parameters.hpp"


namespace SDK
{

// Function BP_AINPC_CombatGunState_FireMove_Shotgun.BP_AINPC_CombatGunState_FireMove_Shotgun_C.MoveDIrectionWorldSpace
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Direction                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_FireMove_Shotgun_C::MoveDIrectionWorldSpace(struct FVector* Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_FireMove_Shotgun_C", "MoveDIrectionWorldSpace");

	Params::BP_AINPC_CombatGunState_FireMove_Shotgun_C_MoveDIrectionWorldSpace Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);
}

}

