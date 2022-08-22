#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AKAuthorizationSubPane.h>

@class AKAuthorizationPaneContext, NSArray, NSImage, NSMutableArray, NSNumber, NSScrollView, NSStackView;
@protocol AKAuthorizationSubPaneLoginChoiceDelegate;

@interface AKAuthorizationSubPaneLoginChoice : AKAuthorizationSubPane
{
    NSImage *_applicationImage;
    NSImage *_appleImage;
    unsigned long long _indexOfChosenLogin;
     id  _delegate;
    NSArray *_contextChoices;
    NSMutableArray *_cellChoices;
    NSScrollView *_scrollView;
    NSStackView *_stackView;
    AKAuthorizationPaneContext *_context;
    NSNumber *_selectedChoice;
}

+ (id)_createStackView;
+ (id)_createScrollView;

@property(retain, nonatomic) NSNumber *selectedChoice; // @synthesize selectedChoice=_selectedChoice;
@property(retain) AKAuthorizationPaneContext *context; // @synthesize context=_context;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain) NSMutableArray *cellChoices; // @synthesize cellChoices=_cellChoices;
@property(retain) NSArray *contextChoices; // @synthesize contextChoices=_contextChoices;
@property __weak  id  delegate; // @synthesize delegate=_delegate;
@property unsigned long long indexOfChosenLogin; // @synthesize indexOfChosenLogin=_indexOfChosenLogin;
- (id)getImageNamed:(id)arg1 inBundle:(id)arg2;
- (void)addToConstraints:(id)arg1 context:(id)arg2;
- (void)addToStackView:(id)arg1 context:(id)arg2;
- (void)loginChoiceSelected:(id)arg1;
- (void)addLoginChoices:(id)arg1 withImage:(id)arg2;
- (id)_imageForLoginChoice:(id)arg1;
- (void)setApplicationImage:(id)arg1;
- (id)applicationImage;
- (id)appleImage;
- (id)initWithContext:(id)arg1;

@end
