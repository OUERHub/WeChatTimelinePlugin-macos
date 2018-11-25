//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface GetPersonalDesignerResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasBannerUrl:1;
    unsigned int hasName:1;
    unsigned int hasDesc:1;
    unsigned int hasHeadUrl:1;
    unsigned int hasBizName:1;
    unsigned int hasReqBuf:1;
    BaseResponse *baseResponse;
    NSString *bannerUrl;
    NSString *name;
    NSString *desc;
    NSString *headUrl;
    NSString *bizName;
    NSMutableArray *mutableEmotionListList;
    SKBuiltinBuffer_t *reqBuf;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetReqBuf:) SKBuiltinBuffer_t *reqBuf; // @synthesize reqBuf;
@property(readonly, nonatomic) BOOL hasReqBuf; // @synthesize hasReqBuf;
@property(retain, nonatomic) NSMutableArray *mutableEmotionListList; // @synthesize mutableEmotionListList;
@property(retain, nonatomic, setter=SetBizName:) NSString *bizName; // @synthesize bizName;
@property(readonly, nonatomic) BOOL hasBizName; // @synthesize hasBizName;
@property(retain, nonatomic, setter=SetHeadUrl:) NSString *headUrl; // @synthesize headUrl;
@property(readonly, nonatomic) BOOL hasHeadUrl; // @synthesize hasHeadUrl;
@property(retain, nonatomic, setter=SetDesc:) NSString *desc; // @synthesize desc;
@property(readonly, nonatomic) BOOL hasDesc; // @synthesize hasDesc;
@property(retain, nonatomic, setter=SetName:) NSString *name; // @synthesize name;
@property(readonly, nonatomic) BOOL hasName; // @synthesize hasName;
@property(retain, nonatomic, setter=SetBannerUrl:) NSString *bannerUrl; // @synthesize bannerUrl;
@property(readonly, nonatomic) BOOL hasBannerUrl; // @synthesize hasBannerUrl;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addEmotionList:(id)arg1;
- (void)addEmotionListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *emotionList; // @dynamic emotionList;
- (id)emotionListList;
- (id)init;

@end
