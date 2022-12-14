#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKWebKitControllerDelegate-Protocol.h"
#import "InternetAccountExportsAuthKit-Protocol.h"

@class AKWebKitController, JSContext, JSValue, NSDictionary, NSImage, NSMutableDictionary, NSString, NSView, NSWindow, WebView;
@protocol AKICAUIDelegate, AKICAWebKitViewControllerDelegate, AKMBICAUIDelegate;

@interface AKICAWebKitViewController : NSObject <AKWebKitControllerDelegate, InternetAccountExportsAuthKit>
{
    AKWebKitController *_webKitController;
    JSContext *_jsContext;
    NSString *_accountID;
    NSString *_location;
    NSDictionary *_buttonBarDict;
    NSDictionary *_workflowDict;
    NSMutableDictionary *_authKitData;
    BOOL _supportsWindowResize;
    NSImage *_displayImage;
    struct {
        unsigned int delegateDidCancel:1;
        unsigned int delegateDidSucceed:1;
        unsigned int delegateDidEnd:1;
        unsigned int delegateDidFinishLoading:1;
        unsigned int delegateDidFail:1;
        unsigned int delegateDidChangePassword:1;
        unsigned int delegateSignRequest:1;
        unsigned int delegateDidReceiveResponse:1;
        unsigned int padding:4;
    } _flags;
     id  _icaUIDelegate;
     id  _icaWebKitViewControllerDelegate;
     id  _icaMBUIDelegate;
    NSView *_parentView;
    NSWindow *_parentWindow;
}


@property(retain, nonatomic) NSMutableDictionary *authKitData; // @synthesize authKitData=_authKitData;
@property(retain) NSImage *displayImage; // @synthesize displayImage=_displayImage;
@property(retain, nonatomic) NSDictionary *workflowDict; // @synthesize workflowDict=_workflowDict;
@property(retain, nonatomic) NSDictionary *buttonBarDict; // @synthesize buttonBarDict=_buttonBarDict;
@property(nonatomic) BOOL supportsWindowResize; // @synthesize supportsWindowResize=_supportsWindowResize;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain, nonatomic) NSView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(retain) AKWebKitController *webKitController; // @synthesize webKitController=_webKitController;
@property(nonatomic) __weak  id  icaMBUIDelegate; // @synthesize icaMBUIDelegate=_icaMBUIDelegate;
@property(nonatomic) __weak  id  icaWebKitViewControllerDelegate; // @synthesize icaWebKitViewControllerDelegate=_icaWebKitViewControllerDelegate;
@property(nonatomic) __weak  id  icaUIDelegate; // @synthesize icaUIDelegate=_icaUIDelegate;
- (void)validateLocalPassword:(id)arg1;
- (void)runAppleIDOptOut:(id)arg1;
- (void)obtainAuthRight:(id)arg1;
- (void)setAuthKitDataValue:(id)arg1 forKey:(id)arg2;
- (void)triggerAKAction:(id)arg1;
- (void)skipAndContinueSignIn;
- (void)skipSignIn;
- (void)dismiss:(id)arg1;
- (void)showTermsAndConditions:(id)arg1 callback:(id)arg2;
- (void)resetCompleted:(id)arg1 password:(id)arg2;
- (void)saveTOS:(id)arg1 localizedName:(id)arg2 content:(id)arg3;
- (void)saveTOS:(id)arg1 content:(id)arg2;
- (void)setAlternateButton:(id)arg1 callback:(id)arg2;
- (void)setRightNavButton:(id)arg1 callback:(id)arg2;
- (void)setLeftNavButton:(id)arg1 callback:(id)arg2;
- (void)setPageSubTitle:(id)arg1;
- (void)setNavTitle:(id)arg1;
- (void)openHelp:(id)arg1;
- (void)openExternalURL:(id)arg1;
- (void)exitWebView:(id)arg1;
- (void)endSheet:(id)arg1;
- (void)beginSheetWithContent:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5;
- (void)beginSheetWithURL:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5;
- (void)showAlert:(id)arg1 callback:(id)arg2;
- (void)refreshView:(id)arg1 section:(id)arg2;
- (void)resizeToWidth:(unsigned long long)arg1 heigth:(unsigned long long)arg2 callback:(id)arg3;
- (void)webClientHasLoaded;
- (void)webClientIsReady;
- (void)log:(id)arg1 message:(id)arg2;
@property(retain, nonatomic, getter=icaButtonBar, setter=icaSetButtonBar:) JSValue *buttonBar; // @dynamic buttonBar;
@property(readonly, nonatomic) NSDictionary *workflow; // @dynamic workflow;
@property(readonly, nonatomic) NSDictionary *environment; // @dynamic environment;
- (BOOL)differentiateWithoutColorEnabled;
- (id)timezoneRegion;
- (id)displayImageString;
- (id)theme;
- (id)dateFieldsOrder;
- (id)currentApplicationVersion;
- (id)currentApplicationIdentifier;
- (id)clientVersion;
- (id)client;
- (id)osBuild;
- (int)osRevision;
- (int)osMinorVersion;
- (int)osMajorVersion;
@property(readonly, nonatomic) unsigned long long protocolVersion; // @dynamic protocolVersion;
- (void)akWebKitControllerDidReceiveResponse:(id)arg1;
- (void)akWebKitControllerSignRequest:(id)arg1;
- (void)akWebKitControllerDidFinishLoading:(id)arg1;
- (void)akWebKitControllerDidFailLoading:(id)arg1 error:(id)arg2;
- (void)akWebKitControllerDidSucceed:(id)arg1;
- (void)akWebKitControllerDidCancel:(id)arg1;
- (void)akWebKitControllerDidCreateJavaScriptContext:(id)arg1 forFrame:(id)arg2;
- (id)getAuthKitData:(id)arg1;
- (void)wasNotifiedOfDataChange:(id)arg1;
- (void)didChangeToLocation:(id)arg1 toSection:(id)arg2 withContext:(id)arg3;
- (BOOL)willChangeToLocation:(id)arg1 toSection:(id)arg2 withContext:(id)arg3;
@property(readonly, nonatomic) WebView *webView;
- (void)loadHTMLContent:(id)arg1 withParentURL:(id)arg2;
- (id)webViewURL;
- (void)loadURLRequest:(id)arg1;
- (void)reload;
- (void)dealloc;
- (void)endWebKitViewController;
- (id)initWebKitViewControllerInView:(id)arg1 UIDelegate:(id)arg2 accountID:(id)arg3 workflowDict:(id)arg4;
- (id)initWebKitViewControllerInView:(id)arg1 UIDelegate:(id)arg2 accountID:(id)arg3 inviteDict:(id)arg4;
- (id)initWebKitViewControllerInWindow:(id)arg1 UIDelegate:(id)arg2 accountID:(id)arg3;
- (id)initWebKitViewControllerInView:(id)arg1 UIDelegate:(id)arg2 accountID:(id)arg3;
- (id)initWebKitViewControllerInWindow:(id)arg1 UIDelegate:(id)arg2 accountID:(id)arg3 location:(id)arg4;
- (id)initWebKitViewControllerInView:(id)arg1 UIDelegate:(id)arg2 accountID:(id)arg3 location:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

