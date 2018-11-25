//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString, SKBuiltinBuffer_t, SKBuiltinString_t;

__attribute__((visibility("hidden")))
@interface CreateChatRoomResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasTopic:1;
    unsigned int hasPyinitial:1;
    unsigned int hasQuanPin:1;
    unsigned int hasMemberCount:1;
    unsigned int hasChatRoomName:1;
    unsigned int hasImgBuf:1;
    unsigned int hasBigHeadImgUrl:1;
    unsigned int hasSmallHeadImgUrl:1;
    unsigned int memberCount;
    BaseResponse *baseResponse;
    SKBuiltinString_t *topic;
    SKBuiltinString_t *pyinitial;
    SKBuiltinString_t *quanPin;
    NSMutableArray *mutableMemberListList;
    SKBuiltinString_t *chatRoomName;
    SKBuiltinBuffer_t *imgBuf;
    NSString *bigHeadImgUrl;
    NSString *smallHeadImgUrl;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetSmallHeadImgUrl:) NSString *smallHeadImgUrl; // @synthesize smallHeadImgUrl;
@property(readonly, nonatomic) BOOL hasSmallHeadImgUrl; // @synthesize hasSmallHeadImgUrl;
@property(retain, nonatomic, setter=SetBigHeadImgUrl:) NSString *bigHeadImgUrl; // @synthesize bigHeadImgUrl;
@property(readonly, nonatomic) BOOL hasBigHeadImgUrl; // @synthesize hasBigHeadImgUrl;
@property(retain, nonatomic, setter=SetImgBuf:) SKBuiltinBuffer_t *imgBuf; // @synthesize imgBuf;
@property(readonly, nonatomic) BOOL hasImgBuf; // @synthesize hasImgBuf;
@property(retain, nonatomic, setter=SetChatRoomName:) SKBuiltinString_t *chatRoomName; // @synthesize chatRoomName;
@property(readonly, nonatomic) BOOL hasChatRoomName; // @synthesize hasChatRoomName;
@property(retain, nonatomic) NSMutableArray *mutableMemberListList; // @synthesize mutableMemberListList;
@property(nonatomic, setter=SetMemberCount:) unsigned int memberCount; // @synthesize memberCount;
@property(readonly, nonatomic) BOOL hasMemberCount; // @synthesize hasMemberCount;
@property(retain, nonatomic, setter=SetQuanPin:) SKBuiltinString_t *quanPin; // @synthesize quanPin;
@property(readonly, nonatomic) BOOL hasQuanPin; // @synthesize hasQuanPin;
@property(retain, nonatomic, setter=SetPyinitial:) SKBuiltinString_t *pyinitial; // @synthesize pyinitial;
@property(readonly, nonatomic) BOOL hasPyinitial; // @synthesize hasPyinitial;
@property(retain, nonatomic, setter=SetTopic:) SKBuiltinString_t *topic; // @synthesize topic;
@property(readonly, nonatomic) BOOL hasTopic; // @synthesize hasTopic;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addMemberList:(id)arg1;
- (void)addMemberListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *memberList; // @dynamic memberList;
- (id)memberListList;
- (id)init;

@end

