// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import <Foundation/Foundation.h>
@class LGBitcoinLikeOperationCursor;
@class LGPreferences;


@interface LGBitcoinLikeAccount : NSObject

- (nullable LGPreferences *)getPreferences;

- (nullable LGBitcoinLikeOperationCursor *)openOperationsCursor;

@end
