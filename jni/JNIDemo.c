#include <jni.h>
jstring java_com_stuhua_jni_MainActivity_helloFromJNI(JNIEnv *env,
		jobject thiz) {
	/*
	 * ���� android-ndk-r9c\platforms\android-8\arch-arm\usr\include ��jni.h�еķ���
	 */
	return (*env)->NewStringUTF(env, "hello world jni");
}
