/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, MNBadgeCountEventTrackerImpl, MNBadgeCountEventLogger;

@interface MNBadgeCountEventTracker : NSObject {

	NSObject*<OS_dispatch_queue> _writeQueue;
	MNBadgeCountEventTrackerImpl* _tracker;
	MNBadgeCountEventLogger* _logger;

}
-(void)writeAppBadgeCount:(long long)arg1 badgeCountSource:(long long)arg2 ;
-(void)writeAndCommitAppBadgeCount:(long long)arg1 badgeCountSource:(long long)arg2 callbackQueue:(id)arg3 completeBlock:(/*^block*/id)arg4 ;
-(id)initWithUserSession:(id)arg1 recordLimit:(long long)arg2 userDefaults:(id)arg3 analytics:(id)arg4 clock:(id)arg5 ;
-(id)printedBadgeUpdateHistory;
-(void)_writeAppBadgeCount:(long long)arg1 badgeCountSource:(long long)arg2 shouldCommit:(BOOL)arg3 callbackQueue:(id)arg4 completeBlock:(/*^block*/id)arg5 ;
@end

