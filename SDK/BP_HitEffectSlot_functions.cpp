#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HitEffectSlot

#include "Basic.hpp"

#include "BP_HitEffectSlot_classes.hpp"
#include "BP_HitEffectSlot_parameters.hpp"


namespace SDK
{

// Function BP_HitEffectSlot.BP_HitEffectSlot_C.CryCoolTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAkCallbackType                         CallbackType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkCallbackInfo*                  CallbackInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_C::CryCoolTime(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitEffectSlot_C", "CryCoolTime");

	Params::BP_HitEffectSlot_C_CryCoolTime Parms{};

	Parms.CallbackType = CallbackType;
	Parms.CallbackInfo = CallbackInfo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitEffectSlot.BP_HitEffectSlot_C.ExecuteUbergraph_BP_HitEffectSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_C::ExecuteUbergraph_BP_HitEffectSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitEffectSlot_C", "ExecuteUbergraph_BP_HitEffectSlot");

	Params::BP_HitEffectSlot_C_ExecuteUbergraph_BP_HitEffectSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitEffectSlot.BP_HitEffectSlot_C.Initialize
// (Event, Public, BlueprintEvent)

void UBP_HitEffectSlot_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitEffectSlot_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitEffectSlot.BP_HitEffectSlot_C.IsEnableCameraShake
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsEnable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_C::IsEnableCameraShake(bool* IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitEffectSlot_C", "IsEnableCameraShake");

	Params::BP_HitEffectSlot_C_IsEnableCameraShake Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnable != nullptr)
		*IsEnable = Parms.IsEnable;
}


// Function BP_HitEffectSlot.BP_HitEffectSlot_C.LoadAndPlayEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UNiagaraSystem>    EffectPath                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_C::LoadAndPlayEffect(TSoftObjectPtr<class UNiagaraSystem> EffectPath, const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitEffectSlot_C", "LoadAndPlayEffect");

	Params::BP_HitEffectSlot_C_LoadAndPlayEffect Parms{};

	Parms.EffectPath = EffectPath;
	Parms.Transform = std::move(Transform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitEffectSlot.BP_HitEffectSlot_C.OnLoaded_D5A0C82B4BA3C329BE0E728CCA761919
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_C::OnLoaded_D5A0C82B4BA3C329BE0E728CCA761919(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitEffectSlot_C", "OnLoaded_D5A0C82B4BA3C329BE0E728CCA761919");

	Params::BP_HitEffectSlot_C_OnLoaded_D5A0C82B4BA3C329BE0E728CCA761919 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitEffectSlot.BP_HitEffectSlot_C.PlayCameraShakeAndSoundEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalWazaCategory                        Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Attacker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    SpecializedEffectPlayed                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_C::PlayCameraShakeAndSoundEffect(EPalWazaCategory Category, class AActor* Attacker, bool SpecializedEffectPlayed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitEffectSlot_C", "PlayCameraShakeAndSoundEffect");

	Params::BP_HitEffectSlot_C_PlayCameraShakeAndSoundEffect Parms{};

	Parms.Category = Category;
	Parms.Attacker = Attacker;
	Parms.SpecializedEffectPlayed = SpecializedEffectPlayed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitEffectSlot.BP_HitEffectSlot_C.PlayHitEffect
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPalDamageInfo                   Info                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_HitEffectSlot_C::PlayHitEffect(const struct FPalDamageInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitEffectSlot_C", "PlayHitEffect");

	Params::BP_HitEffectSlot_C_PlayHitEffect Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitEffectSlot.BP_HitEffectSlot_C.PlayHitSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageInfo                   PalDamageInfo                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_HitEffectSlot_C::PlayHitSound(const struct FPalDamageInfo& PalDamageInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitEffectSlot_C", "PlayHitSound");

	Params::BP_HitEffectSlot_C_PlayHitSound Parms{};

	Parms.PalDamageInfo = std::move(PalDamageInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitEffectSlot.BP_HitEffectSlot_C.SpawnElementalHitEffectBullet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalElementType                         Element                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  EffectScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_C::SpawnElementalHitEffectBullet(EPalElementType Element, const struct FVector& Location, double EffectScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitEffectSlot_C", "SpawnElementalHitEffectBullet");

	Params::BP_HitEffectSlot_C_SpawnElementalHitEffectBullet Parms{};

	Parms.Element = Element;
	Parms.Location = std::move(Location);
	Parms.EffectScale = EffectScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitEffectSlot.BP_HitEffectSlot_C.SpawnElementalHitEffectFar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalElementType                         Element                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  EffectScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsPoison                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_C::SpawnElementalHitEffectFar(EPalElementType Element, const struct FVector& Location, double EffectScale, bool IsPoison)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitEffectSlot_C", "SpawnElementalHitEffectFar");

	Params::BP_HitEffectSlot_C_SpawnElementalHitEffectFar Parms{};

	Parms.Element = Element;
	Parms.Location = std::move(Location);
	Parms.EffectScale = EffectScale;
	Parms.IsPoison = IsPoison;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitEffectSlot.BP_HitEffectSlot_C.SpawnElementalHitEffectNear
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalElementType                         Element                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  EffectScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_C::SpawnElementalHitEffectNear(EPalElementType Element, const struct FVector& Location, double EffectScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitEffectSlot_C", "SpawnElementalHitEffectNear");

	Params::BP_HitEffectSlot_C_SpawnElementalHitEffectNear Parms{};

	Parms.Element = Element;
	Parms.Location = std::move(Location);
	Parms.EffectScale = EffectScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitEffectSlot.BP_HitEffectSlot_C.SpawnSneakAttackEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_C::SpawnSneakAttackEffect(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitEffectSlot_C", "SpawnSneakAttackEffect");

	Params::BP_HitEffectSlot_C_SpawnSneakAttackEffect Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HitEffectSlot.BP_HitEffectSlot_C.SpawnSpecializationEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Attacker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  EffectScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Played                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_C::SpawnSpecializationEffect(class AActor* Attacker, const struct FVector& Location, double EffectScale, bool* Played)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitEffectSlot_C", "SpawnSpecializationEffect");

	Params::BP_HitEffectSlot_C_SpawnSpecializationEffect Parms{};

	Parms.Attacker = Attacker;
	Parms.Location = std::move(Location);
	Parms.EffectScale = EffectScale;

	UObject::ProcessEvent(Func, &Parms);

	if (Played != nullptr)
		*Played = Parms.Played;
}

}

