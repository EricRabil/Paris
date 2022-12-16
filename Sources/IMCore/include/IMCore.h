#import "CLLocationManagerDelegate-Protocol.h"
#import "FMFSessionDelegate-Protocol.h"
#import "IMAccount.h"
#import "IMAccountController.h"
#import "IMActionsController.h"
#import "IMAddressBook.h"
#import "IMAggregateAcknowledgmentChatItem.h"
#import "IMAggregateMessagePartChatItem.h"
#import "IMAnimatedEmojiMessagePartChatItem.h"
#import "IMAssociatedMessageChatItem.h"
#import "IMAssociatedMessageItem-IMItemsController.h"
#import "IMAssociatedStickerChatItem.h"
#import "IMAttachment.h"
#import "IMAttachmentMessagePartChatItem.h"
#import "IMAudioMessageChatItem.h"
#import "IMAutomation.h"
#import "IMAutomationBatchMessageOperations.h"
#import "IMAutomationGroupChat.h"
#import "IMAutomationMessageSend.h"
#import "IMBalloonApp.h"
#import "IMBalloonAppExtension.h"
#import "IMBalloonBrowserPlugin.h"
#import "IMBalloonPlugin.h"
#import "IMBalloonPluginAttributionController.h"
#import "IMBalloonPluginController-Protocol.h"
#import "IMBalloonPluginDataSource.h"
#import "IMBalloonPluginManager.h"
#import "IMBlackholeChatItem.h"
#import "IMChat.h"
#import "IMChatHistoryController.h"
#import "IMChatItem.h"
#import "IMChatItemRules-Protocol.h"
#import "IMChatRegistry.h"
#import "IMChatTranscriptItem-Protocol.h"
#import "IMChatTranscriptStatusItem-Protocol.h"
#import "IMCloudKitAccountNeedsRepairSyncProgress.h"
#import "IMCloudKitCloudKitStorageIsFullSyncProgress.h"
#import "IMCloudKitDeviceStorageIsFullSyncProgress.h"
#import "IMCloudKitErrorProgressTest.h"
#import "IMCloudKitEventHandler-Protocol.h"
#import "IMCloudKitEventNotificationManager.h"
#import "IMCloudKitEventNotificationManagerRuntimeTest.h"
#import "IMCloudKitEventNotificationRuntimeTestSuite.h"
#import "IMCloudKitHiddenSyncProgress.h"
#import "IMCloudKitHookTestSingleton.h"
#import "IMCloudKitHooks.h"
#import "IMCloudKitKeyRollPendingErrorProgress.h"
#import "IMCloudKitMockSyncState.h"
#import "IMCloudKitPausedSyncProgress.h"
#import "IMCloudKitSyncProgress.h"
#import "IMCloudKitSyncProgressIsSyncing.h"
#import "IMCloudKitSyncProgressRuntimeTest.h"
#import "IMCloudKitSyncProgressRuntimeTestDeleting.h"
#import "IMCloudKitSyncProgressRuntimeTestDownloading.h"
#import "IMCloudKitSyncProgressRuntimeTestPaused.h"
#import "IMCloudKitSyncProgressRuntimeTestPreparing.h"
#import "IMCloudKitSyncProgressRuntimeTestUploading.h"
#import "IMCloudKitSyncState.h"
#import "IMCloudKitSyncStatistics.h"
#import "IMCommLimitsPolicyCache.h"
#import "IMCore.h"
#import "IMCoreAutomationHook.h"
#import "IMDDController.h"
#import "IMDaemonController.h"
#import "IMDaemonListener.h"
#import "IMDaemonListenerProtocol-Protocol.h"
#import "IMDateChatItem.h"
#import "IMDirectlyObservableObject.h"
#import "IMEmoteMessageChatItem.h"
#import "IMErrorMessagePartChatItem.h"
#import "IMExpirableMessageChatItem.h"
#import "IMExpressiveSendAsTextChatItem.h"
#import "IMFMFSession.h"
#import "IMFileTransferCenter.h"
#import "IMGroupActionChatItem.h"
#import "IMGroupActionItem-IMTranscriptChatItemRules.h"
#import "IMGroupTitleChangeChatItem.h"
#import "IMGroupTitleChangeItem-IMTranscriptChatItemRules.h"
#import "IMGUIDItem.h"
#import "IMHandle.h"
#import "IMHandleRegistrar.h"
#import "IMIDStatusController.h"
#import "IMItem-IMChat_Internal.h"
#import "IMItemChatContext.h"
#import "IMItemsController.h"
#import "IMInlineReplyChatItemRules.h"
#import "IMInlineReplyController.h"
#import "IMLoadMoreChatItem.h"
#import "IMLoadMoreRecentChatItem.h"
#import "IMLocatingChatItem.h"
#import "IMLocationManager-Protocol.h"
#import "IMLocationManager.h"
#import "IMLocationManagerUtils.h"
#import "IMLocationShareActionChatItem.h"
#import "IMLocationShareOfferChatItem.h"
#import "IMLocationShareStatusChangeItem-IMTranscriptChatItemRules.h"
#import "IMMe.h"
#import "IMMessage.h"
#import "IMMessageAcknowledgmentChatItem.h"
#import "IMMessageActionChatItem.h"
#import "IMMessageActionItem-IMTranscriptChatItemRules.h"
#import "IMMessageAttributionChatItem.h"
#import "IMMessageChatItem-Protocol.h"
#import "IMMessageChatItem.h"
#import "IMMessageEditChatItem.h"
#import "IMMessageEffectControlChatItem.h"
#import "IMMessageItem-IMChat_Internal.h"
#import "IMMessageItemChatContext.h"
#import "IMMessagePartChatItem.h"
#import "IMMessageStatusChatItem.h"
#import "IMNicknameController.h"
#import "IMNumberChangedChatItem.h"
#import "IMOneTimeCodeAccelerator.h"
#import "IMOrderingMetricCollector.h"
#import "IMOrderingTools.h"
#import "IMParentalControls.h"
#import "IMParentalControlsService.h"
#import "IMParticipantChangeChatItem.h"
#import "IMParticipantChangeItem-IMTranscriptChatItemRules.h"
#import "IMPeople.h"
#import "IMPeopleCollection.h"
#import "IMPerson.h"
#import "IMPersonRegistrar.h"
#import "IMPluginChatItemProtocol-Protocol.h"
#import "IMPluginPayload.h"
#import "IMRecentItemsList-FetchUtilities.h"
#import "IMRemindersIntegration.h"
#import "IMRemoteDaemonProtocol-Protocol.h"
#import "IMReportSpamChatItem.h"
#import "IMReusableBalloonPluginController-Protocol.h"
#import "IMSMSSpamChatItem.h"
#import "IMSPIAttachment.h"
#import "IMSPIChat.h"
#import "IMSPIHandle.h"
#import "IMSPIMessage.h"
#import "IMSPIRecentEvent.h"
#import "IMSPISuggestionsObject.h"
#import "IMSendProgress.h"
#import "IMSendProgressDelegate-Protocol.h"
#import "IMSendProgressRealTimeDataSource.h"
#import "IMSendProgressTimeDataSource-Protocol.h"
#import "IMSenderChatItem.h"
#import "IMService-IMService_GetService.h"
#import "IMServiceAgent.h"
#import "IMServiceAgentImpl.h"
#import "IMServiceChatItem.h"
#import "IMServiceImpl.h"
#import "IMSimulatedAccount.h"
#import "IMSimulatedAccountController.h"
#import "IMSimulatedChat.h"
#import "IMSimulatedChatDelegate-Protocol.h"
#import "IMSimulatedDaemonController.h"
#import "IMSimulatedDaemonListener-Protocol.h"
#import "IMSuggestionsService.h"
#import "IMSystemMonitorListener-Protocol.h"
#import "IMTUConversationChatItem.h"
#import "IMTUConversationItem-IMTranscriptChatItemRules.h"
#import "IMTextMessagePartChatItem.h"
#import "IMTimingCollection-IMCoreSetupTimingAdditions.h"
#import "IMTranscriptChatItem.h"
#import "IMTranscriptChatItemRules.h"
#import "IMTranscriptEffectHelper.h"
#import "IMTranscriptPluginBreadcrumbChatItem.h"
#import "IMTranscriptPluginChatItem.h"
#import "IMTranscriptPluginStatusChatItem.h"
#import "IMTypingChatItem.h"
#import "IMTypingPluginChatItem.h"
#import "IMUnreadCountChatItem.h"
#import "IMVisibleAssociatedMessageHost-Protocol.h"
#import "IMWhitelistController.h"
#import "INSpeakable-Protocol.h"
#import "Person.h"
#import "Presentity.h"
#import "TUCallProviderManagerDelegate-Protocol.h"
#import "TUConversationManagerDelegate-Protocol.h"
#import "_IMBalloonBundleApp.h"
#import "_IMBalloonExtensionApp.h"
#import "BusinessChat.h"

