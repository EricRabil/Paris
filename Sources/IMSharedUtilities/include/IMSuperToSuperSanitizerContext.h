//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMFromSuperParserContext.h>

@class NSArray, NSAttributedString, NSMutableArray, NSMutableAttributedString, NSString;

@interface IMSuperToSuperSanitizerContext : IMFromSuperParserContext
{
    NSMutableAttributedString *_content;
    NSMutableArray *_attachments;
    NSString *_backgroundColor;
    NSString *_foregroundColor;
    unsigned long long _offset;
    long long _baseWritingDirection;
    BOOL _extractAttachments;
    BOOL _hadBaseWritingDirectionAttribute;
}

@property(readonly, retain) NSArray *attachments; // @synthesize attachments=_attachments;
@property(readonly, retain) NSAttributedString *sanitizedContent; // @synthesize sanitizedContent=_content;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 emoji:(id)arg9;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 characters:(id)arg4;
- (void)parserDidEnd:(id)arg1;
- (void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2;
- (id)resultsForLogging;
- (id)name;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1 extractAttachments:(BOOL)arg2;

@end

