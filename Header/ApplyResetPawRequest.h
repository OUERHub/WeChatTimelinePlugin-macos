//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, SKBuiltinBuffer_t;

__attribute__((visibility("hidden")))
@interface ApplyResetPawRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasType:1;
    unsigned int hasResetInfo:1;
    unsigned int hasGetMethod:1;
    unsigned int hasRandomEncryKey:1;
    int type;
    unsigned int getMethod;
    BaseRequest *baseRequest;
    NSString *resetInfo;
    SKBuiltinBuffer_t *randomEncryKey;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetRandomEncryKey:) SKBuiltinBuffer_t *randomEncryKey; // @synthesize randomEncryKey;
@property(readonly, nonatomic) BOOL hasRandomEncryKey; // @synthesize hasRandomEncryKey;
@property(nonatomic, setter=SetGetMethod:) unsigned int getMethod; // @synthesize getMethod;
@property(readonly, nonatomic) BOOL hasGetMethod; // @synthesize hasGetMethod;
@property(retain, nonatomic, setter=SetResetInfo:) NSString *resetInfo; // @synthesize resetInfo;
@property(readonly, nonatomic) BOOL hasResetInfo; // @synthesize hasResetInfo;
@property(nonatomic, setter=SetType:) int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

