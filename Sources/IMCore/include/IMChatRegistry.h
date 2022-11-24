//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TUConversationManagerDelegate-Protocol.h"
#import "IMChat.h"

@class IMTimer, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSUserActivity, TUConversationManager;
@protocol OS_dispatch_queue;

@interface IMChatRegistry : NSObject
{
    NSMutableArray *_allChats;
    NSMutableDictionary *_chatGUIDToCurrentThreadMap;
    NSMutableDictionary *_chatGUIDToInfoMap;
    NSMutableDictionary *_chatGUIDToChatMap;
    NSMutableDictionary *_threadNameToChatMap;
    NSMutableDictionary *_chatGUIDToiMessageSentOrReceivedMap;
    NSMutableArray *_allChatsInThreadNameMap;
    NSMutableArray *_pendingQueries;
    NSMutableArray *_waitingForQueries;
    NSString *_historyModificationStamp;
    IMTimer *_markAsReadTimer;
    NSMutableDictionary *_queryCompletionBlocks;
    double _timerStartTimeInterval;
    BOOL _firstLoad;
    BOOL _loading;
    BOOL _daemonHadTerminated;
    BOOL _wantsHistoryReload;
    BOOL _postMessageSentNotifications;
    BOOL _isInternalInstall;
    BOOL _blackholedChatsExist;
    unsigned long long _defaultNumberOfMessagesToLoad;
    unsigned long long _daemonUnreadCount;
    long long _daemonLastFailedMessageDate;
    NSUserActivity *_userActivity;
    NSMutableDictionary *_chatsBeingLoadedMap;
    NSMutableDictionary *_chatPersonIDToChatMap;
    NSMutableDictionary *_groupIDToChatMap;
    NSMutableDictionary *_groupParticipantToChatsMap;
    NSSet *_registryChangeHistoryChatsToObserve;
    NSSet *_registryChangeHistoryChatsToUnregister;
    BOOL _personaKitRetriveAPITimedOut;
    NSArray *_simulatedChats;
    IMChatRegistry *_batchProcessingRegistry;
    NSObject *_batchProcessingQueue;
    NSMutableArray *_updateBlocks;
    NSArray *_preExistingAllChats;
    TUConversationManager *_conversationManager;
    NSDictionary *_chatIdToLastMessageItemMap;
}

