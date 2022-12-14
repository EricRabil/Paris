//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSString, NSError;

@protocol GroupsWriteConfigSync

@optional
- (oneway void)addMember:(NSString *)arg1 isGroup:(BOOL)arg2 toGroupName:(NSString *)arg3 authorization:(NSData *)arg4 reply:(void (^)(NSError *))arg5;
- (oneway void)setGroupName:(NSString *)arg1 newName:(NSString *)arg2 authorization:(NSData *)arg3 reply:(void (^)(NSError *))arg4;
- (oneway void)removeMemberUUID:(NSString *)arg1 fromGroupNamed:(NSString *)arg2 authorization:(NSData *)arg3 reply:(void (^)(NSError *))arg4;
- (oneway void)removeMember:(NSString *)arg1 isGroup:(BOOL)arg2 fromGroupNamed:(NSString *)arg3 authorization:(NSData *)arg4 reply:(void (^)(NSError *))arg5;
- (oneway void)createGroupWithName:(NSString *)arg1 realName:(NSString *)arg2 gid:(long long)arg3 authorization:(NSData *)arg4 reply:(void (^)(NSError *))arg5;
@end

