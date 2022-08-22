//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMMessageItem.h>
#import <IMChatItem.h>

@class IMMessage;



@interface IMMessageItem (IMChat_Internal)
+ (Class)contextClass;
+ (id)displayNameForAddress:(id)arg1;
+ (BOOL)isLoginAddress:(id)arg1;
+ (id)handleForAddress:(id)arg1;
+ (id)bestAccountForAddress:(id)arg1;
- (id)_copyWithFlags:(unsigned long long)arg1;
- (id)_copy;
- (BOOL)_isInvitation;
- (void)_setInivtation:(BOOL)arg1;
- (IMMessage*)message;
- (NSString *)descriptionForPurpose:(IMMessageDescriptionType)descriptionType isGroupMessage:(BOOL)isGroupMessage senderDisplayName:(NSString*)senderDisplayName messageDataSource:(BOOL (^)(NSString *guid, IMMessageItem** associatedMessage, IMMessagePartChatItem** associatedMessagePart))messageDataSource attachmentDataSource:(BOOL (^)(NSString *guid, NSURL **url, NSString **utiType, BOOL *isSticker, BOOL *incoming))attachementInfoProvider;
- (BOOL)isIncomingTypingOrCancelTypingMessage;
- (BOOL)isTypingOrCancelTypingMessage;
- (BOOL)isCancelTypingMessage;
- (BOOL)isIncomingTypingMessage;
- (BOOL)isSystemMessage;
- (BOOL)isExtensibleMessageWithPluginPayload:(id )arg1;
- (id)_service;
- (id)_newChatItemsWithFilteredChat:(BOOL)arg1 isBusiness:(BOOL)arg2 parentChatIsSpam:(BOOL)arg3 hasKnownParticipants:(BOOL)arg4;
- (NSObject*)_newChatItems;
- (BOOL)_hasMessageChatItem;
@end

