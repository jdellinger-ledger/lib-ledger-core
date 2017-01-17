// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#pragma once

#include "../utils/optional.hpp"
#include <chrono>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace ledger { namespace core { namespace api {

class Amount;
class Preferences;
struct BitcoinLikeTransaction;

class BitcoinLikeOperation {
public:
    virtual ~BitcoinLikeOperation() {}

    virtual std::shared_ptr<Preferences> getPreferences() = 0;

    virtual BitcoinLikeTransaction getTransaction() = 0;

    virtual std::shared_ptr<Amount> getAmount() = 0;

    virtual bool isSending() = 0;

    virtual bool isReception() = 0;

    virtual std::shared_ptr<Amount> getFees() = 0;

    virtual std::vector<std::string> getSenders() = 0;

    virtual std::vector<std::string> getRecipients() = 0;

    virtual std::chrono::system_clock::time_point getTime() = 0;

    virtual std::experimental::optional<std::chrono::system_clock::time_point> getConfirmationTime() = 0;

    virtual int64_t getConfirmationCount() = 0;

    virtual int32_t getAccountIndex() = 0;
};

} } }  // namespace ledger::core::api
