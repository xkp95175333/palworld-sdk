#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerBase

#include "Basic.hpp"

#include "BP_PlayerBase_classes.hpp"
#include "BP_PlayerBase_parameters.hpp"


namespace SDK
{

// Function BP_PlayerBase.BP_PlayerBase_C.BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PlayerBase_C::BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerBase_C", "BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerBase.BP_PlayerBase_C.BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerBase_C::BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerBase_C", "BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_PlayerBase_C_BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerBase.BP_PlayerBase_C.BndEvt__BP_PlayerBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnJumpDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPalCharacterMovementComponent*   Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerBase_C::BndEvt__BP_PlayerBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnJumpDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerBase_C", "BndEvt__BP_PlayerBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnJumpDelegate__DelegateSignature");

	Params::BP_PlayerBase_C_BndEvt__BP_PlayerBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnJumpDelegate__DelegateSignature Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerBase.BP_PlayerBase_C.CreateLantern
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerBase_C::CreateLantern()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerBase_C", "CreateLantern");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerBase.BP_PlayerBase_C.ExecuteUbergraph_BP_PlayerBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerBase_C::ExecuteUbergraph_BP_PlayerBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerBase_C", "ExecuteUbergraph_BP_PlayerBase");

	Params::BP_PlayerBase_C_ExecuteUbergraph_BP_PlayerBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerBase.BP_PlayerBase_C.OnCompleteInitializeParameterDelegate_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerBase_C::OnCompleteInitializeParameterDelegate______0(class APalCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerBase_C", "OnCompleteInitializeParameterDelegate_����_0");

	Params::BP_PlayerBase_C_OnCompleteInitializeParameterDelegate______0 Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerBase.BP_PlayerBase_C.OnEnterWater
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerBase_C::OnEnterWater()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerBase_C", "OnEnterWater");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerBase.BP_PlayerBase_C.OnExitWater
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerBase_C::OnExitWater()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerBase_C", "OnExitWater");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerBase.BP_PlayerBase_C.OnLoaded_02DA547E4C37CAA237537F82C5DB3211
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerBase_C::OnLoaded_02DA547E4C37CAA237537F82C5DB3211(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerBase_C", "OnLoaded_02DA547E4C37CAA237537F82C5DB3211");

	Params::BP_PlayerBase_C_OnLoaded_02DA547E4C37CAA237537F82C5DB3211 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerBase.BP_PlayerBase_C.OnUpdateLevelDelegate_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AddLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NowLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerBase_C::OnUpdateLevelDelegate______0(int32 AddLevel, int32 NowLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerBase_C", "OnUpdateLevelDelegate_����_0");

	Params::BP_PlayerBase_C_OnUpdateLevelDelegate______0 Parms{};

	Parms.AddLevel = AddLevel;
	Parms.NowLevel = NowLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerBase.BP_PlayerBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerBase.BP_PlayerBase_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerBase_C", "ReceiveEndPlay");

	Params::BP_PlayerBase_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerBase.BP_PlayerBase_C.RegisterSwimEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerBase_C::RegisterSwimEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerBase_C", "RegisterSwimEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerBase.BP_PlayerBase_C.SetPlayerLightEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerBase_C::SetPlayerLightEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerBase_C", "SetPlayerLightEnable");

	Params::BP_PlayerBase_C_SetPlayerLightEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerBase.BP_PlayerBase_C.UnregisterSwimEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerBase_C::UnregisterSwimEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerBase_C", "UnregisterSwimEvent");

	UObject::ProcessEvent(Func, nullptr);
}

}
