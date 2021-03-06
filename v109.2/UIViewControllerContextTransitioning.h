/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol UIViewControllerContextTransitioning <NSObject>
@property (nonatomic,readonly) UIView * containerView; 
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (nonatomic,readonly) BOOL transitionWasCancelled; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
@required
-(UIView *)containerView;
-(id)viewControllerForKey:(id)arg1;
-(id)viewForKey:(id)arg1;
-(CGRect*)initialFrameForViewController:(id)arg1;
-(CGRect*)finalFrameForViewController:(id)arg1;
-(BOOL)isInteractive;
-(BOOL)transitionWasCancelled;
-(void)completeTransition:(BOOL)arg1;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(double)arg1;
-(long long)presentationStyle;
-(BOOL)isAnimated;
-(CGAffineTransform)targetTransform;
-(void)pauseInteractiveTransition;

@end

