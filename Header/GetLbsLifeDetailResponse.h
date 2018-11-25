//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, LbsLifeDetail;

__attribute__((visibility("hidden")))
@interface GetLbsLifeDetailResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasLifeDetail:1;
    BaseResponse *baseResponse;
    LbsLifeDetail *lifeDetail;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetLifeDetail:) LbsLifeDetail *lifeDetail; // @synthesize lifeDetail;
@property(readonly, nonatomic) BOOL hasLifeDetail; // @synthesize hasLifeDetail;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

