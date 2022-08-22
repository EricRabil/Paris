//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class IMNicknameFieldEncryptionKey, IMNicknameFieldTaggingKey, IMNicknameRecordTaggingKey, NSData;

@interface IMNicknameEncryptionPreKey : NSObject
{
    NSData *_generatedData;
    NSData *_derivedData;
}

+ (id)preKeyWithDataRepresentation:(id)arg1 error:(id )arg2;
+ (id)generatePreKeyWithError:(id )arg1;
- (id)_subDerviedKeyDataAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) IMNicknameRecordTaggingKey *recordTaggingKey;
@property(readonly, nonatomic) IMNicknameFieldTaggingKey *fieldTaggingKey;
@property(readonly, nonatomic) IMNicknameFieldEncryptionKey *fieldEncryptionKey;
- (id)dataRepresentation;
- (void)dealloc;
- (id)initWithGeneratedData:(id)arg1 derivedData:(id)arg2;

@end

