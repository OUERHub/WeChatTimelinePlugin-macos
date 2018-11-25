//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest;

__attribute__((visibility("hidden")))
@interface GetNBSDetailRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasNbsid:1;
    unsigned int nbsid;
    BaseRequest *baseRequest;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetNbsid:) unsigned int nbsid; // @synthesize nbsid;
@property(readonly, nonatomic) BOOL hasNbsid; // @synthesize hasNbsid;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

