#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MonsterAIController_BaseCamp

#include "Basic.hpp"

#include "BP_MonsterAIController_BaseCamp_classes.hpp"
#include "BP_MonsterAIController_BaseCamp_parameters.hpp"


namespace SDK
{

// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.ExecuteUbergraph_BP_MonsterAIController_BaseCamp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::ExecuteUbergraph_BP_MonsterAIController_BaseCamp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "ExecuteUbergraph_BP_MonsterAIController_BaseCamp");

	Params::BP_MonsterAIController_BaseCamp_C_ExecuteUbergraph_BP_MonsterAIController_BaseCamp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.FailedFixedAssign
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_BaseCamp_C::FailedFixedAssign()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "FailedFixedAssign");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.FindFixedAssignableObject
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            WorkId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Range                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFound                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalBaseCampAssignableObjectInterface>FoundObject                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::FindFixedAssignableObject(const struct FGuid& WorkId, double Range, bool* bFound, TScriptInterface<class IPalBaseCampAssignableObjectInterface>* FoundObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "FindFixedAssignableObject");

	Params::BP_MonsterAIController_BaseCamp_C_FindFixedAssignableObject Parms{};

	Parms.WorkId = std::move(WorkId);
	Parms.Range = Range;

	UObject::ProcessEvent(Func, &Parms);

	if (bFound != nullptr)
		*bFound = Parms.bFound;

	if (FoundObject != nullptr)
		*FoundObject = Parms.FoundObject;
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.GetWorkerModuleClass
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UPalAIControllerWorkerModule>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class UPalAIControllerWorkerModule> ABP_MonsterAIController_BaseCamp_C::GetWorkerModuleClass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "GetWorkerModuleClass");

	Params::BP_MonsterAIController_BaseCamp_C_GetWorkerModuleClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.InterruptPlayWorkerEventAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionBase*                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EAIRequestPriority                      Priority                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::InterruptPlayWorkerEventAction(class UPalAIActionBase* Action, const EAIRequestPriority Priority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "InterruptPlayWorkerEventAction");

	Params::BP_MonsterAIController_BaseCamp_C_InterruptPlayWorkerEventAction Parms{};

	Parms.Action = Action;
	Parms.Priority = Priority;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.InterruptRecoverHungryAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalMonsterControllerBaseCampHungryParameterParameter                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_MonsterAIController_BaseCamp_C::InterruptRecoverHungryAction(const struct FPalMonsterControllerBaseCampHungryParameter& Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "InterruptRecoverHungryAction");

	Params::BP_MonsterAIController_BaseCamp_C_InterruptRecoverHungryAction Parms{};

	Parms.Parameter = std::move(Parameter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.InterruptReturnBackToBaseCamp
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_BaseCamp_C::InterruptReturnBackToBaseCamp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "InterruptReturnBackToBaseCamp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.InterruptSleepActivelyAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalAIActionBaseCampSleepActivelyParameterParameter                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_MonsterAIController_BaseCamp_C::InterruptSleepActivelyAction(const struct FPalAIActionBaseCampSleepActivelyParameter& Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "InterruptSleepActivelyAction");

	Params::BP_MonsterAIController_BaseCamp_C_InterruptSleepActivelyAction Parms{};

	Parms.Parameter = std::move(Parameter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.NotifyOrderCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalMapBaseCampWorkerOrderType          OrderType                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::NotifyOrderCommand(const EPalMapBaseCampWorkerOrderType OrderType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "NotifyOrderCommand");

	Params::BP_MonsterAIController_BaseCamp_C_NotifyOrderCommand Parms{};

	Parms.OrderType = OrderType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.NotifyOrderCommandToCurrentRootAction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalMapBaseCampWorkerOrderType          OrderType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::NotifyOrderCommandToCurrentRootAction(EPalMapBaseCampWorkerOrderType OrderType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "NotifyOrderCommandToCurrentRootAction");

	Params::BP_MonsterAIController_BaseCamp_C_NotifyOrderCommandToCurrentRootAction Parms{};

	Parms.OrderType = OrderType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.OnDeadDelegate_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_MonsterAIController_BaseCamp_C::OnDeadDelegate______0(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "OnDeadDelegate_����_0");

	Params::BP_MonsterAIController_BaseCamp_C_OnDeadDelegate______0 Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "ReceivePossess");

	Params::BP_MonsterAIController_BaseCamp_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_BaseCamp
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           AIActionClass                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EAIRequestPriority                      Priority                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBaseCampBase*         Action                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_BaseCamp(class UClass* AIActionClass, EAIRequestPriority Priority, class UPalAIActionBaseCampBase** Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_BaseCamp");

	Params::BP_MonsterAIController_BaseCamp_C_SetAction_BaseCamp Parms{};

	Parms.AIActionClass = AIActionClass;
	Parms.Priority = Priority;

	UObject::ProcessEvent(Func, &Parms);

	if (Action != nullptr)
		*Action = Parms.Action;
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_BaseCamp_Fighter
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionBaseCampBase*         Action                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_BaseCamp_Fighter(class UPalAIActionBaseCampBase** Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_BaseCamp_Fighter");

	Params::BP_MonsterAIController_BaseCamp_C_SetAction_BaseCamp_Fighter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Action != nullptr)
		*Action = Parms.Action;
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_BaseCamp_Fighter_ByDefenseType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalMapObjectDefenseType                DefenseType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBaseCampFighter*      FighterAction                                          (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_BaseCamp_Fighter_ByDefenseType(EPalMapObjectDefenseType DefenseType, class UPalAIActionBaseCampFighter** FighterAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_BaseCamp_Fighter_ByDefenseType");

	Params::BP_MonsterAIController_BaseCamp_C_SetAction_BaseCamp_Fighter_ByDefenseType Parms{};

	Parms.DefenseType = DefenseType;

	UObject::ProcessEvent(Func, &Parms);

	if (FighterAction != nullptr)
		*FighterAction = Parms.FighterAction;
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_BaseCamp_FighterGunner
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionBaseCampBase*         Action                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_BaseCamp_FighterGunner(class UPalAIActionBaseCampBase** Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_BaseCamp_FighterGunner");

	Params::BP_MonsterAIController_BaseCamp_C_SetAction_BaseCamp_FighterGunner Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Action != nullptr)
		*Action = Parms.Action;
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_BaseCamp_Worker
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionCompositeBase*        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UPalAIActionCompositeBase* ABP_MonsterAIController_BaseCamp_C::SetAction_BaseCamp_Worker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_BaseCamp_Worker");

	Params::BP_MonsterAIController_BaseCamp_C_SetAction_BaseCamp_Worker Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_CapturedStorage
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_BaseCamp_C::SetAction_CapturedStorage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_CapturedStorage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_DefaultPos
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_BaseCamp_C::SetAction_DefaultPos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_DefaultPos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionComponent*            Param_AIActionComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBaseCampBase*         NewAction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_Internal(class UPalAIActionComponent* Param_AIActionComponent, class UPalAIActionBaseCampBase* NewAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_Internal");

	Params::BP_MonsterAIController_BaseCamp_C_SetAction_Internal Parms{};

	Parms.Param_AIActionComponent = Param_AIActionComponent;
	Parms.NewAction = NewAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_Liftup
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_BaseCamp_C::SetAction_Liftup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_Liftup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_RecoverHungry
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalMonsterControllerBaseCampHungryParameterParameter                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UPalAIActionBaseCampBase*         Action                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_RecoverHungry(const struct FPalMonsterControllerBaseCampHungryParameter& Parameter, class UPalAIActionBaseCampBase** Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_RecoverHungry");

	Params::BP_MonsterAIController_BaseCamp_C_SetAction_RecoverHungry Parms{};

	Parms.Parameter = std::move(Parameter);

	UObject::ProcessEvent(Func, &Parms);

	if (Action != nullptr)
		*Action = Parms.Action;
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_Sleep
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_BaseCamp_C::SetAction_Sleep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_Sleep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_SleepActively
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalAIActionBaseCampSleepActivelyParameterParameter                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_MonsterAIController_BaseCamp_C::SetAction_SleepActively(struct FPalAIActionBaseCampSleepActivelyParameter& Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_SleepActively");

	Params::BP_MonsterAIController_BaseCamp_C_SetAction_SleepActively Parms{};

	Parms.Parameter = std::move(Parameter);

	UObject::ProcessEvent(Func, &Parms);

	Parameter = std::move(Parms.Parameter);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_SpawningForWorker
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_BaseCamp_C::SetAction_SpawningForWorker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_SpawningForWorker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_WithFixAssignRange
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            TargetWorkProgressId                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Range                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_WithFixAssignRange(struct FGuid& TargetWorkProgressId, const double Range)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_WithFixAssignRange");

	Params::BP_MonsterAIController_BaseCamp_C_SetAction_WithFixAssignRange Parms{};

	Parms.TargetWorkProgressId = std::move(TargetWorkProgressId);
	Parms.Range = Range;

	UObject::ProcessEvent(Func, &Parms);

	TargetWorkProgressId = std::move(Parms.TargetWorkProgressId);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_WorkerEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionBase*                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EAIRequestPriority                      Priority                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_WorkerEvent(class UPalAIActionBase* Action, EAIRequestPriority Priority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_WorkerEvent");

	Params::BP_MonsterAIController_BaseCamp_C_SetAction_WorkerEvent Parms{};

	Parms.Action = Action;
	Parms.Priority = Priority;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampAction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_BaseCamp_C::SetBaseCampAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampActionByClass
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UPalAIActionBase>     ActionClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalAIActionBase*                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UPalAIActionBase* ABP_MonsterAIController_BaseCamp_C::SetBaseCampActionByClass(TSubclassOf<class UPalAIActionBase> ActionClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampActionByClass");

	Params::BP_MonsterAIController_BaseCamp_C_SetBaseCampActionByClass Parms{};

	Parms.ActionClass = ActionClass;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampActionLift
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_BaseCamp_C::SetBaseCampActionLift()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampActionLift");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampActionSleep
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionBaseCampSleep*        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UPalAIActionBaseCampSleep* ABP_MonsterAIController_BaseCamp_C::SetBaseCampActionSleep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampActionSleep");

	Params::BP_MonsterAIController_BaseCamp_C_SetBaseCampActionSleep Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampActionSleepMedicalBed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            TargetBedConcreteModelId                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetBaseCampActionSleepMedicalBed(const struct FGuid& TargetBedConcreteModelId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampActionSleepMedicalBed");

	Params::BP_MonsterAIController_BaseCamp_C_SetBaseCampActionSleepMedicalBed Parms{};

	Parms.TargetBedConcreteModelId = std::move(TargetBedConcreteModelId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampActionSpawningForWork
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_BaseCamp_C::SetBaseCampActionSpawningForWork()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampActionSpawningForWork");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampActionWithFixAssign
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            TargetWorkProgressId                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DistanceFixAssignTargetting                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetBaseCampActionWithFixAssign(const struct FGuid& TargetWorkProgressId, const float DistanceFixAssignTargetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampActionWithFixAssign");

	Params::BP_MonsterAIController_BaseCamp_C_SetBaseCampActionWithFixAssign Parms{};

	Parms.TargetWorkProgressId = std::move(TargetWorkProgressId);
	Parms.DistanceFixAssignTargetting = DistanceFixAssignTargetting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampFighterAction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_BaseCamp_C::SetBaseCampFighterAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampFighterAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampFighterGunnerAction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_BaseCamp_C::SetBaseCampFighterGunnerAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampFighterGunnerAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetCapturedStorageAction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_BaseCamp_C::SetCapturedStorageAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetCapturedStorageAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetCompositeActionBaseCamp
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           CompositeActionClass                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeBase*        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UPalAIActionCompositeBase* ABP_MonsterAIController_BaseCamp_C::SetCompositeActionBaseCamp(class UClass* CompositeActionClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetCompositeActionBaseCamp");

	Params::BP_MonsterAIController_BaseCamp_C_SetCompositeActionBaseCamp Parms{};

	Parms.CompositeActionClass = CompositeActionClass;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetDefaultPositionAction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_BaseCamp_C::SetDefaultPositionAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetDefaultPositionAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.ShowBaseCampLog
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalMonsterControllerBaseCampLogContentContent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_MonsterAIController_BaseCamp_C::ShowBaseCampLog(const struct FPalMonsterControllerBaseCampLogContent& Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "ShowBaseCampLog");

	Params::BP_MonsterAIController_BaseCamp_C_ShowBaseCampLog Parms{};

	Parms.Content = std::move(Content);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.TerminateBaseCampActionByClass
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UPalAIActionBase>     ActionClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::TerminateBaseCampActionByClass(TSubclassOf<class UPalAIActionBase> ActionClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "TerminateBaseCampActionByClass");

	Params::BP_MonsterAIController_BaseCamp_C_TerminateBaseCampActionByClass Parms{};

	Parms.ActionClass = ActionClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.TerminateBaseCampActionByClass_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ActionClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::TerminateBaseCampActionByClass_Internal(class UClass* ActionClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "TerminateBaseCampActionByClass_Internal");

	Params::BP_MonsterAIController_BaseCamp_C_TerminateBaseCampActionByClass_Internal Parms{};

	Parms.ActionClass = ActionClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.GetBaseCampId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGuid                            Base_Camp_Id                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::GetBaseCampId(struct FGuid* Base_Camp_Id) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "GetBaseCampId");

	Params::BP_MonsterAIController_BaseCamp_C_GetBaseCampId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Base_Camp_Id != nullptr)
		*Base_Camp_Id = std::move(Parms.Base_Camp_Id);
}

}

