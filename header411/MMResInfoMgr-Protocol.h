//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMResDownloadInfo, MMResInfo, NSArray;

@protocol MMResInfoMgr <NSObject>

@optional
- (MMResDownloadInfo *)getResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 WithEid:(unsigned int)arg3;
- (MMResDownloadInfo *)getResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (NSArray *)getABTestResDownloadInfo:(unsigned int)arg1;
- (NSArray *)getResDownloadInfo:(unsigned int)arg1;
- (BOOL)insertNewResDownloadInfo:(MMResDownloadInfo *)arg1;
- (BOOL)deleteResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 WithEid:(unsigned int)arg3;
- (BOOL)deleteTestResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (BOOL)deleteResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (BOOL)updateResInfo:(MMResInfo *)arg1;
- (BOOL)deleteResInfo:(unsigned int)arg1 WithSubResType:(unsigned int)arg2 WithEid:(unsigned int)arg3;
- (BOOL)deleteTestResInfo:(unsigned int)arg1 WithSubResType:(unsigned int)arg2;
- (BOOL)deleteResInfo:(unsigned int)arg1 WithSubResType:(unsigned int)arg2;
- (BOOL)deleteResInfo:(unsigned int)arg1;
- (MMResInfo *)getResInfo:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2 WithEid:(unsigned int)arg3;
- (NSArray *)getTestResInfo:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (MMResInfo *)getResInfo:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (NSArray *)getResInfo:(unsigned int)arg1;
- (BOOL)insertNewResInfo:(MMResInfo *)arg1;
@end

