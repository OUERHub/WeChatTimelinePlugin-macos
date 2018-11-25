//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface UploadAppAttachResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasAppId:1;
    unsigned int hasMediaId:1;
    unsigned int hasClientAppDataId:1;
    unsigned int hasUserName:1;
    unsigned int hasTotalLen:1;
    unsigned int hasStartPos:1;
    unsigned int hasDataLen:1;
    unsigned int hasCreateTime:1;
    unsigned int totalLen;
    unsigned int startPos;
    unsigned int dataLen;
    unsigned int createTime;
    BaseResponse *baseResponse;
    NSString *appId;
    NSString *mediaId;
    NSString *clientAppDataId;
    NSString *userName;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetCreateTime:) unsigned int createTime; // @synthesize createTime;
@property(readonly, nonatomic) BOOL hasCreateTime; // @synthesize hasCreateTime;
@property(nonatomic, setter=SetDataLen:) unsigned int dataLen; // @synthesize dataLen;
@property(readonly, nonatomic) BOOL hasDataLen; // @synthesize hasDataLen;
@property(nonatomic, setter=SetStartPos:) unsigned int startPos; // @synthesize startPos;
@property(readonly, nonatomic) BOOL hasStartPos; // @synthesize hasStartPos;
@property(nonatomic, setter=SetTotalLen:) unsigned int totalLen; // @synthesize totalLen;
@property(readonly, nonatomic) BOOL hasTotalLen; // @synthesize hasTotalLen;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetClientAppDataId:) NSString *clientAppDataId; // @synthesize clientAppDataId;
@property(readonly, nonatomic) BOOL hasClientAppDataId; // @synthesize hasClientAppDataId;
@property(retain, nonatomic, setter=SetMediaId:) NSString *mediaId; // @synthesize mediaId;
@property(readonly, nonatomic) BOOL hasMediaId; // @synthesize hasMediaId;
@property(retain, nonatomic, setter=SetAppId:) NSString *appId; // @synthesize appId;
@property(readonly, nonatomic) BOOL hasAppId; // @synthesize hasAppId;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

