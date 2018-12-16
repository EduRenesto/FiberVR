#ifndef __FIBERVR_SERVER_PROVIDER
#define __FIBERVR_SERVER_PROVIDER

#include <iostream>
#include <string>
#include <fstream>

#include <openvr_driver.h>

namespace fibervr {
    class ServerProvider : public vr::IServerTrackedDeviceProvider {
    public: 
        ServerProvider();
        ~ServerProvider();

        vr::EVRInitError Init(vr::IVRDriverContext *pDriverContext) override;

        void Cleanup() override;
        const char* const *GetInterfaceVersions() override;
        void RunFrame() override;

        bool ShouldBlockStandbyMode() override;
        void EnterStandby() override;
        void LeaveStandby() override;

    private:
        std::ofstream m_LogFile;
    };
}

#endif
