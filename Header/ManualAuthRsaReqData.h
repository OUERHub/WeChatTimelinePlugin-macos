//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class ECDHKey, NSString, SKBuiltinBuffer_t;

__attribute__((visibility("hidden")))
@interface ManualAuthRsaReqData : PBGeneratedMessage
{
    unsigned int hasRandomEncryKey:1;
    unsigned int hasCliPubEcdhkey:1;
    unsigned int hasUserName:1;
    unsigned int hasPwd:1;
    unsigned int hasPwd2:1;
    SKBuiltinBuffer_t *randomEncryKey;
    ECDHKey *cliPubEcdhkey;
    NSString *userName;
    NSString *pwd;
    NSString *pwd2;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetPwd2:) NSString *pwd2; // @synthesize pwd2;
@property(readonly, nonatomic) BOOL hasPwd2; // @synthesize hasPwd2;
@property(retain, nonatomic, setter=SetPwd:) NSString *pwd; // @synthesize pwd;
@property(readonly, nonatomic) BOOL hasPwd; // @synthesize hasPwd;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetCliPubEcdhkey:) ECDHKey *cliPubEcdhkey; // @synthesize cliPubEcdhkey;
@property(readonly, nonatomic) BOOL hasCliPubEcdhkey; // @synthesize hasCliPubEcdhkey;
@property(retain, nonatomic, setter=SetRandomEncryKey:) SKBuiltinBuffer_t *randomEncryKey; // @synthesize randomEncryKey;
@property(readonly, nonatomic) BOOL hasRandomEncryKey; // @synthesize hasRandomEncryKey;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

