#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WildPalDrinkWaterSpotBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_WildPalDrinkWaterSpotBase.BP_WildPalDrinkWaterSpotBase_C.DeleteChild
// 0x0048 (0x0048 - 0x0000)
struct BP_WildPalDrinkWaterSpotBase_C_DeleteChild final
{
public:
	TArray<class USceneComponent*>                TempComponent;                                     // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BA8[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class USceneComponent*                  Temp_object_Variable;                              // 0x0020(0x0008)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UMeshComponent*>                 CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	class USceneComponent*                        CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WildPalDrinkWaterSpotBase_C_DeleteChild) == 0x000008, "Wrong alignment on BP_WildPalDrinkWaterSpotBase_C_DeleteChild");
static_assert(sizeof(BP_WildPalDrinkWaterSpotBase_C_DeleteChild) == 0x000048, "Wrong size on BP_WildPalDrinkWaterSpotBase_C_DeleteChild");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_DeleteChild, TempComponent) == 0x000000, "Member 'BP_WildPalDrinkWaterSpotBase_C_DeleteChild::TempComponent' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_DeleteChild, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_WildPalDrinkWaterSpotBase_C_DeleteChild::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_DeleteChild, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_WildPalDrinkWaterSpotBase_C_DeleteChild::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_DeleteChild, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_WildPalDrinkWaterSpotBase_C_DeleteChild::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_DeleteChild, Temp_object_Variable) == 0x000020, "Member 'BP_WildPalDrinkWaterSpotBase_C_DeleteChild::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_DeleteChild, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000028, "Member 'BP_WildPalDrinkWaterSpotBase_C_DeleteChild::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_DeleteChild, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_WildPalDrinkWaterSpotBase_C_DeleteChild::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_DeleteChild, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_WildPalDrinkWaterSpotBase_C_DeleteChild::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_DeleteChild, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'BP_WildPalDrinkWaterSpotBase_C_DeleteChild::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_WildPalDrinkWaterSpotBase.BP_WildPalDrinkWaterSpotBase_C.ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase
// 0x0078 (0x0078 - 0x0000)
struct BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalNPCManager*                         CallFunc_GetNPCManager_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalWildPalDrinkWaterSpotProvider*      CallFunc_GetDrinkWaterSpotProvider_ReturnValue;    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_WildPalDrinkWaterPointComponent_C*> CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UBP_WildPalDrinkWaterPointComponent_C*  CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BA9[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BAA[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase) == 0x000008, "Wrong alignment on BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase");
static_assert(sizeof(BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase) == 0x000078, "Wrong size on BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase, EntryPoint) == 0x000000, "Member 'BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase, CallFunc_GetNPCManager_ReturnValue) == 0x000010, "Member 'BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase::CallFunc_GetNPCManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase, CallFunc_GetDrinkWaterSpotProvider_ReturnValue) == 0x000030, "Member 'BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase::CallFunc_GetDrinkWaterSpotProvider_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000038, "Member 'BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000058, "Member 'BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase, CallFunc_Array_Add_ReturnValue) == 0x000074, "Member 'BP_WildPalDrinkWaterSpotBase_C_ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}
