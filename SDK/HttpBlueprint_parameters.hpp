#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HttpBlueprint

#include "Basic.hpp"

#include "HttpBlueprint_structs.hpp"


namespace SDK::Params
{

// Function HttpBlueprint.HttpBlueprintFunctionLibrary.AddHeader
// 0x0070 (0x0070 - 0x0000)
struct HttpBlueprintFunctionLibrary_AddHeader final
{
public:
	struct FHttpHeader                            HeaderObject;                                      // 0x0000(0x0050)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 NewHeader;                                         // 0x0050(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 NewHeaderValue;                                    // 0x0060(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(HttpBlueprintFunctionLibrary_AddHeader) == 0x000008, "Wrong alignment on HttpBlueprintFunctionLibrary_AddHeader");
static_assert(sizeof(HttpBlueprintFunctionLibrary_AddHeader) == 0x000070, "Wrong size on HttpBlueprintFunctionLibrary_AddHeader");
static_assert(offsetof(HttpBlueprintFunctionLibrary_AddHeader, HeaderObject) == 0x000000, "Member 'HttpBlueprintFunctionLibrary_AddHeader::HeaderObject' has a wrong offset!");
static_assert(offsetof(HttpBlueprintFunctionLibrary_AddHeader, NewHeader) == 0x000050, "Member 'HttpBlueprintFunctionLibrary_AddHeader::NewHeader' has a wrong offset!");
static_assert(offsetof(HttpBlueprintFunctionLibrary_AddHeader, NewHeaderValue) == 0x000060, "Member 'HttpBlueprintFunctionLibrary_AddHeader::NewHeaderValue' has a wrong offset!");

// Function HttpBlueprint.HttpBlueprintFunctionLibrary.GetAllHeaders
// 0x0060 (0x0060 - 0x0000)
struct HttpBlueprintFunctionLibrary_GetAllHeaders final
{
public:
	struct FHttpHeader                            HeaderObject;                                      // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                         ReturnValue;                                       // 0x0050(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(HttpBlueprintFunctionLibrary_GetAllHeaders) == 0x000008, "Wrong alignment on HttpBlueprintFunctionLibrary_GetAllHeaders");
static_assert(sizeof(HttpBlueprintFunctionLibrary_GetAllHeaders) == 0x000060, "Wrong size on HttpBlueprintFunctionLibrary_GetAllHeaders");
static_assert(offsetof(HttpBlueprintFunctionLibrary_GetAllHeaders, HeaderObject) == 0x000000, "Member 'HttpBlueprintFunctionLibrary_GetAllHeaders::HeaderObject' has a wrong offset!");
static_assert(offsetof(HttpBlueprintFunctionLibrary_GetAllHeaders, ReturnValue) == 0x000050, "Member 'HttpBlueprintFunctionLibrary_GetAllHeaders::ReturnValue' has a wrong offset!");

// Function HttpBlueprint.HttpBlueprintFunctionLibrary.GetAllHeaders_Map
// 0x00A0 (0x00A0 - 0x0000)
struct HttpBlueprintFunctionLibrary_GetAllHeaders_Map final
{
public:
	struct FHttpHeader                            HeaderObject;                                      // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>            ReturnValue;                                       // 0x0050(0x0050)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(HttpBlueprintFunctionLibrary_GetAllHeaders_Map) == 0x000008, "Wrong alignment on HttpBlueprintFunctionLibrary_GetAllHeaders_Map");
static_assert(sizeof(HttpBlueprintFunctionLibrary_GetAllHeaders_Map) == 0x0000A0, "Wrong size on HttpBlueprintFunctionLibrary_GetAllHeaders_Map");
static_assert(offsetof(HttpBlueprintFunctionLibrary_GetAllHeaders_Map, HeaderObject) == 0x000000, "Member 'HttpBlueprintFunctionLibrary_GetAllHeaders_Map::HeaderObject' has a wrong offset!");
static_assert(offsetof(HttpBlueprintFunctionLibrary_GetAllHeaders_Map, ReturnValue) == 0x000050, "Member 'HttpBlueprintFunctionLibrary_GetAllHeaders_Map::ReturnValue' has a wrong offset!");

// Function HttpBlueprint.HttpBlueprintFunctionLibrary.GetHeaderValue
// 0x0078 (0x0078 - 0x0000)
struct HttpBlueprintFunctionLibrary_GetHeaderValue final
{
public:
	struct FHttpHeader                            HeaderObject;                                      // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 HeaderName;                                        // 0x0050(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 OutHeaderValue;                                    // 0x0060(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0070(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16EC[0x7];                                     // 0x0071(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(HttpBlueprintFunctionLibrary_GetHeaderValue) == 0x000008, "Wrong alignment on HttpBlueprintFunctionLibrary_GetHeaderValue");
static_assert(sizeof(HttpBlueprintFunctionLibrary_GetHeaderValue) == 0x000078, "Wrong size on HttpBlueprintFunctionLibrary_GetHeaderValue");
static_assert(offsetof(HttpBlueprintFunctionLibrary_GetHeaderValue, HeaderObject) == 0x000000, "Member 'HttpBlueprintFunctionLibrary_GetHeaderValue::HeaderObject' has a wrong offset!");
static_assert(offsetof(HttpBlueprintFunctionLibrary_GetHeaderValue, HeaderName) == 0x000050, "Member 'HttpBlueprintFunctionLibrary_GetHeaderValue::HeaderName' has a wrong offset!");
static_assert(offsetof(HttpBlueprintFunctionLibrary_GetHeaderValue, OutHeaderValue) == 0x000060, "Member 'HttpBlueprintFunctionLibrary_GetHeaderValue::OutHeaderValue' has a wrong offset!");
static_assert(offsetof(HttpBlueprintFunctionLibrary_GetHeaderValue, ReturnValue) == 0x000070, "Member 'HttpBlueprintFunctionLibrary_GetHeaderValue::ReturnValue' has a wrong offset!");

// Function HttpBlueprint.HttpBlueprintFunctionLibrary.MakeRequestHeader
// 0x00A0 (0x00A0 - 0x0000)
struct HttpBlueprintFunctionLibrary_MakeRequestHeader final
{
public:
	TMap<class FString, class FString>            Headers;                                           // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FHttpHeader                            OutHeader;                                         // 0x0050(0x0050)(Parm, OutParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(HttpBlueprintFunctionLibrary_MakeRequestHeader) == 0x000008, "Wrong alignment on HttpBlueprintFunctionLibrary_MakeRequestHeader");
static_assert(sizeof(HttpBlueprintFunctionLibrary_MakeRequestHeader) == 0x0000A0, "Wrong size on HttpBlueprintFunctionLibrary_MakeRequestHeader");
static_assert(offsetof(HttpBlueprintFunctionLibrary_MakeRequestHeader, Headers) == 0x000000, "Member 'HttpBlueprintFunctionLibrary_MakeRequestHeader::Headers' has a wrong offset!");
static_assert(offsetof(HttpBlueprintFunctionLibrary_MakeRequestHeader, OutHeader) == 0x000050, "Member 'HttpBlueprintFunctionLibrary_MakeRequestHeader::OutHeader' has a wrong offset!");

// Function HttpBlueprint.HttpBlueprintFunctionLibrary.RemoveHeader
// 0x0068 (0x0068 - 0x0000)
struct HttpBlueprintFunctionLibrary_RemoveHeader final
{
public:
	struct FHttpHeader                            HeaderObject;                                      // 0x0000(0x0050)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 HeaderToRemove;                                    // 0x0050(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16ED[0x7];                                     // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(HttpBlueprintFunctionLibrary_RemoveHeader) == 0x000008, "Wrong alignment on HttpBlueprintFunctionLibrary_RemoveHeader");
static_assert(sizeof(HttpBlueprintFunctionLibrary_RemoveHeader) == 0x000068, "Wrong size on HttpBlueprintFunctionLibrary_RemoveHeader");
static_assert(offsetof(HttpBlueprintFunctionLibrary_RemoveHeader, HeaderObject) == 0x000000, "Member 'HttpBlueprintFunctionLibrary_RemoveHeader::HeaderObject' has a wrong offset!");
static_assert(offsetof(HttpBlueprintFunctionLibrary_RemoveHeader, HeaderToRemove) == 0x000050, "Member 'HttpBlueprintFunctionLibrary_RemoveHeader::HeaderToRemove' has a wrong offset!");
static_assert(offsetof(HttpBlueprintFunctionLibrary_RemoveHeader, ReturnValue) == 0x000060, "Member 'HttpBlueprintFunctionLibrary_RemoveHeader::ReturnValue' has a wrong offset!");

}
