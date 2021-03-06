/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MNUserStore, MNAsyncOperationTracker, NSObject;

@interface MNBestEffortUserPreparer : NSObject {

	MNUserStore* _userStore;
	MNAsyncOperationTracker* _asyncOperationTracker;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)prepareUsersForUserIds:(id)arg1 allowEmailUsers:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithUserStore:(id)arg1 queue:(id)arg2 ;
-(void)_handleFetchedForRequestId:(unsigned long long)arg1 withResponse:(id)arg2 ;
-(void)_handleFailureForRequestId:(unsigned long long)arg1 ;
-(void)_handleProgressForRequestId:(unsigned long long)arg1 withResponse:(id)arg2 ;
-(void)_finishRequestWithInternalId:(unsigned long long)arg1 andMostCompleteResponse:(id)arg2 ;
@end

