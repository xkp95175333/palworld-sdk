#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CommonCircularGauge

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_CommonCircularGauge.WBP_CommonCircularGauge_C.ExecuteUbergraph_WBP_CommonCircularGauge
// 0x0050 (0x0050 - 0x0000)
struct WBP_CommonCircularGauge_C_ExecuteUbergraph_WBP_CommonCircularGauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57DB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommonCircularGauge_C_ExecuteUbergraph_WBP_CommonCircularGauge) == 0x000008, "Wrong alignment on WBP_CommonCircularGauge_C_ExecuteUbergraph_WBP_CommonCircularGauge");
static_assert(sizeof(WBP_CommonCircularGauge_C_ExecuteUbergraph_WBP_CommonCircularGauge) == 0x000050, "Wrong size on WBP_CommonCircularGauge_C_ExecuteUbergraph_WBP_CommonCircularGauge");
static_assert(offsetof(WBP_CommonCircularGauge_C_ExecuteUbergraph_WBP_CommonCircularGauge, EntryPoint) == 0x000000, "Member 'WBP_CommonCircularGauge_C_ExecuteUbergraph_WBP_CommonCircularGauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CommonCircularGauge_C_ExecuteUbergraph_WBP_CommonCircularGauge, K2Node_Event_MyGeometry) == 0x000008, "Member 'WBP_CommonCircularGauge_C_ExecuteUbergraph_WBP_CommonCircularGauge::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CommonCircularGauge_C_ExecuteUbergraph_WBP_CommonCircularGauge, K2Node_Event_InDeltaTime) == 0x000048, "Member 'WBP_CommonCircularGauge_C_ExecuteUbergraph_WBP_CommonCircularGauge::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function WBP_CommonCircularGauge.WBP_CommonCircularGauge_C.ReflectRateToImage
// 0x0018 (0x0018 - 0x0000)
struct WBP_CommonCircularGauge_C_ReflectRateToImage final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57DC[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommonCircularGauge_C_ReflectRateToImage) == 0x000008, "Wrong alignment on WBP_CommonCircularGauge_C_ReflectRateToImage");
static_assert(sizeof(WBP_CommonCircularGauge_C_ReflectRateToImage) == 0x000018, "Wrong size on WBP_CommonCircularGauge_C_ReflectRateToImage");
static_assert(offsetof(WBP_CommonCircularGauge_C_ReflectRateToImage, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_CommonCircularGauge_C_ReflectRateToImage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonCircularGauge_C_ReflectRateToImage, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_CommonCircularGauge_C_ReflectRateToImage::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonCircularGauge_C_ReflectRateToImage, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'WBP_CommonCircularGauge_C_ReflectRateToImage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_CommonCircularGauge.WBP_CommonCircularGauge_C.SetTargetValue
// 0x0010 (0x0010 - 0x0000)
struct WBP_CommonCircularGauge_C_SetTargetValue final
{
public:
	double                                        Value;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetGaugeInterpolationTargetValue_TargetValue_ImplicitCast; // 0x0008(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommonCircularGauge_C_SetTargetValue) == 0x000008, "Wrong alignment on WBP_CommonCircularGauge_C_SetTargetValue");
static_assert(sizeof(WBP_CommonCircularGauge_C_SetTargetValue) == 0x000010, "Wrong size on WBP_CommonCircularGauge_C_SetTargetValue");
static_assert(offsetof(WBP_CommonCircularGauge_C_SetTargetValue, Value) == 0x000000, "Member 'WBP_CommonCircularGauge_C_SetTargetValue::Value' has a wrong offset!");
static_assert(offsetof(WBP_CommonCircularGauge_C_SetTargetValue, CallFunc_SetGaugeInterpolationTargetValue_TargetValue_ImplicitCast) == 0x000008, "Member 'WBP_CommonCircularGauge_C_SetTargetValue::CallFunc_SetGaugeInterpolationTargetValue_TargetValue_ImplicitCast' has a wrong offset!");

// Function WBP_CommonCircularGauge.WBP_CommonCircularGauge_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_CommonCircularGauge_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommonCircularGauge_C_Tick) == 0x000008, "Wrong alignment on WBP_CommonCircularGauge_C_Tick");
static_assert(sizeof(WBP_CommonCircularGauge_C_Tick) == 0x000048, "Wrong size on WBP_CommonCircularGauge_C_Tick");
static_assert(offsetof(WBP_CommonCircularGauge_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_CommonCircularGauge_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CommonCircularGauge_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_CommonCircularGauge_C_Tick::InDeltaTime' has a wrong offset!");

}
