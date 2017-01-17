// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_pool.djinni

#pragma once

#include <string>
#include <vector>

namespace ledger { namespace core { namespace api {

/** Interface used as a callback to iterate through mutiple BitcoinLikeWallets. */
class StringArrayCallback {
public:
    virtual ~StringArrayCallback() {}

    virtual void onCallback(const std::vector<std::string> & strs) = 0;
};

} } }  // namespace ledger::core::api
