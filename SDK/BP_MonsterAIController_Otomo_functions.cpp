#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MonsterAIController_Otomo

#include "Basic.hpp"

#include "BP_MonsterAIController_Otomo_classes.hpp"
#include "BP_MonsterAIController_Otomo_parameters.hpp"


namespace SDK
{

// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.Attack For Enemy With Parameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillSlotID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::Attack_For_Enemy_With_Parameter(class AActor* Target, int32 SkillSlotID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "Attack For Enemy With Parameter");

	Params::BP_MonsterAIController_Otomo_C_Attack_For_Enemy_With_Parameter Parms{};

	Parms.Target = Target;
	Parms.SkillSlotID = SkillSlotID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.AttackForEnemy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::AttackForEnemy(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "AttackForEnemy");

	Params::BP_MonsterAIController_Otomo_C_AttackForEnemy Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.CanCoop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_CanCoop                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::CanCoop(bool* Param_CanCoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "CanCoop");

	Params::BP_MonsterAIController_Otomo_C_CanCoop Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_CanCoop != nullptr)
		*Param_CanCoop = Parms.Param_CanCoop;
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.ExecuteUbergraph_BP_MonsterAIController_Otomo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::ExecuteUbergraph_BP_MonsterAIController_Otomo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "ExecuteUbergraph_BP_MonsterAIController_Otomo");

	Params::BP_MonsterAIController_Otomo_C_ExecuteUbergraph_BP_MonsterAIController_Otomo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.FinishCoopAction
// (BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_Otomo_C::FinishCoopAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "FinishCoopAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.GetWorkerModuleClass
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UPalAIControllerWorkerModule>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class UPalAIControllerWorkerModule> ABP_MonsterAIController_Otomo_C::GetWorkerModuleClass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "GetWorkerModuleClass");

	Params::BP_MonsterAIController_Otomo_C_GetWorkerModuleClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.OnCoopCanceled
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_Otomo_C::OnCoopCanceled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "OnCoopCanceled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.OnCoopFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionBase*                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::OnCoopFinished(class UPalAIActionBase* Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "OnCoopFinished");

	Params::BP_MonsterAIController_Otomo_C_OnCoopFinished Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.OnCoopRequest
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_Otomo_C::OnCoopRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "OnCoopRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.OnDamageOtomo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult                 DamageResult                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_MonsterAIController_Otomo_C::OnDamageOtomo(const struct FPalDamageResult& DamageResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "OnDamageOtomo");

	Params::BP_MonsterAIController_Otomo_C_OnDamageOtomo Parms{};

	Parms.DamageResult = std::move(DamageResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.OnDeadDelegate_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_MonsterAIController_Otomo_C::OnDeadDelegate______0(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "OnDeadDelegate_����_0");

	Params::BP_MonsterAIController_Otomo_C_OnDeadDelegate______0 Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.OnPressCoopButton
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_Otomo_C::OnPressCoopButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "OnPressCoopButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.OnSetTrainer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::OnSetTrainer(class APalCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "OnSetTrainer");

	Params::BP_MonsterAIController_Otomo_C_OnSetTrainer Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.OnTrainer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::OnTrainer(class APalCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "OnTrainer");

	Params::BP_MonsterAIController_Otomo_C_OnTrainer Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.Play Otomo Default Composite Action
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_Otomo_C::Play_Otomo_Default_Composite_Action()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "Play Otomo Default Composite Action");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "ReceiveEndPlay");

	Params::BP_MonsterAIController_Otomo_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "ReceivePossess");

	Params::BP_MonsterAIController_Otomo_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.Regene_CustomEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_Otomo_C::Regene_CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "Regene_CustomEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.Set Combat Action and Target
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCombatBase*           AIAction                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::Set_Combat_Action_and_Target(class AActor* Target, class UPalAIActionCombatBase** AIAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "Set Combat Action and Target");

	Params::BP_MonsterAIController_Otomo_C_Set_Combat_Action_and_Target Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	if (AIAction != nullptr)
		*AIAction = Parms.AIAction;
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.SetCombatAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionCombatBase*           AIAction                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::SetCombatAction(class UPalAIActionCombatBase** AIAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "SetCombatAction");

	Params::BP_MonsterAIController_Otomo_C_SetCombatAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AIAction != nullptr)
		*AIAction = Parms.AIAction;
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.SetHateEnemiesToOtomo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_Otomo_C::SetHateEnemiesToOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "SetHateEnemiesToOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   HolderSlotID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::Setup(int32 HolderSlotID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "Setup");

	Params::BP_MonsterAIController_Otomo_C_Setup Parms{};

	Parms.HolderSlotID = HolderSlotID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.ShowBaseCampLog
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalMonsterControllerBaseCampLogContentContent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_MonsterAIController_Otomo_C::ShowBaseCampLog(const struct FPalMonsterControllerBaseCampLogContent& Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "ShowBaseCampLog");

	Params::BP_MonsterAIController_Otomo_C_ShowBaseCampLog Parms{};

	Parms.Content = std::move(Content);

	UObject::ProcessEvent(Func, &Parms);
}

}
