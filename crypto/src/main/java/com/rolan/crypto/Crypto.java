package com.rolan.crypto;

public class Crypto {

    static {
            System.loadLibrary("crypto");
    }


    public static native void encode(Object context, String postStr);

    public static native String decode(Object context, String postStr);
}
