//
// Created by HuAnqi on 2015-09-25.
//


#include <string.h>
#include "com_example_huanqi_myapplication_DataProvider.h"


#include "until.h"

#include "log.h"

/*
 * Class:     com_example_huanqi_myapplication_DataProvider
 * Method:    add
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_example_huanqi_myapplication_DataProvider_add
        (JNIEnv * env , jobject object , jint x , jint y)
{

    LOGD("x = %d",x);
    LOGD("y = %d",y);

    return x + y ;

}

/*
 * Class:     com_example_huanqi_myapplication_DataProvider
 * Method:    sayHello
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_huanqi_myapplication_DataProvider_sayHello
        (JNIEnv * env, jobject object, jstring message)
{
    /*
     * java String  is not supported  in C language
     * we need to translate the String type
     */

    char *msg = Jstring2CStr(env, message);
    LOGD("message = %s" , msg);
    strcat(msg , "Hello world");
    LOGD("new message = %s", msg);
    return (*env) -> NewStringUTF(env,msg);

}
