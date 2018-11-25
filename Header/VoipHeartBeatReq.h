//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest;

__attribute__((visibility("hidden")))
@interface VoipHeartBeatReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasRoomId:1;
    unsigned int hasRoomKey:1;
    unsigned int hasTimestamp:1;
    unsigned int hasTimestamp64:1;
    unsigned int hasConnectionType:1;
    int roomId;
    unsigned int timestamp;
    int connectionType;
    BaseRequest *baseRequest;
    long long roomKey;
    unsigned long long timestamp64;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetConnectionType:) int connectionType; // @synthesize connectionType;
@property(readonly, nonatomic) BOOL hasConnectionType; // @synthesize hasConnectionType;
@property(nonatomic, setter=SetTimestamp64:) unsigned long long timestamp64; // @synthesize timestamp64;
@property(readonly, nonatomic) BOOL hasTimestamp64; // @synthesize hasTimestamp64;
@property(nonatomic, setter=SetTimestamp:) unsigned int timestamp; // @synthesize timestamp;
@property(readonly, nonatomic) BOOL hasTimestamp; // @synthesize hasTimestamp;
@property(nonatomic, setter=SetRoomKey:) long long roomKey; // @synthesize roomKey;
@property(readonly, nonatomic) BOOL hasRoomKey; // @synthesize hasRoomKey;
@property(nonatomic, setter=SetRoomId:) int roomId; // @synthesize roomId;
@property(readonly, nonatomic) BOOL hasRoomId; // @synthesize hasRoomId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

