#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalCommonCharacterIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_PalCharacterIconBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalCommonCharacterIcon.WBP_PalCommonCharacterIcon_C
// 0x0030 (0x0470 - 0x0440)
class UWBP_PalCommonCharacterIcon_C final : public UWBP_PalCharacterIconBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PalCommonCharacterIcon_C;       // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                      CircularThrobber_96;                               // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconImage;                                         // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DynamicMaterial;                                   // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEmpty;                                           // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_258A[0x7];                                     // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SphereMaskRadius;                                  // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_PalCommonCharacterIcon(int32 EntryPoint);
	void OnEmpty();
	void OnInitialized();
	void OnLoaded(class UTexture2D* LoadedTexture);
	void OnStartLoad();
	void SetFraction(double Fraction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalCommonCharacterIcon_C">();
	}
	static class UWBP_PalCommonCharacterIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalCommonCharacterIcon_C>();
	}
};
static_assert(alignof(UWBP_PalCommonCharacterIcon_C) == 0x000008, "Wrong alignment on UWBP_PalCommonCharacterIcon_C");
static_assert(sizeof(UWBP_PalCommonCharacterIcon_C) == 0x000470, "Wrong size on UWBP_PalCommonCharacterIcon_C");
static_assert(offsetof(UWBP_PalCommonCharacterIcon_C, UberGraphFrame_WBP_PalCommonCharacterIcon_C) == 0x000440, "Member 'UWBP_PalCommonCharacterIcon_C::UberGraphFrame_WBP_PalCommonCharacterIcon_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterIcon_C, CircularThrobber_96) == 0x000448, "Member 'UWBP_PalCommonCharacterIcon_C::CircularThrobber_96' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterIcon_C, IconImage) == 0x000450, "Member 'UWBP_PalCommonCharacterIcon_C::IconImage' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterIcon_C, DynamicMaterial) == 0x000458, "Member 'UWBP_PalCommonCharacterIcon_C::DynamicMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterIcon_C, IsEmpty) == 0x000460, "Member 'UWBP_PalCommonCharacterIcon_C::IsEmpty' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterIcon_C, SphereMaskRadius) == 0x000468, "Member 'UWBP_PalCommonCharacterIcon_C::SphereMaskRadius' has a wrong offset!");

}
