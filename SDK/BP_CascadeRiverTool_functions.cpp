#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CascadeRiverTool

#include "Basic.hpp"

#include "BP_CascadeRiverTool_classes.hpp"
#include "BP_CascadeRiverTool_parameters.hpp"


namespace SDK
{

// Function BP_CascadeRiverTool.BP_CascadeRiverTool_C.ExecuteUbergraph_BP_CascadeRiverTool
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CascadeRiverTool_C::ExecuteUbergraph_BP_CascadeRiverTool(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CascadeRiverTool_C", "ExecuteUbergraph_BP_CascadeRiverTool");

	Params::BP_CascadeRiverTool_C_ExecuteUbergraph_BP_CascadeRiverTool Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CascadeRiverTool.BP_CascadeRiverTool_C.GenerateSplineMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECollisionEnabled                       Param_Collision                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_CastShadow                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*                 TargetSpline                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  SplineStartOffset                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  TangetScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Spacing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                      StaticMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*                 Param_PathDeform                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  PathDeformDistance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsTriggerVolume                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CascadeRiverTool_C::GenerateSplineMesh(ECollisionEnabled Param_Collision, bool Param_CastShadow, class UMaterialInterface* Material, class USplineComponent* TargetSpline, double SplineStartOffset, const struct FVector& Offset, const struct FVector& Scale, double TangetScale, double Spacing, const struct FRotator& Rotation, class UStaticMesh* StaticMesh, class USplineComponent* Param_PathDeform, double PathDeformDistance, bool IsTriggerVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CascadeRiverTool_C", "GenerateSplineMesh");

	Params::BP_CascadeRiverTool_C_GenerateSplineMesh Parms{};

	Parms.Param_Collision = Param_Collision;
	Parms.Param_CastShadow = Param_CastShadow;
	Parms.Material = Material;
	Parms.TargetSpline = TargetSpline;
	Parms.SplineStartOffset = SplineStartOffset;
	Parms.Offset = std::move(Offset);
	Parms.Scale = std::move(Scale);
	Parms.TangetScale = TangetScale;
	Parms.Spacing = Spacing;
	Parms.Rotation = std::move(Rotation);
	Parms.StaticMesh = StaticMesh;
	Parms.Param_PathDeform = Param_PathDeform;
	Parms.PathDeformDistance = PathDeformDistance;
	Parms.IsTriggerVolume = IsTriggerVolume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CascadeRiverTool.BP_CascadeRiverTool_C.GenerateSplineMesh_Cycle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECollisionEnabled                       Param_Collision                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_CastShadow                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*                 TargetSpline                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  SplineStartOffset                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  TangetScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Spacing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                      StaticMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CascadeRiverTool_C::GenerateSplineMesh_Cycle(ECollisionEnabled Param_Collision, bool Param_CastShadow, class UMaterialInterface* Material, class USplineComponent* TargetSpline, double SplineStartOffset, const struct FVector& Offset, const struct FVector& Scale, double TangetScale, double Spacing, const struct FRotator& Rotation, class UStaticMesh* StaticMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CascadeRiverTool_C", "GenerateSplineMesh_Cycle");

	Params::BP_CascadeRiverTool_C_GenerateSplineMesh_Cycle Parms{};

	Parms.Param_Collision = Param_Collision;
	Parms.Param_CastShadow = Param_CastShadow;
	Parms.Material = Material;
	Parms.TargetSpline = TargetSpline;
	Parms.SplineStartOffset = SplineStartOffset;
	Parms.Offset = std::move(Offset);
	Parms.Scale = std::move(Scale);
	Parms.TangetScale = TangetScale;
	Parms.Spacing = Spacing;
	Parms.Rotation = std::move(Rotation);
	Parms.StaticMesh = StaticMesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CascadeRiverTool.BP_CascadeRiverTool_C.GenerateSplineMesh_TriggerVolume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECollisionEnabled                       Param_Collision                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_CastShadow                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*                 TargetSpline                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  SplineStartOffset                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  TangetScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Spacing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                      StaticMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*                 PathDeform                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  PathDeformDistance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsTriggerVolume                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CascadeRiverTool_C::GenerateSplineMesh_TriggerVolume(ECollisionEnabled Param_Collision, bool Param_CastShadow, class UMaterialInterface* Material, class USplineComponent* TargetSpline, double SplineStartOffset, const struct FVector& Offset, const struct FVector& Scale, double TangetScale, double Spacing, const struct FRotator& Rotation, class UStaticMesh* StaticMesh, class USplineComponent* PathDeform, double PathDeformDistance, bool IsTriggerVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CascadeRiverTool_C", "GenerateSplineMesh_TriggerVolume");

	Params::BP_CascadeRiverTool_C_GenerateSplineMesh_TriggerVolume Parms{};

	Parms.Param_Collision = Param_Collision;
	Parms.Param_CastShadow = Param_CastShadow;
	Parms.Material = Material;
	Parms.TargetSpline = TargetSpline;
	Parms.SplineStartOffset = SplineStartOffset;
	Parms.Offset = std::move(Offset);
	Parms.Scale = std::move(Scale);
	Parms.TangetScale = TangetScale;
	Parms.Spacing = Spacing;
	Parms.Rotation = std::move(Rotation);
	Parms.StaticMesh = StaticMesh;
	Parms.PathDeform = PathDeform;
	Parms.PathDeformDistance = PathDeformDistance;
	Parms.IsTriggerVolume = IsTriggerVolume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CascadeRiverTool.BP_CascadeRiverTool_C.PathDeform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*                 Spline                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CoorinatesIn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          _CoordinatesOut                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CascadeRiverTool_C::PathDeform(class USplineComponent* Spline, const struct FVector& CoorinatesIn, double Distance, struct FVector* _CoordinatesOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CascadeRiverTool_C", "PathDeform");

	Params::BP_CascadeRiverTool_C_PathDeform Parms{};

	Parms.Spline = Spline;
	Parms.CoorinatesIn = std::move(CoorinatesIn);
	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

	if (_CoordinatesOut != nullptr)
		*_CoordinatesOut = std::move(Parms._CoordinatesOut);
}


// Function BP_CascadeRiverTool.BP_CascadeRiverTool_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CascadeRiverTool_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CascadeRiverTool_C", "ReceiveTick");

	Params::BP_CascadeRiverTool_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CascadeRiverTool.BP_CascadeRiverTool_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CascadeRiverTool_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CascadeRiverTool_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
