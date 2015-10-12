#交叉编译 linux  makefile的语法子集
LOCAL_PATH := $(call my-dir)   #get "Android.mk" local path
include $(CLEAR_VARS)          #init varibles

LOCAL_MODULE    := datatest    # output filename   libHello.so
LOCAL_SRC_FILES := data_test.c until.c   # the file to compiler

# add dependency libs
LOCAL_LDLIBS    += -llog   # add liblog.so

include $(BUILD_SHARED_LIBRARY)
