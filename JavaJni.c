#include "JavaJni.h"

JNIEXPORT jstring JNICALL Java_JavaJni_getTexto(JNIEnv *env, jobject obj, jint i) {
	switch (i) {
		case 0: return (*env)->NewStringUTF(env, "Cero"); break;
		case 1: return (*env)->NewStringUTF(env, "Uno"); break;
		case 2: return (*env)->NewStringUTF(env, "Dos"); break;
		case 3: return (*env)->NewStringUTF(env, "Tres"); break;
		default: return (*env)->NewStringUTF(env, "Otro"); break;
	}
}

