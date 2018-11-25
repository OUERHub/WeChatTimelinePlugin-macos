//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class AuthAppBaseInfo, BaseResponse, NSString;

@interface GetAuthAppInfoResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasBaseInfo:1;
    unsigned int hasAuthInfo:1;
    unsigned int hasDevInfo:1;
    unsigned int hasExternInfo:1;
    BaseResponse *baseResponse;
    AuthAppBaseInfo *baseInfo;
    NSString *authInfo;
    NSString *devInfo;
    NSString *externInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetExternInfo:) NSString *externInfo; // @synthesize externInfo;
@property(readonly, nonatomic) BOOL hasExternInfo; // @synthesize hasExternInfo;
@property(retain, nonatomic, setter=SetDevInfo:) NSString *devInfo; // @synthesize devInfo;
@property(readonly, nonatomic) BOOL hasDevInfo; // @synthesize hasDevInfo;
@property(retain, nonatomic, setter=SetAuthInfo:) NSString *authInfo; // @synthesize authInfo;
@property(readonly, nonatomic) BOOL hasAuthInfo; // @synthesize hasAuthInfo;
@property(retain, nonatomic, setter=SetBaseInfo:) AuthAppBaseInfo *baseInfo; // @synthesize baseInfo;
@property(readonly, nonatomic) BOOL hasBaseInfo; // @synthesize hasBaseInfo;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

