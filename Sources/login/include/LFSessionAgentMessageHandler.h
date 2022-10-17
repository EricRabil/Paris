//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LFSessionAgentConnectionInterface-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface LFSessionAgentMessageHandler : NSObject <LFSessionAgentConnectionInterface>
{
    NSObject<OS_dispatch_queue> *_faceTimeCallCallbackBlockQueue;
    id _faceTimeCallMuteCallbackBlock;
    id _faceTimeCallCancelCallbackBlock;
    NSObject<OS_dispatch_queue> *_miniBuddyCompletionBlockQueue;
    id _miniBuddyCompletionBlock;
    NSObject<OS_dispatch_queue> *_logoutBlockQueue;
    id _logoutFailureBlock;
    id _logoutSuccessBlock;
}

+ (id)sharedSessionAgentMessageHandler;
- (void)dealloc;
- (void)SACMessageLogoutStatusClientLogoutSuccess:(id)arg1 reply:(id)arg2;
- (void)SACMessageLogoutStatusClientLogoutFailed:(id)arg1 reply:(id)arg2;
- (void)setLogoutQueue:(id)arg1 failureBlock:(id)arg2 successBlock:(id)arg3;
- (BOOL)isLogoutRegistered;
- (void)SACMessageMiniBuddyUIShowing:(id)arg1;
- (void)setMiniBuddyQueue:(id)arg1 completionBlock:(id)arg2;
- (void)SACMessageFaceTimeCancelCall:(id)arg1;
- (void)SACMessageFaceTimeMuteCall:(id)arg1;
- (void)setFaceTimeQueue:(id)arg1 muteBlock:(id)arg2 cancelBlock:(id)arg3;
- (BOOL)isFaceTimeRegistered;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end

