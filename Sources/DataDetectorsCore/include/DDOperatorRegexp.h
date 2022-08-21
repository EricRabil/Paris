//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DDBasicRegexp.h>

#import <Foundation/Foundation.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface DDOperatorRegexp : DDBasicRegexp <NSCopying>
{
    NSMutableArray *_subMatchers;
}

- (void)appendDescriptionToString:(id)arg1 depth:(int)arg2 operator:(id)arg3;
- (id)prettyPrintWithPriority:(int)arg1 operatorPriority:(int)arg2 operator:(id)arg3;
- (id)effectiveArgument;
- (int)splitRegexpWithDelegate:(id)arg1 owner:(id)arg2;
- (id)arguments;
- (void)dealloc;
- (id)initWithSubMatchersList:(id)arg1;
- (id)initWithSubMatchers:(id)arg1;
- (id)initWithVarArgs:(id)arg1;
- (id)initWithFirst:(id)arg1 varArgs:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)computeTypeFromParent:(id)arg1 withManager:(id)arg2 kind:(int)arg3;

@end
