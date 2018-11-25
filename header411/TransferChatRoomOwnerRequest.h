//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface TransferChatRoomOwnerRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasChatRoomName:1;
    unsigned int hasNewOwnerUserName:1;
    BaseRequest *baseRequest;
    NSString *chatRoomName;
    NSString *newOwnerUserName;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetNewOwnerUserName:) NSString *newOwnerUserName; // @synthesize newOwnerUserName;
@property(readonly, nonatomic) BOOL hasNewOwnerUserName; // @synthesize hasNewOwnerUserName;
@property(retain, nonatomic, setter=SetChatRoomName:) NSString *chatRoomName; // @synthesize chatRoomName;
@property(readonly, nonatomic) BOOL hasChatRoomName; // @synthesize hasChatRoomName;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

