/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCancelable.h>

@protocol FBCancelable;
@class MNThreadStore, MNUserStore;

@interface MNGroupsRoomsSnippetLoader : NSObject <FBCancelable> {

	MNThreadStore* _threadStore;
	MNUserStore* _userStore;
	id<FBCancelable> _currentThreadStoreCancelable;

}
-(id)initWithThreadStore:(id)arg1 ;
-(void)loadSnippetsForRoomsList:(id)arg1 withPresenceCache:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)_handleThreadSummarySuccessReponse:(id)arg1 roomsList:(id)arg2 withPresenceCache:(id)arg3 success:(/*^block*/id)arg4 ;
-(void)_handleThreadSummaryFailureResponse:(id)arg1 failure:(/*^block*/id)arg2 ;
-(id)_getActiveMembersInSet:(id)arg1 activeMemberByMemberIdCache:(id)arg2 ;
-(void)cancel;
@end

