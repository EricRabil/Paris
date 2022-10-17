//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBContainer.h"

#import "CBContainerProtocol-Protocol.h"
#import "CBHIDServiceProtocol-Protocol.h"

@class HIDDevice, KeyboardBacklight, NSMutableDictionary, NSObject, NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface CBKeyboardBacklightContainer : CBContainer <CBContainerProtocol, CBHIDServiceProtocol>
{
    KeyboardBacklight *_keyboardBacklight;
    BOOL _userActive;
    NSMutableDictionary *_properties;
    HIDDevice *_device;
}

@property(readonly) HIDDevice *device; // @synthesize device=_device;
- (_Bool)keyboardUsesNitUnits:(id)arg1;
- (id)newKeyboardBacklightWithQueue:(id)arg1 device:(id)arg2;
- (void)sendNotificationForKey:(id)arg1 andValue:(id)arg2;
- (_Bool)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)handleHIDEvent:(struct __IOHIDEvent *)arg1 from:(struct __IOHIDServiceClient *)arg2;
- (_Bool)addHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)setPropertyInternal:(id)arg1 forKey:(id)arg2;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)copyPropertyInternalForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1;
- (void)stop;
- (BOOL)start;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

