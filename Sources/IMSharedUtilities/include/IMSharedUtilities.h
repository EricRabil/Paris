#import "CNChangeHistoryEventVisitor.h"
#import "CNContact-IMCoreAdditions.h"
#import "FZMessage.h"
#import "HTMLToSuper_A_Frame.h"
#import "HTMLToSuper_BODY_Frame.h"
#import "HTMLToSuper_BR_Frame.h"
#import "HTMLToSuper_B_Frame.h"
#import "HTMLToSuper_Default_Frame.h"
#import "HTMLToSuper_EM_Frame.h"
#import "HTMLToSuper_FONT_Frame.h"
#import "HTMLToSuper_I_Frame.h"
#import "HTMLToSuper_OBJECT_Frame.h"
#import "HTMLToSuper_SPAN_Frame.h"
#import "HTMLToSuper_STRIKE_Frame.h"
#import "HTMLToSuper_STRONG_Frame.h"
#import "HTMLToSuper_S_Frame.h"
#import "HTMLToSuper_U_Frame.h"
#import "IDSServiceDelegate.h"
#import "IMAKAppleIDAuthenticationController.h"
#import "IMAnimatedImagePreviewGenerator.h"
#import "IMAppleStoreHelper.h"
#import "IMAssociatedMessageItem.h"
#import "IMAttachmentUtilities.h"
#import "IMAttributedStringParser.h"
#import "IMAttributedStringParserContext.h"
#import "IMAutomaticEventNotificationQueue.h"
#import "IMBagUtilities.h"
#import "IMBatteryStatus.h"
#import "IMBroadcastingKeyValueCollection.h"
#import "IMBusinessNameManager.h"
#import "IMCKPadding.h"
#import "IMCTSMSUtilities.h"
#import "IMContactCardPreviewGenerator.h"
#import "IMContactStore.h"
#import "IMContactStoreChangeHistoryEventsHandler.h"
#import "IMCoreAutomationNotifications.h"
#import "IMCoreSpotlightUtilities.h"
#import "IMDContactStoreChangeHistoryEventsHandler.h"
#import "IMDSharedUtilitiesPluginPayload.h"
#import "IMDefaults.h"
#import "IMDeviceConditions.h"
#import "IMDeviceUtilities.h"
#import "IMEventListener.h"
#import "IMEventListenerList.h"
#import "IMEventListenerReference.h"
#import "IMEventListenerResponse.h"
#import "IMEventNotification.h"
#import "IMEventNotificationBroadcaster.h"
#import "IMEventNotificationManager.h"
#import "IMEventNotificationQueue.h"
#import "IMEventNotificationQueueDelegate.h"
#import "IMFeatureFlags.h"
#import "IMFileTransfer.h"
#import "IMFromSuperParserContext.h"
#import "IMGIFUtils.h"
#import "IMGroupActionItem.h"
#import "IMGroupBlacklistManager.h"
#import "IMGroupTitleChangeItem.h"
#import "IMHTMLToSuperParserContext.h"
#import "IMIDSUtilities.h"
#import "IMINInteractionUtilities.h"
#import "IMImagePreviewGenerator.h"
#import "IMImageSource.h"
#import "IMImageUtilities.h"
#import "IMItem.h"
#import "IMKeyValueCollection.h"
#import "IMKeyValueCollectionDictionaryStorage.h"
#import "IMKeyValueCollectionStorage.h"
#import "IMKeyValueCollectionUserDefaultsStorage.h"
#import "IMLocationShareStatusChangeItem.h"
#import "IMLogDump.h"
#import "IMMapPreviewGenerator.h"
#import "IMMeCardSharingStateController.h"
#import "IMMessageAcknowledgmentStringHelper.h"
#import "IMMessageActionItem.h"
#import "IMMessageItem.h"
#import "IMMessageNotificationController.h"
#import "IMMessageNotificationTimeManager.h"
#import "IMMessageNotificationTimer.h"
#import "IMMetricsCollector.h"
#import "IMMoviePreviewGenerator.h"
#import "IMNickname.h"
#import "IMNicknameAvatar.h"
#import "IMNicknameAvatarImage.h"
#import "IMNicknameEncryptionCipherRecordField.h"
#import "IMNicknameEncryptionFieldTag.h"
#import "IMNicknameEncryptionHelpers.h"
#import "IMNicknameEncryptionKey.h"
#import "IMNicknameEncryptionPlainRecordField.h"
#import "IMNicknameEncryptionPreKey.h"
#import "IMNicknameEncryptionRecordTag.h"
#import "IMNicknameEncryptionTag.h"
#import "IMNicknameFieldEncryptionKey.h"
#import "IMNicknameFieldTaggingKey.h"
#import "IMNicknameRecordTaggingKey.h"
#import "IMNotificationCenterEventListener.h"
#import "IMOneTimeCodeUtilities.h"
#import "IMParticipantChangeItem.h"
#import "IMPassKitPreviewGenerator.h"
#import "IMPreviewGenerator.h"
#import "IMPreviewGeneratorManager.h"
#import "IMPreviewGeneratorProtocol.h"
#import "IMRecentItem.h"
#import "IMRecentItemsList.h"
#import "IMRemoteObjectCoding.h"
#import "IMRequirementLogger.h"
#import "IMRuntimeTest.h"
#import "IMRuntimeTestCase.h"
#import "IMRuntimeTestRun.h"
#import "IMRuntimeTestSuite.h"
#import "IMRuntimeTestSuiteTestRun.h"
#import "IMSandboxingUtils.h"
#import "IMSharedMessage3rdPartySummary.h"
#import "IMSharedMessageAppSummary.h"
#import "IMSharedMessageDTSummary.h"
#import "IMSharedMessageHandwritingSummary.h"
#import "IMSharedMessagePhotosSummary.h"
#import "IMSharedMessageRichLinkSummary.h"
#import "IMSharedMessageSendingUtilities.h"
#import "IMSharedUtilities.h"
#import "IMSharedUtilitiesProtoCloudKitEncryptedGroupAction.h"
#import "IMSharedUtilitiesProtoCloudKitEncryptedGroupTitleChange.h"
#import "IMSharedUtilitiesProtoCloudKitEncryptedLocationShareStatusChange.h"
#import "IMSharedUtilitiesProtoCloudKitEncryptedMessage.h"
#import "IMSharedUtilitiesProtoCloudKitEncryptedMessageAction.h"
#import "IMSharedUtilitiesProtoCloudKitEncryptedParticipantChange.h"
#import "IMShellCommandRunner.h"
#import "IMSingletonOverride.h"
#import "IMSingletonOverriding.h"
#import "IMSingletonProxy.h"
#import "IMSpamFilterHelper.h"
#import "IMSticker.h"
#import "IMStickerPack.h"
#import "IMSuperToPlainParserContext.h"
#import "IMSuperToSuperSanitizerContext.h"
#import "IMTapback.h"
#import "IMTapbackSender.h"
#import "IMTUConversationItem.h"
#import "IMToSuperParserContext.h"
#import "IMToSuperParserFrame.h"
#import "IMTranscoderTelemetry.h"
#import "IMUTITypeInformation.h"
#import "IMUnarchiverDecoder.h"
#import "IMUnitTestBundleLoader.h"
#import "IMUnitTestFrameworkLoader.h"
#import "IMUnitTestLogger.h"
#import "IMUnitTestRunner.h"
#import "IMUserDefaults-IMEngramUtilities.h"
#import "IMWeakReferenceCollection.h"
#import "IMXMLParser.h"
#import "IMXMLParserContext.h"
#import "IMXMLParserFrame.h"
#import "IMXMLReparser.h"
#import "IMXMLReparserContext.h"
#import "NSArray-IMIDSUtilities.h"
#import "NSData-IMKeyValueCollectionUserDefaultsStorage.h"
#import "NSDate-IMCoreAdditions.h"
#import "NSDictionary-IMSharedUtilitiesAdditions.h"
#import "NSError-IMSharedUtilitiesAdditions.h"
#import "NSFileManager-IMSharedUtilities.h"
#import "NSNumber-IMKeyValueCollectionUserDefaultsStorage.h"
#import "NSObject-IMTesting.h"
#import "NSObject.h"
#import "NSProxy-NSProxyWorkaround.h"
#import "NSString-IMPathAdditions.h"
#import "NSURL-IMPathAdditions.h"
#import "XCTestObservation.h"

