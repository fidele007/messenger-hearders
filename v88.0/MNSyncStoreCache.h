/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFriendListMonitorListener, FBSyncPersonLoadedListener, MNUserMonitoring, MNUserQuerying;
@class MNUserStoreFriendCacheQuerier, MNSyncStoreLRUUserCache;

@interface MNSyncStoreCache : NSObject {

	id<FBFriendListMonitorListener> _dispatchedFriendListListener;
	id<FBSyncPersonLoadedListener> _dispatchedPersonLoadedListener;
	MNUserStoreFriendCacheQuerier* _userStoreCacheQuerier;
	MNSyncStoreLRUUserCache* _cache;
	id<MNUserMonitoring> _userMonitor;
	id<MNUserQuerying> _userQuerier;
	BOOL _isStarted;

}

@property (assign) BOOL isStarted;              //@synthesize isStarted=_isStarted - In the implementation block
-(id)initWithUserMonitor:(id)arg1 userQuerier:(id)arg2 analytics:(id)arg3 ;
-(void)fetchPeopleWithIds:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)fetchPersonWithId:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)stop;
-(void)start;
-(BOOL)isStarted;
-(void)setIsStarted:(BOOL)arg1 ;
@end

