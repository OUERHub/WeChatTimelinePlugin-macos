//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMEmoticonStoreItem;

__attribute__((visibility("hidden")))
@interface ExchangeEmoticonPackCgi : NSObject
{
    MMEmoticonStoreItem *_storeItem;
    id <ExchangeEmoticonPackCgiDelegate> _delegate;
}

@property(nonatomic) __weak id <ExchangeEmoticonPackCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startRequestWithProductId:(id)arg1 reqScene:(int)arg2;
- (id)init;

@end

