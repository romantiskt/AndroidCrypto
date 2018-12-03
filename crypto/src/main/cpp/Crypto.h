//
// Created by romantiskt on 2018/12/3.
//
#include <jni.h>
#include <string>
#ifndef ANDROIDCRYPTO_MAIN_H
#define ANDROIDCRYPTO_MAIN_H
using namespace std;
#ifdef __cplusplus
extern "C" {
#endif
JNIEXPORT jstring JNICALL
Java_com_rolan_crypto_Crypto_encode(JNIEnv *, jclass , jobject , jstring ) ;

JNIEXPORT jstring JNICALL
        Java_com_rolan_crypto_Crypto_decode(JNIEnv *, jclass , jobject , jstring );


#ifdef __cplusplus
}
#endif

uint8_t* getEncodeBuf (uint8_t *data);
void logHexInfo(uint8_t* data);
string getDecodeBuf( uint8_t*  );
#endif //ANDROIDCRYPTO_MAIN_H
