//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PropertySurveyInfo : PBGeneratedMessage
{
    unsigned int hasCount:1;
    unsigned int count;
    NSMutableArray *mutableListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableListList; // @synthesize mutableListList;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
- (void).cxx_destruct;
- (void)addList:(id)arg1;
- (void)addListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *list; // @dynamic list;
- (id)listList;
- (id)init;

@end

