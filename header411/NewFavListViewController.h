//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MMFavoritesMgrExt.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString;

@interface NewFavListViewController : NSViewController <MMFavoritesMgrExt>
{
    NSMutableArray *_arrFavData;
    NSMutableDictionary *_cellViewCache;
    BOOL _isReadyToLoad;
    unsigned int _curMinItemUpdateTime;
    MMTableView *_tableView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

