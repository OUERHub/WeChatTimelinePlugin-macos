//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QRCodeLoginInfo : NSObject
{
    unsigned int _status;
    NSString *_userName;
    NSString *_password;
    NSString *_avatarUrl;
    NSString *_nickName;
    NSString *_pairWaitTip;
}

@property(retain, nonatomic) NSString *pairWaitTip; // @synthesize pairWaitTip=_pairWaitTip;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

