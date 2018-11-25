//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "C2ObjcServerCallBackExt.h"

@class MMSpeedFilter, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface LocalAreaNetworkServer : NSObject <C2ObjcServerCallBackExt>
{
    NSString *client_ip;
    unsigned short client_port;
    NSDate *m_sendStartDate;
    NSDate *m_reciveStartDate;
    NSDate *m_realReciveStartDate;
    unsigned long long m_totalReciveLength;
    unsigned long long m_totalSendLength;
    unsigned long long m_lastTotalReciveLength;
    unsigned long long m_lastTotalSendLength;
    MMSpeedFilter *m_sendSpeedFilter;
    MMSpeedFilter *m_recveSpeedFilter;
    id <LocalAreaNetworkServerDelegate> m_delegate;
}

@property(nonatomic) __weak id <LocalAreaNetworkServerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onDisconnect:(id)arg1 port:(unsigned short)arg2;
- (void)onConnected:(id)arg1 port:(unsigned short)arg2;
- (void)onRecv:(id)arg1 port:(unsigned short)arg2 data:(id)arg3 length:(unsigned int)arg4;
- (unsigned long long)getServerOpenTime;
- (unsigned long long)getTotalRecvLength;
- (unsigned long long)getTotalSendLength;
- (float)GetServerRecvSpeed;
- (float)GetServerSendSpeed;
- (unsigned long long)Server_SendData:(id)arg1 andLength:(unsigned int)arg2;
- (void)Server_Stop;
- (BOOL)Server_Start:(id *)arg1 port:(unsigned short *)arg2;
- (void)dealloc;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

