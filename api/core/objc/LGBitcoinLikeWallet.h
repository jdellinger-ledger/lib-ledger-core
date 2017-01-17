// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import <Foundation/Foundation.h>
@class LGBitcoinLikeOperationCursor;
@class LGPreferences;
@protocol LGBitcoinLikeWalletSynchronizationListener;


@interface LGBitcoinLikeWallet : NSObject

- (nullable LGPreferences *)getPreferences;

- (nullable LGBitcoinLikeOperationCursor *)openOperationCursor;

- (void)synchronize:(nullable id<LGBitcoinLikeWalletSynchronizationListener>)listener;

@end
