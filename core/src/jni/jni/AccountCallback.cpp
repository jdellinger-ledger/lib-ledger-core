// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "AccountCallback.hpp"  // my header
#include "Account.hpp"
#include "Error.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

AccountCallback::AccountCallback() : ::djinni::JniInterface<::ledger::core::api::AccountCallback, AccountCallback>() {}

AccountCallback::~AccountCallback() = default;

AccountCallback::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

AccountCallback::JavaProxy::~JavaProxy() = default;

void AccountCallback::JavaProxy::onCallback(const std::shared_ptr<::ledger::core::api::Account> & c_result, const std::experimental::optional<::ledger::core::api::Error> & c_error) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::AccountCallback>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onCallback,
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni_generated::Account>::fromCpp(jniEnv, c_result)),
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni_generated::Error>::fromCpp(jniEnv, c_error)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated
