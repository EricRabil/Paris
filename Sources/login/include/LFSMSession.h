//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class LFListener;

NS_ASSUME_NONNULL_BEGIN

@interface LFSMSession : NSObject
{
    int _sessionID;
}

+ (instancetype)sessionWithSessionID:(int)arg1;
+ (NSDictionary*)defaultOptions;
+ (instancetype)sessionWithOptions:(id)arg1;
+ (instancetype)sessionByListener:(LFListener*)arg1 withOptions:(id)arg2;
+ (void)signalSessionReady;
+ (instancetype _Nullable)sessionForUser:(unsigned int)arg1;
+ (instancetype)sessionWithCGSessionID:(unsigned int)arg1;
+ (BOOL)isThisSessionOnConsole;
+ (LFSMSession*)currentSession;
+ (NSArray<LFSMSession*>*)allSessions;
@property int sessionID; // @synthesize sessionID=_sessionID;
- (NSDictionary*)properties;
- (int)close;
- (void)bringOnConsoleWithOptions:(NSDictionary*)arg1;

@end

typedef const struct CF_BRIDGED_TYPE(id) __LFSMSession * LFSMSessionRef;

NS_ASSUME_NONNULL_END
