#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AudioSetting

#include "Basic.hpp"

#include "BP_AudioSetting_classes.hpp"
#include "BP_AudioSetting_parameters.hpp"


namespace SDK
{

// Function BP_AudioSetting.BP_AudioSetting_C.ExecuteUbergraph_BP_AudioSetting
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::ExecuteUbergraph_BP_AudioSetting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioSetting_C", "ExecuteUbergraph_BP_AudioSetting");

	Params::BP_AudioSetting_C_ExecuteUbergraph_BP_AudioSetting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AudioSetting.BP_AudioSetting_C.Initialize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_AudioSetting_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioSetting_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioSetting.BP_AudioSetting_C.Initialize_Impl
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AudioSetting_C::Initialize_Impl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioSetting_C", "Initialize_Impl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioSetting.BP_AudioSetting_C.Set Audio Bus Volume Impl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalAudioBus                            AudioBus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::Set_Audio_Bus_Volume_Impl(EPalAudioBus AudioBus, class FName Key, double Volume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioSetting_C", "Set Audio Bus Volume Impl");

	Params::BP_AudioSetting_C_Set_Audio_Bus_Volume_Impl Parms{};

	Parms.AudioBus = AudioBus;
	Parms.Key = Key;
	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AudioSetting.BP_AudioSetting_C.SetAudioBusMute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalAudioBus                            AudioBus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsMute                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::SetAudioBusMute(EPalAudioBus AudioBus, bool IsMute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioSetting_C", "SetAudioBusMute");

	Params::BP_AudioSetting_C_SetAudioBusMute Parms{};

	Parms.AudioBus = AudioBus;
	Parms.IsMute = IsMute;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AudioSetting.BP_AudioSetting_C.SetAudioBusMute_Impl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalAudioBus                            AudioBus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsMute                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::SetAudioBusMute_Impl(EPalAudioBus AudioBus, bool IsMute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioSetting_C", "SetAudioBusMute_Impl");

	Params::BP_AudioSetting_C_SetAudioBusMute_Impl Parms{};

	Parms.AudioBus = AudioBus;
	Parms.IsMute = IsMute;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AudioSetting.BP_AudioSetting_C.SetAudioBusVolume
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalAudioBus                            AudioBus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Key                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::SetAudioBusVolume(EPalAudioBus AudioBus, const class FName& Key, float Volume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioSetting_C", "SetAudioBusVolume");

	Params::BP_AudioSetting_C_SetAudioBusVolume Parms{};

	Parms.AudioBus = AudioBus;
	Parms.Key = Key;
	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AudioSetting.BP_AudioSetting_C.SetMuteToMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalAudioBus                            AudioBus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsMute                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<EPalAudioBus, bool>                MuteMap                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_AudioSetting_C::SetMuteToMap(EPalAudioBus AudioBus, bool IsMute, TMap<EPalAudioBus, bool>& MuteMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioSetting_C", "SetMuteToMap");

	Params::BP_AudioSetting_C_SetMuteToMap Parms{};

	Parms.AudioBus = AudioBus;
	Parms.IsMute = IsMute;
	Parms.MuteMap = std::move(MuteMap);

	UObject::ProcessEvent(Func, &Parms);

	MuteMap = std::move(Parms.MuteMap);
}


// Function BP_AudioSetting.BP_AudioSetting_C.SetVolumeToMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalAudioBus                            AudioBus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<EPalAudioBus, double>              ValMap                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_AudioSetting_C::SetVolumeToMap(EPalAudioBus AudioBus, double Volume, TMap<EPalAudioBus, double>& ValMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioSetting_C", "SetVolumeToMap");

	Params::BP_AudioSetting_C_SetVolumeToMap Parms{};

	Parms.AudioBus = AudioBus;
	Parms.Volume = Volume;
	Parms.ValMap = std::move(ValMap);

	UObject::ProcessEvent(Func, &Parms);

	ValMap = std::move(Parms.ValMap);
}


// Function BP_AudioSetting.BP_AudioSetting_C.Tick_BP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::Tick_BP(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioSetting_C", "Tick_BP");

	Params::BP_AudioSetting_C_Tick_BP Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AudioSetting.BP_AudioSetting_C.UpdateAudioVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalAudioBus                            AudioBus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::UpdateAudioVolume(EPalAudioBus AudioBus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioSetting_C", "UpdateAudioVolume");

	Params::BP_AudioSetting_C_UpdateAudioVolume Parms{};

	Parms.AudioBus = AudioBus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AudioSetting.BP_AudioSetting_C.GetVolumeFromDebugSetting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EPalAudioBus                            AudioBus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Volume                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::GetVolumeFromDebugSetting(EPalAudioBus AudioBus, double* Volume) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioSetting_C", "GetVolumeFromDebugSetting");

	Params::BP_AudioSetting_C_GetVolumeFromDebugSetting Parms{};

	Parms.AudioBus = AudioBus;

	UObject::ProcessEvent(Func, &Parms);

	if (Volume != nullptr)
		*Volume = Parms.Volume;
}


// Function BP_AudioSetting.BP_AudioSetting_C.GetVolumeFromMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EPalAudioBus                            AuduiBus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<EPalAudioBus, double>              ValMap                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Find                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Volume                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::GetVolumeFromMap(EPalAudioBus AuduiBus, const TMap<EPalAudioBus, double>& ValMap, bool* Find, double* Volume) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioSetting_C", "GetVolumeFromMap");

	Params::BP_AudioSetting_C_GetVolumeFromMap Parms{};

	Parms.AuduiBus = AuduiBus;
	Parms.ValMap = std::move(ValMap);

	UObject::ProcessEvent(Func, &Parms);

	if (Find != nullptr)
		*Find = Parms.Find;

	if (Volume != nullptr)
		*Volume = Parms.Volume;
}


// Function BP_AudioSetting.BP_AudioSetting_C.IsAudioBusMute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EPalAudioBus                            AudioBus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AudioSetting_C::IsAudioBusMute(EPalAudioBus AudioBus) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioSetting_C", "IsAudioBusMute");

	Params::BP_AudioSetting_C_IsAudioBusMute Parms{};

	Parms.AudioBus = AudioBus;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AudioSetting.BP_AudioSetting_C.IsMuteFromDebugSetting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EPalAudioBus                            AudioBus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsMute                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::IsMuteFromDebugSetting(EPalAudioBus AudioBus, bool* IsMute) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioSetting_C", "IsMuteFromDebugSetting");

	Params::BP_AudioSetting_C_IsMuteFromDebugSetting Parms{};

	Parms.AudioBus = AudioBus;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMute != nullptr)
		*IsMute = Parms.IsMute;
}


// Function BP_AudioSetting.BP_AudioSetting_C.IsMuteFromMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EPalAudioBus                            AuduiBus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<EPalAudioBus, bool>                ValMap                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Find                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsMute                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::IsMuteFromMap(EPalAudioBus AuduiBus, const TMap<EPalAudioBus, bool>& ValMap, bool* Find, bool* IsMute) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioSetting_C", "IsMuteFromMap");

	Params::BP_AudioSetting_C_IsMuteFromMap Parms{};

	Parms.AuduiBus = AuduiBus;
	Parms.ValMap = std::move(ValMap);

	UObject::ProcessEvent(Func, &Parms);

	if (Find != nullptr)
		*Find = Parms.Find;

	if (IsMute != nullptr)
		*IsMute = Parms.IsMute;
}

}
