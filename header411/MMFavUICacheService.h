//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMMCacheCleanerExt.h"
#import "MMService.h"

@class EGOCache, NSDictionary, NSMutableDictionary, NSString;

@interface MMFavUICacheService : MMService <IMMCacheCleanerExt, MMService>
{
    EGOCache *_formattedDescCache;
    EGOCache *_formattedHeightCache;
    EGOCache *_formattedTitleCache;
    EGOCache *_formattedSenderCache;
    EGOCache *_formattedSourceCache;
    NSDictionary *_descFormattingOptions;
    NSMutableDictionary *_formattedSenderDateCache;
}

@property(retain, nonatomic) NSMutableDictionary *formattedSenderDateCache; // @synthesize formattedSenderDateCache=_formattedSenderDateCache;
@property(retain, nonatomic) NSDictionary *descFormattingOptions; // @synthesize descFormattingOptions=_descFormattingOptions;
@property(retain, nonatomic) EGOCache *formattedSourceCache; // @synthesize formattedSourceCache=_formattedSourceCache;
@property(retain, nonatomic) EGOCache *formattedSenderCache; // @synthesize formattedSenderCache=_formattedSenderCache;
@property(retain, nonatomic) EGOCache *formattedTitleCache; // @synthesize formattedTitleCache=_formattedTitleCache;
@property(retain, nonatomic) EGOCache *formattedHeightCache; // @synthesize formattedHeightCache=_formattedHeightCache;
@property(retain, nonatomic) EGOCache *formattedDescCache; // @synthesize formattedDescCache=_formattedDescCache;
- (void).cxx_destruct;
- (void)onComputeCacheSize;
- (void)onCleanCache;
- (void)setSourceString:(id)arg1 withItem:(id)arg2;
- (id)sourceStringForItem:(id)arg1;
- (void)setSenderDateString:(id)arg1 withItem:(id)arg2;
- (id)senderDateStringForItem:(id)arg1;
- (void)setDescriptionString:(id)arg1 withItem:(id)arg2;
- (id)descriptionStringForItem:(id)arg1;
- (void)setTitleString:(id)arg1 withItem:(id)arg2;
- (id)titleStringForItem:(id)arg1;
- (void)setSenderInfoString:(id)arg1 withItem:(id)arg2;
- (id)senderInfoStringForItem:(id)arg1;
- (void)clearAttributedStringCacheForItem:(id)arg1;
- (double)formattedDescriptionHeightForItem:(id)arg1;
- (id)formattedDescriptionForItem:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (void)removeOldCacheFolder;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

