/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, FBFeedbackReactionsInputPresenterAnalytics;


@protocol FBFeedbackReactionsInputPresenting <NSObject>
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) UIView * triggerButton; 
@property (nonatomic,readonly) FBFeedbackReactionsInputPresenterAnalytics * reactionAnalytics; 
@property (nonatomic,readonly) UIView * gestureHandlerView; 
@required
-(void)cancelReactionsInputPresenter;
-(id)initWithContainerView:(id)arg1 UFIBarFrameInContainer:(CGRect)arg2 triggerButton:(id)arg3 useStaticTriggerPosition:(BOOL)arg4 session:(id)arg5 feedback:(id)arg6 reactionDataProvider:(id)arg7 dockType:(unsigned long long)arg8 analyticsModule:(id)arg9 callbackBlock:(/*^block*/id)arg10;
-(unsigned long long)touchLocationForPoint:(CGPoint)arg1;
-(void)dismissDockWithCancelCurrentSelection:(BOOL)arg1 cancelReason:(unsigned long long)arg2 touchLocation:(unsigned long long)arg3;
-(void)updateHighlightedReactionKey:(long long)arg1;
-(void)presentReactionsWithAnimationDistance:(double)arg1;
-(void)enterPersistedMode;
-(void)enterSwipableMode;
-(long long)reactionKeyForTouchInContainer:(CGPoint)arg1 allowBuffer:(BOOL)arg2;
-(void)setGestureRecognizerViewClass:(Class)arg1;
-(UIView *)triggerButton;
-(FBFeedbackReactionsInputPresenterAnalytics *)reactionAnalytics;
-(UIView *)gestureHandlerView;
-(UIView *)containerView;

@end
