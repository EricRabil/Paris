//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XPCWriteConfigSync-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString;

@protocol XPCWriteConfigProtocol <XPCWriteConfigSync>

@optional
- (oneway void)setOwner:(NSString *)arg1 group:(NSString *)arg2 forDirectory:(NSString *)arg3 _withAuthorization:(NSData *)arg4;
- (oneway void)createPath:(NSString *)arg1 attributes:(NSDictionary *)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)movePath:(NSString *)arg1 toPath:(NSString *)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)removeFileAtPath:(NSString *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)createFileWithContents:(NSData *)arg1 path:(NSString *)arg2 attributes:(NSDictionary *)arg3 _withAuthorization:(NSData *)arg4;
- (oneway void)setAutologinPassword:(NSString *)arg1 accountName:(NSString *)arg2 keychainPath:(NSString *)arg3 _withAuthorization:(NSData *)arg4;
- (oneway void)setGuestPassword:(NSString *)arg1 accountName:(NSString *)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)setODSDPassword:(NSString *)arg1 accountName:(NSString *)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)setKeyForDomain:(NSDictionary *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setRestrictAppInstallations:(unsigned long long)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)suspendPerUserLaunchd:(unsigned long long)arg1 suspend:(BOOL)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)runKextcacheWithAuthorization:(NSData *)arg1 result:(void (^)(long long))arg2;
- (oneway void)touchEFIResourceBuilder_withAuthorization:(NSData *)arg1;
- (oneway void)setStartupFromNetBootImage:(NSDictionary *)arg1 reportSuccessTo:(id)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)setStartupFromNetBootImage:(NSDictionary *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)issueNVRAMCommand:(NSArray *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)writeVNCPassword:(NSString *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setARDEnabled:(BOOL)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)scSaveNatPrefs:(NSDictionary *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setPrinterSharingEnabled:(BOOL)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)scWriteDomains:(NSArray *)arg1 forKey:(NSString *)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)scSetZeroConfName:(NSString *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)scSetComputerName:(NSString *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setThirdPartyApplicationDataSubmissionEnabled:(BOOL)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setCRAutoSubmitEnabled:(BOOL)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)sendSIGHUPToProcess:(NSString *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setFMMGoodSamaritanMessage:(NSString *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setRemoteListening:(BOOL)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)updateDSAppsForUser:(NSString *)arg1 bundleIDs:(NSArray *)arg2 kickMCX:(BOOL)arg3 _withAuthorization:(NSData *)arg4;
- (oneway void)launchFibreConfig:(NSArray *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)kickMCXDForUID:(long long)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)killProcessID:(int)arg1 withSignal:(int)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)scheduleRepeatingPowerEvent:(NSDictionary *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)cancelAllRepeatingPowerEvents_withAuthorization:(NSData *)arg1;
- (oneway void)writePowerManagerSystemPowerSettings:(NSDictionary *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)writePowerManagerUPSSettings:(NSDictionary *)arg1 forKey:(NSString *)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)writePowerManagerActivityProfile:(NSDictionary *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setXServeLockEnclosureState:(BOOL)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setLockSecurePrefs:(BOOL)arg1 authStrings:(NSArray *)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)setAutomaticTimeEnabled:(BOOL)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setTime:(long long)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setTimeZone:(NSString *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setNTPServers:(NSArray *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)wakeup_withAuthorization:(NSData *)arg1;
@end

