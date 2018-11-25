//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

#import "IContactMgrExt.h"
#import "IGroupMgrExt.h"
#import "MMMessageCellViewExt.h"
#import "NSDraggingSource.h"
#import "NSMenuDelegate.h"
#import "NSSharingServiceDelegate.h"
#import "NSSharingServicePickerDelegate.h"

@class MMButton, MMMessageCellAvatarView, MMMessageTableItem, MMTextField, MMView, NSButton, NSImage, NSMenu, NSProgressIndicator, NSString, NSTextField, NSTrackingArea;

@interface MMMessageCellView : NSTableCellView <NSDraggingSource, NSMenuDelegate, IGroupMgrExt, NSSharingServicePickerDelegate, NSSharingServiceDelegate, IContactMgrExt, MMMessageCellViewExt>
{
    NSImage *_savedDraggingImage;
    NSTrackingArea *_mainTrackingArea;
    NSMenu *_menuFromContextMenuButton;
    BOOL _highlighted;
    BOOL _isGlobalSearch;
    BOOL _showGroupChatNickName;
    BOOL _isSearchMode;
    BOOL _isMessageUnsafe;
    BOOL _isBeingDragged;
    int _accessoryType;
    id <MMMessageCellViewDelegate> _delegate;
    MMMessageCellAvatarView *_avatarImgView;
    MMView *_contentView;
    NSTextField *_groupChatNickNameLabel;
    NSTextField *_msgCreatetimeLabel;
    MMTextField *_locateMsgLabel;
    MMButton *_checkbox;
    unsigned long long _currentMode;
    double _hasTopPadding;
    MMMessageTableItem *_messageTableItem;
    NSString *_cpKeyForMessage;
    NSProgressIndicator *_waitingProgressIndicatorAccessory;
    NSButton *_errorIndicatorAccessory;
    NSButton *_contextMenuButton;
    NSButton *_saveToFavoritesButton;
    NSString *_realChatUserName;
    NSString *_senderAvatarUrl;
    struct CGPoint _mouseDownLocation;
}

+ (BOOL)writeText:(id)arg1 toPasteboard:(id)arg2 orItem:(id)arg3 forType:(id)arg4;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
+ (Class)cellViewSubclassForSearchChatMessage:(id)arg1;
+ (Class)cellViewSubclassForMessage:(id)arg1;
+ (id)cellViewWithSearchChatMessage:(id)arg1;
+ (id)cellViewWithMessage:(id)arg1;
+ (id)cellIdentifierWithSearchChatMessage:(id)arg1;
+ (id)cellIdentifierWithMessage:(id)arg1;
@property(retain, nonatomic) NSString *senderAvatarUrl; // @synthesize senderAvatarUrl=_senderAvatarUrl;
@property(retain, nonatomic) NSString *realChatUserName; // @synthesize realChatUserName=_realChatUserName;
@property(nonatomic) struct CGPoint mouseDownLocation; // @synthesize mouseDownLocation=_mouseDownLocation;
@property(retain, nonatomic) NSButton *saveToFavoritesButton; // @synthesize saveToFavoritesButton=_saveToFavoritesButton;
@property(retain, nonatomic) NSButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
@property(retain, nonatomic) NSButton *errorIndicatorAccessory; // @synthesize errorIndicatorAccessory=_errorIndicatorAccessory;
@property(retain, nonatomic) NSProgressIndicator *waitingProgressIndicatorAccessory; // @synthesize waitingProgressIndicatorAccessory=_waitingProgressIndicatorAccessory;
@property(readonly, nonatomic) BOOL isBeingDragged; // @synthesize isBeingDragged=_isBeingDragged;
@property(nonatomic) BOOL isMessageUnsafe; // @synthesize isMessageUnsafe=_isMessageUnsafe;
@property(retain, nonatomic) NSString *cpKeyForMessage; // @synthesize cpKeyForMessage=_cpKeyForMessage;
@property(nonatomic) BOOL isSearchMode; // @synthesize isSearchMode=_isSearchMode;
@property(nonatomic) BOOL showGroupChatNickName; // @synthesize showGroupChatNickName=_showGroupChatNickName;
@property(retain, nonatomic) MMMessageTableItem *messageTableItem; // @synthesize messageTableItem=_messageTableItem;
@property(nonatomic) double hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) unsigned long long currentMode; // @synthesize currentMode=_currentMode;
@property(nonatomic) BOOL isGlobalSearch; // @synthesize isGlobalSearch=_isGlobalSearch;
@property(retain, nonatomic) MMButton *checkbox; // @synthesize checkbox=_checkbox;
@property(nonatomic) int accessoryType; // @synthesize accessoryType=_accessoryType;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) MMTextField *locateMsgLabel; // @synthesize locateMsgLabel=_locateMsgLabel;
@property(retain, nonatomic) NSTextField *msgCreatetimeLabel; // @synthesize msgCreatetimeLabel=_msgCreatetimeLabel;
@property(retain, nonatomic) NSTextField *groupChatNickNameLabel; // @synthesize groupChatNickNameLabel=_groupChatNickNameLabel;
@property(retain, nonatomic) MMView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMMessageCellAvatarView *avatarImgView; // @synthesize avatarImgView=_avatarImgView;
@property(nonatomic) __weak id <MMMessageCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)messageCellViewAvatarDidLoadWithUniqueID:(id)arg1 image:(id)arg2;
- (double)changeLocateMsgLableY;
- (struct CGRect)bubbleFrame;
- (id)generateMessageDisplayContent;
- (BOOL)notMoveFar:(id)arg1;
- (void)reshowChosenStyle;
- (void)resetChosenStyle;
- (void)_multiSelectCellView;
- (void)checkboxToggle;
- (void)setIsLocateResultStyle:(BOOL)arg1;
- (void)setIsChosenStyle:(BOOL)arg1;
- (BOOL)isChoosingMode;
- (int)getChoosableLeftPadding;
- (void)setChoosable:(BOOL)arg1;
- (void)OnModifyGroupMemberContact:(id)arg1;
- (void)onModifyUserImage:(id)arg1;
- (void)onModifyContacts:(id)arg1;
- (void)contextMenuButtonAction:(id)arg1;
- (BOOL)showsSaveToFavoritesButton;
- (BOOL)showsContextMenuButton;
- (struct CGRect)rectForSaveToFavoritesButton;
- (struct CGRect)rectForContextMenuButton;
- (void)handleNewTextSize;
- (struct CGRect)rectForAccessory:(int)arg1;
- (void)resendMessage;
- (void)setErrorIndicatorAccessoryToolTip:(id)arg1;
- (void)layoutAccessories;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (BOOL)makeMakeMultipleSelectUnavailable;
- (BOOL)allowMultipleSelect;
- (BOOL)makeDeleteUnavailable;
- (BOOL)makeSaveAsUnavailable;
- (BOOL)makeAddToFavoritesUnavailable;
- (BOOL)makeForwardUnavailable;
- (BOOL)makeCopyMenuUnavailable;
- (BOOL)makeOpenFolerMenuUnavailable;
- (BOOL)makeOpenWithMenuUnavailable;
- (BOOL)makeOpenMenuUnavailable;
- (BOOL)allowShareExtension;
- (BOOL)allowAddToFavorites;
- (BOOL)allowForward;
- (BOOL)allowCopy;
- (BOOL)allowRecall;
- (BOOL)allowContextMenuForEvent:(id)arg1;
- (void)contextMenuDidClose:(id)arg1;
- (void)contextMenuWillOpen:(id)arg1;
- (void)_contextMenuShowSourceDebugTool;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (void)contextMenuShareExtension:(id)arg1;
- (id)contentForSharing;
- (void)contextMenuLocateMessage;
- (void)contextMenuMultipleSelectMessage;
- (void)doAnimationAndAddFavItem:(id)arg1;
- (void)contextMenuFavorites;
- (void)contextMenuResendMessage;
- (void)contextMenuForward;
- (void)contextMenuDelete;
- (void)contextMenuCopy:(BOOL)arg1;
- (void)contextMenuCopy;
- (void)contextMenuRecall;
- (void)mentionGroupChatMember:(id)arg1;
- (void)addGroupChatMember:(id)arg1;
- (void)chatWithMember:(id)arg1;
- (void)itemAction;
- (id)contextMenuBottomCommonItems;
- (id)contextMenuLocateMessageItems;
- (id)contextMenuMultipleSelectItems;
- (id)contextMenuTopCommonItems;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (id)buildShareExtensionMenuItem;
- (id)_makeAvatarMenuItem:(id)arg1 action:(SEL)arg2;
- (id)contextAvatarMenu;
- (id)contextMultipleSelectMenu;
- (id)contextMenu;
- (id)menuForEvent:(id)arg1;
- (id)contextMenuCommonItemsForPosition:(unsigned long long)arg1;
- (id)contextMenuCustomItemsForPosition:(unsigned long long)arg1;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (struct CGRect)draggingFrameForEvent:(id)arg1;
- (id)bubbleImage;
- (id)generatePasteboardItem;
- (id)resizedDraggingImage;
- (id)draggingImage;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)draggablePasteboardTypes;
- (BOOL)draggingEnabled;
- (BOOL)shouldShowAvatarMenuForEvent:(id)arg1;
- (BOOL)locationIsInsideAvatarArea:(struct CGPoint)arg1;
- (BOOL)locationIsInsideClickableArea:(struct CGPoint)arg1;
- (BOOL)eventIsInsideAvatarArea:(id)arg1;
- (BOOL)eventIsInsideClickableArea:(id)arg1;
- (struct CGRect)clickableArea;
- (void)setupLocateMsgLabel;
- (void)setupMsgCreatetimeLabel;
- (void)updateGroupChatNickName;
@property(readonly, nonatomic) BOOL isGroupChat;
- (void)_updateContextMenuButtonVisibilityFromMousePosition;
- (void)scrollWheel:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
@property(readonly, nonatomic) double topPadding;
- (double)_avatarPosX;
- (void)_getAvatarImageWithUsername;
- (void)_getAvatarImageWithUrl;
- (void)updateAvatarImage;
- (void)populateWithMessage:(id)arg1;
- (id)hightLightedAttrString:(id)arg1;
- (void)redrawLocalView;
- (void)prepareForReuse;
- (BOOL)isSpecialMessageCellView;
- (void)setWaitingProgressIndicatorAccessoryHidden:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)updateTrackingAreas;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)allowChoose;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)populateWithMessage:(id)arg1 addDevider:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

