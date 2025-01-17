#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BuildObjectScrollListBlock

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C
// 0x0040 (0x0448 - 0x0408)
class UWBP_BuildObjectScrollListBlock_C final : public UPalUserWidget
{
public:
	class UWBP_ConstructionListContent_C*         WBP_ConstructionListContent;                       // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedAnyContent;                               // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHoveredAnyContent;                               // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhoveredAnyContent;                             // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EPalBuildObjectTypeB                          TypeB;                                             // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBuildObjectTypeA                          TypeA;                                             // 0x0441(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddBuildObjectList(TArray<struct FPalBuildObjectData>& buildObjectDataArray, EPalBuildObjectTypeB Param_TypeB, EPalBuildObjectTypeA Param_TypeA);
	void CreateBuildObjectIconWidget(const struct FPalBuildObjectData& BuildObjectData, class UWBP_PalBuildObjectThumbnailButton_C** CreatedWidget);
	void FocusTopContent();
	void GetBuildObjectTypeA(EPalBuildObjectTypeA* NewParam);
	void GetBuildObjectTypeB(EPalBuildObjectTypeB* Param_TypeB);
	void GetFocusTarget(class UWidget** Target);
	void OnClicked_Internal(class UWBP_PalBuildObjectThumbnailButton_C* SelfWidget);
	void OnClickedAnyContent__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* Widget);
	void OnHovered_Internal(class UWBP_PalBuildObjectThumbnailButton_C* SelfWidget);
	void OnHoveredAnyContent__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* Widget);
	void OnUnhovered_Internal(class UWBP_PalBuildObjectThumbnailButton_C* SelftWidget);
	void OnUnhoveredAnyContent__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* Widget);
	void SetCategoryName(const class FText& CategoryNameText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BuildObjectScrollListBlock_C">();
	}
	static class UWBP_BuildObjectScrollListBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BuildObjectScrollListBlock_C>();
	}
};
static_assert(alignof(UWBP_BuildObjectScrollListBlock_C) == 0x000008, "Wrong alignment on UWBP_BuildObjectScrollListBlock_C");
static_assert(sizeof(UWBP_BuildObjectScrollListBlock_C) == 0x000448, "Wrong size on UWBP_BuildObjectScrollListBlock_C");
static_assert(offsetof(UWBP_BuildObjectScrollListBlock_C, WBP_ConstructionListContent) == 0x000408, "Member 'UWBP_BuildObjectScrollListBlock_C::WBP_ConstructionListContent' has a wrong offset!");
static_assert(offsetof(UWBP_BuildObjectScrollListBlock_C, OnClickedAnyContent) == 0x000410, "Member 'UWBP_BuildObjectScrollListBlock_C::OnClickedAnyContent' has a wrong offset!");
static_assert(offsetof(UWBP_BuildObjectScrollListBlock_C, OnHoveredAnyContent) == 0x000420, "Member 'UWBP_BuildObjectScrollListBlock_C::OnHoveredAnyContent' has a wrong offset!");
static_assert(offsetof(UWBP_BuildObjectScrollListBlock_C, OnUnhoveredAnyContent) == 0x000430, "Member 'UWBP_BuildObjectScrollListBlock_C::OnUnhoveredAnyContent' has a wrong offset!");
static_assert(offsetof(UWBP_BuildObjectScrollListBlock_C, TypeB) == 0x000440, "Member 'UWBP_BuildObjectScrollListBlock_C::TypeB' has a wrong offset!");
static_assert(offsetof(UWBP_BuildObjectScrollListBlock_C, TypeA) == 0x000441, "Member 'UWBP_BuildObjectScrollListBlock_C::TypeA' has a wrong offset!");

}