#ifndef IMCORE_TYPES

#define IMCORE_TYPES

NSString* IMNormalizedPhoneNumberForPhoneNumber(NSString*, NSString*, BOOL);
BOOL IMSPIQueryIMMessageItemsWithGUIDsAndQOS(NSArray<NSString *> *__strong, dispatch_qos_class_t, __strong dispatch_queue_t, __strong void (^)(NSArray*));
BOOL IMSPIQueryMessagesWithGUIDsAndQOS(NSArray<NSString *> *__strong, dispatch_qos_class_t, __strong dispatch_queue_t, __strong void (^)(NSArray*));
NSObject* IMCopyDDScannerResultFromAttributedStringData(NSData*);
BOOL IMCoreSimulatedEnvironmentEnabled();
void _IMIntentsApiInit() API_AVAILABLE(macos(13.0));

extern NSString* ABIMHandlesChangedNotification;
extern NSString* IMAVChatInfoNotification;
extern NSString* IMAVChatVideoStillNotification;
extern NSString* IMAccountActivatedNotification;
extern NSString* IMAccountAliasValidationStatusChangedNotification;
extern NSString* IMAccountAliasesChangedNotification;
extern NSString* IMAccountAuthorizationIDChangedNotification;
extern NSString* IMAccountAuthorizationTokenChangedNotification;
extern NSString* IMAccountCapabilitiesChangedNotification;
extern NSString* IMAccountControllerAccountAddedNotification;
extern NSString* IMAccountControllerAccountRemovedNotification;
extern NSString* IMAccountControllerAccountWillBeRemovedNotification;
extern NSString* IMAccountControllerOperationalAccountsChangedNotification;
extern NSString* IMAccountControllerUpdatedNotification;
extern NSString* IMAccountDeactivatedNotification;
extern NSString* IMAccountDisplayNameChangedNotification;
extern NSString* IMAccountGroupsChangedNotification;
extern NSString* IMAccountInvisibilityChangedNotification;
extern NSString* IMAccountLoggedInNotification;
extern NSString* IMAccountLoggedOutNotification;
extern NSString* IMAccountLoginStatusChangedNotification;
extern NSString* IMAccountNoLongerJustLoggedInNotification;
extern NSString* IMAccountPrivacySettingsChangedNotification;
extern NSString* IMAccountProfileChangedNotification;
extern NSString* IMAccountProfileValidationStatusChangedNotification;
extern NSString* IMAccountPropertiesAndPicturesLoadedNotification;
extern NSString* IMAccountRegistrationStatusChangedNotification;
extern NSString* IMAccountSMSRelayPinAlertNotification;
extern NSString* IMAccountSMSRelayPinDismissNotification;
extern NSString* IMAccountSettingsChangedNotification;
extern NSString* IMAccountStatusChangedNotification;
extern NSString* IMAccountStatusInfoChangedNotification;
extern NSString* IMAccountStatusMessageChangedNotification;
extern NSString* IMAccountVettedAliasesChangedNotification;
extern NSString* IMAddressBookChangedNotification;
extern NSString* IMBalloonPluginAttributionChangedNotification;
extern NSString* IMBalloonPluginEnabledStateChangedNotification;
extern NSString* IMBalloonPluginIconsUpdatedNotification;
extern NSString* IMBalloonPluginManagerInstalledAppsChangedNotification;
extern NSString* IMBuddyListSortChangedNotification;
extern NSString* IMBuddyPropertiesChangedDoneNotification;
extern NSString* IMChatConnectivityChangedNotification;
extern NSString* IMChatDidFetchAttachmentsNotification;
extern NSString* IMChatDisplayNameChangedNotification;
extern NSString* IMChatEngroupFinishedUpdatingNotification;
extern NSString* IMChatErrorDidOccurNotification;
extern NSString* IMChatFMFStatusDidChangeNotification;
extern NSString* IMChatIsFilteredChangedNotification;
extern NSString* IMChatItemsDidChangeNotification;
extern NSString* IMChatJoinStateDidChangeNotification;
extern NSString* IMChatLastAddressedHandleChangedNotification;
extern NSString* IMChatLoadRequestDidCompleteNotification;
extern NSString* IMChatMessageDidChangeNotification;
extern NSString* IMChatMessageFailureCountChangedNotification;
extern NSString* IMChatMessageReceivedNotification;
extern NSString* IMChatMessageSendFailedNotification;
extern NSString* IMChatMultiWayStateChangedNotification;
extern NSString* IMChatMultiWayStateChangedRefreshConversationListNotification;
extern NSString* IMChatOverallChatStatusDidChangeNotification;
extern NSString* IMChatParticipantStateDidChangeNotification;
extern NSString* IMChatParticipantsDidChangeNotification;
extern NSString* IMChatPropertiesChangedNotification;
extern NSString* IMChatPurgedAttachmentsDownloadBatchCompleteNotification;
extern NSString* IMChatPurgedAttachmentsDownloadCompleteNotification;
extern NSString* IMChatReceivedDowngradeNotification;
extern NSString* IMChatRecipientDidChangeNotification;
extern NSString* IMChatRecipientReceivedDowngradeNotification;
extern NSString* IMChatRegistryBlackholedChatsExistNotification;
extern NSString* IMChatRegistryDidLoadNotification;
extern NSString* IMChatRegistryDidRegisterChatNotification;
extern NSString* IMChatRegistryDidRemergeChatsNotification;
extern NSString* IMChatRegistryDidUnregisterChatNotification;
extern NSString* IMChatRegistryFailedCountChangedNotification;
extern NSString* IMChatRegistryLastFailedMessageDateChangedNotification;
extern NSString* IMChatRegistryLastMessageLoadedNotification;
extern NSString* IMChatRegistryMessageSentNotification;
extern NSString* IMChatRegistryUnreadCountChangedNotification;
extern NSString* IMChatRegistryWillLoadNotification;
extern NSString* IMChatRegistryWillRemergeChatsNotification;
extern NSString* IMChatRegistryWillUnregisterChatNotification;
extern NSString* IMChatSendingServiceChangedNotification;
extern NSString* IMChatUnreadCountChangedNotification;
extern NSString* IMChatWatermarkDidUpdateNotification;
extern NSString* IMCloudKitAttemptedToDisableiCloudBackupsNotification;
extern NSString* IMCloudKitFetchedRampStateNotification;
extern NSString* IMCloudKitFetchedSyncDebuggingInfoNotification;
extern NSString* IMCloudKitFetchedSyncStatsNotification;
extern NSString* IMCustomStatusMessagesChangedNotification;
extern NSString* IMDaemonConnectionLostNotification;
extern NSString* IMDaemonDidConnectNotification;
extern NSString* IMDaemonDidDisconnectNotification;
extern NSString* IMDaemonDidWillConnectNotification;
extern NSString* IMDaemonWillConnectNotification;
extern NSString* IMDisplayStatusTextNotification;
extern NSString* IMErrorPostedNotification;
extern NSString* IMFMFSessionActiveDeviceChangedNotification;
extern NSString* IMFMFSessionHandleLocationRefreshedNotification;
extern NSString* IMFMFSessionLocationReceivedNotification;
extern NSString* IMFMFSessionRelationshipStatusDidChangeNotification;
extern NSString* IMFileTransferCreatedNotification;
extern NSString* IMFileTransferFinishedNotification;
extern NSString* IMFileTransferRefreshAllNotification;
extern NSString* IMFileTransferRemovedNotification;
extern NSString* IMFileTransferUpdatedNotification;
extern NSString* IMHandleAuthorizationRequestNotification;
extern NSString* IMHandleCapabilitiesChangedNotification;
extern NSString* IMHandleCustomBackgroundColorChangedNotification;
extern NSString* IMHandleCustomFontColorChangedNotification;
extern NSString* IMHandleExtraPropertiesChangedNotification;
extern NSString* IMHandleFeedUpdatedDateChangedNotification;
extern NSString* IMHandleGroupsChangedNotification;
extern NSString* IMHandleIdlePulseNotification;
extern NSString* IMHandleInfoChangedNotification;
extern NSString* IMHandleIsBotChangedNotification;
extern NSString* IMHandleIsBuddyStatusChangedNotification;
extern NSString* IMHandleIsMobileChangedNotification;
extern NSString* IMHandlePictureChangedNotification;
extern NSString* IMHandlePropertiesChangedNotification;
extern NSString* IMHandleRegistrarAddressBookChangedNotification;
extern NSString* IMHandleSortOrderChangedNotification;
extern NSString* IMHandleStatusChangedNotification;
extern NSString* IMHandlesForABPersonChangedNotification;
extern NSString* IMIDStatusControllerUpdatedNotification;
extern NSString* IMLocalObjectDidDisconnectNotification;
extern NSString* IMManagedPreferencesChangedNotification;
extern NSString* IMMeChangedNotification;
extern NSString* IMMeNowPlayingInfoChangedNotification;
extern NSString* IMMePictureChangedNotification;
extern NSString* IMMeStatusChangedNotification;
extern NSString* IMMyStatusChangedNotification;
extern NSString* IMNicknameControllerDidLoadNotification;
extern NSString* IMNicknameDidChangeNotification;
extern NSString* IMNicknamePreferencesDidChangeNotification;
extern NSString* IMPeopleAddedNotification;
extern NSString* IMPeopleChangedNotification;
extern NSString* IMPeopleRemovedNotification;
extern NSString* IMPersonChangedNotification;
extern NSString* IMPersonInfoChangedNotification;
extern NSString* IMPersonStatusChangedNotification;
extern NSString* IMPersonalNicknameDidChangeNotification;
extern NSString* IMPreferredAccountForServiceChangedNotification;
extern NSString* IMRemoteObjectDidDisconnectNotification;
extern NSString* IMSPILastFailedMessageDateChangedNotification;
extern NSString* IMSPIUnreadMessageCountChangedNotification;
extern NSString* IMServiceDefaultsChangedNotification;
extern NSString* IMServiceDidConnectNotification;
extern NSString* IMServiceDidDisconnectNotification;
extern NSString* IMServiceDidReconnectNotification;
extern NSString* IMServiceInitialSyncPerformedNotification;
extern NSString* IMServiceNotificationActiveAccountChangedNotification;
extern NSString* IMServiceStatusChangedNotification;
extern NSString* IMStatusImagesChangedAppearanceNotification;
extern NSString* kFZDaemonLaunchedDistNotification;

API_AVAILABLE(macos(10.16), ios(14.0), watchos(7.0))
NSString* IMCreateThreadIdentifierForMessagePartChatItem(IMMessagePartChatItem* chatItem);

enum {
    IMChatServiceForSendingAvailabilityErrorNone = 0,
    IMChatServiceForSendingAvailabilityErrorTooManyRecipients = 1,
    IMChatServiceForSendingAvailabilityErrorIMessageRequired = 2,
    IMChatServiceForSendingAvailabilityErrorMMSRequired = 3,
    IMChatServiceForSendingAvailabilityErrorNoAvailableServices = 4,
};
typedef int8_t IMChatServiceForSendingAvailabilityError;

void IMChatCalculateServiceForSendingNewComposeMaybeForce
               (NSArray<NSString*> *canonicalIDSAddresses,NSString *senderLastAddressedHandle,
               NSString *senderLastAddressedSIMID,BOOL forceMMS,BOOL hasEmailRecipients,
               BOOL hasCachedQuery,BOOL isDowngraded,BOOL hasHistory,IMService* previousService,
                void(^completion)(BOOL allAddressesiMessageCapable, NSDictionary *perRecipientAvailability, BOOL checkedServer, IMChatServiceForSendingAvailabilityError error));

#endif
