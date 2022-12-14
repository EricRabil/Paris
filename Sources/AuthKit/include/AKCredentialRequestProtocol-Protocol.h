#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol NSCopying;
@protocol NSObject;
@protocol NSSecureCoding;

@class NSString, NSUUID;

@protocol AKCredentialRequestProtocol <NSObject, NSSecureCoding, NSCopying>
@property(readonly, copy, nonatomic) NSUUID *requestIdentifier;
@property(readonly, copy, nonatomic) NSString *altDSID;
@property(copy, nonatomic) NSString *userIdentifier;
@end

