//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface GetA8KeyReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasOpCode:1;
    unsigned int hasA2Key:1;
    unsigned int hasAppId:1;
    unsigned int hasScope:1;
    unsigned int hasState:1;
    unsigned int hasReqUrl:1;
    unsigned int hasFriendUserName:1;
    unsigned int hasFriendQq:1;
    unsigned int hasScene:1;
    unsigned int hasUserName:1;
    unsigned int hasBundleId:1;
    unsigned int hasA2KeyNew:1;
    unsigned int hasReason:1;
    unsigned int hasFontScale:1;
    unsigned int hasFlag:1;
    unsigned int hasNetType:1;
    unsigned int opCode;
    unsigned int friendQq;
    unsigned int scene;
    unsigned int reason;
    unsigned int fontScale;
    unsigned int flag;
    BaseRequest *baseRequest;
    SKBuiltinBuffer_t *a2Key;
    SKBuiltinString_t *appId;
    SKBuiltinString_t *scope;
    SKBuiltinString_t *state;
    SKBuiltinString_t *reqUrl;
    NSString *friendUserName;
    NSString *userName;
    NSString *bundleId;
    SKBuiltinBuffer_t *a2KeyNew;
    NSString *netType;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetNetType:) NSString *netType; // @synthesize netType;
@property(readonly, nonatomic) BOOL hasNetType; // @synthesize hasNetType;
@property(nonatomic, setter=SetFlag:) unsigned int flag; // @synthesize flag;
@property(readonly, nonatomic) BOOL hasFlag; // @synthesize hasFlag;
@property(nonatomic, setter=SetFontScale:) unsigned int fontScale; // @synthesize fontScale;
@property(readonly, nonatomic) BOOL hasFontScale; // @synthesize hasFontScale;
@property(nonatomic, setter=SetReason:) unsigned int reason; // @synthesize reason;
@property(readonly, nonatomic) BOOL hasReason; // @synthesize hasReason;
@property(retain, nonatomic, setter=SetA2KeyNew:) SKBuiltinBuffer_t *a2KeyNew; // @synthesize a2KeyNew;
@property(readonly, nonatomic) BOOL hasA2KeyNew; // @synthesize hasA2KeyNew;
@property(retain, nonatomic, setter=SetBundleId:) NSString *bundleId; // @synthesize bundleId;
@property(readonly, nonatomic) BOOL hasBundleId; // @synthesize hasBundleId;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(nonatomic, setter=SetFriendQq:) unsigned int friendQq; // @synthesize friendQq;
@property(readonly, nonatomic) BOOL hasFriendQq; // @synthesize hasFriendQq;
@property(retain, nonatomic, setter=SetFriendUserName:) NSString *friendUserName; // @synthesize friendUserName;
@property(readonly, nonatomic) BOOL hasFriendUserName; // @synthesize hasFriendUserName;
@property(retain, nonatomic, setter=SetReqUrl:) SKBuiltinString_t *reqUrl; // @synthesize reqUrl;
@property(readonly, nonatomic) BOOL hasReqUrl; // @synthesize hasReqUrl;
@property(retain, nonatomic, setter=SetState:) SKBuiltinString_t *state; // @synthesize state;
@property(readonly, nonatomic) BOOL hasState; // @synthesize hasState;
@property(retain, nonatomic, setter=SetScope:) SKBuiltinString_t *scope; // @synthesize scope;
@property(readonly, nonatomic) BOOL hasScope; // @synthesize hasScope;
@property(retain, nonatomic, setter=SetAppId:) SKBuiltinString_t *appId; // @synthesize appId;
@property(readonly, nonatomic) BOOL hasAppId; // @synthesize hasAppId;
@property(retain, nonatomic, setter=SetA2Key:) SKBuiltinBuffer_t *a2Key; // @synthesize a2Key;
@property(readonly, nonatomic) BOOL hasA2Key; // @synthesize hasA2Key;
@property(nonatomic, setter=SetOpCode:) unsigned int opCode; // @synthesize opCode;
@property(readonly, nonatomic) BOOL hasOpCode; // @synthesize hasOpCode;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

