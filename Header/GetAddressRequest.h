//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest;

__attribute__((visibility("hidden")))
@interface GetAddressRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasLongitude:1;
    unsigned int hasLatitude:1;
    BaseRequest *baseRequest;
    double longitude;
    double latitude;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetLatitude:) double latitude; // @synthesize latitude;
@property(readonly, nonatomic) BOOL hasLatitude; // @synthesize hasLatitude;
@property(nonatomic, setter=SetLongitude:) double longitude; // @synthesize longitude;
@property(readonly, nonatomic) BOOL hasLongitude; // @synthesize hasLongitude;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

