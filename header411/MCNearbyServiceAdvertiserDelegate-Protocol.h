//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCNearbyServiceAdvertiser, MCPeerID, NSData, NSError;

@protocol MCNearbyServiceAdvertiserDelegate <NSObject>
- (void)advertiser:(MCNearbyServiceAdvertiser *)arg1 didReceiveInvitationFromPeer:(MCPeerID *)arg2 withContext:(NSData *)arg3 invitationHandler:(void (^)(BOOL, MCSession *))arg4;

@optional
- (void)advertiser:(MCNearbyServiceAdvertiser *)arg1 didNotStartAdvertisingPeer:(NSError *)arg2;
@end

