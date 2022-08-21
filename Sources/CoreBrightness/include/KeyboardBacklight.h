//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CBModule.h>

#import <CBContainerModuleProtocol-Protocol.h>
#import <CBHIDServiceProtocol-Protocol.h>

@class HIDDevice, HIDElement, NSLock, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface KeyboardBacklight : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol>
{
    _Bool _muted;
    _Bool _manualAdjust;
    _Bool _saturated;
    _Bool _dimmed;
    _Bool _suspend;
    _Bool _suspendDimming;
    _Bool _userActive;
    _Bool _displayOn;
    float _previousLevelPercentage;
    int _numOfBacklightUpdateRetries;
    HIDDevice *_device;
    HIDElement *_levelElement;
    HIDElement *_levelFadeSpeedElement;
    HIDElement *_enableElement;
    HIDElement *_enableFadeSpeedElement;
    NSMutableArray *_elements;
    NSMutableArray *_alsServiceClients;
    unsigned long long _activityNotificationHandle;
    NSMutableDictionary *_properties;
    NSObject<OS_dispatch_source> *_forceLuxUpdateTimer;
    NSObject<OS_dispatch_source> *_backlightUpdateTimer;
    _Bool _backlightUpdateInProgress;
    NSLock *_backlightUpdateLock;
    int _backlightUpdateFrequency;
    unsigned long long _lastBacklightUpdate;
    unsigned long long _backlightUpdateType;
    NSObject<OS_dispatch_source> *_rampTimer;
    _Bool _builtIn;
    _Bool _autoAdjust;
    int _dimTime;
    float _ambientOffset;
    float _ambientHighThreshold;
    float _ambientLowThreshold;
    float _levelPercentage;
    float _levelMin;
    float _levelMax;
    float _levelOff;
    unsigned int _levelUnit;
    unsigned int _unitExponent;
    float _ambientSlope;
    float _currentLux;
    float _previousLevel;
    unsigned long long _keyboardID;
    NSMutableDictionary *_keyboardSpecificPreferences;
}

+ (unsigned long long)getHashIDForDevice:(id)arg1;
@property float previousLevel; // @synthesize previousLevel=_previousLevel;
@property(retain) NSMutableDictionary *keyboardSpecificPreferences; // @synthesize keyboardSpecificPreferences=_keyboardSpecificPreferences;
@property float currentLux; // @synthesize currentLux=_currentLux;
@property(readonly) float ambientSlope; // @synthesize ambientSlope=_ambientSlope;
@property unsigned int unitExponent; // @synthesize unitExponent=_unitExponent;
@property unsigned int levelUnit; // @synthesize levelUnit=_levelUnit;
@property float levelOff; // @synthesize levelOff=_levelOff;
@property float levelMax; // @synthesize levelMax=_levelMax;
@property float levelMin; // @synthesize levelMin=_levelMin;
@property float levelPercentage; // @synthesize levelPercentage=_levelPercentage;
@property _Bool autoAdjust; // @synthesize autoAdjust=_autoAdjust;
@property(readonly) float ambientLowThreshold; // @synthesize ambientLowThreshold=_ambientLowThreshold;
@property(readonly) float ambientHighThreshold; // @synthesize ambientHighThreshold=_ambientHighThreshold;
@property float ambientOffset; // @synthesize ambientOffset=_ambientOffset;
@property int dimTime; // @synthesize dimTime=_dimTime;
@property unsigned long long keyboardID; // @synthesize keyboardID=_keyboardID;
@property _Bool builtIn; // @synthesize builtIn=_builtIn;
- (double)timeToNextBacklightUpdate;
- (void)stopRamp;
- (void)timerRoutine:(id)arg1;
- (void)startRamp;
- (void)rampToBrightness:(float)arg1 withDuration:(unsigned int)arg2;
- (void)storeKeyboardBacklightPreferences;
- (void)getKeyboardBacklightPreferences;
- (void)setKBPreferenceBacklightMaxUser;
- (_Bool)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)handleHIDEvent:(struct __IOHIDEvent *)arg1 from:(struct __IOHIDServiceClient *)arg2;
- (_Bool)addHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (_Bool)KBUserOffsetPropertyHandler:(id)arg1;
- (_Bool)KBUserActivityUpdateHandler:(id)arg1;
- (_Bool)KBSuspendDimmingPropertyHandler:(id)arg1;
- (_Bool)KBIdleDimTimeHandler:(id)arg1;
- (_Bool)KBIdleDimPropertyHandler:(id)arg1;
- (_Bool)KBBrightnessPropertyHandler:(id)arg1;
- (_Bool)KBAutoBrightnessEnablePropertyHandler:(id)arg1;
- (_Bool)KBAutoBrightnessSuspendPropertyHandler:(id)arg1;
- (_Bool)KBDisplayBrightnessFactorPropertyHandler:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (id)copyPropertyForKey:(id)arg1;
- (void)forceBacklightUpdateRoutine;
- (void)scheduleBacklightUpdate:(int)arg1;
- (void)forceLuxUpdateRoutine;
- (void)forceLuxUpdate;
- (void)endKeyDim;
- (void)handlePMUserActivityStateChanged:(unsigned long long)arg1;
- (void)resetKeyDimTimeout;
- (void)calculateLevelPercentageAtAmbient:(float)arg1;
- (float)currentLuxToAmbient;
- (void)handleLuxUpdate:(float)arg1;
@property(readonly) float maxUserLevel;
- (void)getCurrentLux;
- (float)level;
- (void)updateAmbientOffset;
- (void)setBrightness:(float)arg1 withFadeSpeed:(int)arg2 commit:(BOOL)arg3;
@property float brightness;
@property _Bool saturated;
@property _Bool manualAdjust;
@property _Bool muted;
- (void)toggleMute;
- (void)didUpdateBacklightLevel:(float)arg1 brightness:(float)arg2 result:(_Bool)arg3 error:(id)arg4;
- (void)updateBacklightDeviceWithFadeSpeed:(int)arg1 commit:(_Bool)arg2 reason:(unsigned long long)arg3;
- (void)updateBacklightDeviceWithReason:(unsigned long long)arg1;
- (void)updateBacklightDevice;
- (void)sendSuppressedNotification:(_Bool)arg1;
@property _Bool userActive;
@property _Bool suspend;
@property _Bool dimmed;
@property(readonly) _Bool suppressed;
@property(readonly, copy) NSString *description;
- (_Bool)retrieveKeyboardBacklightElements;
- (void)start;
- (void)stop;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 device:(id)arg2 ambientOffset:(float)arg3;
- (id)initWithQueue:(id)arg1 device:(id)arg2;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
