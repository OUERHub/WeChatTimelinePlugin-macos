//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface TagSearchInfo : PBGeneratedMessage
{
    unsigned int hasTagType:1;
    unsigned int hasTagText:1;
    unsigned int hasTagExtValue:1;
    unsigned int tagType;
    NSString *tagText;
    NSString *tagExtValue;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetTagExtValue:) NSString *tagExtValue; // @synthesize tagExtValue;
@property(readonly, nonatomic) BOOL hasTagExtValue; // @synthesize hasTagExtValue;
@property(retain, nonatomic, setter=SetTagText:) NSString *tagText; // @synthesize tagText;
@property(readonly, nonatomic) BOOL hasTagText; // @synthesize hasTagText;
@property(nonatomic, setter=SetTagType:) unsigned int tagType; // @synthesize tagType;
@property(readonly, nonatomic) BOOL hasTagType; // @synthesize hasTagType;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

