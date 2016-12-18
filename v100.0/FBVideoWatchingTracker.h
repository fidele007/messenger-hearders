/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary, NSURL, NSObject;

@interface FBVideoWatchingTracker : NSObject {

	NSMutableDictionary* _videos;
	NSURL* _file;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _lastSyncTimestamp;

}
-(id)initWithURL:(id)arg1 scheduleQueue:(id)arg2 ;
-(BOOL)updateVideo:(id)arg1 incrementalDuration:(double)arg2 ;
-(CGPoint)pauseOrFinishForVideo:(id)arg1 prefetchEndTimeStamp:(double)arg2 ;
-(void)updateVideo:(id)arg1 startingTime:(double)arg2 ;
-(void)_syncToDiskForceTo:(BOOL)arg1 ;
-(void)_cleanOldData;
-(void)receivedEnterBackgroundNotification;
-(void)dealloc;
-(void)reset;
@end

