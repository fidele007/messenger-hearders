/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBDisplayableMediaAnimator <NSObject>
@required
-(void)animateMediaViewOrLayer:(id)arg1 toFrame:(CGRect)arg2 contentTransitionBoundsProvider:(id)arg3 withStartingVelocity:(CGPoint)arg4 activeGestureDirection:(long long)arg5 dismissalTransition:(unsigned long long)arg6 completionBlock:(/*^block*/id)arg7;
-(void)animateWithDuration:(double)arg1 animationBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)cleanupAnimationGroup:(id)arg1 withBlock:(/*^block*/id)arg2;

@end

