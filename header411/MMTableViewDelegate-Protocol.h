//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMTableView;

@protocol MMTableViewDelegate <NSObject>

@optional
- (void)tableView:(MMTableView *)arg1 rowGotDoubleClicked:(long long)arg2;
- (void)tableView:(MMTableView *)arg1 rowGotRightMouseUp:(long long)arg2;
- (void)tableView:(MMTableView *)arg1 rowGotMouseUp:(long long)arg2;
- (void)gotMouseDownNotAtRow:(MMTableView *)arg1;
- (void)tableView:(MMTableView *)arg1 rowGotRightMouseDown:(long long)arg2;
- (void)tableView:(MMTableView *)arg1 rowGotMouseDown:(long long)arg2;
@end

