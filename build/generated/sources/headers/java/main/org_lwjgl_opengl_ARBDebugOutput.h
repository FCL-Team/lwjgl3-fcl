/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lwjgl_opengl_ARBDebugOutput */

#ifndef _Included_org_lwjgl_opengl_ARBDebugOutput
#define _Included_org_lwjgl_opengl_ARBDebugOutput
#ifdef __cplusplus
extern "C" {
#endif
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB 33346L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_MAX_DEBUG_MESSAGE_LENGTH_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_MAX_DEBUG_MESSAGE_LENGTH_ARB 37187L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_MAX_DEBUG_LOGGED_MESSAGES_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_MAX_DEBUG_LOGGED_MESSAGES_ARB 37188L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_LOGGED_MESSAGES_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_LOGGED_MESSAGES_ARB 37189L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB 33347L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_CALLBACK_FUNCTION_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_CALLBACK_FUNCTION_ARB 33348L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_CALLBACK_USER_PARAM_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_CALLBACK_USER_PARAM_ARB 33349L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SOURCE_API_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SOURCE_API_ARB 33350L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB 33351L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SOURCE_SHADER_COMPILER_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SOURCE_SHADER_COMPILER_ARB 33352L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SOURCE_THIRD_PARTY_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SOURCE_THIRD_PARTY_ARB 33353L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SOURCE_APPLICATION_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SOURCE_APPLICATION_ARB 33354L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SOURCE_OTHER_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SOURCE_OTHER_ARB 33355L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_TYPE_ERROR_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_TYPE_ERROR_ARB 33356L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB 33357L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB 33358L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_TYPE_PORTABILITY_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_TYPE_PORTABILITY_ARB 33359L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_TYPE_PERFORMANCE_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_TYPE_PERFORMANCE_ARB 33360L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_TYPE_OTHER_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_TYPE_OTHER_ARB 33361L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SEVERITY_HIGH_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SEVERITY_HIGH_ARB 37190L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SEVERITY_MEDIUM_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SEVERITY_MEDIUM_ARB 37191L
#undef org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SEVERITY_LOW_ARB
#define org_lwjgl_opengl_ARBDebugOutput_GL_DEBUG_SEVERITY_LOW_ARB 37192L
/*
 * Class:     org_lwjgl_opengl_ARBDebugOutput
 * Method:    nglDebugMessageControlARB
 * Signature: (IIIIJZ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBDebugOutput_nglDebugMessageControlARB
  (JNIEnv *, jclass, jint, jint, jint, jint, jlong, jboolean);

/*
 * Class:     org_lwjgl_opengl_ARBDebugOutput
 * Method:    nglDebugMessageInsertARB
 * Signature: (IIIIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBDebugOutput_nglDebugMessageInsertARB
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_ARBDebugOutput
 * Method:    nglDebugMessageCallbackARB
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBDebugOutput_nglDebugMessageCallbackARB
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_lwjgl_opengl_ARBDebugOutput
 * Method:    nglGetDebugMessageLogARB
 * Signature: (IIJJJJJJ)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_ARBDebugOutput_nglGetDebugMessageLogARB
  (JNIEnv *, jclass, jint, jint, jlong, jlong, jlong, jlong, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif