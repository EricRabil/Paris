#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol NSObject;

@class JSContext, NSDate, NSError, NSImage, NSString, NSURL, WebFrame, WebScriptObject, WebView;

@protocol WebFrameLoadDelegate <NSObject>

@optional
- (void)webView:(WebView *)arg1 didCreateJavaScriptContext:(JSContext *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 windowScriptObjectAvailable:(WebScriptObject *)arg2;
- (void)webView:(WebView *)arg1 didClearWindowObject:(WebScriptObject *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 willCloseFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didCancelClientRedirectForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 willPerformClientRedirectToURL:(NSURL *)arg2 delay:(double)arg3 fireDate:(NSDate *)arg4 forFrame:(WebFrame *)arg5;
- (void)webView:(WebView *)arg1 didChangeLocationWithinPageForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didFailLoadWithError:(NSError *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didFinishLoadForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didReceiveIcon:(NSImage *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didReceiveTitle:(NSString *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didCommitLoadForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didFailProvisionalLoadWithError:(NSError *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didStartProvisionalLoadForFrame:(WebFrame *)arg2;
@end

