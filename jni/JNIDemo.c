#include <jni.h>
jstring java_com_stuhua_jni_MainActivity_helloFromJNI(JNIEnv *env,
		jobject thiz) {
	/*
	 * 调用 android-ndk-r9c\platforms\android-8\arch-arm\usr\include 中jni.h中的方法
	 */
	return (*env)->NewStringUTF(env, "hello world jni");
}
