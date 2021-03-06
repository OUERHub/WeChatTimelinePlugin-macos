//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PCMAudioFile : NSObject
{
    struct AudioStreamBasicDescription mDataFormat;
    struct OpaqueAudioFileID *mAudioFile;
    NSString *mFileName;
    unsigned int mCurrentPacket;
}

- (void).cxx_destruct;
- (BOOL)copyForName:(id)arg1;
- (BOOL)writeBytes:(void *)arg1 len:(unsigned int)arg2;
- (BOOL)openByName:(id)arg1;
- (void)setDataFormat:(struct AudioStreamBasicDescription)arg1;
- (void)dealloc;
- (id)init;
- (void)createAudioFile_WAVE:(id)arg1;

@end

