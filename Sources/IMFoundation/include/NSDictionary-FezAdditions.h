//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (FezAdditions)
+ (id)dictionaryWithKeyArray:(id)arg1 defaultValue:(id)arg2;
+ (id)dictionaryWithPlistData:(id)arg1;
- (id)__imDictionaryByFilteringWithBlock:(id)arg1;
- (id)__imDeepCopy;
- (id)dictionaryFromChanges:(id)arg1;
- (id)plistData;
- (id)keysOfChangedEntriesComparedTo:(id)arg1;
- (BOOL)__imIsMutable;
- (id)_dataForKey:(id)arg1;
- (id)_stringForKey:(id)arg1;
- (id)_numberForKey:(id)arg1;
- (id)_arrayForKey:(id)arg1;
- (id)_dictionaryForKey:(id)arg1;
@property(readonly, nonatomic) unsigned long long fileHFSResourceForkSize;
@property(readonly, nonatomic) unsigned short fileHFSFlags;
@end

