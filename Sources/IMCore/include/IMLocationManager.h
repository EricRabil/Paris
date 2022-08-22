//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "IMLocationManager-Protocol.h"

@class CLLocation, CLLocationManager, NSDate, NSError, NSMutableArray, NSString, NSTimer;

@interface IMLocationManager : NSObject
{
    CLLocationManager *_locationManager;
    NSMutableArray *_handlers;
    NSTimer *_timeoutHandler;
    CLLocation *_location;
    NSError *_error;
    NSDate *_locateStartTime;
    NSTimer *_locationUpdateTimer;
}

+ (Class)__CLLocationManagerClass;
+ (id)sharedInstance;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSTimer *locationUpdateTimer; // @synthesize locationUpdateTimer=_locationUpdateTimer;
@property(retain, nonatomic) NSDate *locateStartTime; // @synthesize locateStartTime=_locateStartTime;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSMutableArray *handlers; // @synthesize handlers=_handlers;
- (void)_fireCompletionHandlers;
- (void)_locationManagerTimedOut;
- (void)_locationUpdateTimerFired:(id)arg1;
- (BOOL)_shouldSendLocation:(id)arg1 timeIntervalSinceStart:(double)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
@property(readonly, nonatomic) BOOL locationAuthorizationDenied;
@property(readonly, nonatomic) BOOL locationAuthorizationDetermined;
- (void)startUpdatingCurrentLocationWithForegroundAssertionForBundleIdentifier:(id)arg1 updateHandler:(id)arg2;
- (void)startUpdatingCurrentLocationWithHandler:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end
