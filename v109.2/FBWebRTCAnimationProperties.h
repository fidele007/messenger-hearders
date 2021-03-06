/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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