NSString* IMAttachmentPersistentPath(NSString* guid, NSString* filename, NSString* mimeType, NSString* UTI);
NSAttributedString* IMCreateSuperFormatStringFromPlainTextString(NSString*);
NSSet<Class> *IMExtensionPayloadUnarchivingClasses();

// MARK: - Extension Payload
extern NSString* IMExtensionPayloadBalloonLayoutInfoKey;
extern NSString* IMExtensionPayloadBalloonLiveLayoutInfoKey;
extern NSString* IMExtensionPayloadBalloonLayoutClassKey;
extern NSString* IMExtensionPayloadURLKey;
extern NSString* IMExtensionPayloadDataKey;
extern NSString* IMExtensionPayloadDataFilePathKey;
/// Not my typo, Apple.
extern NSString* IMExtensionPayloadAccessibilityLableKey;
extern NSString* IMExtensionPayloadAppIconKey;
extern NSString* IMExtensionPayloadAppNameKey;
extern NSString* IMExtensionPayloadAdamIDIKey;
extern NSString* IMExtensionPayloadStatusTextKey;
extern NSString* IMExtensionPayloadLocalizedDescriptionTextKey;
extern NSString* IMExtensionPayloadAlternateTextKey;
extern NSString* IMExtensionPayloadUserSessionIdentifier;
// MARK: - Layout Info
extern NSString* IMBalloonLayoutInfoImageTitleKey;
extern NSString* IMBalloonLayoutInfoImageSubTitleKey;
extern NSString* IMBalloonLayoutInfoCaptionKey;
extern NSString* IMBalloonLayoutInfoSubcaptionKey;
extern NSString* IMBalloonLayoutInfoSecondarySubcaptionKey;
extern NSString* IMBalloonLayoutInfoTertiarySubcaptionKey;
// MARK: - Bundle IDs
extern NSString* IMBalloonBundleIdentifierBusiness;
extern NSString* IMBalloonPluginIdentifierRichLinks;

