//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CardListItems : PBGeneratedMessage
{
    NSMutableArray *mutableCardListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableCardListList; // @synthesize mutableCardListList;
- (void).cxx_destruct;
- (void)addCardList:(id)arg1;
- (void)addCardListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *cardList; // @dynamic cardList;
- (id)cardListList;
- (id)init;

@end

