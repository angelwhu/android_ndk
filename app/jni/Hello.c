//
// Created by HuAnqi on 2015-09-17.
//

#include <stdio.h>
#include <jni.h>
#include <android/log.h>
#include <malloc.h>

#define LOG_TAG "System.out.c"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)

jstring Java_com_example_huanqi_myapplication_MainActivity_getHelloFromC(JNIEnv *env , jobject obj) //package name + method name
{
    return (*env)->NewStringUTF(env,"hello from c");
}


jstring Java_com_example_huanqi_myapplication_MainActivity_get_1hello_1from_1c(JNIEnv *env , jobject obj)
{
    LOGI("method called");

    // char v1[3] = {'a','b','c'};
    char *v1 = (char*)malloc(10 * sizeof(char*));
    v1[0] = 'a';
    v1[1] = 'b';
    v1[2] = '\0';
    LOGI("v1 = %s",v1);

    char v2[2] = {'e','f'};

    LOGI("init");

    strcat(v1,v2);

    LOGI("v1 = %s",v1);

    LOGI("end copy array");

    return (*env)->NewStringUTF(env,"hello_from_c");
}