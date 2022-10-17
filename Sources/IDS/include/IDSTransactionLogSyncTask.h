//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDSTransactionLogTask.h"

@interface IDSTransactionLogSyncTask : IDSTransactionLogTask
{
    id _batchProcessingBlock;
    id _knownRecordIDsFromList;
    BOOL _shouldContinueFromLastSyncPoint;
}


@property(nonatomic) BOOL shouldContinueFromLastSyncPoint; // @synthesize shouldContinueFromLastSyncPoint=_shouldContinueFromLastSyncPoint;
@property(copy, nonatomic) id knownRecordIDsFromList; // @synthesize knownRecordIDsFromList=_knownRecordIDsFromList;
@property(copy, nonatomic) id batchProcessingBlock; // @synthesize batchProcessingBlock=_batchProcessingBlock;

@end

