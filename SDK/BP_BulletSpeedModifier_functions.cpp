#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BulletSpeedModifier

#include "Basic.hpp"

#include "BP_BulletSpeedModifier_classes.hpp"
#include "BP_BulletSpeedModifier_parameters.hpp"


namespace SDK
{

// Function BP_BulletSpeedModifier.BP_BulletSpeedModifier_C.ExecuteUbergraph_BP_BulletSpeedModifier
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BulletSpeedModifier_C::ExecuteUbergraph_BP_BulletSpeedModifier(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BulletSpeedModifier_C", "ExecuteUbergraph_BP_BulletSpeedModifier");

	Params::BP_BulletSpeedModifier_C_ExecuteUbergraph_BP_BulletSpeedModifier Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BulletSpeedModifier.BP_BulletSpeedModifier_C.Initialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalBullet*                       Bullet                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_BulletSpeedModifier_C::Initialize(const class APalBullet* Bullet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BulletSpeedModifier_C", "Initialize");

	Params::BP_BulletSpeedModifier_C_Initialize Parms{};

	Parms.Bullet = Bullet;

	UObject::ProcessEvent(Func, &Parms);
}

}
