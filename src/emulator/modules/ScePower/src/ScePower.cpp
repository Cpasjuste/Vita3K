// Vita3K emulator project
// Copyright (C) 2018 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#include <ScePower/exports.h>

#include <psp2/power.h>

EXPORT(int, scePowerBatteryUpdateInfo) {
    return unimplemented("scePowerBatteryUpdateInfo");
}

EXPORT(int, scePowerCancelRequest) {
    return unimplemented("scePowerCancelRequest");
}

EXPORT(int, scePowerGetArmClockFrequency) {
    return unimplemented("scePowerGetArmClockFrequency");
}

EXPORT(int, scePowerGetBatteryChargingStatus) {
    return unimplemented("scePowerGetBatteryChargingStatus");
}

EXPORT(int, scePowerGetBatteryCycleCount) {
    return unimplemented("scePowerGetBatteryCycleCount");
}

EXPORT(int, scePowerGetBatteryElec) {
    return unimplemented("scePowerGetBatteryElec");
}

EXPORT(int, scePowerGetBatteryFullCapacity) {
    return unimplemented("scePowerGetBatteryFullCapacity");
}

EXPORT(int, scePowerGetBatteryLifePercent) {
    return unimplemented("scePowerGetBatteryLifePercent");
}

EXPORT(int, scePowerGetBatteryLifeTime) {
    return unimplemented("scePowerGetBatteryLifeTime");
}

EXPORT(int, scePowerGetBatteryRemainCapacity) {
    return unimplemented("scePowerGetBatteryRemainCapacity");
}

EXPORT(int, scePowerGetBatteryRemainLevel) {
    return unimplemented("scePowerGetBatteryRemainLevel");
}

EXPORT(int, scePowerGetBatteryRemainMaxLevel) {
    return unimplemented("scePowerGetBatteryRemainMaxLevel");
}

EXPORT(int, scePowerGetBatterySOH) {
    return unimplemented("scePowerGetBatterySOH");
}

EXPORT(int, scePowerGetBatteryTemp) {
    return unimplemented("scePowerGetBatteryTemp");
}

EXPORT(int, scePowerGetBatteryVolt) {
    return unimplemented("scePowerGetBatteryVolt");
}

EXPORT(int, scePowerGetBusClockFrequency) {
    return unimplemented("scePowerGetBusClockFrequency");
}

EXPORT(int, scePowerGetCaseTemp) {
    return unimplemented("scePowerGetCaseTemp");
}

EXPORT(int, scePowerGetGpuClockFrequency) {
    return unimplemented("scePowerGetGpuClockFrequency");
}

EXPORT(int, scePowerGetGpuXbarClockFrequency) {
    return unimplemented("scePowerGetGpuXbarClockFrequency");
}

EXPORT(int, scePowerGetUsingWireless) {
    return unimplemented("scePowerGetUsingWireless");
}

EXPORT(int, scePowerIsBatteryCharging) {
    return unimplemented("scePowerIsBatteryCharging");
}

EXPORT(int, scePowerIsBatteryExist) {
    return unimplemented("scePowerIsBatteryExist");
}

EXPORT(int, scePowerIsLowBattery) {
    return unimplemented("scePowerIsLowBattery");
}

EXPORT(int, scePowerIsLowBatteryInhibitUpdateDownload) {
    return unimplemented("scePowerIsLowBatteryInhibitUpdateDownload");
}

EXPORT(int, scePowerIsLowBatteryInhibitUpdateReboot) {
    return unimplemented("scePowerIsLowBatteryInhibitUpdateReboot");
}

EXPORT(int, scePowerIsPowerOnline) {
    return unimplemented("scePowerIsPowerOnline");
}

EXPORT(int, scePowerIsRequest) {
    return unimplemented("scePowerIsRequest");
}

EXPORT(int, scePowerIsSuspendRequired) {
    return unimplemented("scePowerIsSuspendRequired");
}

EXPORT(int, scePowerRegisterCallback) {
    return unimplemented("scePowerRegisterCallback");
}

EXPORT(int, scePowerRequestColdReset) {
    return unimplemented("scePowerRequestColdReset");
}

EXPORT(int, scePowerRequestDisplayOff) {
    return unimplemented("scePowerRequestDisplayOff");
}

