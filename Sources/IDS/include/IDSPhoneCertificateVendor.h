//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import "IDSDaemonListenerProtocol.h"

@class IDSDaemonRequestTimer, NSObject, NSString;

@interface IDSPhoneCertificateVendor : NSObject
{
    NSObject *_queue;
    IDSPhoneCertificateVendor *_strongSelfReference;
    IDSDaemonRequestTimer *_daemonRequestTimer;
}


@property(readonly, nonatomic) IDSDaemonRequestTimer *daemonRequestTimer; // @synthesize daemonRequestTimer=_daemonRequestTimer;
@property(retain, nonatomic) IDSPhoneCertificateVendor *strongSelfReference; // @synthesize strongSelfReference=_strongSelfReference;
@property(readonly, nonatomic) NSObject *queue; // @synthesize queue=_queue;
- (id)_scheduleTimeoutForCarrierTokenCompletionBlock:(id)arg1;
- (id)_scheduleTimeoutForPhoneAuthenticationCertificateRequestCompletionBlock:(id)arg1;
- (id)_scheduleTimeoutForPhoneAuthenticationSignatureRequestCompletionBlock:(id)arg1;
- (long long)_subscriptionSourceForContext:(id)arg1;
- (long long)_subscriptionSourceFromIntegerValue:(long long)arg1;
- (void)didRequestCarrierTokenString:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
- (void)didGeneratePhoneAuthenticationSignature:(id)arg1 nonce:(id)arg2 certificates:(id)arg3 labelIDs:(id)arg4 inputData:(id)arg5 requestUUID:(id)arg6 error:(id)arg7;
- (void)didAuthenticatePhoneWithAuthenticationCertificateData:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
- (id)_clientErrorForCode:(long long)arg1 underlyingError:(id)arg2;
- (id)_debugDescriptionForErrorCode:(long long)arg1;
- (BOOL)_isPhoneCertificateVendorSupported;
- (void)_updateSelfRetentionBasedOnInFlightRequestCount;
- (void)requestCarrierTokenWithParameters:(id)arg1 completion:(id)arg2;
- (void)generatePhoneAuthenticationSignatureOverData:(id)arg1 withCompletion:(id)arg2;
- (void)authenticatePhoneWithCompletion:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)didFetchPhoneUserSubscriptionSource:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
- (void)didSetPhoneUserSubscriptionSource:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
- (id)_scheduleTimeoutForPhoneSubscriptionSourceCompletionBlock:(id)arg1;
- (long long)currentPhoneUserSubscriptionSourceWithError:(id )arg1;
- (void)requestCurrentPhoneUserSubscriptionSourceWithCompletion:(id)arg1;
- (void)setCurrentPhoneUserSubscriptionSource:(long long)arg1 completion:(id)arg2;
- (void)requestCarrierTokenWithMessageBody:(id)arg1 completion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end

