#include "driver_main.hh"

HMD_DLL_EXPORT void *HmdDriverFactory(const char* pInterfaceName, int *pReturnCode) {
    logFile.open("/tmp/fibervr.log");

    logFile << "eaeeeeeee" << std::endl;

    if(strcmp(pInterfaceName, vr::IServerTrackedDeviceProvider_Version) == 0) {
        return &m_ServerProvider;
    } else if(strcmp(pInterfaceName, vr::IVRVirtualDisplay_Version) == 0) {
        return &m_VirtualDisplay;
    } 

    if(pReturnCode) {
        *pReturnCode = vr::VRInitError_Init_InterfaceNotFound;
    }

    return nullptr;
}
