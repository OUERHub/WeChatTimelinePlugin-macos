//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray;

@interface MMChatLogProtoHandler : NSObject
{
    NSData *m_cryptKey;
    BOOL m_useCRC;
    NSMutableArray *m_arrRecvSeq;
}

- (void).cxx_destruct;
- (id)getFinishRequestPkg:(id)arg1;
- (id)getPacketBackupDataTagPkg:(id)arg1;
- (id)getDataPushRequestPkg:(id)arg1;
- (id)getRequestSessionPkgWithSessionNameArray:(id)arg1 withTimeArray:(id)arg2;
- (id)getStartRequestPkgWithBakID:(id)arg1 withBigDataSize:(unsigned long long)arg2 withSessionCount:(unsigned long long)arg3 withMsgCount:(unsigned long long)arg4 withTotalSize:(long long)arg5 withTransferType:(int)arg6;
- (id)getStartResponsePkgWithBakID:(id)arg1 withBigDataSize:(unsigned long long)arg2 withStatus:(int)arg3;
- (id)getHeartBeatResPkgWithAck:(unsigned long long)arg1;
- (id)getSvrIDResponsePkg:(id)arg1;
- (id)getCancelRequestWithID:(id)arg1;
- (id)getDataConfigInfBy:(id)arg1;
- (id)getPacketBackupDataTagResponsePkg:(id)arg1;
- (id)getCommandResponsePkgWithID:(int)arg1;
- (id)getCommandRequestPkgWithID:(int)arg1;
- (id)getSecondAuthResponsePkg:(id)arg1 backupID:(id)arg2;
- (id)getAuthResponsePkgWithOk:(id)arg1 withbackupID:(id)arg2 withStatus:(int)arg3 withVersion:(long long)arg4 withType:(long long)arg5 withSupportKv:(long long)arg6 autoReconnectToken:(id)arg7;
- (id)getDataPushResponsePkg:(id)arg1;
- (id)getStartResponsePkgWithBakID:(id)arg1 withBigDataSize:(unsigned long long)arg2 withTotalCount:(unsigned long long)arg3 withTotalSize:(unsigned long long)arg4 withStatus:(int)arg5 withNetworkState:(unsigned int)arg6;
- (id)getRequestSessionResponsePkgWithSessionNameArray:(id)arg1 withTimeArray:(id)arg2;
- (id)getDestBodyData:(id)arg1 dataType:(int)arg2 isPack:(BOOL)arg3;
- (unsigned int)generateReceviveSequence;
- (unsigned int)generateSendSequence;
- (id)encryptData:(id)arg1;
- (id)decryptData:(id)arg1;
- (BOOL)verifyChecksum:(id)arg1 andChecksum:(int)arg2;
- (id)unpack:(id)arg1 type:(int *)arg2;
- (id)pack:(id)arg1 type:(int)arg2;
- (id)initWithKey:(id)arg1 AndShouldCRC:(BOOL)arg2;
- (id)initWithKey:(id)arg1;

@end

