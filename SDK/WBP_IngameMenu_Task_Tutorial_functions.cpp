#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IngameMenu_Task_Tutorial

#include "Basic.hpp"

#include "WBP_IngameMenu_Task_Tutorial_classes.hpp"
#include "WBP_IngameMenu_Task_Tutorial_parameters.hpp"


namespace SDK
{

// Function WBP_IngameMenu_Task_Tutorial.WBP_IngameMenu_Task_Tutorial_C.AddQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalQuestData*                    QuestData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Tutorial_C::AddQuest(class UPalQuestData* QuestData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Tutorial_C", "AddQuest");

	Params::WBP_IngameMenu_Task_Tutorial_C_AddQuest Parms{};

	Parms.QuestData = QuestData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_Task_Tutorial.WBP_IngameMenu_Task_Tutorial_C.GetNowDisplayQuestWidgetNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Num                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Tutorial_C::GetNowDisplayQuestWidgetNum(int32* Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Tutorial_C", "GetNowDisplayQuestWidgetNum");

	Params::WBP_IngameMenu_Task_Tutorial_C_GetNowDisplayQuestWidgetNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;
}


// Function WBP_IngameMenu_Task_Tutorial.WBP_IngameMenu_Task_Tutorial_C.OnClosedQuestWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_IngameMenu_Task_Tutorial_List_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Tutorial_C::OnClosedQuestWidget(class UWBP_IngameMenu_Task_Tutorial_List_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Tutorial_C", "OnClosedQuestWidget");

	Params::WBP_IngameMenu_Task_Tutorial_C_OnClosedQuestWidget Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}

}
