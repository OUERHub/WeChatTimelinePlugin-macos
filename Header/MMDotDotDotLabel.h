//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface MMDotDotDotLabel : NSTextField
{
    NSArray *_wordList;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSArray *wordList; // @synthesize wordList=_wordList;
- (void).cxx_destruct;
- (void)_animate:(id)arg1;
- (void)_startAnimations:(id)arg1;
- (void)animateforDuration:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

