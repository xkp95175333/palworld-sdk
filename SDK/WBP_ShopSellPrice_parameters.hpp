#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ShopSellPrice

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_ShopSellPrice.WBP_ShopSellPrice_C.SetPrice
// 0x0108 (0x0108 - 0x0000)
struct WBP_ShopSellPrice_C_SetPrice final
{
public:
	int32                                         Price;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AdditionalPrice;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E3D[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0078(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0090(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F0(0x0018)()
};
static_assert(alignof(WBP_ShopSellPrice_C_SetPrice) == 0x000008, "Wrong alignment on WBP_ShopSellPrice_C_SetPrice");
static_assert(sizeof(WBP_ShopSellPrice_C_SetPrice) == 0x000108, "Wrong size on WBP_ShopSellPrice_C_SetPrice");
static_assert(offsetof(WBP_ShopSellPrice_C_SetPrice, Price) == 0x000000, "Member 'WBP_ShopSellPrice_C_SetPrice::Price' has a wrong offset!");
static_assert(offsetof(WBP_ShopSellPrice_C_SetPrice, AdditionalPrice) == 0x000004, "Member 'WBP_ShopSellPrice_C_SetPrice::AdditionalPrice' has a wrong offset!");
static_assert(offsetof(WBP_ShopSellPrice_C_SetPrice, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000008, "Member 'WBP_ShopSellPrice_C_SetPrice::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopSellPrice_C_SetPrice, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WBP_ShopSellPrice_C_SetPrice::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopSellPrice_C_SetPrice, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'WBP_ShopSellPrice_C_SetPrice::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_ShopSellPrice_C_SetPrice, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000078, "Member 'WBP_ShopSellPrice_C_SetPrice::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopSellPrice_C_SetPrice, K2Node_MakeStruct_FormatArgumentData_1) == 0x000090, "Member 'WBP_ShopSellPrice_C_SetPrice::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopSellPrice_C_SetPrice, K2Node_MakeArray_Array) == 0x0000E0, "Member 'WBP_ShopSellPrice_C_SetPrice::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ShopSellPrice_C_SetPrice, CallFunc_Format_ReturnValue) == 0x0000F0, "Member 'WBP_ShopSellPrice_C_SetPrice::CallFunc_Format_ReturnValue' has a wrong offset!");

}
