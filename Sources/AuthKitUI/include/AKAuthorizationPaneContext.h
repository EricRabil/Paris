#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAuthorizationPaneViewController, NSMutableArray, NSStackView;

@interface AKAuthorizationPaneContext : NSObject
{
    AKAuthorizationPaneViewController *_paneViewController;
    NSStackView *_stackView;
    NSMutableArray *_internalMutableConstraints;
}


@property(retain) NSMutableArray *internalMutableConstraints; // @synthesize internalMutableConstraints=_internalMutableConstraints;
@property(readonly) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly) AKAuthorizationPaneViewController *paneViewController; // @synthesize paneViewController=_paneViewController;
- (void)addSubPane:(id)arg1;
@property(readonly) NSMutableArray *mutableConstraints;
- (id)initWithPaneViewController:(id)arg1 stackView:(id)arg2 mutableConstraints:(id)arg3;
- (id)initWithPaneViewController:(id)arg1 stackView:(id)arg2;

@end
