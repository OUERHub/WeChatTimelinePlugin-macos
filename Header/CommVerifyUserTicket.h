//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class SKBuiltinString_t;

__attribute__((visibility("hidden")))
@interface CommVerifyUserTicket : PBGeneratedMessage
{
    unsigned int hasTicketType:1;
    unsigned int hasSource:1;
    unsigned int hasFromUin:1;
    unsigned int hasToUin:1;
    unsigned int hasExtInfo:1;
    unsigned int hasTimeStamp:1;
    unsigned int hasFriendFlag:1;
    unsigned int ticketType;
    unsigned int source;
    unsigned int fromUin;
    unsigned int toUin;
    unsigned int timeStamp;
    unsigned int friendFlag;
    SKBuiltinString_t *extInfo;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetFriendFlag:) unsigned int friendFlag; // @synthesize friendFlag;
@property(readonly, nonatomic) BOOL hasFriendFlag; // @synthesize hasFriendFlag;
@property(nonatomic, setter=SetTimeStamp:) unsigned int timeStamp; // @synthesize timeStamp;
@property(readonly, nonatomic) BOOL hasTimeStamp; // @synthesize hasTimeStamp;
@property(retain, nonatomic, setter=SetExtInfo:) SKBuiltinString_t *extInfo; // @synthesize extInfo;
@property(readonly, nonatomic) BOOL hasExtInfo; // @synthesize hasExtInfo;
@property(nonatomic, setter=SetToUin:) unsigned int toUin; // @synthesize toUin;
@property(readonly, nonatomic) BOOL hasToUin; // @synthesize hasToUin;
@property(nonatomic, setter=SetFromUin:) unsigned int fromUin; // @synthesize fromUin;
@property(readonly, nonatomic) BOOL hasFromUin; // @synthesize hasFromUin;
@property(nonatomic, setter=SetSource:) unsigned int source; // @synthesize source;
@property(readonly, nonatomic) BOOL hasSource; // @synthesize hasSource;
@property(nonatomic, setter=SetTicketType:) unsigned int ticketType; // @synthesize ticketType;
@property(readonly, nonatomic) BOOL hasTicketType; // @synthesize hasTicketType;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

