//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

__attribute__((visibility("hidden")))
@interface UploadCardImgResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasStartPos:1;
    unsigned int hasTotalLen:1;
    unsigned int hasClientId:1;
    unsigned int hasCardImgUrl:1;
    unsigned int startPos;
    unsigned int totalLen;
    BaseResponse *baseResponse;
    NSString *clientId;
    NSString *cardImgUrl;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetCardImgUrl:) NSString *cardImgUrl; // @synthesize cardImgUrl;
@property(readonly, nonatomic) BOOL hasCardImgUrl; // @synthesize hasCardImgUrl;
@property(retain, nonatomic, setter=SetClientId:) NSString *clientId; // @synthesize clientId;
@property(readonly, nonatomic) BOOL hasClientId; // @synthesize hasClientId;
@property(nonatomic, setter=SetTotalLen:) unsigned int totalLen; // @synthesize totalLen;
@property(readonly, nonatomic) BOOL hasTotalLen; // @synthesize hasTotalLen;
@property(nonatomic, setter=SetStartPos:) unsigned int startPos; // @synthesize startPos;
@property(readonly, nonatomic) BOOL hasStartPos; // @synthesize hasStartPos;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

