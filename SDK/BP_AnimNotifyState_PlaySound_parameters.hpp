#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimNotifyState_PlaySound

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_AnimNotifyState_PlaySound.BP_AnimNotifyState_PlaySound_C.Get Raycast Location
// 0x00F8 (0x00F8 - 0x0000)
struct BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location final
{
public:
	class UMeshComponent*                         Mesh;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                St;                                                // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Ed;                                                // 0x0020(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RaycastEd;                                         // 0x0038(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RaycastSt;                                         // 0x0050(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0068(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Name_None;                                         // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location) == 0x000008, "Wrong alignment on BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location");
static_assert(sizeof(BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location) == 0x0000F8, "Wrong size on BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location, Mesh) == 0x000000, "Member 'BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location::Mesh' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location, St) == 0x000008, "Member 'BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location::St' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location, Ed) == 0x000020, "Member 'BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location::Ed' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location, RaycastEd) == 0x000038, "Member 'BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location::RaycastEd' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location, RaycastSt) == 0x000050, "Member 'BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location::RaycastSt' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location, Location) == 0x000068, "Member 'BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location::Location' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location, Name_None) == 0x000080, "Member 'BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location::Name_None' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location, CallFunc_Add_VectorVector_ReturnValue) == 0x000088, "Member 'BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0000A0, "Member 'BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location, CallFunc_GetOwner_ReturnValue) == 0x0000B8, "Member 'BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000C0, "Member 'BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location, CallFunc_GetSocketLocation_ReturnValue) == 0x0000D8, "Member 'BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location, CallFunc_NotEqual_NameName_ReturnValue) == 0x0000F0, "Member 'BP_AnimNotifyState_PlaySound_C_Get_Raycast_Location::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

// Function BP_AnimNotifyState_PlaySound.BP_AnimNotifyState_PlaySound_C.PlaySound
// 0x0020 (0x0020 - 0x0000)
struct BP_AnimNotifyState_PlaySound_C_PlaySound final
{
public:
	class UMeshComponent*                         MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   Name_None;                                         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnimNotifyState_PlaySound_C_PlaySound) == 0x000008, "Wrong alignment on BP_AnimNotifyState_PlaySound_C_PlaySound");
static_assert(sizeof(BP_AnimNotifyState_PlaySound_C_PlaySound) == 0x000020, "Wrong size on BP_AnimNotifyState_PlaySound_C_PlaySound");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_PlaySound, MeshComp) == 0x000000, "Member 'BP_AnimNotifyState_PlaySound_C_PlaySound::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_PlaySound, Name_None) == 0x000008, "Member 'BP_AnimNotifyState_PlaySound_C_PlaySound::Name_None' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_PlaySound, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'BP_AnimNotifyState_PlaySound_C_PlaySound::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_PlaySound, CallFunc_NotEqual_NameName_ReturnValue) == 0x000018, "Member 'BP_AnimNotifyState_PlaySound_C_PlaySound::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

// Function BP_AnimNotifyState_PlaySound.BP_AnimNotifyState_PlaySound_C.PlaySound_Editor
// 0x0028 (0x0028 - 0x0000)
struct BP_AnimNotifyState_PlaySound_C_PlaySound_Editor final
{
public:
	class UMeshComponent*                         MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1A[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Name_None;                                         // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1B[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnimNotifyState_PlaySound_C_PlaySound_Editor) == 0x000008, "Wrong alignment on BP_AnimNotifyState_PlaySound_C_PlaySound_Editor");
static_assert(sizeof(BP_AnimNotifyState_PlaySound_C_PlaySound_Editor) == 0x000028, "Wrong size on BP_AnimNotifyState_PlaySound_C_PlaySound_Editor");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_PlaySound_Editor, MeshComp) == 0x000000, "Member 'BP_AnimNotifyState_PlaySound_C_PlaySound_Editor::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_PlaySound_Editor, ReturnValue) == 0x000008, "Member 'BP_AnimNotifyState_PlaySound_C_PlaySound_Editor::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_PlaySound_Editor, Name_None) == 0x00000C, "Member 'BP_AnimNotifyState_PlaySound_C_PlaySound_Editor::Name_None' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_PlaySound_Editor, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_AnimNotifyState_PlaySound_C_PlaySound_Editor::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_PlaySound_Editor, CallFunc_NotEqual_NameName_ReturnValue) == 0x000020, "Member 'BP_AnimNotifyState_PlaySound_C_PlaySound_Editor::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

// Function BP_AnimNotifyState_PlaySound.BP_AnimNotifyState_PlaySound_C.Received_NotifyBegin
// 0x0048 (0x0048 - 0x0000)
struct BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1C[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0018(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlaySound_Editor_ReturnValue;             // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGame_ReturnValue;                       // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin");
static_assert(sizeof(BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin) == 0x000048, "Wrong size on BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin, EventReference) == 0x000018, "Member 'BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin::EventReference' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin, ReturnValue) == 0x000040, "Member 'BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin, CallFunc_Not_PreBool_ReturnValue) == 0x000041, "Member 'BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin, CallFunc_PlaySound_Editor_ReturnValue) == 0x000042, "Member 'BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin::CallFunc_PlaySound_Editor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin, CallFunc_IsGame_ReturnValue) == 0x000043, "Member 'BP_AnimNotifyState_PlaySound_C_Received_NotifyBegin::CallFunc_IsGame_ReturnValue' has a wrong offset!");

// Function BP_AnimNotifyState_PlaySound.BP_AnimNotifyState_PlaySound_C.Received_NotifyEnd
// 0x0058 (0x0058 - 0x0000)
struct BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1D[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGame_ReturnValue;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1E[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd");
static_assert(sizeof(BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd) == 0x000058, "Wrong size on BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd, EventReference) == 0x000010, "Member 'BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd::EventReference' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd, ReturnValue) == 0x000038, "Member 'BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd, CallFunc_IsGame_ReturnValue) == 0x000048, "Member 'BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd::CallFunc_IsGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue_1) == 0x000050, "Member 'BP_AnimNotifyState_PlaySound_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");

}
