#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "AKBasicLoginAnimateProtocol-Protocol.h"

@class AKAppleIDAuthenticationController, AKAppleIDAuthenticationInAppContext, NSString;
@protocol AKSignInViewControllerDelegate;

@interface AKBaseSignInViewController : NSViewController <AKBasicLoginAnimateProtocol>
{
    AKAppleIDAuthenticationController *_authenticationController;
    BOOL _usesDarkMode;
    BOOL _authInProgress;
    AKAppleIDAuthenticationInAppContext *_context;
     id  _delegate;
}


@property(nonatomic, getter=isAuthInProgress) BOOL authInProgress; // @synthesize authInProgress=_authInProgress;
@property __weak  id  delegate; // @synthesize delegate=_delegate;
@property(retain) AKAppleIDAuthenticationInAppContext *context; // @synthesize context=_context;
@property(nonatomic) BOOL usesDarkMode; // @synthesize usesDarkMode=_usesDarkMode;
- (void)stopAnimating;
- (void)startAnimating;
- (void)_setPasswordFieldHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_provideDelegateWithAuthResults:(id)arg1 error:(id)arg2;
- (void)_authenticateWithContext:(id)arg1;
- (void)_beginAuthenticationIfPossibleWithOption:(unsigned long long)arg1 withUsername:(id)arg2 password:(id)arg3;
- (BOOL)_canBeginAuthenticationWithOption:(unsigned long long)arg1;
- (BOOL)_isAccountModificationRestricted;
- (BOOL)_isSignInAllowed;
@property(readonly) AKAppleIDAuthenticationController *authenticationController;
- (void)_setPasswordFieldHiddenIfNeeded;
- (void)viewDidAppear;
- (id)_initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)_initWithAuthController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

