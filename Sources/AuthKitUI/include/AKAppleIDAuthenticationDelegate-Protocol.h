#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol NSObject;

@class AKAppleIDAuthenticationContext, AKAppleIDAuthenticationController, NSError, NSMutableDictionary;

@protocol AKAppleIDAuthenticationDelegate <NSObject>

@optional
- (void)authenticationController:(AKAppleIDAuthenticationController *)arg1 shouldContinueWithAuthenticationResults:(NSMutableDictionary * _Nullable)arg2 error:(NSError * _Nullable)arg3 forContext:(AKAppleIDAuthenticationContext *)arg4 completion:(void (^)(BOOL))arg5;
- (BOOL)authenticationController:(AKAppleIDAuthenticationController *)arg1 shouldContinueWithAuthenticationResults:(NSMutableDictionary *)arg2 error:(NSError *)arg3 forContext:(AKAppleIDAuthenticationContext *)arg4;
@end

