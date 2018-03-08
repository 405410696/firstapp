#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_iecs_tku_firstapp_test1070308_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
