//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GetContactLabelListResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasLabelCount:1;
    unsigned int labelCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableLabelPairListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableLabelPairListList; // @synthesize mutableLabelPairListList;
@property(nonatomic, setter=SetLabelCount:) unsigned int labelCount; // @synthesize labelCount;
@property(readonly, nonatomic) BOOL hasLabelCount; // @synthesize hasLabelCount;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addLabelPairList:(id)arg1;
- (void)addLabelPairListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *labelPairList; // @dynamic labelPairList;
- (id)labelPairListList;
- (id)init;

@end

