/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lwjgl_opengl_ARBTextureCompression */

#ifndef _Included_org_lwjgl_opengl_ARBTextureCompression
#define _Included_org_lwjgl_opengl_ARBTextureCompression
#ifdef __cplusplus
extern "C" {
#endif
#undef org_lwjgl_opengl_ARBTextureCompression_GL_COMPRESSED_ALPHA_ARB
#define org_lwjgl_opengl_ARBTextureCompression_GL_COMPRESSED_ALPHA_ARB 34025L
#undef org_lwjgl_opengl_ARBTextureCompression_GL_COMPRESSED_LUMINANCE_ARB
#define org_lwjgl_opengl_ARBTextureCompression_GL_COMPRESSED_LUMINANCE_ARB 34026L
#undef org_lwjgl_opengl_ARBTextureCompression_GL_COMPRESSED_LUMINANCE_ALPHA_ARB
#define org_lwjgl_opengl_ARBTextureCompression_GL_COMPRESSED_LUMINANCE_ALPHA_ARB 34027L
#undef org_lwjgl_opengl_ARBTextureCompression_GL_COMPRESSED_INTENSITY_ARB
#define org_lwjgl_opengl_ARBTextureCompression_GL_COMPRESSED_INTENSITY_ARB 34028L
#undef org_lwjgl_opengl_ARBTextureCompression_GL_COMPRESSED_RGB_ARB
#define org_lwjgl_opengl_ARBTextureCompression_GL_COMPRESSED_RGB_ARB 34029L
#undef org_lwjgl_opengl_ARBTextureCompression_GL_COMPRESSED_RGBA_ARB
#define org_lwjgl_opengl_ARBTextureCompression_GL_COMPRESSED_RGBA_ARB 34030L
#undef org_lwjgl_opengl_ARBTextureCompression_GL_TEXTURE_COMPRESSION_HINT_ARB
#define org_lwjgl_opengl_ARBTextureCompression_GL_TEXTURE_COMPRESSION_HINT_ARB 34031L
#undef org_lwjgl_opengl_ARBTextureCompression_GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB
#define org_lwjgl_opengl_ARBTextureCompression_GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB 34464L
#undef org_lwjgl_opengl_ARBTextureCompression_GL_TEXTURE_COMPRESSED_ARB
#define org_lwjgl_opengl_ARBTextureCompression_GL_TEXTURE_COMPRESSED_ARB 34465L
#undef org_lwjgl_opengl_ARBTextureCompression_GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB
#define org_lwjgl_opengl_ARBTextureCompression_GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB 34466L
#undef org_lwjgl_opengl_ARBTextureCompression_GL_COMPRESSED_TEXTURE_FORMATS_ARB
#define org_lwjgl_opengl_ARBTextureCompression_GL_COMPRESSED_TEXTURE_FORMATS_ARB 34467L
/*
 * Class:     org_lwjgl_opengl_ARBTextureCompression
 * Method:    nglCompressedTexImage3DARB
 * Signature: (IIIIIIIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureCompression_nglCompressedTexImage3DARB
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_ARBTextureCompression
 * Method:    nglCompressedTexImage2DARB
 * Signature: (IIIIIIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureCompression_nglCompressedTexImage2DARB
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_ARBTextureCompression
 * Method:    nglCompressedTexImage1DARB
 * Signature: (IIIIIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureCompression_nglCompressedTexImage1DARB
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_ARBTextureCompression
 * Method:    nglCompressedTexSubImage3DARB
 * Signature: (IIIIIIIIIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureCompression_nglCompressedTexSubImage3DARB
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_ARBTextureCompression
 * Method:    nglCompressedTexSubImage2DARB
 * Signature: (IIIIIIIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureCompression_nglCompressedTexSubImage2DARB
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_ARBTextureCompression
 * Method:    nglCompressedTexSubImage1DARB
 * Signature: (IIIIIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureCompression_nglCompressedTexSubImage1DARB
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_ARBTextureCompression
 * Method:    nglGetCompressedTexImageARB
 * Signature: (IIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureCompression_nglGetCompressedTexImageARB
  (JNIEnv *, jclass, jint, jint, jlong);

#ifdef __cplusplus
}
#endif
#endif
