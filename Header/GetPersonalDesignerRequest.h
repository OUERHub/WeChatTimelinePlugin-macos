//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class SKBuiltinBuffer_t;

__attribute__((visibility("hidden")))
@interface GetPersonalDesignerRequest : PBGeneratedMessage
{
    unsigned int hasDesignerUin:1;
    unsigned int hasReqBuf:1;
    unsigned int designerUin;
    SKBuiltinBuffer_t *reqBuf;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetReqBuf:) SKBuiltinBuffer_t *reqBuf; // @synthesize reqBuf;
@property(readonly, nonatomic) BOOL hasReqBuf; // @synthesize hasReqBuf;
@property(nonatomic, setter=SetDesignerUin:) unsigned int designerUin; // @synthesize designerUin;
@property(readonly, nonatomic) BOOL hasDesignerUin; // @synthesize hasDesignerUin;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

