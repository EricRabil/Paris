//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol NSObject;

@class NSArray, NSDictionary, NSString, NSXPCListenerEndpoint;

@protocol LFLogindListenerInterface <NSObject>
- (void)SMMoveSessionToConsoleTemporaryBridge:(NSDictionary *)arg1 reply:(void (^)(int))arg2;
- (void)SMReleaseSessionTemporaryBridge:(NSDictionary *)arg1 reply:(void (^)(int))arg2;
- (void)SMCreateSessionTemporaryBridge:(NSDictionary *)arg1 reply:(void (^)(int, unsigned int))arg2;
- (void)SMReconnectSessionID:(int)arg1 onConsole:(BOOL)arg2 reply:(void (^)(int, int))arg3;
- (void)SMGetSessionUserInfo:(void (^)(int, NSDictionary *))arg1;
- (void)SMSetSessionUserInfo:(NSDictionary *)arg1 reply:(void (^)(int))arg2;
- (void)SMGetSessionOwnerConnection:(void (^)(int, NSXPCListenerEndpoint *))arg1;
- (void)SMRegisterSessionOwner:(NSXPCListenerEndpoint *)arg1 reply:(void (^)(int))arg2;
- (void)SMGetSessionAgentConnection:(void (^)(int, NSXPCListenerEndpoint *))arg1;
- (void)SMRegisterSessionAgent:(NSXPCListenerEndpoint *)arg1 reply:(void (^)(int))arg2;
- (void)SMSignalNewSessionReady:(void (^)(int))arg1;
- (void)SMCloseSession:(int)arg1 reply:(void (^)(int))arg2;
- (void)SMGetSessionIDForSessionWithUserID:(unsigned int)arg1 reply:(void (^)(int, int))arg2;
- (void)SMGetSessionIDForSessionWithCGSessionID:(unsigned int)arg1 reply:(void (^)(int, int))arg2;
- (void)SMCreateSessionWithOptions:(NSDictionary *)arg1 byStartingServer:(NSXPCListenerEndpoint *)arg2 reply:(void (^)(int, int))arg3;
- (void)SMGetSessionProperties:(int)arg1 reply:(void (^)(int, NSDictionary *))arg2;
- (void)SMSwitchToSession:(int)arg1 withOptions:(NSDictionary *)arg2 reply:(void (^)(int))arg3;
- (void)SMCreateSessionWithOptions:(NSDictionary *)arg1 reply:(void (^)(int, int))arg2;
- (void)SMIsThisSessionOnConsole:(void (^)(int, BOOL))arg1;
- (void)SMGetCurrentSessionID:(void (^)(int, int))arg1;
- (void)SMGetAllSessions:(void (^)(int, NSArray<NSNumber*> *))arg1;
- (void)SAPrepareForSetupUserScreenShots:(void (^)(int))arg1;
- (void)SAClearLWScreenShots:(void (^)(int))arg1;
- (void)SASetPreviousStartupWasPanic:(BOOL)arg1 reply:(void (^)(int))arg2;
- (void)SAWriteKeyboardType:(int)arg1 productID:(int)arg2 vendorID:(int)arg3 countryCode:(int)arg4 reply:(void (^)(int))arg5;
- (void)SASetSessionStateForUser:(unsigned int)arg1 state:(int)arg2 reply:(void (^)(int))arg3;
- (void)SASystemNotifyPost:(const char *)arg1 reply:(void (^)(int))arg2;
- (void)SACopyAutologinPassword:(void (^)(int, NSString *))arg1;
- (void)SASetAutologinPassword:(NSString *)arg1 reply:(void (^)(int))arg2;
- (void)SAClearSoftwareUpdateOptions:(void (^)(int))arg1;
- (void)SAClearLaunchSoftwareUpdateTrigger:(void (^)(int))arg1;
- (void)SASetLaunchSoftwareUpdateTrigger:(void (^)(int))arg1;
- (void)SASetSoftwareUpdateOptionKey:(NSString *)arg1 value:(NSString *)arg2 reply:(void (^)(int))arg3;
- (void)SASetSCDynamicStoreConsoleUserName:(const char *)arg1 uniqueID:(unsigned int)arg2 groupID:(unsigned int)arg3 sessions:(NSArray *)arg4 reply:(void (^)(int))arg5;
- (void)SASetSwapCompactionEnabled:(BOOL)arg1 reply:(void (^)(int))arg2;
- (void)SASetSessionHasConsoleAccessFlag:(BOOL)arg1 reply:(void (^)(int))arg2;
- (void)SASetSessionAuthenticatedFlag:(void (^)(int))arg1;
- (void)SASetAutoLoginUserScreenLocked:(BOOL)arg1 reply:(void (^)(int))arg2;
@end

