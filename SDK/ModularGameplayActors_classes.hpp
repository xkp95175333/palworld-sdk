#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModularGameplayActors

#include "Basic.hpp"

#include "AIModule_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class ModularGameplayActors.ModularGameMode
// 0x0000 (0x0378 - 0x0378)
class AModularGameMode final : public AGameMode
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModularGameMode">();
	}
	static class AModularGameMode* GetDefaultObj()
	{
		return GetDefaultObjImpl<AModularGameMode>();
	}
};
static_assert(alignof(AModularGameMode) == 0x000008, "Wrong alignment on AModularGameMode");
static_assert(sizeof(AModularGameMode) == 0x000378, "Wrong size on AModularGameMode");

// Class ModularGameplayActors.ModularAIController
// 0x0000 (0x03B8 - 0x03B8)
class AModularAIController final : public AAIController
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModularAIController">();
	}
	static class AModularAIController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AModularAIController>();
	}
};
static_assert(alignof(AModularAIController) == 0x000008, "Wrong alignment on AModularAIController");
static_assert(sizeof(AModularAIController) == 0x0003B8, "Wrong size on AModularAIController");

// Class ModularGameplayActors.ModularCharacter
// 0x0000 (0x0620 - 0x0620)
class AModularCharacter final : public ACharacter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModularCharacter">();
	}
	static class AModularCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<AModularCharacter>();
	}
};
static_assert(alignof(AModularCharacter) == 0x000010, "Wrong alignment on AModularCharacter");
static_assert(sizeof(AModularCharacter) == 0x000620, "Wrong size on AModularCharacter");

// Class ModularGameplayActors.ModularGameModeBase
// 0x0000 (0x0330 - 0x0330)
class AModularGameModeBase final : public AGameModeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModularGameModeBase">();
	}
	static class AModularGameModeBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<AModularGameModeBase>();
	}
};
static_assert(alignof(AModularGameModeBase) == 0x000008, "Wrong alignment on AModularGameModeBase");
static_assert(sizeof(AModularGameModeBase) == 0x000330, "Wrong size on AModularGameModeBase");

// Class ModularGameplayActors.ModularGameStateBase
// 0x0000 (0x02E0 - 0x02E0)
class AModularGameStateBase final : public AGameStateBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModularGameStateBase">();
	}
	static class AModularGameStateBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<AModularGameStateBase>();
	}
};
static_assert(alignof(AModularGameStateBase) == 0x000008, "Wrong alignment on AModularGameStateBase");
static_assert(sizeof(AModularGameStateBase) == 0x0002E0, "Wrong size on AModularGameStateBase");

// Class ModularGameplayActors.ModularGameState
// 0x0000 (0x0300 - 0x0300)
class AModularGameState final : public AGameState
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModularGameState">();
	}
	static class AModularGameState* GetDefaultObj()
	{
		return GetDefaultObjImpl<AModularGameState>();
	}
};
static_assert(alignof(AModularGameState) == 0x000008, "Wrong alignment on AModularGameState");
static_assert(sizeof(AModularGameState) == 0x000300, "Wrong size on AModularGameState");

// Class ModularGameplayActors.ModularPawn
// 0x0000 (0x0318 - 0x0318)
class AModularPawn final : public APawn
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModularPawn">();
	}
	static class AModularPawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<AModularPawn>();
	}
};
static_assert(alignof(AModularPawn) == 0x000008, "Wrong alignment on AModularPawn");
static_assert(sizeof(AModularPawn) == 0x000318, "Wrong size on AModularPawn");

// Class ModularGameplayActors.ModularPlayerController
// 0x0000 (0x0850 - 0x0850)
class AModularPlayerController : public APlayerController
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModularPlayerController">();
	}
	static class AModularPlayerController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AModularPlayerController>();
	}
};
static_assert(alignof(AModularPlayerController) == 0x000008, "Wrong alignment on AModularPlayerController");
static_assert(sizeof(AModularPlayerController) == 0x000850, "Wrong size on AModularPlayerController");

// Class ModularGameplayActors.ModularPlayerState
// 0x0000 (0x03A8 - 0x03A8)
class AModularPlayerState final : public APlayerState
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModularPlayerState">();
	}
	static class AModularPlayerState* GetDefaultObj()
	{
		return GetDefaultObjImpl<AModularPlayerState>();
	}
};
static_assert(alignof(AModularPlayerState) == 0x000008, "Wrong alignment on AModularPlayerState");
static_assert(sizeof(AModularPlayerState) == 0x0003A8, "Wrong size on AModularPlayerState");

}
