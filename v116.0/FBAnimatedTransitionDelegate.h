/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAnimatedTransitionDelegate <NSObject>
@optional
-(void)animatedTransition:(id)arg1 willBeginWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3;
-(void)animatedTransition:(id)arg1 willBeginInteractivelyWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3;
-(void)animatedTransition:(id)arg1 didEndWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3 completedSuccessfully:(BOOL)arg4;
-(void)animatedTransition:(id)arg1 didEndInteractivelyWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3 shouldCommit:(BOOL)arg4;

@required
-(id)transitionContextForTransitionType:(unsigned long long)arg1;
-(BOOL)animatedTransition:(id)arg1 shouldBeginForTransitionType:(unsigned long long)arg2 point:(CGPoint)arg3;

@end

