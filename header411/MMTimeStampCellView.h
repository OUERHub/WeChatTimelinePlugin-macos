//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMMessageCellView.h"

@class NSTextField;

@interface MMTimeStampCellView : MMMessageCellView
{
    NSTextField *_timeStampTextField;
}

+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
@property(retain, nonatomic) NSTextField *timeStampTextField; // @synthesize timeStampTextField=_timeStampTextField;
- (void).cxx_destruct;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)showsContextMenuButton;
- (void)mouseDragged:(id)arg1;
- (void)populateWithMessage:(id)arg1;
- (void)handleNewTextSize;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

