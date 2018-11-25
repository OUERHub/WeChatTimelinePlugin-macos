//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FavStreamVideoItem : NSObject
{
    unsigned int _uiStreamVideoTime;
    NSString *_streamVideoUrl;
    NSString *_streamVideoTitle;
    NSString *_streamVideoWording;
    NSString *_streamVideoWebUrl;
    NSString *_streamVideoThumbUrl;
    NSString *_streamVideoPublishId;
    NSString *_streamVideoAdUxInfo;
}

@property(retain, nonatomic) NSString *streamVideoAdUxInfo; // @synthesize streamVideoAdUxInfo=_streamVideoAdUxInfo;
@property(retain, nonatomic) NSString *streamVideoPublishId; // @synthesize streamVideoPublishId=_streamVideoPublishId;
@property(retain, nonatomic) NSString *streamVideoThumbUrl; // @synthesize streamVideoThumbUrl=_streamVideoThumbUrl;
@property(nonatomic) unsigned int uiStreamVideoTime; // @synthesize uiStreamVideoTime=_uiStreamVideoTime;
@property(retain, nonatomic) NSString *streamVideoWebUrl; // @synthesize streamVideoWebUrl=_streamVideoWebUrl;
@property(retain, nonatomic) NSString *streamVideoWording; // @synthesize streamVideoWording=_streamVideoWording;
@property(retain, nonatomic) NSString *streamVideoTitle; // @synthesize streamVideoTitle=_streamVideoTitle;
@property(retain, nonatomic) NSString *streamVideoUrl; // @synthesize streamVideoUrl=_streamVideoUrl;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

