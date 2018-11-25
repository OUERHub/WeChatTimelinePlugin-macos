//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebPolicyDelegate.h"
#import "WebViewJavascriptBridgeBaseDelegate.h"

@class NSString, WebView, WebViewJavascriptBridgeBase;

__attribute__((visibility("hidden")))
@interface WebViewJavascriptBridge : NSObject <WebViewJavascriptBridgeBaseDelegate, WebPolicyDelegate>
{
    WebView *_webView;
    id _webViewDelegate;
    long long _uniqueId;
    WebViewJavascriptBridgeBase *_base;
}

+ (id)bridgeForWebView:(id)arg1;
+ (void)setLogMaxLength:(int)arg1;
+ (void)enableLogging;
- (void).cxx_destruct;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)_platformSpecificDealloc;
- (void)_platformSpecificSetup:(id)arg1;
- (id)_evaluateJavascript:(id)arg1;
- (void)dealloc;
- (void)registerHandler:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)callHandler:(id)arg1 data:(id)arg2;
- (void)callHandler:(id)arg1;
- (void)send:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;
- (void)send:(id)arg1;
- (void)setWebViewDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

