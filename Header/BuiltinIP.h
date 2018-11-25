//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface BuiltinIP : PBGeneratedMessage
{
    unsigned int hasType:1;
    unsigned int hasPort:1;
    unsigned int hasIp:1;
    unsigned int hasDomain:1;
    unsigned int type;
    unsigned int port;
    NSData *ip;
    NSData *domain;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetDomain:) NSData *domain; // @synthesize domain;
@property(readonly, nonatomic) BOOL hasDomain; // @synthesize hasDomain;
@property(retain, nonatomic, setter=SetIp:) NSData *ip; // @synthesize ip;
@property(readonly, nonatomic) BOOL hasIp; // @synthesize hasIp;
@property(nonatomic, setter=SetPort:) unsigned int port; // @synthesize port;
@property(readonly, nonatomic) BOOL hasPort; // @synthesize hasPort;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

