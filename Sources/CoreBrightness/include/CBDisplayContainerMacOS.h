//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBContainer.h"

#import "CBContainerProtocol-Protocol.h"
#import "CBHIDServiceProtocol-Protocol.h"

@class NSMutableArray, NSString;
@protocol CBContainerModuleProtocol;

__attribute__((visibility("hidden")))
@interface CBDisplayContainerMacOS : CBContainer <CBContainerProtocol, CBHIDServiceProtocol>
{
    unsigned long long _deviceID;
    unsigned long long _aliasID;
    NSMutableArray *_relevantServices;
    NSMutableArray<CBContainerModuleProtocol> *_modules;
    _Bool _builtIn;
    unsigned long long _vendorID;
    unsigned long long _productID;
    unsigned long long _serialNumber;
    struct IONotificationPort *_hidDisplayServicePublishedNotifyPort;
    unsigned int _hidDisplayServiceIterator;
    BOOL _brightnessDisabled;
    BOOL _autoBrightnessDisabled;
    _Bool _running;
}

@property(readonly) _Bool running; // @synthesize running=_running;
- (_Bool)tearDownInternalModules;
- (_Bool)setupInternalModules;
- (void)sendNotificationForKey:(id)arg1 andValue:(id)arg2;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 from:(id)arg3;
- (_Bool)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)addHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)handleHIDEvent:(struct __IOHIDEvent *)arg1 from:(struct __IOHIDServiceClient *)arg2;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyContainerPropertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stop;
- (BOOL)start;
- (void)dealloc;
- (id)initWithID:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

