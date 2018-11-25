//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class MMResDownloadInfoPackedInfo, MMResDownloadUrlInfo, NSString;

@interface MMResDownloadInfo : NSObject <WCTTableCoding>
{
    unsigned int _resType;
    unsigned int _networkType;
    unsigned int _scene;
    unsigned int _expiredTime;
    unsigned int _subType;
    unsigned int _retryTime;
    unsigned int _reportId;
    unsigned int _eid;
    NSString *_appId;
    NSString *_domain;
    NSString *_baseDir;
    NSString *_sampleId;
    NSString *_packageId;
    MMResDownloadUrlInfo *_resUrlInfo;
    MMResDownloadInfoPackedInfo *_m_packedInfo;
}

+ (const struct WCTProperty *)m_packedInfo;
+ (const struct WCTProperty *)eid;
+ (const struct WCTProperty *)resUrlInfo;
+ (const struct WCTProperty *)packageId;
+ (const struct WCTProperty *)sampleId;
+ (const struct WCTProperty *)reportId;
+ (const struct WCTProperty *)retryTime;
+ (const struct WCTProperty *)baseDir;
+ (const struct WCTProperty *)domain;
+ (const struct WCTProperty *)appId;
+ (const struct WCTProperty *)subType;
+ (const struct WCTProperty *)expiredTime;
+ (const struct WCTProperty *)scene;
+ (const struct WCTProperty *)networkType;
+ (const struct WCTProperty *)resType;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) MMResDownloadInfoPackedInfo *m_packedInfo; // @synthesize m_packedInfo=_m_packedInfo;
@property(nonatomic) unsigned int eid; // @synthesize eid=_eid;
@property(retain, nonatomic) MMResDownloadUrlInfo *resUrlInfo; // @synthesize resUrlInfo=_resUrlInfo;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId=_packageId;
@property(retain, nonatomic) NSString *sampleId; // @synthesize sampleId=_sampleId;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(nonatomic) unsigned int retryTime; // @synthesize retryTime=_retryTime;
@property(retain, nonatomic) NSString *baseDir; // @synthesize baseDir=_baseDir;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int subType; // @synthesize subType=_subType;
@property(nonatomic) unsigned int expiredTime; // @synthesize expiredTime=_expiredTime;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int networkType; // @synthesize networkType=_networkType;
@property(nonatomic) unsigned int resType; // @synthesize resType=_resType;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

