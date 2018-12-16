package me.renesto.fibervr;

public class FiberVRWrapper {
    public static native void InitCore(int width, int height);

    public static native void InitRender();
    public static native void Draw();
}
