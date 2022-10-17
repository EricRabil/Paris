//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ETMessage.h"

@class NSMutableArray, NSTimer, SKFieldNode, SKScene;

@interface ETTapMessage : ETMessage
{
    SKScene *_preVisualizeScene;
    SKFieldNode *_noiseField;
    id _points;
    id _times;
    NSMutableArray *_colors;
    double _baseTime;
    NSTimer *_soundTimer;
    unsigned long long _soundIndex;
}

+ (unsigned short)messageType;


- (double)messageDuration;
- (void)_displayInScene:(id)arg1 point:(struct CGPoint)arg2 color:(id)arg3 filled:(BOOL)arg4 withWisp:(BOOL)arg5;
- (id)_animateCircleInner0:(double)arg1 inner1:(double)arg2 outer0:(double)arg3 outer1:(double)arg4 duration:(double)arg5;
- (void)displayInScene:(id)arg1;
- (void)preVisualizeInScene:(id)arg1;
- (id)messageTypeAsString;
- (BOOL)reachedSizeLimit;
- (void)addTapAtPoint:(struct CGPoint)arg1 time:(double)arg2 color:(id)arg3;
- (double)timeDeltaAtIndex:(unsigned long long)arg1;
- (struct CGPoint)pointAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long tapCount;
- (id)archiveData;
- (id)initWithArchiveData:(id)arg1;
- (id)init;

@end

