//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, RSACert;

__attribute__((visibility("hidden")))
@interface GetCertResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasCertValue:1;
    unsigned int hasCertVersion:1;
    unsigned int certVersion;
    BaseResponse *baseResponse;
    RSACert *certValue;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetCertVersion:) unsigned int certVersion; // @synthesize certVersion;
@property(readonly, nonatomic) BOOL hasCertVersion; // @synthesize hasCertVersion;
@property(retain, nonatomic, setter=SetCertValue:) RSACert *certValue; // @synthesize certValue;
@property(readonly, nonatomic) BOOL hasCertValue; // @synthesize hasCertValue;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

