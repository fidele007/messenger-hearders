/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface FBNetworkIdleDetector_DEPRECATED : NSObject {

	double _timeInterval;
	/*^block*/id _idleTimeReachedBlock;
	NSTimer* _idleTimer;

}

@property (nonatomic,copy) id idleTimeReachedBlock;              //@synthesize idleTimeReachedBlock=_idleTimeReachedBlock - In the implementation block
@property (nonatomic,retain) NSTimer * idleTimer;                //@synthesize idleTimer=_idleTimer - In the implementation block
-(void)stopIdleDetector;
-(void)startIdleDetectorWithTimeout:(double)arg1 idleTimeReachedBlock:(/*^block*/id)arg2 ;
-(void)_idleStatusDidChange:(id)arg1 ;
-(void)_onIdleTimerFired:(id)arg1 ;
-(void)setIdleTimeReachedBlock:(id)arg1 ;
-(void)rescheduleIdleDetector;
-(id)idleTimeReachedBlock;
-(void)dealloc;
-(void)setIdleTimer:(NSTimer *)arg1 ;
-(NSTimer *)idleTimer;
@end

