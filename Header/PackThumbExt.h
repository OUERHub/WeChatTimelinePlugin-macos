//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PackThumbExt : PBGeneratedMessage
{
    unsigned int hasPreviewUrl:1;
    unsigned int hasDesc:1;
    NSString *previewUrl;
    NSString *desc;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetDesc:) NSString *desc; // @synthesize desc;
@property(readonly, nonatomic) BOOL hasDesc; // @synthesize hasDesc;
@property(retain, nonatomic, setter=SetPreviewUrl:) NSString *previewUrl; // @synthesize previewUrl;
@property(readonly, nonatomic) BOOL hasPreviewUrl; // @synthesize hasPreviewUrl;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

