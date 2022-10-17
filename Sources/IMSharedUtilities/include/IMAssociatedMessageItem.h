//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMMessageItem.h"

#import "IMRemoteObjectCoding.h"
#import <Foundation/Foundation.h>
#import <Foundation/Foundation.h>

@class NSArray, NSString;

@interface IMAssociatedMessageItem : IMMessageItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>
{
    NSString *_associatedMessageGUID;
    long long _associatedMessageType;
    NSArray *_consumedSessionPayloads;
    struct _NSRange _associatedMessageRange;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *consumedSessionPayloads; // @synthesize consumedSessionPayloads=_consumedSessionPayloads;
@property(nonatomic) struct _NSRange associatedMessageRange; // @synthesize associatedMessageRange=_associatedMessageRange;
@property(nonatomic) long long associatedMessageType; // @synthesize associatedMessageType=_associatedMessageType;
@property(retain, nonatomic) NSString *associatedMessageGUID; // @synthesize associatedMessageGUID=_associatedMessageGUID;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSticker;
- (BOOL)isMessageEdit;
- (BOOL)isBreadcrumb;
- (BOOL)isMessageAcknowledgment;
- (BOOL)isLastMessageCandidate;
- (BOOL)isFirstMessageCandidate;
- (BOOL)isAssociatedMessageItem;
- (id)description;
- (id)copyForBackwardsCompatibility;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyDictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithMessageItem:(id)arg1;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 errorType:(unsigned int)arg26 associatedMessageGUID:(id)arg27 associatedMessageType:(long long)arg28 associatedMessageRange:(struct _NSRange)arg29 bizIntent:(id)arg30 locale:(id)arg31 messageSummaryInfo:(id)arg32;
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 associatedMessageGUID:(id)arg9 associatedMessageType:(long long)arg10 associatedMessageRange:(struct _NSRange)arg11 messageSummaryInfo:(id)arg12;
- (id)initWithDictionary:(id)arg1 hint:(id)arg2;

@end

