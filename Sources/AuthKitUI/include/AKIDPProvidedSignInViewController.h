#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "AKIDPPresentationController-Protocol.h"
#import "AKInAssistantNavigationHandler-Protocol.h"

@class AKIDPHandler, NSButton, NSString, NSView, WKWebView;

@interface AKIDPProvidedSignInViewController : NSViewController <AKIDPPresentationController, AKInAssistantNavigationHandler>
{
    WKWebView *_webView;
    AKIDPHandler *_idpHandler;
    NSView *_containerView;
    NSButton *_cancelButton;
}


@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) AKIDPHandler *idpHandler; // @synthesize idpHandler=_idpHandler;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void)cancelButtonTapped:(id)arg1;
- (void)alternateNavigationButtonClicked:(id)arg1;
- (void)rightNavigationButtonClicked:(id)arg1;
- (void)leftNavigationButtonClicked:(id)arg1;
- (void)cleanUp;
- (void)viewWillAppear;
- (void)loadView;
- (id)initWithIDPHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

