//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

@class NSObject<MMTableViewDelegate>, NSString;

@interface MMTableView : NSTableView
{
    BOOL _isPerformingAutomaticScroll;
    NSObject<MMTableViewDelegate> *_mmTableviewDelegate;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property BOOL isPerformingAutomaticScroll; // @synthesize isPerformingAutomaticScroll=_isPerformingAutomaticScroll;
@property(nonatomic) __weak NSObject<MMTableViewDelegate> *mmTableviewDelegate; // @synthesize mmTableviewDelegate=_mmTableviewDelegate;
- (void).cxx_destruct;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)didRemoveRowView:(id)arg1 forRow:(long long)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)scrollRowAtIndexToTop:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)scrollToBottomAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

