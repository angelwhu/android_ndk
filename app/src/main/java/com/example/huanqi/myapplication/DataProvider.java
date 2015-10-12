package com.example.huanqi.myapplication;

/**
 * Created by HuAnqi on 2015-09-24.
 */
public class DataProvider {
    /**
     *
     * @param a   integer  a
     * @param b   integer  b
     * @return  a + b
     */
    public native int add(int a , int b);

    /**
     *
     * @param message
     * @return   "hello" + message
     */
    public native String sayHello(String message);

}
