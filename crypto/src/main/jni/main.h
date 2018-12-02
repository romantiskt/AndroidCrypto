//
// Created by romantiskt on 2018/12/3.
//
#include <jni.h>
#ifndef ANDROIDCRYPTO_MAIN_H
#define ANDROIDCRYPTO_MAIN_H
JNIEXPORT void JNICALL
Java_com_rolan_crypto_Crypto_encode(JNIEnv *, jclass type, jobject , jstring ) ;

JNIEXPORT jstring JNICALL
        Java_com_rolan_crypto_Crypto_decode(JNIEnv *, jclass , jobject , jstring );

class main {

};


#endif //ANDROIDCRYPTO_MAIN_H
