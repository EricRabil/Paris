#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSImage, NSImageCell;

@interface AKTooManyAttemptsController : NSViewController
{
    NSImageCell *_imageView;
    NSImage *_displayImage;
    id _cancelAction;
    id _forgotAction;
}


@property(copy) id forgotAction; // @synthesize forgotAction=_forgotAction;
@property(copy) id cancelAction; // @synthesize cancelAction=_cancelAction;
@property(retain) NSImage *displayImage; // @synthesize displayImage=_displayImage;
@property(retain) NSImageCell *imageView; // @synthesize imageView=_imageView;
- (void)forgotButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)awakeFromNib;
- (id)init;

@end

