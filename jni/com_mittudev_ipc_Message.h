/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mittudev_ipc_Message */

#ifndef _Included_com_mittudev_ipc_Message
#define _Included_com_mittudev_ipc_Message
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mittudev_ipc_Message
 * Method:    messageCreate
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_com_mittudev_ipc_Message_messageCreate
	(JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_mittudev_ipc_Message
 * Method:    messageSetPID
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_mittudev_ipc_Message_messageSetPID
	(JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_mittudev_ipc_Message
 * Method:    messageSetSubject
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_mittudev_ipc_Message_messageSetSubject
	(JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_mittudev_ipc_Message
 * Method:    messageGetData
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_mittudev_ipc_Message_messageGetData
	(JNIEnv *, jobject, jlong);

/*
 * Class:     com_mittudev_ipc_Message
 * Method:    messageGetSubject
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_mittudev_ipc_Message_messageGetSubject
	(JNIEnv *, jobject, jlong);

/*
 * Class:     com_mittudev_ipc_Message
 * Method:    messageGetPID
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_mittudev_ipc_Message_messageGetPID
	(JNIEnv *, jobject, jlong);

/*
 * Class:     com_mittudev_ipc_Message
 * Method:    messageGetType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_mittudev_ipc_Message_messageGetType
	(JNIEnv *, jobject, jlong);

/*
 * Class:     com_mittudev_ipc_Message
 * Method:    messageDestroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_mittudev_ipc_Message_messageDestroy
	(JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
