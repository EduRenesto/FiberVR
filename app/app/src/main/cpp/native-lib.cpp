#include <jni.h>
#include <string>
#include <android/log.h>

#include <GLES3/gl3.h>

extern "C"
JNIEXPORT void JNICALL
Java_me_renesto_fibervr_FiberVRWrapper_InitCore(JNIEnv *env, jclass type, jint width, jint height) {

    __android_log_print(ANDROID_LOG_DEBUG, "fibervr", "%dx%d", (int) width, (int) height);

}

extern "C"
JNIEXPORT void JNICALL
Java_me_renesto_fibervr_FiberVRWrapper_InitRender(JNIEnv *env, jclass type) {

    glClearColor(0.9, 0.0, 0.9, 1.0);

}

extern "C"
JNIEXPORT void JNICALL
Java_me_renesto_fibervr_FiberVRWrapper_Draw(JNIEnv *env, jclass type) {

    glClear(GL_COLOR_BUFFER_BIT);

}