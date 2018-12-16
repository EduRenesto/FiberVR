#include "virtual_display.hh"

using namespace fibervr;

VirtualDisplay::VirtualDisplay() {

}

VirtualDisplay::~VirtualDisplay() {

}

void VirtualDisplay::Present(const vr::PresentInfo_t *pPresentInfo, uint32_t unPresentInfoSize) {

}

void VirtualDisplay::WaitForPresent() {

}

bool VirtualDisplay::GetTimeSinceLastVsync(float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter) {
    return false;
}
