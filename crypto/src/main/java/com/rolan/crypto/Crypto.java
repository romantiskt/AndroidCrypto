package com.rolan.crypto;

public class Crypto {

    static {
            System.loadLibrary("crypto-Engine");
    }

    public static native String encode(Object context, String postStr);

    public static native String decode(Object context, String postStr);
}
