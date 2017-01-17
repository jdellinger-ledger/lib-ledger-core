// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "BitcoinLikeConfiguration.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class LGBitcoinLikeConfiguration;

namespace djinni_generated {

class BitcoinLikeConfiguration
{
public:
    using CppType = std::shared_ptr<::ledger::core::api::BitcoinLikeConfiguration>;
    using CppOptType = std::shared_ptr<::ledger::core::api::BitcoinLikeConfiguration>;
    using ObjcType = LGBitcoinLikeConfiguration*;

    using Boxed = BitcoinLikeConfiguration;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