+ (Class)messageClass;
+ (void)setMessageClass:(Class)arg1;
+ (IMChatRegistry*)sharedInstance;
+ (id)performanceLogHandle;
+ (void)setHasInitializedChatFiltering:(BOOL)arg1;
+ (BOOL)hasInitializedChatFiltering;
@property(retain, nonatomic) NSDictionary *chatIdToLastMessageItemMap; // @synthesize chatIdToLastMessageItemMap=_chatIdToLastMessageItemMap;
@property(readonly, nonatomic) TUConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(retain, nonatomic) NSArray *preExistingAllChats; // @synthesize preExistingAllChats=_preExistingAllChats;
@property(retain, nonatomic) NSMutableArray *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property(retain, nonatomic) NSObject *batchProcessingQueue; // @synthesize batchProcessingQueue=_batchProcessingQueue;
@property(retain, nonatomic) IMChatRegistry *batchProcessingRegistry; // @synthesize batchProcessingRegistry=_batchProcessingRegistry;
@property(retain, nonatomic, setter=_setSimulatedChats:) NSArray *simulatedChats; // @synthesize simulatedChats=_simulatedChats;
@property(readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(nonatomic) BOOL personaKitRetriveAPITimedOut; // @synthesize personaKitRetriveAPITimedOut=_personaKitRetriveAPITimedOut;
@property(nonatomic, setter=_setPostMessageSentNotifications:) BOOL _postMessageSentNotifications; // @synthesize _postMessageSentNotifications;
@property(readonly, nonatomic) BOOL _isLoading; // @synthesize _isLoading=_loading;
@property(nonatomic, setter=_setDefaultNumberOfMessagesToLoad:) unsigned long long _defaultNumberOfMessagesToLoad; // @synthesize _defaultNumberOfMessagesToLoad;
@property(readonly, nonatomic) BOOL isBatchProcessing;
- (void)_setMetaDictionary:(id)arg1 forChatIdentifier:(id)arg2;
- (id)scrutinyInfo;
- (id)_transcriptRenderingMetaDictionaryForChatIdentifier:(id)arg1;
- (double)_maxDurationForScrutinyMode;
- (BOOL)_firstLoad;
- (void)systemApplicationDidResume;
- (void)_clearMarkAsReadTimerIfNecessary;
- (void)_startMarkAsReadTimerIfNecessary;
- (void)_registerCompletion:(id)arg1 forQueryID:(id)arg2;
- (void)_chat:(id)arg1 handleCompletionOfQuery:(id)arg2 withUserInfo:(id)arg3 success:(BOOL)arg4 error:(id)arg5;
- (void)_blockUntilQueriesComplete:(id)arg1;
- (void)__blockUntilQueriesComplete;
- (NSDictionary<NSString*, IMChat*>*)_chatGUIDToChatMap; // removed in monterey
- (NSDictionary<NSString*, IMChat*>*)chatGUIDToChatMap; // introduced in monterey
- (NSArray<IMChat*>* _Nonnull)_chatsWithMessageGUID:(NSString*)arg1;
- (id)_chatsWithMessage:(id)arg1;
- (NSArray<NSString*>*)_allGUIDsForChat:(id)arg1; // removed in monterey
- (NSArray<NSString*>*)allGUIDsForChat:(id)arg1; // introduced in monterey
- (void)_handleAddressBookChange:(id)arg1;
- (void)handleIMChatParticipantsDidChange:(id)arg1;
- (id)unblackholeAndLoadChatWithIMHandles:(id)arg1;
- (IMChat*)loadChatFromDaemonWithChatIdentifier:(id)arg1;
- (id)_sortedParticipantIDHashForParticipants:(id)arg1;
- (void)_addChat:(id)arg1 participantSet:(id)arg2;
- (void)_removeFromGroupParticipantToChatsMap:(id)arg1;
- (void)_resetChatReconstructionGroupMaps;
- (id)_chatForChatDictionary:(id)arg1 items:(id)arg2 allowCreate:(BOOL)arg3 createdChat:(char *)arg4 outGUID:(id )arg5;
- (id)existingChatForRoom:(id)arg1 onAccount:(id)arg2 allowRetargeting:(BOOL)arg3;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(BOOL)arg2;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(BOOL)arg2 groupID:(id)arg3 displayName:(id)arg4 joinedChatsOnly:(BOOL)arg5;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(BOOL)arg2 groupID:(id)arg3 displayName:(id)arg4 ignoresDisplayName:(BOOL)arg5 joinedChatsOnly:(BOOL)arg6;
- (id)existingChatForAddresses:(id)arg1 allowRetargeting:(BOOL)arg2 bestHandles:(id )arg3;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(BOOL)arg2 groupID:(id)arg3;
- (id)existingChatForIMHandle:(id)arg1 allowRetargeting:(BOOL)arg2 fixChatHandle:(BOOL)arg3;
- (id)existingChatForIMHandle:(id)arg1 allowRetargeting:(BOOL)arg2;
- (id)_existingChatFromSiblingsForIMHandle:(id)arg1;
- (id)_existingChatFromSiblingsForHandle:(id)arg1;
- (id)_existingChatForIMHandleUsingPersonID:(id)arg1;
- (id)_existingChatForIMHandle:(id)arg1 fixChatHandle:(BOOL)arg2;
- (id)existingConversationForTUConversationUUID:(id)arg1;
- (id)existingChatForEngramID:(id)arg1;
- (IMChat*)exisitingChatForGroupID:(NSString*)arg1;
- (id)existingChatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)existingChatForIMHandles:(id)arg1;
- (IMChat*)existingChatForIMHandle:(IMHandle*)arg1;
- (IMChat*)existingChatWithGUID:(NSString*)arg1;
- (id)existingChatForPersonID:(id)arg1;
- (id)existingChatWithDisplayName:(id)arg1;
- (IMChat*)existingChatWithChatIdentifier:(id)arg1;
- (IMChat*)existingChatWithGroupID:(NSString*)arg1;
- (id)_lookupExistingChatWithIMHandle:(id)arg1;
- (id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 service:(id)arg3;
@property(readonly, nonatomic) NSArray<IMChat*> *allExistingChats;
@property(readonly, nonatomic) unsigned long long numberOfExistingChats;
- (void)_setChatHasCommunicatedOveriMessage:(id)arg1;
- (BOOL)_hasChat:(id)arg1 forService:(id)arg2;
- (void)markMessageAsNotCorrupt:(id)arg1;
- (void)markMessageAsCorrupt:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(id )arg1 objects:(id )arg2 count:(unsigned long long)arg3;
- (long long)lastFailedMessageDate;
- (unsigned long long)unreadCount;
- (void)_updateBlackholedChatsExist:(BOOL)arg1;
@property(readonly, nonatomic) BOOL blackholedChatsExist;
- (id)registryChangeHistoryChatsToObserveSet;
- (id)registryChangeHistoryChatsToUnregisterSet;
- (id)_createdChatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)_createdChatForIMHandles:(id)arg1 style:(unsigned char)arg2 groupID:(id)arg3 displayName:(id)arg4 joinedChatsOnly:(BOOL)arg5;
- (id)_createdChatForIMHandle:(id)arg1;
- (id)_createdChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (void)setUserActivityForChat:(id)arg1 message:(id)arg2 orHandles:(id)arg3 title:(id)arg4;
- (id)_inPersonFromIMHandle:(id)arg1 isMe:(BOOL)arg2;
- (id)_inPersonNameForContact:(id)arg1 imHandle:(id)arg2;
- (id)_inPersonHandleFromIMHandle:(id)arg1 contact:(id)arg2;
- (void)setUserActivityForChat:(id)arg1 orHandles:(id)arg2 title:(id)arg3;
- (void)setActiveChatURL:(id)arg1;
- (id)chatForURL:(id)arg1 outMessageText:(id )arg2 outRecipientIDs:(id )arg3 outService:(id )arg4 outMessageGUID:(id )arg5;
- (id)messagesURLWithChat:(id)arg1 orHandles:(id)arg2 withMessageText:(id)arg3;
- (id)chatGUIDsForChat:(id)arg1;
- (id)chatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)chatForIMHandles:(id)arg1 chatName:(id)arg2 lasstAddressedHandle:(id)arg3 lastAddressedSIMID:(id)arg4;
- (id)chatForIMHandles:(id)arg1 chatName:(id)arg2;
- (id)chatForIMHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(BOOL)arg3 lastAddressedHandle:(id)arg4 lastAddressedSIMID:(id)arg5;
- (id)chatForIMHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(BOOL)arg3;
- (id)chatForIMHandles:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3;
- (IMChat* _Nonnull)chatForIMHandles:(NSArray<IMHandle*>*)arg1;
- (IMChat*)chatForIMHandle:(IMHandle*)arg1 lastAddressedHandle:(NSString*)arg2 lastAddressedSIMID:(id)arg3;
- (IMChat* _Nonnull)chatForIMHandle:(IMHandle*)arg1;
- (void)_unregisterChatWithGUID:(id)arg1;
- (void)_unregisterChat:(id)arg1;
- (void)unregisterChatWithGUID:(id)arg1;
- (void)unregisterChat:(id)arg1;
- (void)_registerChat:(id)arg1 isIncoming:(BOOL)arg2 guid:(id)arg3;
- (void)_registerChatDictionary:(id)arg1 forChat:(id)arg2 isIncoming:(BOOL)arg3 newGUID:(id)arg4;
- (void)_registerChatDictionary:(id)arg1 forChat:(id)arg2 isIncoming:(BOOL)arg3 newGUID:(id)arg4 shouldPostNotification:(BOOL)arg5;
- (void)dealloc;
- (id)initAsListener:(BOOL)arg1;
- (id)init;
- (IMChat*)_chatInstanceForGUID:(id)arg1;
- (void)_noteChatDealloc:(id)arg1;
- (void)_noteChatInit:(id)arg1;
- (id)performanceLogHandle;
- (void)_postMultiWayStateChangedNotification:(id)arg1;
- (void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;
- (void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;
- (id)_existingChatForTUConversation:(id)arg1;
- (id)_activeTUConversations;
- (id)activeCallForConversationUUID:(id)arg1;
- (void)setUpInitialCallState;
- (void)verifyFilteringForAllChats;
- (void)_IMChatGetIdentifiersAndServicesTestHook:(id)arg1 identifiers:(id )arg2 services:(id )arg3 personCentricEnabled:(BOOL)arg4;
- (void)_chat_closeSession:(id)arg1;
- (void)_chat_isDownloadingPurgedAssetsForChat:(id)arg1 queryID:(id)arg2;
- (void)_chat_downloadPurgedAttachmentsForChat:(id)arg1;
- (void)_chat_loadUncachedAttachmentsCount:(id)arg1 queryID:(id)arg2;
- (void)_chat_loadAttachments:(id)arg1 queryID:(id)arg2;
- (void)_chat_loadUnreadMessages:(id)arg1 limit:(unsigned long long)arg2 fallbackGUID:(id)arg3 queryId:(id)arg4;
- (void)_chat_loadFrequentReplies:(id)arg1 limit:(unsigned long long)arg2 queryID:(id)arg3;
- (void)_chat_markAsSpam:(id)arg1 queryID:(id)arg2 autoReport:(BOOL)arg3;
- (void)_chat_markAsSpamAutomatically:(id)arg1;
- (void)_chat_markAsSpam:(id)arg1 queryID:(id)arg2;
- (void)_chat_clearHistory:(id)arg1 beforeGUID:(id)arg2 afterGUID:(id)arg3 queryID:(id)arg4;
- (void)_chat_loadPagedHistory:(id)arg1 numberOfMessagesBefore:(unsigned long long)arg2 numberOfMessagesAfter:(unsigned long long)arg3 messageGUID:(id)arg4 queryID:(id)arg5;
- (void)_chat_loadHistory:(id)arg1 limit:(unsigned long long)arg2 beforeGUID:(id)arg3 afterGUID:(id)arg4 queryID:(id)arg5 ;
- (void)_chat_loadHistory:(id)arg1 limit:(unsigned long long)arg2 beforeGUID:(id)arg3 afterGUID:(id)arg4 threadIdentifier:(id)arg6 queryID:(id)arg5 API_AVAILABLE(macos(10.16), ios(14.0), watchos(7.0));
- (void)_chat:(id)arg1 updateIsBlackholed:(BOOL)arg2;
- (void)_chat:(id)arg1 updateIsFiltered:(BOOL)arg2;
- (void)_chat:(id)arg1 updateLastAddressedSIMID:(id)arg2;
- (void)_chat:(id)arg1 updateLastAddressedHandle:(id)arg2;
- (void)_chat:(id)arg1 updateDisplayName:(id)arg2;
- (void)_chat:(id)arg1 setValue:(id)arg2 forChatProperty:(id)arg3;
- (void)_chat:(id)arg1 setProperties:(id)arg2 ofParticipant:(id)arg3;
- (void)_chat_declineInvitation:(id)arg1;
- (void)_chat_archive:(id)arg1;
- (void)_chat_remove:(id)arg1;
- (void)_chat_leave:(id)arg1 leavingiMessageChat:(BOOL)arg2;
- (void)_chat:(id)arg1 joinWithProperties:(id)arg2;
- (void)_chat:(id)arg1 removeParticipants:(id)arg2 reason:(id)arg3 fromiMessageChat:(BOOL)arg4;
- (void)_chat:(id)arg1 inviteParticipants:(id)arg2 reason:(id)arg3 toiMessageChat:(BOOL)arg4;
- (void)_chat:(id)arg1 sendMessage:(id)arg2;
- (BOOL)_shouldShareMeCardForAlwaysAskAudienceWithChat:(id)arg1;
- (BOOL)_shouldShareMeCardForContactsOnlyAudienceWithChat:(id)arg1;
- (void)_setMeCardSharingOnMessage:(id)arg1 forChat:(id)arg2;
- (void)_setReplyToGuidOnMessage:(id)arg1 forChat:(id)arg2;
- (void)_trackUsageForMessage:(id)arg1;
- (id)_eventForMessage:(id)arg1;
- (void)_markHasHadSuccessfulQueryForChat:(id)arg1;
- (void)_chat:(id)arg1 sendSavedReceiptForMessage:(id)arg2;
- (void)_chat:(id)arg1 setPlayedExpressiveSendForMessage:(id)arg2;
- (void)_chat:(id)arg1 sendPlayedReceiptForMessage:(id)arg2;
- (void)_chat_storeItem:(id)arg1 inChat:(id)arg2;
- (void)_chat_sendReadReceiptForAllMessages:(id)arg1;
- (void)_chat:(id)arg1 sendReadReceiptForMessages:(id)arg2;
- (void)screenTimeEnablementChanged:(BOOL)arg1;
- (void)_removeChatIdFromChatIdToLastMessageItemMap:(id)arg1;
- (void)lastMessageForAllChats:(id)arg1;
- (void)blackholedChatsExist:(BOOL)arg1;
- (void)previouslyBlackholedChatLoadedWithHandleIDs:(id)arg1 chat:(id)arg2;
- (void)chatLoadedWithChatIdentifier:(id)arg1 chats:(id)arg2;
- (void)_previouslyBlackholedChatLoadedWithHandleIDs:(id)arg1 chat:(id)arg2;
- (void)_chatLoadedWithChatIdentifier:(id)arg1 chats:(id)arg2;
- (void)setupComplete;
- (void)_daemonReallyDied:(id)arg1;
- (void)setupComplete:(BOOL)arg1 info:(id)arg2;
- (void)__handleChatReconstructions:(id)arg1;
- (void)_handleChatReconstructions:(id)arg1;
- (void)_handleCachingAliasToCNIDMap:(id)arg1;
- (void)_batchFetchRemainingContactsOnLaunch;
- (void)_fetchInitialBatchOfContactsOnLaunch;
- (void)__handleMergedChatReconstructions:(id)arg1 fullReload:(BOOL)arg2;
- (void)updateChatDictionaryArray:(id)arg1 createdChat:(id)arg2 joinstate:(long long)arg3 setHasCommunicatedOveriMessage:(char *)arg4;
- (void)__handleMergedChatReconstructions:(id)arg1;
- (void)_resetChatRegistry;
- (id)chatPersonIDToChatMap;
- (void)_handleMergedChatReconstructions:(id)arg1;
- (id)_copyMergedChatsPairedArrayFromMergedChatsArray:(id)arg1;
- (void)chatsNeedRemerging:(id)arg1 groupedChats:(id)arg2;
- (void)frequentRepliesQuery:(id)arg1 finishedWithResult:(id)arg2 limit:(unsigned long long)arg3;
- (void)frequentRepliesQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(unsigned long long)arg5;
- (void)markAsSpamQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4;
- (void)isDownloadingQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(BOOL)arg4;
- (void)downloadedPurgedAssetBatchForChatIDs:(id)arg1 completedTransferGUIDs:(id)arg2;
- (void)finishedDownloadingPurgedAssetsForChatIDs:(id)arg1;
- (id)_chatForIdentifiers:(id)arg1;
- (void)uncachedAttachmentCountQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4;
- (void)attachmentQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4;
- (void)pagedHistoryQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 numberOfMessagesBefore:(unsigned long long)arg4 numberOfMessagesAfter:(unsigned long long)arg5 finishedWithResult:(id)arg6;
- (void)historyQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(unsigned long long)arg5;
- (void)_checkIfItemIsCorrupt:(id)arg1;
- (void)_checkLimitAndSetMessagesToKeepLoadedIfNeeded:(unsigned long long)arg1 chat:(id)arg2;
- (void)historicalMessageGUIDsDeleted:(id)arg1 chatGUIDs:(id)arg2 queryID:(id)arg3;
- (void)lastFailedMessageDateChanged:(long long)arg1;
- (void)unreadCountChanged:(long long)arg1;
- (void)chat:(id)arg1 updated:(id)arg2;
- (void)_updateInfo:(id)arg1 forGUID:(id)arg2 updatingUnreadCount:(BOOL)arg3 shouldPostUnreadNotification:(BOOL)arg4;
- (void)_updateInfo:(id)arg1 forGUID:(id)arg2 updatingUnreadCount:(BOOL)arg3;
- (void)_updateUnreadCountForChat:(id)arg1 shouldPostNotification:(BOOL)arg2;
- (void)_updateUnreadCountForChat:(id)arg1;
- (void)chat:(id)arg1 nicknamesUpdated:(id)arg2;
- (void)engroupParticipantsUpdatedForChat:(id)arg1;
- (void)chat:(id)arg1 engramIDUpdated:(id)arg2;
- (void)chat:(id)arg1 isFilteredUpdated:(BOOL)arg2;
- (void)chat:(id)arg1 lastSeenMessageGuidUpdated:(id)arg2;
- (void)chat:(id)arg1 lastAddressedSIMIDUpdated:(id)arg2;
- (void)chat:(id)arg1 lastAddressedHandleUpdated:(id)arg2;
- (void)chat:(id)arg1 displayNameUpdated:(id)arg2;
- (void)chat:(id)arg1 propertiesUpdated:(id)arg2;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 chatPersonCentricID:(id)arg5 member:(id)arg6 statusChanged:(int)arg7;
- (void)_updatePersonCentricIDToChatMapForChat:(id)arg1 toNewPersonCentricID:(id)arg2;
- (void)leftChat:(id)arg1;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 groupID:(id)arg5 chatPersonCentricID:(id)arg6 statusChanged:(int)arg7 handleInfo:(id)arg8;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 error:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 updateProperties:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 invitationReceived:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 groupID:(id)arg5 chatPersonCentricID:(id)arg6 messagesReceived:(id)arg7 messagesComingFromStorage:(BOOL)arg8;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 groupID:(id)arg5 chatPersonCentricID:(id)arg6 messageReceived:(id)arg7;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 notifySentMessage:(id)arg5 sendTime:(id)arg6;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 groupID:(id)arg5 chatPersonCentricID:(id)arg6 messageSent:(id)arg7;
- (void)_processMessagesForAccount:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 groupID:(id)arg5 chatPersonCentricID:(id)arg6 messages:(id)arg7 messagesComingFromStorage:(BOOL)arg8;
- (void)_processMessageForAccount:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 groupID:(id)arg5 chatPersonCentricID:(id)arg6 message:(id)arg7;
- (BOOL)_shouldSwitchAccountAddingMessagesToChat:(id)arg1 messageItems:(id)arg2 messagesComingFromStorage:(BOOL)arg3 chatProperties:(id)arg4;
- (id)_existingChatForChatStyle:(unsigned char)arg1 groupID:(id)arg2 chatIdentifier:(id)arg3 accountID:(id)arg4;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageUpdated:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5;
- (void)_account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5;
- (void)loadedChats:(id)arg1;
- (void)_startBackgroundProcessingChats:(id)arg1 completion:(id)arg2;
- (void)mergeWithCopyRegistry:(id)arg1;
- (id)copyForBatchProcessing;
- (void)enumerateAllChatsAndAttachmentSizesWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

@interface IMChatRegistry (Rome)
-(void) _loadChatsFilteredUsingPredicate:(NSPredicate*)arg2 lastMessageOlderThan:(id)arg3 limit:(unsigned long long)arg4 waitForReply:(bool)arg5 completionHandler:(void (^)(NSArray<IMChat*>*, NSError*))arg6;
@end
