//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FavoritesCDNInfo : NSObject
{
    unsigned int _localItemId;
    unsigned int _size;
    int _status;
    int _isThumb;
    int _dataType;
    NSString *_localDataID;
    NSString *_cdnUrl;
    NSString *_cdnKey;
    NSString *_md5;
    NSString *_head256Md5;
    NSString *_streamId;
    NSString *_dataFmt;
}

+ (id)cdnInfoWithTableData:(id)arg1;
+ (id)cdnInfoWithUploadTableData:(id)arg1;
@property(retain, nonatomic) NSString *dataFmt; // @synthesize dataFmt=_dataFmt;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(retain, nonatomic) NSString *head256Md5; // @synthesize head256Md5=_head256Md5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) int isThumb; // @synthesize isThumb=_isThumb;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) unsigned int size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *cdnKey; // @synthesize cdnKey=_cdnKey;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(retain, nonatomic) NSString *localDataID; // @synthesize localDataID=_localDataID;
@property(nonatomic) unsigned int localItemId; // @synthesize localItemId=_localItemId;
- (void).cxx_destruct;
- (id)init;

@end

