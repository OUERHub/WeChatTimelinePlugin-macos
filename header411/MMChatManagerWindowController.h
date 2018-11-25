//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "AccountServiceExt.h"
#import "IContactMgrExt.h"
#import "IGroupMgrExt.h"
#import "NSSplitViewDelegate.h"
#import "NSWindowDelegate.h"

@class MMChatManagerDetailViewController, MMChatMgrHeaderView, MMSearchField, NSString, NSView, WCContactData;

@interface MMChatManagerWindowController : NSWindowController <NSSplitViewDelegate, NSWindowDelegate, IContactMgrExt, IGroupMgrExt, AccountServiceExt>
{
    WCContactData *_chatContact;
    NSString *_searchKey;
    MMChatMgrHeaderView *_headerView;
    MMSearchField *_searchField;
    NSView *_divider;
    NSView *_detailContainer;
    MMChatManagerDetailViewController *_chatManagerDetailViewController;
}

+ (id)shareInstance;
@property(retain, nonatomic) MMChatManagerDetailViewController *chatManagerDetailViewController; // @synthesize chatManagerDetailViewController=_chatManagerDetailViewController;
@property(nonatomic) __weak NSView *detailContainer; // @synthesize detailContainer=_detailContainer;
@property(nonatomic) __weak NSView *divider; // @synthesize divider=_divider;
@property(nonatomic) __weak MMSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) __weak MMChatMgrHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(retain, nonatomic) WCContactData *chatContact; // @synthesize chatContact=_chatContact;
- (void).cxx_destruct;
- (void)windowDidDeminiaturize:(id)arg1;
- (void)windowDidMiniaturize:(id)arg1;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)onUserLogout;
- (void)layoutVerticalAlignForPlaceHolder;
- (void)searchAction:(id)arg1;
- (void)OnChangeMemberShowDisplayName:(id)arg1;
- (void)onModifyContacts:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

