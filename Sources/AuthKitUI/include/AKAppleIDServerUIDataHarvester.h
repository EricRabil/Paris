#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface AKAppleIDServerUIDataHarvester : NSObject
{
    NSMutableDictionary *_harvestedData;
}


- (void)harvestIDMSRecoveryInfoFromHeaders:(id)arg1;
- (void)harvestIDMSRecoveryInfoFromClientInfo:(id)arg1;
- (void)_harvestIDMSRecoveryHeadersInfo:(id)arg1;
- (void)harvestDataFromServerHTTPResponse:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *harvestedData;
- (id)init;

@end

