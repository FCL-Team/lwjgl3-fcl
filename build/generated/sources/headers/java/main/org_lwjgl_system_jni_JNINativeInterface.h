/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lwjgl_system_jni_JNINativeInterface */

#ifndef _Included_org_lwjgl_system_jni_JNINativeInterface
#define _Included_org_lwjgl_system_jni_JNINativeInterface
#ifdef __cplusplus
extern "C" {
#endif
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_VERSION_1_1
#define org_lwjgl_system_jni_JNINativeInterface_JNI_VERSION_1_1 65537L
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_VERSION_1_2
#define org_lwjgl_system_jni_JNINativeInterface_JNI_VERSION_1_2 65538L
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_VERSION_1_4
#define org_lwjgl_system_jni_JNINativeInterface_JNI_VERSION_1_4 65540L
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_VERSION_1_6
#define org_lwjgl_system_jni_JNINativeInterface_JNI_VERSION_1_6 65542L
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_VERSION_1_8
#define org_lwjgl_system_jni_JNINativeInterface_JNI_VERSION_1_8 65544L
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_VERSION_9
#define org_lwjgl_system_jni_JNINativeInterface_JNI_VERSION_9 589824L
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_VERSION_10
#define org_lwjgl_system_jni_JNINativeInterface_JNI_VERSION_10 655360L
#undef org_lwjgl_system_jni_JNINativeInterface_JNIInvalidRefType
#define org_lwjgl_system_jni_JNINativeInterface_JNIInvalidRefType 0L
#undef org_lwjgl_system_jni_JNINativeInterface_JNILocalRefType
#define org_lwjgl_system_jni_JNINativeInterface_JNILocalRefType 1L
#undef org_lwjgl_system_jni_JNINativeInterface_JNIGlobalRefType
#define org_lwjgl_system_jni_JNINativeInterface_JNIGlobalRefType 2L
#undef org_lwjgl_system_jni_JNINativeInterface_JNIWeakGlobalRefType
#define org_lwjgl_system_jni_JNINativeInterface_JNIWeakGlobalRefType 3L
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_FALSE
#define org_lwjgl_system_jni_JNINativeInterface_JNI_FALSE 0L
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_TRUE
#define org_lwjgl_system_jni_JNINativeInterface_JNI_TRUE 1L
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_OK
#define org_lwjgl_system_jni_JNINativeInterface_JNI_OK 0L
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_ERR
#define org_lwjgl_system_jni_JNINativeInterface_JNI_ERR -1L
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_EDETACHED
#define org_lwjgl_system_jni_JNINativeInterface_JNI_EDETACHED -2L
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_EVERSION
#define org_lwjgl_system_jni_JNINativeInterface_JNI_EVERSION -3L
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_ENOMEM
#define org_lwjgl_system_jni_JNINativeInterface_JNI_ENOMEM -4L
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_EEXIST
#define org_lwjgl_system_jni_JNINativeInterface_JNI_EEXIST -5L
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_EINVAL
#define org_lwjgl_system_jni_JNINativeInterface_JNI_EINVAL -6L
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_COMMIT
#define org_lwjgl_system_jni_JNINativeInterface_JNI_COMMIT 1L
#undef org_lwjgl_system_jni_JNINativeInterface_JNI_ABORT
#define org_lwjgl_system_jni_JNINativeInterface_JNI_ABORT 2L
/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    GetVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_GetVersion
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    FromReflectedMethod
 * Signature: (Ljava/lang/reflect/Method;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_FromReflectedMethod
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    FromReflectedField
 * Signature: (Ljava/lang/reflect/Field;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_FromReflectedField
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nToReflectedMethod
 * Signature: (Ljava/lang/Class;JZ)Ljava/lang/reflect/Method;
 */
JNIEXPORT jobject JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nToReflectedMethod
  (JNIEnv *, jclass, jclass, jlong, jboolean);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nToReflectedField
 * Signature: (Ljava/lang/Class;JZ)Ljava/lang/reflect/Field;
 */
JNIEXPORT jobject JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nToReflectedField
  (JNIEnv *, jclass, jclass, jlong, jboolean);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    NewGlobalRef
 * Signature: (Ljava/lang/Object;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_NewGlobalRef
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nDeleteGlobalRef
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nDeleteGlobalRef
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetBooleanArrayElements
 * Signature: ([BJ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetBooleanArrayElements
  (JNIEnv *, jclass, jbyteArray, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nReleaseBooleanArrayElements
 * Signature: ([BJI)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nReleaseBooleanArrayElements
  (JNIEnv *, jclass, jbyteArray, jlong, jint);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetByteArrayElements
 * Signature: ([BJ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetByteArrayElements
  (JNIEnv *, jclass, jbyteArray, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nReleaseByteArrayElements
 * Signature: ([BJI)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nReleaseByteArrayElements
  (JNIEnv *, jclass, jbyteArray, jlong, jint);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetCharArrayElements
 * Signature: ([CJ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetCharArrayElements
  (JNIEnv *, jclass, jcharArray, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nReleaseCharArrayElements
 * Signature: ([CJI)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nReleaseCharArrayElements
  (JNIEnv *, jclass, jcharArray, jlong, jint);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetShortArrayElements
 * Signature: ([SJ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetShortArrayElements
  (JNIEnv *, jclass, jshortArray, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nReleaseShortArrayElements
 * Signature: ([SJI)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nReleaseShortArrayElements
  (JNIEnv *, jclass, jshortArray, jlong, jint);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetIntArrayElements
 * Signature: ([IJ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetIntArrayElements
  (JNIEnv *, jclass, jintArray, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nReleaseIntArrayElements
 * Signature: ([IJI)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nReleaseIntArrayElements
  (JNIEnv *, jclass, jintArray, jlong, jint);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetLongArrayElements
 * Signature: ([JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetLongArrayElements
  (JNIEnv *, jclass, jlongArray, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nReleaseLongArrayElements
 * Signature: ([JJI)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nReleaseLongArrayElements
  (JNIEnv *, jclass, jlongArray, jlong, jint);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetFloatArrayElements
 * Signature: ([FJ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetFloatArrayElements
  (JNIEnv *, jclass, jfloatArray, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nReleaseFloatArrayElements
 * Signature: ([FJI)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nReleaseFloatArrayElements
  (JNIEnv *, jclass, jfloatArray, jlong, jint);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetDoubleArrayElements
 * Signature: ([DJ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetDoubleArrayElements
  (JNIEnv *, jclass, jdoubleArray, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nReleaseDoubleArrayElements
 * Signature: ([DJI)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nReleaseDoubleArrayElements
  (JNIEnv *, jclass, jdoubleArray, jlong, jint);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetBooleanArrayRegion
 * Signature: ([BIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetBooleanArrayRegion
  (JNIEnv *, jclass, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nSetBooleanArrayRegion
 * Signature: ([BIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nSetBooleanArrayRegion
  (JNIEnv *, jclass, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetByteArrayRegion
 * Signature: ([BIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetByteArrayRegion
  (JNIEnv *, jclass, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nSetByteArrayRegion
 * Signature: ([BIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nSetByteArrayRegion
  (JNIEnv *, jclass, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetCharArrayRegion
 * Signature: ([CIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetCharArrayRegion
  (JNIEnv *, jclass, jcharArray, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nSetCharArrayRegion
 * Signature: ([CIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nSetCharArrayRegion
  (JNIEnv *, jclass, jcharArray, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetShortArrayRegion
 * Signature: ([SIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetShortArrayRegion
  (JNIEnv *, jclass, jshortArray, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nSetShortArrayRegion
 * Signature: ([SIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nSetShortArrayRegion
  (JNIEnv *, jclass, jshortArray, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetIntArrayRegion
 * Signature: ([IIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetIntArrayRegion
  (JNIEnv *, jclass, jintArray, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nSetIntArrayRegion
 * Signature: ([IIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nSetIntArrayRegion
  (JNIEnv *, jclass, jintArray, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetLongArrayRegion
 * Signature: ([JIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetLongArrayRegion
  (JNIEnv *, jclass, jlongArray, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nSetLongArrayRegion
 * Signature: ([JIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nSetLongArrayRegion
  (JNIEnv *, jclass, jlongArray, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetFloatArrayRegion
 * Signature: ([FIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetFloatArrayRegion
  (JNIEnv *, jclass, jfloatArray, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nSetFloatArrayRegion
 * Signature: ([FIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nSetFloatArrayRegion
  (JNIEnv *, jclass, jfloatArray, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetDoubleArrayRegion
 * Signature: ([DIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetDoubleArrayRegion
  (JNIEnv *, jclass, jdoubleArray, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nSetDoubleArrayRegion
 * Signature: ([DIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nSetDoubleArrayRegion
  (JNIEnv *, jclass, jdoubleArray, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nRegisterNatives
 * Signature: (Ljava/lang/Class;JI)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nRegisterNatives
  (JNIEnv *, jclass, jclass, jlong, jint);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    UnregisterNatives
 * Signature: (Ljava/lang/Class;)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_UnregisterNatives
  (JNIEnv *, jclass, jclass);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetJavaVM
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetJavaVM
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetStringRegion
 * Signature: (Ljava/lang/String;IIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetStringRegion
  (JNIEnv *, jclass, jstring, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nGetStringUTFRegion
 * Signature: (Ljava/lang/String;IIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nGetStringUTFRegion
  (JNIEnv *, jclass, jstring, jint, jint, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    NewWeakGlobalRef
 * Signature: (Ljava/lang/Object;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_NewWeakGlobalRef
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nDeleteWeakGlobalRef
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nDeleteWeakGlobalRef
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    nNewDirectByteBuffer
 * Signature: (JJ)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_nNewDirectByteBuffer
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    GetDirectBufferAddress
 * Signature: (Ljava/nio/Buffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_GetDirectBufferAddress
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_system_jni_JNINativeInterface
 * Method:    GetObjectRefType
 * Signature: (Ljava/lang/Object;)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_system_jni_JNINativeInterface_GetObjectRefType
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif