//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

@class EGOCache, MMCGIRequester, MMView, NSButton, NSProgressIndicator, NSTextField, RHDraggableImageView, WCContactData;

__attribute__((visibility("hidden")))
@interface MMChatInspectorQRViewController : MMViewController
{
    MMCGIRequester *_requester;
    EGOCache *_cache;
    WCContactData *_groupContact;
    NSButton *_backButton;
    NSTextField *_headingLabel;
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
    RHDraggableImageView *_qrCodeImageView;
    MMView *_codeBackground;
    NSProgressIndicator *_loadingSpinner;
    NSButton *_saveButton;
    NSButton *_revokeButton;
    CDUnknownBlockType _backButtonBlock;
}

@property(copy, nonatomic) CDUnknownBlockType backButtonBlock; // @synthesize backButtonBlock=_backButtonBlock;
@property(retain, nonatomic) NSButton *revokeButton; // @synthesize revokeButton=_revokeButton;
@property(retain, nonatomic) NSButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) NSProgressIndicator *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
@property(retain, nonatomic) MMView *codeBackground; // @synthesize codeBackground=_codeBackground;
@property(retain, nonatomic) RHDraggableImageView *qrCodeImageView; // @synthesize qrCodeImageView=_qrCodeImageView;
@property(retain, nonatomic) NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSTextField *headingLabel; // @synthesize headingLabel=_headingLabel;
@property(retain, nonatomic) NSButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) WCContactData *groupContact; // @synthesize groupContact=_groupContact;
- (void).cxx_destruct;
- (void)revokeCode:(id)arg1;
- (void)saveCode:(id)arg1;
- (void)_refreshQR;
- (BOOL)_loadCachedQR;
- (id)_filenameForExport;
- (id)_cacheKey;
- (void)viewDidAppear;
- (void)back:(id)arg1;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (id)initWithGroupChatContact:(id)arg1;

@end

