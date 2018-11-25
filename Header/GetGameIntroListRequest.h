//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GetGameIntroListRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasCount:1;
    unsigned int hasDevicePlatform:1;
    unsigned int count;
    BaseRequest *baseRequest;
    NSMutableArray *mutableAppIdListList;
    NSString *devicePlatform;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetDevicePlatform:) NSString *devicePlatform; // @synthesize devicePlatform;
@property(readonly, nonatomic) BOOL hasDevicePlatform; // @synthesize hasDevicePlatform;
@property(retain, nonatomic) NSMutableArray *mutableAppIdListList; // @synthesize mutableAppIdListList;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (void)addAppIdList:(id)arg1;
- (void)addAppIdListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *appIdList; // @dynamic appIdList;
- (id)appIdListList;
- (id)init;

@end

