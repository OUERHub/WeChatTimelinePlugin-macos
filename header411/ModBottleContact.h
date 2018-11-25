//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface ModBottleContact : PBGeneratedMessage
{
    unsigned int hasUserName:1;
    unsigned int hasType:1;
    unsigned int hasSex:1;
    unsigned int hasCity:1;
    unsigned int hasProvince:1;
    unsigned int hasSignature:1;
    unsigned int hasImgFlag:1;
    unsigned int hasHdimgFlag:1;
    unsigned int hasCountry:1;
    unsigned int hasBigHeadImgUrl:1;
    unsigned int hasSmallHeadImgUrl:1;
    unsigned int type;
    unsigned int sex;
    unsigned int imgFlag;
    unsigned int hdimgFlag;
    NSString *userName;
    NSString *city;
    NSString *province;
    NSString *signature;
    NSString *country;
    NSString *bigHeadImgUrl;
    NSString *smallHeadImgUrl;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetSmallHeadImgUrl:) NSString *smallHeadImgUrl; // @synthesize smallHeadImgUrl;
@property(readonly, nonatomic) BOOL hasSmallHeadImgUrl; // @synthesize hasSmallHeadImgUrl;
@property(retain, nonatomic, setter=SetBigHeadImgUrl:) NSString *bigHeadImgUrl; // @synthesize bigHeadImgUrl;
@property(readonly, nonatomic) BOOL hasBigHeadImgUrl; // @synthesize hasBigHeadImgUrl;
@property(retain, nonatomic, setter=SetCountry:) NSString *country; // @synthesize country;
@property(readonly, nonatomic) BOOL hasCountry; // @synthesize hasCountry;
@property(nonatomic, setter=SetHdimgFlag:) unsigned int hdimgFlag; // @synthesize hdimgFlag;
@property(readonly, nonatomic) BOOL hasHdimgFlag; // @synthesize hasHdimgFlag;
@property(nonatomic, setter=SetImgFlag:) unsigned int imgFlag; // @synthesize imgFlag;
@property(readonly, nonatomic) BOOL hasImgFlag; // @synthesize hasImgFlag;
@property(retain, nonatomic, setter=SetSignature:) NSString *signature; // @synthesize signature;
@property(readonly, nonatomic) BOOL hasSignature; // @synthesize hasSignature;
@property(retain, nonatomic, setter=SetProvince:) NSString *province; // @synthesize province;
@property(readonly, nonatomic) BOOL hasProvince; // @synthesize hasProvince;
@property(retain, nonatomic, setter=SetCity:) NSString *city; // @synthesize city;
@property(readonly, nonatomic) BOOL hasCity; // @synthesize hasCity;
@property(nonatomic, setter=SetSex:) unsigned int sex; // @synthesize sex;
@property(readonly, nonatomic) BOOL hasSex; // @synthesize hasSex;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

