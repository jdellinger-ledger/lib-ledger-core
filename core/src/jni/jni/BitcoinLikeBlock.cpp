// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "BitcoinLikeBlock.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

BitcoinLikeBlock::BitcoinLikeBlock() = default;

BitcoinLikeBlock::~BitcoinLikeBlock() = default;

auto BitcoinLikeBlock::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<BitcoinLikeBlock>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.hash)),
                                                           ::djinni::get(::djinni::I64::fromCpp(jniEnv, c.height)),
                                                           ::djinni::get(::djinni::I64::fromCpp(jniEnv, c.time)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto BitcoinLikeBlock::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 4);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<BitcoinLikeBlock>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_hash)),
            ::djinni::I64::toCpp(jniEnv, jniEnv->GetLongField(j, data.field_height)),
            ::djinni::I64::toCpp(jniEnv, jniEnv->GetLongField(j, data.field_time))};
}

}  // namespace djinni_generated
