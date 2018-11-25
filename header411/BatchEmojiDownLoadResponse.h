//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface BatchEmojiDownLoadResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasIndex:1;
    unsigned int hasEndFlag:1;
    unsigned int index;
    unsigned int endFlag;
    BaseResponse *baseResponse;
    NSMutableArray *mutableMd5ListList;
    NSMutableArray *mutableEmojiListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableEmojiListList; // @synthesize mutableEmojiListList;
@property(nonatomic, setter=SetEndFlag:) unsigned int endFlag; // @synthesize endFlag;
@property(readonly, nonatomic) BOOL hasEndFlag; // @synthesize hasEndFlag;
@property(retain, nonatomic) NSMutableArray *mutableMd5ListList; // @synthesize mutableMd5ListList;
@property(nonatomic, setter=SetIndex:) unsigned int index; // @synthesize index;
@property(readonly, nonatomic) BOOL hasIndex; // @synthesize hasIndex;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addEmojiList:(id)arg1;
- (void)addEmojiListFromArray:(id)arg1;
- (void)addMd5ListFromArray:(id)arg1;
- (void)addMd5List:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *emojiList; // @dynamic emojiList;
- (id)emojiListList;
@property(retain, nonatomic) NSMutableArray *md5List; // @dynamic md5List;
- (id)md5ListList;
- (id)init;

@end

