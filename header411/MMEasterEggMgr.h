//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class MMEasterEggView, NSString;

@interface MMEasterEggMgr : MMService <MMService>
{
    BOOL _isPlaying;
    MMEasterEggView *_easterEggView;
}

@property(retain, nonatomic) MMEasterEggView *easterEggView; // @synthesize easterEggView=_easterEggView;
@property(nonatomic) BOOL isPlaying; // @synthesize isPlaying=_isPlaying;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)playEasterEggAnimationInView:(id)arg1 withString:(id)arg2;
- (id)easterEggStringWithMessages:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

