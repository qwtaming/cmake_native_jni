#include <jni.h>
#include <string>
#include <android/log.h>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_cmakenative_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    __android_log_print(ANDROID_LOG_INFO,"%s start \n",__FUNCTION__);
    std::string hello = "Hello from C++$$$$";
    return env->NewStringUTF(hello.c_str());
}
