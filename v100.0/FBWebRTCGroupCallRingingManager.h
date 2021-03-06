/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebRTCGroupCallRingingManagerDelegate;
@class FBWebRTCGroupCallRingingManagerListenerAnnouncer, FBTimer;

@interface FBWebRTCGroupCallRingingManager : NSObject {

	FBWebRTCGroupCallRingingManagerListenerAnnouncer* _listenerAnnouncer;
	FBTimer* _countdownTimer;
	unsigned long long _currentCountdown;
	double _startTime;
	BOOL _ringingEnabled;
	BOOL _isActive;
	BOOL _finished;
	int _duration;
	id<FBWebRTCGroupCallRingingManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWebRTCGroupCallRingingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int duration;                                                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double timeRemaining; 
@property (assign,nonatomic) BOOL ringingEnabled;                                                      //@synthesize ringingEnabled=_ringingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isActive;                                                          //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,readonly) BOOL finished;                                                          //@synthesize finished=_finished - In the implementation block
-(void)setRingingEnabled:(BOOL)arg1 ;
-(void)_setCountdownTo:(unsigned long long)arg1 ;
-(BOOL)ringingEnabled;
-(void)setDelegate:(id<FBWebRTCGroupCallRingingManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBWebRTCGroupCallRingingManagerDelegate>)delegate;
-(int)duration;
-(BOOL)isActive;
-(void)setDuration:(int)arg1 ;
-(void)start;
-(double)timeRemaining;
-(BOOL)finished;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)abort;
@end

