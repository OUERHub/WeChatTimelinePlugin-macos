//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData, NSString;

@interface PacketBackupDataPush : PBGeneratedMessage
{
    unsigned int hasDataId:1;
    unsigned int hasDataType:1;
    unsigned int hasDataSize:1;
    unsigned int hasStartOffset:1;
    unsigned int hasEndOffset:1;
    unsigned int hasCheckSum:1;
    unsigned int hasData:1;
    NSData *data_;
    unsigned int hasProgress:1;
    int dataType;
    int dataSize;
    int startOffset;
    int endOffset;
    int checkSum;
    int progress;
    NSString *dataId;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetProgress:) int progress; // @synthesize progress;
@property(readonly, nonatomic) BOOL hasProgress; // @synthesize hasProgress;
@property(retain, nonatomic, setter=SetData:) NSData *data; // @synthesize data=data_;
@property(readonly, nonatomic) BOOL hasData; // @synthesize hasData;
@property(nonatomic, setter=SetCheckSum:) int checkSum; // @synthesize checkSum;
@property(readonly, nonatomic) BOOL hasCheckSum; // @synthesize hasCheckSum;
@property(nonatomic, setter=SetEndOffset:) int endOffset; // @synthesize endOffset;
@property(readonly, nonatomic) BOOL hasEndOffset; // @synthesize hasEndOffset;
@property(nonatomic, setter=SetStartOffset:) int startOffset; // @synthesize startOffset;
@property(readonly, nonatomic) BOOL hasStartOffset; // @synthesize hasStartOffset;
@property(nonatomic, setter=SetDataSize:) int dataSize; // @synthesize dataSize;
@property(readonly, nonatomic) BOOL hasDataSize; // @synthesize hasDataSize;
@property(nonatomic, setter=SetDataType:) int dataType; // @synthesize dataType;
@property(readonly, nonatomic) BOOL hasDataType; // @synthesize hasDataType;
@property(retain, nonatomic, setter=SetDataId:) NSString *dataId; // @synthesize dataId;
@property(readonly, nonatomic) BOOL hasDataId; // @synthesize hasDataId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

