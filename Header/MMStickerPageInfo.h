//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMEmotionGroupInfo;

__attribute__((visibility("hidden")))
@interface MMStickerPageInfo : NSObject
{
    MMEmotionGroupInfo *_groupInfo;
    unsigned long long _groupPageCount;
    unsigned long long _groupIndex;
    unsigned long long _pageIndexInCurGroup;
    unsigned long long _pageIndexInAllPages;
    struct CGSize _itemSize;
    struct _NSRange _dataRange;
}

+ (id)pageInfoWithGroupInfo:(id)arg1 groupIndex:(unsigned long long)arg2 pageIndex:(unsigned long long)arg3 range:(struct _NSRange)arg4;
@property(nonatomic) struct _NSRange dataRange; // @synthesize dataRange=_dataRange;
@property(nonatomic) unsigned long long pageIndexInAllPages; // @synthesize pageIndexInAllPages=_pageIndexInAllPages;
@property(nonatomic) unsigned long long pageIndexInCurGroup; // @synthesize pageIndexInCurGroup=_pageIndexInCurGroup;
@property(nonatomic) unsigned long long groupIndex; // @synthesize groupIndex=_groupIndex;
@property(nonatomic) unsigned long long groupPageCount; // @synthesize groupPageCount=_groupPageCount;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(retain, nonatomic) MMEmotionGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
- (void).cxx_destruct;
- (id)description;

@end

