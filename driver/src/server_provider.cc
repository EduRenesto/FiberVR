#include "server_provider.hh"

using namespace fibervr;

ServerProvider::ServerProvider() {
    m_LogFile.open("/tmp/fibervr.log");
}

ServerProvider::~ServerProvider() {
    m_LogFile.close();
}

vr::EVRInitError ServerProvider::Init(vr::IVRDriverContext *pDriverContext) {
    VR_INIT_SERVER_DRIVER_CONTEXT(pDriverContext);

    m_LogFile << "ServerProvider::Init() called" << std::endl;

    return vr::EVRInitError::VRInitError_None;
}

void ServerProvider::Cleanup() {

}

const char* const *ServerProvider::GetInterfaceVersions() {
    return vr::k_InterfaceVersions;
}

void ServerProvider::RunFrame() {

}

bool ServerProvider::ShouldBlockStandbyMode() {
    return false;
}

void ServerProvider::EnterStandby() {

}
void ServerProvider::LeaveStandby() {

}
