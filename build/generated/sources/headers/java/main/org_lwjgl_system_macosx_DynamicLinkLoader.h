/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lwjgl_system_macosx_DynamicLinkLoader */

#ifndef _Included_org_lwjgl_system_macosx_DynamicLinkLoader
#define _Included_org_lwjgl_system_macosx_DynamicLinkLoader
#ifdef __cplusplus
extern "C" {
#endif
#undef org_lwjgl_system_macosx_DynamicLinkLoader_RTLD_LAZY
#define org_lwjgl_system_macosx_DynamicLinkLoader_RTLD_LAZY 1L
#undef org_lwjgl_system_macosx_DynamicLinkLoader_RTLD_NOW
#define org_lwjgl_system_macosx_DynamicLinkLoader_RTLD_NOW 2L
#undef org_lwjgl_system_macosx_DynamicLinkLoader_RTLD_LOCAL
#define org_lwjgl_system_macosx_DynamicLinkLoader_RTLD_LOCAL 4L
#undef org_lwjgl_system_macosx_DynamicLinkLoader_RTLD_GLOBAL
#define org_lwjgl_system_macosx_DynamicLinkLoader_RTLD_GLOBAL 8L
#undef org_lwjgl_system_macosx_DynamicLinkLoader_RTLD_NEXT
#define org_lwjgl_system_macosx_DynamicLinkLoader_RTLD_NEXT -1i64
#undef org_lwjgl_system_macosx_DynamicLinkLoader_RTLD_DEFAULT
#define org_lwjgl_system_macosx_DynamicLinkLoader_RTLD_DEFAULT -2i64
#undef org_lwjgl_system_macosx_DynamicLinkLoader_RTLD_SELF
#define org_lwjgl_system_macosx_DynamicLinkLoader_RTLD_SELF -3i64
#undef org_lwjgl_system_macosx_DynamicLinkLoader_RTLD_MAIN_ONLY
#define org_lwjgl_system_macosx_DynamicLinkLoader_RTLD_MAIN_ONLY -5i64
/*
 * Class:     org_lwjgl_system_macosx_DynamicLinkLoader
 * Method:    ndlopen
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_macosx_DynamicLinkLoader_ndlopen
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_lwjgl_system_macosx_DynamicLinkLoader
 * Method:    ndlerror
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_macosx_DynamicLinkLoader_ndlerror
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_system_macosx_DynamicLinkLoader
 * Method:    ndlsym
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_macosx_DynamicLinkLoader_ndlsym
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_lwjgl_system_macosx_DynamicLinkLoader
 * Method:    ndlclose
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_system_macosx_DynamicLinkLoader_ndlclose
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif