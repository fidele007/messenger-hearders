/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAnimatedTransitionDelegate <NSObject>
@optional
-(void)animatedTransition:(id)arg1 didEndWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3 completedSuccessfully:(BOOL)arg4;
-(void)animatedTransition:(id)arg1 willBeginWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3;
-(void)animatedTransition:(id)arg1 willBeginInteractivelyWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3;
-(void)animatedTransition:(id)arg1 didEndInteractivelyWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3 shouldCommit:(BOOL)arg4;

@required
-(id)transitionContextForTransitionType:(unsigned long long)arg1;
-(BOOL)animatedTransition:(id)arg1 shouldBeginForTransitionType:(unsigned long long)arg2 point:(CGPoint)arg3;

@end

