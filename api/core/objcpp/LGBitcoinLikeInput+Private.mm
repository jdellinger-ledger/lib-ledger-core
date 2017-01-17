// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import "LGBitcoinLikeInput+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto BitcoinLikeInput::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.path),
            ::djinni::Bool::toCpp(obj.isCoinbase),
            ::djinni::String::toCpp(obj.previousTxHash),
            ::djinni::I32::toCpp(obj.indexInPreviousTx)};
}

auto BitcoinLikeInput::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[LGBitcoinLikeInput alloc] initWithPath:(::djinni::String::fromCpp(cpp.path))
                                         isCoinbase:(::djinni::Bool::fromCpp(cpp.isCoinbase))
                                     previousTxHash:(::djinni::String::fromCpp(cpp.previousTxHash))
                                  indexInPreviousTx:(::djinni::I32::fromCpp(cpp.indexInPreviousTx))];
}

}  // namespace djinni_generated
