//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMCGIDelegate.h"

@class MMTimer, NSString;

@interface HeartBeatCGI : NSObject <MMCGIDelegate>
{
    BOOL _isReporting;
    unsigned int _sessionId;
    unsigned int _lastReportTime;
    unsigned int _reportInterval;
    MMTimer *_timer;
}

+ (void)CheckSyncSelector:(unsigned int)arg1;
+ (id)genHeartBeatRequest;
+ (BOOL)ProcessHeartBeatResponse:(id)arg1 isSessionTimeout:(char *)arg2;
+ (BOOL)FillHeartBeatRequestBuffer:(id)arg1 reqCmdId:(int *)arg2 respCmdId:(int *)arg3;
@property(retain) MMTimer *timer; // @synthesize timer=_timer;
@property unsigned int reportInterval; // @synthesize reportInterval=_reportInterval;
@property unsigned int lastReportTime; // @synthesize lastReportTime=_lastReportTime;
@property unsigned int sessionId; // @synthesize sessionId=_sessionId;
@property BOOL isReporting; // @synthesize isReporting=_isReporting;
- (void).cxx_destruct;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)onTimerCheckReport;
- (void)requestHeartBeatCGI;
- (void)ReportHeartBeat;
- (void)stopTimer;
- (void)startTimer;
- (void)Reset;
- (void)ClearData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
