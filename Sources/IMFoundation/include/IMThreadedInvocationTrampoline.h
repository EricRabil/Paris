//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMInvocationTrampoline.h"

@class NSThread;

@interface IMThreadedInvocationTrampoline : IMInvocationTrampoline
{
    NSThread *_thread;
    BOOL _immediateForMatchingThread;
}

- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(BOOL)arg3;

@end

