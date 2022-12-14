#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSButton, NSImage, NSString;
@protocol AKPinFieldViewDelegate;

@interface AKPinFieldView : NSView
{
    NSImage *_digitField;
    NSArray *_pinFieldBoxArray;
    struct CGRect *_digitRects;
    struct CGRect _progressRect;
    NSString *_localizedString;
    NSString *_pinString;
    int _position;
    double _maxFontHeight;
    BOOL _enabled;
    BOOL _echosBullets;
    BOOL _supportsRTL;
    int _pinLength;
    struct {
        unsigned int pinFieldViewTextDidChange:1;
        unsigned int pinFieldViewTextDidComplete:1;
        unsigned int padding:6;
    } _delegateFlags;
     id  _delegate;
    NSButton *_nextButtonResponder;
    unsigned long long _chunkingStyle;
}

+ (struct CGSize)viewSizeWithLength:(int)arg1 chunkingStyle:(unsigned long long)arg2;
+ (struct CGSize)digitViewSizeWithLength:(int)arg1;

@property unsigned long long chunkingStyle; // @synthesize chunkingStyle=_chunkingStyle;
@property(retain) NSButton *nextButtonResponder; // @synthesize nextButtonResponder=_nextButtonResponder;
@property BOOL supportsRTL; // @synthesize supportsRTL=_supportsRTL;
@property(nonatomic) BOOL echosBullets; // @synthesize echosBullets=_echosBullets;
@property(nonatomic) __weak  id  delegate; // @synthesize delegate=_delegate;
- (int)activeInputIndex;
- (struct CGRect)rectForIndex:(int)arg1;
- (void)handleTextChange;
- (void)_handleBackspaceEvent;
- (void)_appendNewCharacterWithEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)drawFocusRingOnRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 pinLength:(int)arg2 supportsRTL:(BOOL)arg3 chunkingStyle:(unsigned long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1 pinLength:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)PINCompleted;
- (void)clearPIN;
- (id)PINString;
- (struct CGSize)viewSize;
- (struct CGSize)digitViewSize;
- (int)PINLength;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)_axChildren;
- (id)_axBoxChildren;
- (void)_delayedPostAccessibilityFocusChange;
- (BOOL)shouldChunkIntoPairs;
- (id)_digitFontAttributes;
- (void)_setupDigitMaxHeight;
- (void)_setupDigitRectsWithFrame:(struct CGRect)arg1;

@end

