#ifndef __FIBERVR_DRIVER_MAIN
#define __FIBERVR_DRIVER_MAIN

#include <string.h>
#include <fstream>
#include <iostream>

#include "server_provider.hh"
#include "virtual_display.hh"

#ifdef __linux__
#define HMD_DLL_EXPORT extern "C"
#elif _WIN32
#define HMD_DLL_EXPORT extern "C" __declspec(dllexport)
#endif

HMD_DLL_EXPORT void *HmdDriverFactory(const char* pInterfaceName, int *pReturnCode);

static fibervr::ServerProvider m_ServerProvider;
static fibervr::VirtualDisplay m_VirtualDisplay;

static std::ofstream logFile;

#endif
