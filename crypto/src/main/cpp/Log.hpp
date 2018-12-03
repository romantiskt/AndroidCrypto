//
// Created by romantiskt on 2018/12/3.
//

#ifndef ANDROIDCRYPTO_LOG_HPP
#define ANDROIDCRYPTO_LOG_HPP
#include <android/log.h>

#define TAG "Crypto"
static bool debug = true;

void setDebug(bool isDebug) {
    debug = isDebug;
}

#define LOGV(...) if (debug) __android_log_print(ANDROID_LOG_VERBOSE,TAG ,__VA_ARGS__)
#define LOGD(...) if (debug) __android_log_print(ANDROID_LOG_DEBUG,TAG ,__VA_ARGS__)
#define LOGI(...) if (debug) __android_log_print(ANDROID_LOG_INFO,TAG ,__VA_ARGS__)
#define LOGW(...) if (debug) __android_log_print(ANDROID_LOG_WARN,TAG ,__VA_ARGS__)
#define LOGE(...) if (debug) __android_log_print(ANDROID_LOG_ERROR,TAG ,__VA_ARGS__)

#endif //ANDROIDCRYPTO_LOG_HPP
