//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SLDataTimelineSessionEntry.h"

#import "SLDataTimelineSession-Protocol.h"
#import "SLDataTimelineSessionProcessCollection-Protocol.h"
#import "SLXPCConvertible-Protocol.h"

@class NSArray;
@protocol SLDataTimelineSessionProcessCollection;

__attribute__((visibility("hidden")))
@interface SLDataTimelineSessionSnapshotEntry : SLDataTimelineSessionEntry <SLDataTimelineSession, SLDataTimelineSessionProcessCollection, SLXPCConvertible>
{
    int _foregroundAppPID;
    double _sessionSnapshotTimestamp;
    unsigned long long _sessionSnapshotIndex;
    NSArray *_processesArray;
}

+ (id)entryWithXPCObject:(id)arg1;
@property(readonly, nonatomic) NSArray *processesArray; // @synthesize processesArray=_processesArray;
@property(readonly, nonatomic) int foregroundAppPID; // @synthesize foregroundAppPID=_foregroundAppPID;
@property(readonly, nonatomic) unsigned long long sessionSnapshotIndex; // @synthesize sessionSnapshotIndex=_sessionSnapshotIndex;
@property(readonly, nonatomic) double sessionSnapshotTimestamp; // @synthesize sessionSnapshotTimestamp=_sessionSnapshotTimestamp;
- (void)processesApplyBlock:(id)arg1;
- (id)createXPCObject;
- (void)dealloc;
- (id)initWithXPCObject:(id)arg1;
@property(readonly, nonatomic)  id  processData;
@property(readonly, nonatomic) BOOL currentSnapshotMember;
@property(readonly, nonatomic) NSArray *processes;

// Remaining properties
@property(readonly, nonatomic) int auditID; // @dynamic auditID;
@property(readonly, nonatomic) unsigned int cgID; // @dynamic cgID;

@end

