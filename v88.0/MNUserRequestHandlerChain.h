/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserRequestRunning.h>

@protocol MNUserRequestHandling, MNUserStoreExternalUserUpdateListening, MNParticipantUserCacheDiskHandlerListener;
@class MNNonFriendParticipantUserCache, NSString;

@interface MNUserRequestHandlerChain : NSObject <MNUserRequestRunning> {

	id<MNUserRequestHandling> _firstHandler;
	MNNonFriendParticipantUserCache* _participantCache;
	id<MNUserStoreExternalUserUpdateListening> _participantFiltererDispatchedUserRequestListening;
	id<MNUserStoreExternalUserUpdateListening> _participantCacheDispatchedUserRequestListening;
	id<MNParticipantUserCacheDiskHandlerListener> _participantCacheDispatchedDiskRestoreListening;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserNetworkFetcherCreationBlock:(/*^block*/id)arg1 messagingStore:(id)arg2 messagingStoreDelayer:(id)arg3 networkActivityManager:(id)arg4 userFetchedAnnouncer:(id)arg5 syncStoreCache:(id)arg6 analytics:(id)arg7 configuration:(id)arg8 ;
-(void)handleMultipleUserRequest:(id)arg1 currentPendingResult:(id)arg2 listener:(id)arg3 ;
-(void)handleSingleUserRequest:(id)arg1 currentPendingResult:(id)arg2 listener:(id)arg3 ;
-(id)_createParticipantHandlerWithDiskStore:(id)arg1 diskDelayer:(id)arg2 userFetchedAnnouncer:(id)arg3 analytics:(id)arg4 syncStoreCache:(id)arg5 ;
@end

