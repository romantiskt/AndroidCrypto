//
// Created by romantiskt on 2018/12/3.
//

#include "Crypto.h"
#include "CryptoUtil.hpp"
#include <iostream>
#include "Deploy.h"
#include "Log.hpp"

void test();

JNIEXPORT jstring JNICALL
Java_com_rolan_crypto_Crypto_encode(JNIEnv *env, jclass type, jobject context, jstring postStr_) {

    if (!postStr_) return NULL;
    const char *encode_str = env->GetStringUTFChars(postStr_, 0);
    uint8_t * encodeStr=(uint8_t *) encode_str;
//    getEncodeBuf(encodeStr);
//    base64
    return env->NewStringUTF((char*)encodeStr);
}

JNIEXPORT jstring JNICALL
        Java_com_rolan_crypto_Crypto_decode(JNIEnv *env, jclass type, jobject context, jstring postStr_) {
const char *postStr = env->GetStringUTFChars( postStr_, 0);

// TODO

env->ReleaseStringUTFChars( postStr_, postStr);

return env->NewStringUTF("0");
}


uint8_t* getEncodeBuf (uint8_t *data){
    struct AES_ctx ctx;
    AES_init_ctx(&ctx, Deploy::secretSignKey);
    AES_ECB_encrypt(&ctx, data);
    LOGD("<<<<<<<<<<start>>>>>>>>>>");
    logHexInfo(data);
    LOGD("<<<<<<<<<<end>>>>>>>>>>");
    return data;
}

string getDecodeBuf( uint8_t*  data){
    struct AES_ctx ctx;
    AES_init_ctx(&ctx, Deploy::secretSignKey);
    AES_ECB_decrypt(&ctx, data);
    char* outStr3=(char*)data;
    LOGD("secretkey decode is:%s",outStr3);
    string encodekey(outStr3);
    return encodekey;
}


void logHexInfo(uint8_t* data){
    for (int i = 0; i < strlen((char*)(data)); ++i) {
        uint8_t k=data[i];
        LOGD("字符：%02x",k);
    }
}

void test(){
    uint8_t signKey[]="thismypassword";
    logHexInfo(signKey);

}
