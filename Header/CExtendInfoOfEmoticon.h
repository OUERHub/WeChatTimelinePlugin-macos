//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMessageDataExt.h"
#import "IMsgExtendOperation.h"
#import "NSCopying.h"

@class MessageData, NSString;

__attribute__((visibility("hidden")))
@interface CExtendInfoOfEmoticon : NSObject <IMessageDataExt, IMsgExtendOperation, NSCopying>
{
    unsigned int _m_uiEmoticonType;
    unsigned int _m_uiGameType;
    unsigned int _m_uiGameContent;
    unsigned int _m_uiUploadStatus;
    MessageData *m_refMessageData;
    NSString *_m_nsEmoticonMD5;
    NSString *_m_nsEmoticonBelongToProductID;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
@property(copy, nonatomic) NSString *m_nsEmoticonBelongToProductID; // @synthesize m_nsEmoticonBelongToProductID=_m_nsEmoticonBelongToProductID;
@property(nonatomic) unsigned int m_uiUploadStatus; // @synthesize m_uiUploadStatus=_m_uiUploadStatus;
@property(nonatomic) unsigned int m_uiGameContent; // @synthesize m_uiGameContent=_m_uiGameContent;
@property(nonatomic) unsigned int m_uiGameType; // @synthesize m_uiGameType=_m_uiGameType;
@property(nonatomic) unsigned int m_uiEmoticonType; // @synthesize m_uiEmoticonType=_m_uiEmoticonType;
@property(copy, nonatomic) NSString *m_nsEmoticonMD5; // @synthesize m_nsEmoticonMD5=_m_nsEmoticonMD5;
@property(nonatomic) MessageData *m_refMessageData; // @synthesize m_refMessageData;
- (void).cxx_destruct;
- (BOOL)isEmotionExist;
- (id)filePath;
@property(readonly, copy) NSString *description;
- (void)UpdateGameInfo:(id)arg1;
- (id)GetGameStatReportString;
- (void)encodeMsgFieldToXML:(id)arg1;
- (id)getContent;
- (void)parseMsgFieldFromXML;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

