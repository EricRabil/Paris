//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SLDataTimelineSessionEntry.h"

#import "SLDataTimelineSession-Protocol.h"
#import "SLXPCConvertible-Protocol.h"

@protocol SLDataTimelineSessionProcessCollection;

__attribute__((visibility("hidden")))
@interface SLDataTimelineSessionPlaceholderEntry : SLDataTimelineSessionEntry <SLDataTimelineSession, SLXPCConvertible>
{
}

+ (id)entryWithXPCObject:(id)arg1;
- (id)createXPCObject;
- (id)initWithXPCObject:(id)arg1;
@property(readonly, nonatomic)  id  processData;
@property(readonly, nonatomic) BOOL currentSnapshotMember;

// Remaining properties
@property(readonly, nonatomic) int auditID; // @dynamic auditID;
@property(readonly, nonatomic) unsigned int cgID; // @dynamic cgID;

@end

