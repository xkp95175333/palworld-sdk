#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_master_vine_spline

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "Tree_Twist_Data_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_master_vine_spline.BP_master_vine_spline_C
// 0x01D0 (0x0460 - 0x0290)
class ABP_master_vine_spline_C final : public AActor
{
public:
	class USplineComponent*                       Spline1;                                           // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Spline_mesh;                                       // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                         MeshComponent;                                     // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynamic_Material;                                  // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynamic_Material1;                                 // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Draw_Final__Disable_for_Preview_Minus_Better_Performance_; // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Draw_Meshes__Disable_for_quicker_spline_creation_; // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ACC[0x6];                                     // 0x02BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Start_Scale;                                       // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        End_Scale;                                         // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Lastscale_Value;                                   // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Firstscale_Value;                                  // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_Number;                                      // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ACD[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineMeshComponent*                   SplineMesh1;                                       // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SplineMesh;                                        // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            EndMesh;                                           // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Spline_Start;                                      // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SplineEnd;                                         // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SplineLength;                                      // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Choose_Material;                                   // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Choose_Material_LOD2;                              // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Vertical_tiling_amount;                            // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Horizontal_tiling_amount;                          // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Tesselation_Scale;                                 // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Tesselation_Fade_Distance;                         // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GetNumSplinePoints;                                // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Add_Branches;                                      // 0x035C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ACE[0x3];                                     // 0x035D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Number_of_Branches;                                // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ACF[0x4];                                     // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Branches_Start_Distance_Along_Spline;              // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Wind_Intensity;                                    // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Min_Branch_Scale;                                  // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Max_Branch_Scale;                                  // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Pitch;                                             // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Pitch_Variation;                                   // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Yaw;                                               // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Yaw_Variation;                                     // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Roll;                                              // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Roll_Variation;                                    // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Branch_Mesh1;                                      // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Branch_Mesh2;                                      // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Branch_Mesh3;                                      // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                   SplineMesh2;                                       // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Branch_Mesh4;                                      // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTree_Twist_Data>               Vine_Twist_Per_Spline_Point;                       // 0x03E0(0x0010)(Edit, BlueprintVisible)
	double                                        Spline_Start2;                                     // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SplineEnd2;                                        // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Firstscale_Value2;                                 // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Last_Index;                                        // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AD0[0x4];                                     // 0x0414(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicsConstraintComponent*            Physics_Constraint;                                // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Two;                                               // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AD1[0x4];                                     // 0x0424(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   BranchMesh1;                                       // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BranchMesh2;                                       // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BranchMesh3;                                       // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Vertex_Wind_Distance1;                             // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Vertex_Wind_Distance2;                             // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Vertex_Wind_Distance3;                             // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BranchMesh4;                                       // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_master_vine_spline_C">();
	}
	static class ABP_master_vine_spline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_master_vine_spline_C>();
	}
};
static_assert(alignof(ABP_master_vine_spline_C) == 0x000008, "Wrong alignment on ABP_master_vine_spline_C");
static_assert(sizeof(ABP_master_vine_spline_C) == 0x000460, "Wrong size on ABP_master_vine_spline_C");
static_assert(offsetof(ABP_master_vine_spline_C, Spline1) == 0x000290, "Member 'ABP_master_vine_spline_C::Spline1' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Spline_mesh) == 0x000298, "Member 'ABP_master_vine_spline_C::Spline_mesh' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, MeshComponent) == 0x0002A0, "Member 'ABP_master_vine_spline_C::MeshComponent' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Dynamic_Material) == 0x0002A8, "Member 'ABP_master_vine_spline_C::Dynamic_Material' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Dynamic_Material1) == 0x0002B0, "Member 'ABP_master_vine_spline_C::Dynamic_Material1' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Draw_Final__Disable_for_Preview_Minus_Better_Performance_) == 0x0002B8, "Member 'ABP_master_vine_spline_C::Draw_Final__Disable_for_Preview_Minus_Better_Performance_' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Draw_Meshes__Disable_for_quicker_spline_creation_) == 0x0002B9, "Member 'ABP_master_vine_spline_C::Draw_Meshes__Disable_for_quicker_spline_creation_' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Start_Scale) == 0x0002C0, "Member 'ABP_master_vine_spline_C::Start_Scale' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, End_Scale) == 0x0002C8, "Member 'ABP_master_vine_spline_C::End_Scale' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Lastscale_Value) == 0x0002D0, "Member 'ABP_master_vine_spline_C::Lastscale_Value' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Firstscale_Value) == 0x0002E0, "Member 'ABP_master_vine_spline_C::Firstscale_Value' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Index_Number) == 0x0002F0, "Member 'ABP_master_vine_spline_C::Index_Number' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, SplineMesh1) == 0x0002F8, "Member 'ABP_master_vine_spline_C::SplineMesh1' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, SplineMesh) == 0x000300, "Member 'ABP_master_vine_spline_C::SplineMesh' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, EndMesh) == 0x000308, "Member 'ABP_master_vine_spline_C::EndMesh' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Spline_Start) == 0x000310, "Member 'ABP_master_vine_spline_C::Spline_Start' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, SplineEnd) == 0x000318, "Member 'ABP_master_vine_spline_C::SplineEnd' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, SplineLength) == 0x000320, "Member 'ABP_master_vine_spline_C::SplineLength' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Choose_Material) == 0x000328, "Member 'ABP_master_vine_spline_C::Choose_Material' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Choose_Material_LOD2) == 0x000330, "Member 'ABP_master_vine_spline_C::Choose_Material_LOD2' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Vertical_tiling_amount) == 0x000338, "Member 'ABP_master_vine_spline_C::Vertical_tiling_amount' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Horizontal_tiling_amount) == 0x000340, "Member 'ABP_master_vine_spline_C::Horizontal_tiling_amount' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Tesselation_Scale) == 0x000348, "Member 'ABP_master_vine_spline_C::Tesselation_Scale' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Tesselation_Fade_Distance) == 0x000350, "Member 'ABP_master_vine_spline_C::Tesselation_Fade_Distance' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, GetNumSplinePoints) == 0x000358, "Member 'ABP_master_vine_spline_C::GetNumSplinePoints' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Add_Branches) == 0x00035C, "Member 'ABP_master_vine_spline_C::Add_Branches' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Number_of_Branches) == 0x000360, "Member 'ABP_master_vine_spline_C::Number_of_Branches' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Branches_Start_Distance_Along_Spline) == 0x000368, "Member 'ABP_master_vine_spline_C::Branches_Start_Distance_Along_Spline' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Wind_Intensity) == 0x000370, "Member 'ABP_master_vine_spline_C::Wind_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Min_Branch_Scale) == 0x000378, "Member 'ABP_master_vine_spline_C::Min_Branch_Scale' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Max_Branch_Scale) == 0x000380, "Member 'ABP_master_vine_spline_C::Max_Branch_Scale' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Pitch) == 0x000388, "Member 'ABP_master_vine_spline_C::Pitch' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Pitch_Variation) == 0x000390, "Member 'ABP_master_vine_spline_C::Pitch_Variation' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Yaw) == 0x000398, "Member 'ABP_master_vine_spline_C::Yaw' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Yaw_Variation) == 0x0003A0, "Member 'ABP_master_vine_spline_C::Yaw_Variation' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Roll) == 0x0003A8, "Member 'ABP_master_vine_spline_C::Roll' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Roll_Variation) == 0x0003B0, "Member 'ABP_master_vine_spline_C::Roll_Variation' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Branch_Mesh1) == 0x0003B8, "Member 'ABP_master_vine_spline_C::Branch_Mesh1' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Branch_Mesh2) == 0x0003C0, "Member 'ABP_master_vine_spline_C::Branch_Mesh2' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Branch_Mesh3) == 0x0003C8, "Member 'ABP_master_vine_spline_C::Branch_Mesh3' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, SplineMesh2) == 0x0003D0, "Member 'ABP_master_vine_spline_C::SplineMesh2' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Branch_Mesh4) == 0x0003D8, "Member 'ABP_master_vine_spline_C::Branch_Mesh4' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Vine_Twist_Per_Spline_Point) == 0x0003E0, "Member 'ABP_master_vine_spline_C::Vine_Twist_Per_Spline_Point' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Spline_Start2) == 0x0003F0, "Member 'ABP_master_vine_spline_C::Spline_Start2' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, SplineEnd2) == 0x0003F8, "Member 'ABP_master_vine_spline_C::SplineEnd2' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Firstscale_Value2) == 0x000400, "Member 'ABP_master_vine_spline_C::Firstscale_Value2' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Last_Index) == 0x000410, "Member 'ABP_master_vine_spline_C::Last_Index' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Physics_Constraint) == 0x000418, "Member 'ABP_master_vine_spline_C::Physics_Constraint' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Two) == 0x000420, "Member 'ABP_master_vine_spline_C::Two' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, BranchMesh1) == 0x000428, "Member 'ABP_master_vine_spline_C::BranchMesh1' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, BranchMesh2) == 0x000430, "Member 'ABP_master_vine_spline_C::BranchMesh2' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, BranchMesh3) == 0x000438, "Member 'ABP_master_vine_spline_C::BranchMesh3' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Vertex_Wind_Distance1) == 0x000440, "Member 'ABP_master_vine_spline_C::Vertex_Wind_Distance1' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Vertex_Wind_Distance2) == 0x000448, "Member 'ABP_master_vine_spline_C::Vertex_Wind_Distance2' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, Vertex_Wind_Distance3) == 0x000450, "Member 'ABP_master_vine_spline_C::Vertex_Wind_Distance3' has a wrong offset!");
static_assert(offsetof(ABP_master_vine_spline_C, BranchMesh4) == 0x000458, "Member 'ABP_master_vine_spline_C::BranchMesh4' has a wrong offset!");

}
