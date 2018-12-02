//
// Created by romantiskt on 2018/12/3.
//

#include "main.h"

JNIEXPORT void JNICALL
Java_com_rolan_crypto_Crypto_encode(JNIEnv *env, jclass type, jobject context, jstring postStr_) {
const char *postStr = env->GetStringUTFChars(postStr_, 0);

// TODO

    env->ReleaseStringUTFChars( postStr_, postStr);
}

JNIEXPORT jstring JNICALL
        Java_com_rolan_crypto_Crypto_decode(JNIEnv *env, jclass type, jobject context, jstring postStr_) {
const char *postStr = env->GetStringUTFChars( postStr_, 0);

// TODO

env->ReleaseStringUTFChars( postStr_, postStr);

return env->NewStringUTF("0");
}