//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMFavoritesListBaseCell.h"

#import "MMCDNDownloadMgrExt.h"
#import "MMFavoriteFileServiceExt.h"

@class MMView, NSImageView, NSMutableArray, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface MMFavoritesListNoteCell : MMFavoritesListBaseCell <MMCDNDownloadMgrExt, MMFavoriteFileServiceExt>
{
    BOOL _isLayoutWithMultiImgImgStyle;
    NSTextField *_titleTextView;
    NSTextField *_descTextView;
    MMView *_thumbnailsContainerView;
    NSMutableArray *_subThumbnailImageViewArray;
    NSTextField *_maskTextField;
    NSImageView *_maskBkImageView;
    unsigned long long _layoutStyle;
}

+ (id)getDisplayImgDatas:(id)arg1;
+ (id)getFavTextCellText:(id)arg1;
+ (id)GetRecordDataDesc:(id)arg1;
+ (id)GetNoteTitleAndDesc:(id)arg1;
+ (double)cellHeightWithFavItem:(id)arg1 andWidthConstrain:(double)arg2;
@property(nonatomic) BOOL isLayoutWithMultiImgImgStyle; // @synthesize isLayoutWithMultiImgImgStyle=_isLayoutWithMultiImgImgStyle;
@property(nonatomic) unsigned long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) NSImageView *maskBkImageView; // @synthesize maskBkImageView=_maskBkImageView;
@property(retain, nonatomic) NSTextField *maskTextField; // @synthesize maskTextField=_maskTextField;
@property(retain, nonatomic) NSMutableArray *subThumbnailImageViewArray; // @synthesize subThumbnailImageViewArray=_subThumbnailImageViewArray;
@property(retain, nonatomic) MMView *thumbnailsContainerView; // @synthesize thumbnailsContainerView=_thumbnailsContainerView;
@property(retain, nonatomic) NSTextField *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) NSTextField *titleTextView; // @synthesize titleTextView=_titleTextView;
- (void).cxx_destruct;
- (void)handleFavoritesMgrDidUpdatedItemsWtihLocalIDArray:(id)arg1;
- (void)cdnDownloadMgrDidFinishedDownloadWithFavItemData:(id)arg1 type:(int)arg2 filePath:(id)arg3 taskID:(id)arg4;
- (void)layoutItemStyleTitle:(id)arg1;
- (void)layoutItemStyleThumbnail:(id)arg1;
- (void)layoutWithItemStyle;
- (void)asyncResizeImage:(id)arg1 andSetImageView:(id)arg2;
- (void)layoutWithImgStyle;
- (void)layoutWithTxtStyle:(id)arg1 desc:(id)arg2;
- (void)layoutFavContentView;
- (void)_frameChanged;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

