//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSplitView.h"

@class NSColor;

__attribute__((visibility("hidden")))
@interface MMBottomComposeBarSplitView : NSSplitView
{
    NSColor *_preferredDividerColor;
    CDUnknownBlockType _leftMouseDoubleClickInsideBlock;
}

@property(copy, nonatomic) CDUnknownBlockType leftMouseDoubleClickInsideBlock; // @synthesize leftMouseDoubleClickInsideBlock=_leftMouseDoubleClickInsideBlock;
@property(retain, nonatomic) NSColor *preferredDividerColor; // @synthesize preferredDividerColor=_preferredDividerColor;
- (void).cxx_destruct;
- (void)drawDividerInRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (id)dividerColor;

@end