void IMSharedHelperReplaceExtensionPayloadDataWithFilePathForMessage(IMMessageItem*, NSString*);

API_AVAILABLE(macos(10.16), ios(14.0), watchos(7.0))
BOOL IMEnableInlineReply();

extern NSString* IMMentionAttributeName API_AVAILABLE(macos(10.16), ios(14.0), watchos(7.0));
extern NSString* IMMentionConfirmedMention API_AVAILABLE(macos(10.16), ios(14.0), watchos(7.0));
extern NSString* IMMentionAutomaticConfirmedMention API_AVAILABLE(macos(10.16), ios(14.0), watchos(7.0));
extern NSString* IMMentionOverrideRemoveMention API_AVAILABLE(macos(10.16), ios(14.0), watchos(7.0));
extern NSString* IMMentionOriginalTextMention API_AVAILABLE(macos(10.16), ios(14.0), watchos(7.0));
extern NSString* IMMentionPrefixCharacter API_AVAILABLE(macos(10.16), ios(14.0), watchos(7.0));
extern NSString* IMMentionUnconfirmedDirectMention API_AVAILABLE(macos(10.16), ios(14.0), watchos(7.0));

API_AVAILABLE(macos(10.16), ios(14.0), watchos(7.0))
NSString* IMMessageCreateThreadIdentifierWithOriginatorGUID(long long index, long long end, long long start, NSString* guid);

API_AVAILABLE(macos(10.16), ios(14.0), watchos(7.0))
NSString* IMMessageCreateAssociatedMessageGUIDFromThreadIdentifier(NSString* identifier) NS_RETURNS_RETAINED;

API_DEPRECATED("Removed", macos(10.0, 12.5), ios(10.0, 15.2))
NSArray<IMItem*> * FZCreateIMMessageItemsFromSerializedArray(NSArray * serialized) NS_RETURNS_RETAINED;

