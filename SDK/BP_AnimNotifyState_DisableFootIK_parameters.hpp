#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimNotifyState_DisableFootIK

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_AnimNotifyState_DisableFootIK.BP_AnimNotifyState_DisableFootIK_C.GetNotifyName
// 0x0010 (0x0010 - 0x0000)
struct BP_AnimNotifyState_DisableFootIK_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnimNotifyState_DisableFootIK_C_GetNotifyName) == 0x000008, "Wrong alignment on BP_AnimNotifyState_DisableFootIK_C_GetNotifyName");
static_assert(sizeof(BP_AnimNotifyState_DisableFootIK_C_GetNotifyName) == 0x000010, "Wrong size on BP_AnimNotifyState_DisableFootIK_C_GetNotifyName");
static_assert(offsetof(BP_AnimNotifyState_DisableFootIK_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'BP_AnimNotifyState_DisableFootIK_C_GetNotifyName::ReturnValue' has a wrong offset!");

// Function BP_AnimNotifyState_DisableFootIK.BP_AnimNotifyState_DisableFootIK_C.Received_NotifyBegin
// 0x0058 (0x0058 - 0x0000)
struct BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C5C[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0018(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C5D[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_FindOwnerActor_ReturnValue;               // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalFootIKComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin");
static_assert(sizeof(BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin) == 0x000058, "Wrong size on BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin");
static_assert(offsetof(BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin, EventReference) == 0x000018, "Member 'BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin::EventReference' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin, ReturnValue) == 0x000040, "Member 'BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin, CallFunc_FindOwnerActor_ReturnValue) == 0x000048, "Member 'BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin::CallFunc_FindOwnerActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin, CallFunc_GetComponentByClass_ReturnValue) == 0x000050, "Member 'BP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_AnimNotifyState_DisableFootIK.BP_AnimNotifyState_DisableFootIK_C.Received_NotifyEnd
// 0x0050 (0x0050 - 0x0000)
struct BP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C5E[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_FindOwnerActor_ReturnValue;               // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalFootIKComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on BP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd");
static_assert(sizeof(BP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd) == 0x000050, "Wrong size on BP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd");
static_assert(offsetof(BP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'BP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'BP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd, EventReference) == 0x000010, "Member 'BP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd::EventReference' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd, ReturnValue) == 0x000038, "Member 'BP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd, CallFunc_FindOwnerActor_ReturnValue) == 0x000040, "Member 'BP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd::CallFunc_FindOwnerActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd, CallFunc_GetComponentByClass_ReturnValue) == 0x000048, "Member 'BP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

}
