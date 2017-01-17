// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_public_key_provider.djinni

#include "BitcoinLikePublicKeyCallback.hpp"  // my header
#include "BitcoinPublicKey.hpp"

namespace djinni_generated {

BitcoinLikePublicKeyCallback::BitcoinLikePublicKeyCallback() : ::djinni::JniInterface<::ledger::core::api::BitcoinLikePublicKeyCallback, BitcoinLikePublicKeyCallback>("co/ledger/core/BitcoinLikePublicKeyCallback$CppProxy") {}

BitcoinLikePublicKeyCallback::~BitcoinLikePublicKeyCallback() = default;


CJNIEXPORT void JNICALL Java_co_ledger_core_BitcoinLikePublicKeyCallback_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::BitcoinLikePublicKeyCallback>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_ledger_core_BitcoinLikePublicKeyCallback_00024CppProxy_native_1onPublicKey(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_publicKey)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikePublicKeyCallback>(nativeRef);
        ref->onPublicKey(::djinni_generated::BitcoinPublicKey::toCpp(jniEnv, j_publicKey));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
