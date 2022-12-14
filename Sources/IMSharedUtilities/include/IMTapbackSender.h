//
//  IMTapbackSender.h
//  
//
//  Created by June on 12/13/22.
//

#ifndef IMTapbackSender_h
#define IMTapbackSender_h

#import <Foundation/Foundation.h>

@class IMTapback, IMChat, IMMessagePartChatItem;

NS_CLASS_AVAILABLE(13_0, 16_0)
@interface IMTapbackSender: NSObject
- (instancetype)initWithTapback:(IMTapback *)tapback chat:(IMChat *)chat messagePartChatItem:(IMMessagePartChatItem *)messagePartChatItem;
- (NSString *)backwardCompatibilityString;
- (NSAttributedString *)attributedContentString;
- (NSString *)messageGUID;
- (NSRange)messagePartRange;
- (NSDictionary *)messageSummaryInfo;
- (NSString *)threadIdentifier;
- (void)send;
@end

#endif /* IMTapbackSender_h */
