#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_M_OldCloth001_Implimentation

#include "Basic.hpp"

#include "ABP_M_OldCloth001_Implimentation_classes.hpp"
#include "ABP_M_OldCloth001_Implimentation_parameters.hpp"


namespace SDK
{

// Function ABP_M_OldCloth001_Implimentation.ABP_M_OldCloth001_Implimentation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_M_OldCloth001_Implimentation_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_M_OldCloth001_Implimentation_C", "AnimGraph");

	Params::ABP_M_OldCloth001_Implimentation_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_M_OldCloth001_Implimentation.ABP_M_OldCloth001_Implimentation_C.ClothLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ClothLayer                                       (Parm, OutParm, NoDestructor)

void UABP_M_OldCloth001_Implimentation_C::ClothLayer(const struct FPoseLink& InPose, struct FPoseLink* Param_ClothLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_M_OldCloth001_Implimentation_C", "ClothLayer");

	Params::ABP_M_OldCloth001_Implimentation_C_ClothLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ClothLayer != nullptr)
		*Param_ClothLayer = std::move(Parms.Param_ClothLayer);
}


// Function ABP_M_OldCloth001_Implimentation.ABP_M_OldCloth001_Implimentation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_M_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_04EA739849D99A1703C0C2899D3D20D3
// (BlueprintEvent)

void UABP_M_OldCloth001_Implimentation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_M_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_04EA739849D99A1703C0C2899D3D20D3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_M_OldCloth001_Implimentation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_M_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_04EA739849D99A1703C0C2899D3D20D3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_M_OldCloth001_Implimentation.ABP_M_OldCloth001_Implimentation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_M_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_9D0AEFDF45B49FDE8B54A3AD6AD26D1A
// (BlueprintEvent)

void UABP_M_OldCloth001_Implimentation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_M_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_9D0AEFDF45B49FDE8B54A3AD6AD26D1A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_M_OldCloth001_Implimentation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_M_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_9D0AEFDF45B49FDE8B54A3AD6AD26D1A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_M_OldCloth001_Implimentation.ABP_M_OldCloth001_Implimentation_C.ExecuteUbergraph_ABP_M_OldCloth001_Implimentation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_M_OldCloth001_Implimentation_C::ExecuteUbergraph_ABP_M_OldCloth001_Implimentation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_M_OldCloth001_Implimentation_C", "ExecuteUbergraph_ABP_M_OldCloth001_Implimentation");

	Params::ABP_M_OldCloth001_Implimentation_C_ExecuteUbergraph_ABP_M_OldCloth001_Implimentation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
