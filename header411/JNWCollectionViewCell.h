//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class JNWCollectionView, JNWCollectionViewCellBackgroundView, NSColor, NSImage, NSIndexPath, NSString, NSTrackingArea;

@interface JNWCollectionViewCell : NSView
{
    BOOL _selected;
    BOOL _hovered;
    BOOL _disableSuperMouseTrack;
    NSView *_contentView;
    JNWCollectionView *_collectionView;
    double _crossfadeDuration;
    NSString *_reuseIdentifier;
    NSIndexPath *_indexPath;
    JNWCollectionViewCellBackgroundView *_backgroundView;
    NSTrackingArea *_trackingArea;
}

@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) JNWCollectionViewCellBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) BOOL disableSuperMouseTrack; // @synthesize disableSuperMouseTrack=_disableSuperMouseTrack;
@property(nonatomic) BOOL hovered; // @synthesize hovered=_hovered;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) __weak JNWCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)description;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
@property(retain, nonatomic) NSImage *backgroundImage;
@property(retain, nonatomic) NSColor *backgroundColor;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)configureContentView:(id)arg1;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
- (void)updateTrackingAreas;
- (void)didLayoutWithFrame:(struct CGRect)arg1;
- (void)willLayoutWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

