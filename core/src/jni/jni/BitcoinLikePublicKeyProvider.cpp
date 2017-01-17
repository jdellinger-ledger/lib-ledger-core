// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_public_key_provider.djinni

#include "BitcoinLikePublicKeyProvider.hpp"  // my header
#include "BitcoinLikePublicKeyCallback.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

BitcoinLikePublicKeyProvider::BitcoinLikePublicKeyProvider() : ::djinni::JniInterface<::ledger::core::api::BitcoinLikePublicKeyProvider, BitcoinLikePublicKeyProvider>() {}

BitcoinLikePublicKeyProvider::~BitcoinLikePublicKeyProvider() = default;

BitcoinLikePublicKeyProvider::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

BitcoinLikePublicKeyProvider::JavaProxy::~JavaProxy() = default;

void BitcoinLikePublicKeyProvider::JavaProxy::get(const std::string & c_path, const std::shared_ptr<::ledger::core::api::BitcoinLikePublicKeyCallback> & c_callback) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::BitcoinLikePublicKeyProvider>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_get,
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_path)),
                           ::djinni::get(::djinni_generated::BitcoinLikePublicKeyCallback::fromCpp(jniEnv, c_callback)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated
