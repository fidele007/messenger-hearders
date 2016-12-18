/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewControllerContextTransitioning.h>

@class UIView, UIViewController, NSString;

@interface MNMultiMontageTransitionContext : NSObject <UIViewControllerContextTransitioning> {

	BOOL _animated;
	BOOL _isInteractive;
	BOOL _cancelled;
	/*^block*/id _completion;
	UIView* _containerView;
	UIViewController* _fromViewController;
	UIViewController* _toViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * containerView; 
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (nonatomic,readonly) BOOL transitionWasCancelled; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
-(id)initWithContainerView:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 animated:(BOOL)arg4 isInteractive:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(id)init;
-(UIView *)containerView;
-(id)viewControllerForKey:(id)arg1 ;
-(id)viewForKey:(id)arg1 ;
-(CGRect)initialFrameForViewController:(id)arg1 ;
-(CGRect)finalFrameForViewController:(id)arg1 ;
-(BOOL)isInteractive;
-(BOOL)transitionWasCancelled;
-(void)completeTransition:(BOOL)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(double)arg1 ;
-(long long)presentationStyle;
-(BOOL)isAnimated;
-(CGAffineTransform)targetTransform;
@end

