//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

__attribute__((visibility("hidden")))
@interface ExtDeviceControlRequest : PBGeneratedMessage
{
    unsigned int hasOpType:1;
    unsigned int hasLockDevice:1;
    unsigned int opType;
    unsigned int lockDevice;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetLockDevice:) unsigned int lockDevice; // @synthesize lockDevice;
@property(readonly, nonatomic) BOOL hasLockDevice; // @synthesize hasLockDevice;
@property(nonatomic, setter=SetOpType:) unsigned int opType; // @synthesize opType;
@property(readonly, nonatomic) BOOL hasOpType; // @synthesize hasOpType;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

