/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBWebRTCAnimationProperties : NSObject {

	double _duration;
	double _delay;
	unsigned long long _animationOptions;

}

@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double delay;                                     //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) unsigned long long animationOptions;              //@synthesize animationOptions=_animationOptions - In the implementation block
-(id)mediaTimingFunctionForAnimationOptions;
-(double)duration;
-(double)delay;
-(void)setDuration:(double)arg1 ;
-(void)setDelay:(double)arg1 ;
-(unsigned long long)animationOptions;
-(void)setAnimationOptions:(unsigned long long)arg1 ;
@end

