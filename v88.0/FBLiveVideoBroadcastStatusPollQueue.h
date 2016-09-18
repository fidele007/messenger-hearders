/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBLiveVideoBroadcastStatusPollQueueDelegate;
@class FBUserSession, NSMutableSet, FBTimer;

@interface FBLiveVideoBroadcastStatusPollQueue : NSObject {

	FBUserSession* _session;
	NSMutableSet* _queue;
	FBTimer* _timer;
	id<FBLiveVideoBroadcastStatusPollQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBLiveVideoBroadcastStatusPollQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_initBatchingTimer;
-(void)_batchingTimerFired;
-(void)_pollAllItemsInQueue;
-(void)_handleResponse:(id)arg1 requestedVideos:(id)arg2 ;
-(void)_handleVideoResponse:(id)arg1 forVideoID:(id)arg2 ;
-(void)addVideoIDs:(id)arg1 ;
-(void)removePendingVideoIDs:(id)arg1 ;
-(void)setDelegate:(id<FBLiveVideoBroadcastStatusPollQueueDelegate>)arg1 ;
-(void)dealloc;
-(id<FBLiveVideoBroadcastStatusPollQueueDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end

