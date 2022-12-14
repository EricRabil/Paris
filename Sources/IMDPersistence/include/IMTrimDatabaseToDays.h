//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMAbstractDatabaseTrimmer.h"

@interface IMTrimDatabaseToDays : IMAbstractDatabaseTrimmer
{
    long long _newerThanDays;
}

@property(readonly, nonatomic) long long newerThanDays; // @synthesize newerThanDays=_newerThanDays;
- (void)performMessageSelectionWithOperation:(struct IMDSqlOperation *)arg1;
- (id)initWithSourceDatabasePath:(id)arg1 destinationDatabasePath:(id)arg2 newerThanDays:(long long)arg3;

@end

