#ifndef __FIBERVR_HMD
#define __FIBERVR_HMD

namespace fibervr {
    class Hmd : public ITrackedDeviceServerDriver, public IVRDisplayComponent {
    public:
        Hmd();
        ~Hmd();

        // from ITrackedDeviceServerDriver

        vr::EVRInitError Activate(uint32_t unObjectId) override;
        void Deactivate() override;
        void EnterStandby() override;
        void *GetComponent(const char *pchComponentNameAndVersion) override;
        void DebugRequest(const char *pchRequest, char *pchResponseBuffer,
                uint32_t unResponseBufferSize) override;
        vr::DriverPose_t GetPose() override;

        // from IVRDisplayComponent
        
        void GetWindowBounds(int32_t *pnX, int32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight) override;
        bool IsDisplayOnDesktop() override;
        bool IsDisplayRealDisplay() override;
        void GetRecommendedRenderTargetSize(uint32_t *pnWidth, uint32_t *pnHeight) override;
        void GetEyeOutputViewport(vr::EVREye eEye, uint32_t *pnX, uint32_t *pnY,
                uint32_t *pnWidth, uint32_t *pnHeight) override;
        void GetProjectionRaw(vr::EVREye eEye, float *pfLeft, float *pfRight,
                float *pfTop, float *pfBottom) override;
        vr::DistortionCoordinates_t ComputeDistortion(vr::EVREye eEye, float fU, float fV) override;
    };
}

#endif
