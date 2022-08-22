#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSSecureCoding;

@protocol AKCredential, AKCredentialRequestProtocol;

@interface AKAuthorization : NSObject <NSSecureCoding>
{
     id  _authorizedRequest;
     id  _credential;
}

+ (BOOL)supportsSecureCoding;

@property(retain, nonatomic)  id  credential; // @synthesize credential=_credential;
@property(retain, nonatomic)  id  authorizedRequest; // @synthesize authorizedRequest=_authorizedRequest;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