BOOL IMSharedHelperPersonCentricMergingEnabled(void);

API_DEPRECATED("Removed", macos(10.0, 12.5), ios(10.0, 15.2))
NSArray * FZCreateSerializedIMMessageItemsfromArray(NSArray<IMMessageItem*> * imMessageItems) NS_RETURNS_RETAINED;

API_AVAILABLE(macos(13.0), ios(16.0))
NSArray * IMCreateItemsFromSerializedArray(NSArray * iMMessageItems) NS_RETURNS_RETAINED;

API_AVAILABLE(macos(13.0), ios(16.0))
NSArray * IMCreateSerializedItemsFromArray(NSArray * serialiedItems) NS_RETURNS_RETAINED;

typedef NS_ENUM(int64_t, IMAssociatedMessageType) {
    IMAssociatedMessageTypeAcknowledgmentHeart                  = 2000,
    IMAssociatedMessageTypeAcknowledgmentThumbsUp               = 2001,
    IMAssociatedMessageTypeAcknowledgmentThumbsDown             = 2002,
    IMAssociatedMessageTypeAcknowledgmentHa                     = 2003,
    IMAssociatedMessageTypeAcknowledgmentExclamation            = 2004,
    IMAssociatedMessageTypeAcknowledgmentQuestionMark           = 2005,
    IMAssociatedMessageTypeAcknowledgmentDeselectedHeart        = 3000,
    IMAssociatedMessageTypeAcknowledgmentDeselectedThumbsUp     = 3001,
    IMAssociatedMessageTypeAcknowledgmentDeselectedThumbsDown   = 3002,
    IMAssociatedMessageTypeAcknowledgmentDeselectedHa           = 3003,
    IMAssociatedMessageTypeAcknowledgmentDeselectedExclamation  = 3004,
    IMAssociatedMessageTypeAcknowledgmentDeselectedQuestionMark = 3005,
};

#import <CoreData/CoreData.h>

@class CNContactStore;

NS_ASSUME_NONNULL_BEGIN
@interface NSPersistentStoreRequest (What)
@property(nullable,nonatomic,strong)NSPredicate* predicate;
@property(nullable, nonatomic, strong) NSArray<NSSortDescriptor *> *sortDescriptors;
@property(nullable, nonatomic, copy) NSArray *propertiesToFetch;
@end

@interface CNContactImageFetchRequest: NSObject
-(instancetype)initWithContactIdentifiers:(NSArray<NSString*>*)identifiers;
-(NSPersistentStoreRequest*)persistentStoreRequest;
@end

@interface CNCDGroupFetcher: NSObject
+(NSPersistentStoreRequest*)fetchRequestWithEntityName:(NSString*)entityName;
@end

@interface CNCDPersistenceContext: NSObject
- (void)performBlockAndWaitWithManagedObjectContext:(void (^)(NSManagedObjectContext * context))block;
@end

@interface CNCDPersistenceStack: NSObject
-(CNCDPersistenceContext*)makePersistenceContext;
@end

@interface CNCDChangeHistoryStore: NSObject
-(CNCDPersistenceStack*)persistenceStack;
@end

@interface CNCoreDataMapperX: NSObject
-(CNCDChangeHistoryStore*)changeHistoryStore;
@end

@interface CNContactStore (Unshackled)
+(NSString*)storeIdentifierFromContactIdentifier:(NSString*)identifier;
-(id)executeFetchRequest:(NSPersistentStoreRequest*)fetchRequest error:(NSError *_Nullable* _Nullable)error;
-(CNCoreDataMapperX*)mapper;
@end

@interface CNContactMetadataPersistentStoreManager: NSObject
-(instancetype)initWithStoreLocation:(NSString*)location;
-(NSManagedObjectContext*)createManagedObjectContext;
-(BOOL)setupIfNeeded:(NSError *_Nullable* _Nullable)error;
@end
NS_ASSUME_NONNULL_END

NSString* IMSharedMessageSummaryCreateWithShortName(int, IMMessageItem*, NSString*, NSString*, void(NSString*,int,int,int,int,BOOL*));
