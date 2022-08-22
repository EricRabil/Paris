//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class IDSXPCConnection;

@interface IDSXPCConnectionTimeoutProxy : NSObject
{
    id _target;
    IDSXPCConnection *_connection;
    double _timeout;
    id _errorHandler;
}


@property(copy, nonatomic) id errorHandler; // @synthesize errorHandler=_errorHandler;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) IDSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (BOOL)_invocationHasBlock:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 connection:(id)arg2 timeoutInSeconds:(double)arg3 errorHandler:(id)arg4;

@end

