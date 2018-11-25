//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class MMAvatarImageView, MMSidebarLabelTextField, NSString, WCContactData;

__attribute__((visibility("hidden")))
@interface MMMentionTableCellView : NSTableCellView
{
    BOOL _selected;
    WCContactData *_contact;
    NSString *_groupChatUserName;
    MMAvatarImageView *_avatarImgView;
    MMSidebarLabelTextField *_nameLabel;
}

@property(retain, nonatomic) MMSidebarLabelTextField *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMAvatarImageView *avatarImgView; // @synthesize avatarImgView=_avatarImgView;
@property(retain, nonatomic) NSString *groupChatUserName; // @synthesize groupChatUserName=_groupChatUserName;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