EXPORT(int, scePowerRequestDisplayOn) {
    return unimplemented("scePowerRequestDisplayOn");
}

EXPORT(int, scePowerRequestStandby) {
    return unimplemented("scePowerRequestStandby");
}

EXPORT(int, scePowerRequestSuspend) {
    return unimplemented("scePowerRequestSuspend");
}

EXPORT(int, scePowerSetArmClockFrequency, int freq) {
    return 0;
}

EXPORT(int, scePowerSetBusClockFrequency) {
    return unimplemented("scePowerSetBusClockFrequency");
}

EXPORT(int, scePowerSetConfigurationMode) {
    return unimplemented("scePowerSetConfigurationMode");
}

EXPORT(int, scePowerSetGpuClockFrequency) {
    return unimplemented("scePowerSetGpuClockFrequency");
}

EXPORT(int, scePowerSetGpuXbarClockFrequency) {
    return unimplemented("scePowerSetGpuXbarClockFrequency");
}

EXPORT(int, scePowerSetIdleTimerCount) {
    return unimplemented("scePowerSetIdleTimerCount");
}

EXPORT(int, scePowerSetUsingWireless) {
    return unimplemented("scePowerSetUsingWireless");
}

EXPORT(int, scePowerUnregisterCallback) {
    return unimplemented("scePowerUnregisterCallback");
}

BRIDGE_IMPL(scePowerBatteryUpdateInfo)
BRIDGE_IMPL(scePowerCancelRequest)
BRIDGE_IMPL(scePowerGetArmClockFrequency)
BRIDGE_IMPL(scePowerGetBatteryChargingStatus)
BRIDGE_IMPL(scePowerGetBatteryCycleCount)
BRIDGE_IMPL(scePowerGetBatteryElec)
BRIDGE_IMPL(scePowerGetBatteryFullCapacity)
BRIDGE_IMPL(scePowerGetBatteryLifePercent)
BRIDGE_IMPL(scePowerGetBatteryLifeTime)
BRIDGE_IMPL(scePowerGetBatteryRemainCapacity)
BRIDGE_IMPL(scePowerGetBatteryRemainLevel)
BRIDGE_IMPL(scePowerGetBatteryRemainMaxLevel)
BRIDGE_IMPL(scePowerGetBatterySOH)
BRIDGE_IMPL(scePowerGetBatteryTemp)
BRIDGE_IMPL(scePowerGetBatteryVolt)
BRIDGE_IMPL(scePowerGetBusClockFrequency)
BRIDGE_IMPL(scePowerGetCaseTemp)
BRIDGE_IMPL(scePowerGetGpuClockFrequency)
BRIDGE_IMPL(scePowerGetGpuXbarClockFrequency)
BRIDGE_IMPL(scePowerGetUsingWireless)
BRIDGE_IMPL(scePowerIsBatteryCharging)
BRIDGE_IMPL(scePowerIsBatteryExist)
BRIDGE_IMPL(scePowerIsLowBattery)
BRIDGE_IMPL(scePowerIsLowBatteryInhibitUpdateDownload)
BRIDGE_IMPL(scePowerIsLowBatteryInhibitUpdateReboot)
BRIDGE_IMPL(scePowerIsPowerOnline)
BRIDGE_IMPL(scePowerIsRequest)
BRIDGE_IMPL(scePowerIsSuspendRequired)
BRIDGE_IMPL(scePowerRegisterCallback)
BRIDGE_IMPL(scePowerRequestColdReset)
BRIDGE_IMPL(scePowerRequestDisplayOff)
BRIDGE_IMPL(scePowerRequestDisplayOn)
BRIDGE_IMPL(scePowerRequestStandby)
BRIDGE_IMPL(scePowerRequestSuspend)
BRIDGE_IMPL(scePowerSetArmClockFrequency)
BRIDGE_IMPL(scePowerSetBusClockFrequency)
BRIDGE_IMPL(scePowerSetConfigurationMode)
BRIDGE_IMPL(scePowerSetGpuClockFrequency)
BRIDGE_IMPL(scePowerSetGpuXbarClockFrequency)
BRIDGE_IMPL(scePowerSetIdleTimerCount)
BRIDGE_IMPL(scePowerSetUsingWireless)
BRIDGE_IMPL(scePowerUnregisterCallback)
