/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, NSMutableArray;

@interface FBCLEventChannel : NSObject {

	NSObject*<OS_dispatch_queue> _eventProcessingQueue;
	NSObject*<OS_dispatch_queue> _eventNotifQueue;
	NSMutableOrderedSet* _listeners;
	NSMutableArray* _pendingEvent;
	double _batchTime;
	double _batchPeriod;

}

@property (assign) double batchPeriod;              //@synthesize batchPeriod=_batchPeriod - In the implementation block
-(void)emit:(id)arg1 ;
-(void)_emit:(id)arg1 ;
-(double)batchPeriod;
-(void)setBatchPeriod:(double)arg1 ;
-(id)init;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
