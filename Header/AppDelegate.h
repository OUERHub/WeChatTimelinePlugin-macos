//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSApplicationDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AppDelegate : NSObject <NSApplicationDelegate>
{
}

- (void)applicationWillHide:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

