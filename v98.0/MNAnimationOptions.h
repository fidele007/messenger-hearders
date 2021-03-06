/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNAnimationType;

@interface MNAnimationOptions : FBValueObject <NSCopying> {

	double _duration;
	double _delay;
	unsigned long long _options;
	MNAnimationType* _animationType;

}

@property (nonatomic,readonly) double duration;                                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double delay;                                      //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) MNAnimationType * animationType;              //@synthesize animationType=_animationType - In the implementation block
+(id)animationOptionsForDuration:(double)arg1 ;
+(id)animationOptionsForDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 dampingRatio:(double)arg4 initialVelocity:(double)arg5 ;
+(id)animationOptionsForDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 curve:(long long)arg4 ;
+(id)animationOptionsForDuration:(double)arg1 curve:(long long)arg2 ;
+(id)animationOptionsForDuration:(double)arg1 dampingRatio:(double)arg2 initialVelocity:(double)arg3 ;
-(void)animateWithAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animationType:(id)arg4 ;
-(double)duration;
-(double)delay;
-(unsigned long long)options;
-(MNAnimationType *)animationType;
@end

