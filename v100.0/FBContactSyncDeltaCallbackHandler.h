/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBContactSyncDeltaListener, FBContactSyncSnapshotStateListener, FBContactSyncUserProfileImageCaching, FBContactSyncUserInvalidating;
@class FBAnalytics;

@interface FBContactSyncDeltaCallbackHandler : NSObject {

	id<FBContactSyncDeltaListener> _deltaListener;
	id<FBContactSyncSnapshotStateListener> _snapshotListener;
	unsigned long long _currentSnapshotState;
	FBAnalytics* _analytics;
	id<FBContactSyncUserProfileImageCaching> _profileImageCachingRunner;
	id<FBContactSyncUserInvalidating> _userStoreInvalidatingRunner;

}
-(void)_setDeltaCallbackFunctionWithOmnistore:(id)arg1 collectionName:(id)arg2 ;
-(void)_setSnapshotStateChangedCallbackFunctionWithOmnistore:(id)arg1 collectionName:(id)arg2 ;
-(id)initWithOmnistore:(id)arg1 deltaListener:(id)arg2 snapshotListener:(id)arg3 collectionName:(id)arg4 analytics:(id)arg5 profileImageCachingRunner:(id)arg6 userStoreInvalidatingRunner:(id)arg7 ;
@end
