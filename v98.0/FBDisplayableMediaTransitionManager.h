/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBStateMachineDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <Messenger/FBDirectionalPanGestureRecognizerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@protocol FBDisplayableMediaAnimator, FBDisplayableMediaTransitionManagerDelegate, FBDisplayableMediaTransitioningDelegate, FBFullScreenTransitionBoundsProvider;
@class FBDisplayableMediaViewProviderContext, UIView, FBDirectionalPanGestureRecognizer, FBStateMachine, NSString;

@interface FBDisplayableMediaTransitionManager : NSObject <FBStateMachineDelegate, UIViewControllerAnimatedTransitioning, FBDirectionalPanGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerInteractiveTransitioning> {

	id<FBDisplayableMediaAnimator> _animator;
	id<FBDisplayableMediaTransitionManagerDelegate> _transitionManagerDelegate;
	id<FBDisplayableMediaTransitioningDelegate> _transitioningDelegate;
	id<FBFullScreenTransitionBoundsProvider> _contentBoundsViewProvider;
	FBDisplayableMediaViewProviderContext* _fromMediaViewProviderContext;
	FBDisplayableMediaViewProviderContext* _mediaViewControllerMediaViewProviderContext;
	FBMediaViewControllerTransitionDismissingContext _dismissalContext;
	long long _orientationBeforeAnimation;
	UIView* _rotationView;
	UIView* _animationBoundingView;
	UIView* _containerViewForCustomAnimation;
	CGPoint _interactiveStartingPosition;
	FBDirectionalPanGestureRecognizer* _panGestureRecognizer;
	CGRect _mediaLayerInitialBoundsOnInteractiveDismissal;
	UIView* _tuckMediaUnderChromeMask;
	FBDisplayableMediaTransitionOptions _options;
	BOOL _isPresenting;
	BOOL _swipeToDismissEnabled;
	UIView* _dismissalGestureRecognizingView;
	FBStateMachine* _animationStateMachine;

}

@property (nonatomic,readonly) FBStateMachine * animationStateMachine;                                               //@synthesize animationStateMachine=_animationStateMachine - In the implementation block
@property (nonatomic,readonly) BOOL interactiveTransitionWasCancelled; 
@property (nonatomic,readonly) BOOL isPresenting;                                                                    //@synthesize isPresenting=_isPresenting - In the implementation block
@property (assign,getter=isSwipeToDismissEnabled,nonatomic) BOOL swipeToDismissEnabled;                              //@synthesize swipeToDismissEnabled=_swipeToDismissEnabled - In the implementation block
@property (assign,nonatomic,__weak) UIView * dismissalGestureRecognizingView;                                        //@synthesize dismissalGestureRecognizingView=_dismissalGestureRecognizingView - In the implementation block
@property (nonatomic,readonly) id<FBDisplayableMediaViewProvider> mediaViewControllerMediaViewProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(void)_beginInteractiveTransition;
-(void)_setupAnimationWithTransitionContext:(id)arg1 ;
-(void)stateMachine:(id)arg1 didTransitionFromState:(id)arg2 toState:(id)arg3 ;
-(BOOL)interactiveTransitionWasCancelled;
-(id)initWithFromMediaViewProvider:(id)arg1 mediaViewControllerMediaViewProvider:(id)arg2 transitionManagerDelegate:(id)arg3 transitioningDelegate:(id)arg4 animator:(id)arg5 transitionOptions:(FBDisplayableMediaTransitionOptions)arg6 ;
-(void)setSwipeToDismissEnabled:(BOOL)arg1 ;
-(void)_handlePanForInteractiveTransition:(id)arg1 ;
-(void)_updatePanGestureRecognizerState;
-(void)_setPanGestureRecognizerOnViewInViewController:(id)arg1 ;
-(unsigned long long)_preferredDismissalType;
-(void)_executeOpeningAnimationWithFromMediaViewProviderContext:(id)arg1 toMediaViewProviderContext:(id)arg2 transitionContext:(id)arg3 ;
-(void)_executeClosingAnimationWithFromMediaViewProviderContext:(id)arg1 ;
-(void)_endInteractiveTransitionWithTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 allowCancelling:(BOOL)arg3 ;
-(void)_cleanUpAnimationWithTransitionContext:(id)arg1 ;
-(void)_finishDismissalWithCompletionBlock:(/*^block*/id)arg1 ;
-(CGRect)_calculateToFrameForMediaViewOrLayer;
-(unsigned long long)_adjustedDismissalType:(unsigned long long)arg1 ;
-(void)_beginAndAdjustTuckUnderMask;
-(void)_waitForInteractionStartBeforeRespondingToGestureUpdate;
-(void)_updateInteractiveTransitionWithTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)_updateScrollTransitionWithTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)_tuckUnderScrollContainerChromeIfNeeded:(double)arg1 ;
-(void)_logMediaViewProviderContext:(id)arg1 withString:(id)arg2 ;
-(void)_setupAnimationViewsWithTransitionContext:(id)arg1 ;
-(id)initWithFromMediaViewProvider:(id)arg1 mediaViewControllerMediaViewProvider:(id)arg2 transitionManagerDelegate:(id)arg3 transitioningDelegate:(id)arg4 ;
-(id<FBDisplayableMediaViewProvider>)mediaViewControllerMediaViewProvider;
-(void)setDisplayableMediaViewControllerForManualPresentation:(id)arg1 ;
-(BOOL)isSwipeToDismissEnabled;
-(UIView *)dismissalGestureRecognizingView;
-(void)setDismissalGestureRecognizingView:(UIView *)arg1 ;
-(FBStateMachine *)animationStateMachine;
-(void)dealloc;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)panGestureRecognizer;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(BOOL)isPresenting;
@end
