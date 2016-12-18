/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserStoreExternalUserUpdateListening.h>
#import <Messenger/MNParticipantUserCacheDiskHandlerListener.h>

@protocol OS_dispatch_queue;
@class FBAnalytics, MNParticipantUserCacheDiskHandler, NSObject, FBValueObjectEither, FBMIndexedUserSet, NSString;

@interface MNNonFriendParticipantUserCache : NSObject <MNUserStoreExternalUserUpdateListening, MNParticipantUserCacheDiskHandlerListener> {

	FBAnalytics* _analytics;
	MNParticipantUserCacheDiskHandler* _diskHandler;
	NSObject*<OS_dispatch_queue> _updateQueue;
	FBValueObjectEither* _invalidationState;
	FBMIndexedUserSet* _usersByUserId;

}

@property (copy) FBMIndexedUserSet * usersByUserId;                 //@synthesize usersByUserId=_usersByUserId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBMIndexedUserSet *)usersByUserId;
-(void)didFinishNetworkFetchOfUsers:(id)arg1 ;
-(void)didInvalidateUsersWithIds:(id)arg1 ;
-(void)didInvalidateAllUsers;
-(void)setUsersByUserId:(FBMIndexedUserSet *)arg1 ;
-(void)_scheduleSaveToDisk;
-(void)_updateUsersByMerging:(id)arg1 andUsers:(id)arg2 shouldScheduleSaveAfterMerge:(BOOL)arg3 ;
-(void)diskHandlerDidCompleteUserLoadFromDisk:(id)arg1 ;
-(void)diskHandlerDidCompleteWriteInformationToDisk:(id)arg1 ;
-(id)initWithDiskHandler:(id)arg1 analytics:(id)arg2 listeningQueue:(id)arg3 ;
-(void)getCachedUsers:(/*^block*/id)arg1 ;
-(void)getCachedUserById:(id)arg1 cachedUser:(/*^block*/id)arg2 ;
@end

