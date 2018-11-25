//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GameResourceReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasPropsCount:1;
    int propsIdListMemoizedSerializedSize;
    int propsCount;
    BaseRequest *baseRequest;
    NSMutableArray *mutablePropsIdListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutablePropsIdListList; // @synthesize mutablePropsIdListList;
@property(nonatomic, setter=SetPropsCount:) int propsCount; // @synthesize propsCount;
@property(readonly, nonatomic) BOOL hasPropsCount; // @synthesize hasPropsCount;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (void)addPropsIdListFromArray:(id)arg1;
- (void)addPropsIdList:(unsigned int)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *propsIdList; // @dynamic propsIdList;
- (id)propsIdListList;
- (id)init;

@end

