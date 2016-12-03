/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsPeerToPeerPushEventQueueDelegate;
@class NSMutableArray;

@interface FBPaymentsPeerToPeerPushEventQueue : NSObject {

	NSMutableArray* _q;
	id<FBPaymentsPeerToPeerPushEventQueueDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long numberOfQueuedPushEvents; 
@property (assign,nonatomic,__weak) id<FBPaymentsPeerToPeerPushEventQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)dequeueAllPushEvents;
-(id)dequeuePushEvent;
-(unsigned long long)numberOfQueuedPushEvents;
-(void)enqueuePushEvent:(id)arg1 ;
-(void)setDelegate:(id<FBPaymentsPeerToPeerPushEventQueueDelegate>)arg1 ;
-(id)init;
-(id<FBPaymentsPeerToPeerPushEventQueueDelegate>)delegate;
@end
