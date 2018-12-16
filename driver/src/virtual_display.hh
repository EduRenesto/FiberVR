#ifndef __FIBERVR_VIRTUAL_DISPLAY
#define __FIBERVR_VIRTUAL_DISPLAY

#include <openvr_driver.h>

namespace fibervr {
    class VirtualDisplay : public vr::IVRVirtualDisplay {
    public:
        VirtualDisplay();
        ~VirtualDisplay();

        void Present(const vr::PresentInfo_t *pPresentInfo, uint32_t unPresentInfoSize) override;
        void WaitForPresent() override;

        bool GetTimeSinceLastVsync(float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter) override;
    };
}

#endif
