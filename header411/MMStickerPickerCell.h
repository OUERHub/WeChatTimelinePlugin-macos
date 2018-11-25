//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JNWCollectionViewCell.h"

#import "NSTextViewDelegate.h"

@class MMEmoticonData, NSImage, NSImageView, NSString, NSTextView, NSTrackingArea;

@interface MMStickerPickerCell : JNWCollectionViewCell <NSTextViewDelegate>
{
    NSImageView *_imageView;
    NSTextView *_stickerCaption;
    MMEmoticonData *_emoticonData;
    NSTrackingArea *_trackingArea;
    NSImage *_thumbImage;
    NSImage *_realImage;
    BOOL _rollover;
    BOOL _highlighted;
}

@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) MMEmoticonData *emoticonData; // @synthesize emoticonData=_emoticonData;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (struct CGRect)getStickerArea;
- (void)drawRect:(struct CGRect)arg1;
- (void)setRollover:(BOOL)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)willLayoutWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

