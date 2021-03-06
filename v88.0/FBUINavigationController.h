/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/FBAnimatedTransitionDelegate.h>
#import <UIKit/UINavigationBarDelegate.h>

@protocol UINavigationControllerDelegate;
@class UIViewController, FBAnimatedPushTransition, FBAnimatedLegacyTransition, UINavigationBar, NSMutableArray, UIView, FBKVOController, NSMapTable, UIPanGestureRecognizer, NSArray, NSString;

@interface FBUINavigationController : FBContainerViewController <FBAnimatedTransitionDelegate, UINavigationBarDelegate> {

	Class _navigationBarClass;
	Class _toolbarClass;
	UIViewController* _rootViewController;
	FBAnimatedPushTransition* _animatedTransition;
	FBAnimatedLegacyTransition* _animatedLegacyTransition;
	UINavigationBar* _navigationBar;
	NSMutableArray* _navigationBarItems;
	NSMutableArray* _viewControllers;
	CGPoint _queuedDismissalVelocity;
	BOOL _transitionRunning;
	UIView* _legacyTransitionContainerView;
	FBKVOController* _KVOController;
	NSMapTable* _viewControllerToContentInsetMap;
	BOOL _navigationBarHidden;
	BOOL _swipeEnabled;
	BOOL _interruptibilityEnabled;
	id<UINavigationControllerDelegate> _delegate;
	UIPanGestureRecognizer* _interactivePopGestureRecognizer;

}

@property (nonatomic,readonly) UIViewController * topViewController; 
@property (nonatomic,readonly) UIViewController * visibleViewController; 
@property (nonatomic,copy,readonly) NSArray * viewControllers; 
@property (nonatomic,readonly) UINavigationBar * navigationBar; 
@property (assign,getter=isNavigationBarHidden,nonatomic) BOOL navigationBarHidden;                   //@synthesize navigationBarHidden=_navigationBarHidden - In the implementation block
@property (assign,nonatomic,__weak) id<UINavigationControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * interactivePopGestureRecognizer;              //@synthesize interactivePopGestureRecognizer=_interactivePopGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL swipeEnabled;                                                       //@synthesize swipeEnabled=_swipeEnabled - In the implementation block
@property (assign,nonatomic) BOOL interruptibilityEnabled;                                            //@synthesize interruptibilityEnabled=_interruptibilityEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)analyticsPresentedViewController;
-(void)_setupNavigationBar;
-(BOOL)hasOngoingTransition;
-(void)setInterruptibilityEnabled:(BOOL)arg1 ;
-(void)setSwipeEnabled:(BOOL)arg1 ;
-(BOOL)swipeEnabled;
-(void)animatedTransition:(id)arg1 didEndWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3 ;
-(void)animatedTransition:(id)arg1 willBeginWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3 ;
-(id)transitionContextForTransitionType:(unsigned long long)arg1 ;
-(void)animatedTransition:(id)arg1 willBeginInteractivelyWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3 ;
-(void)animatedTransition:(id)arg1 didEndInteractivelyWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3 shouldCommit:(BOOL)arg4 ;
-(BOOL)animatedTransition:(id)arg1 shouldBeginForTransitionType:(unsigned long long)arg2 point:(CGPoint)arg3 ;
-(id)fbui_tabBarContainerViewController;
-(void)fbui_setTabBarContainerViewController:(id)arg1 ;
-(void)_announceWillShowViewController:(id)arg1 fromViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_relayoutNavigationBar;
-(void)_announceDidShowViewController:(id)arg1 fromViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)_viewControllerUnderneathViewController:(id)arg1 ;
-(void)_beginAppearanceTransitionForViewController:(id)arg1 fromViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_endAppearanceTransitionForViewController:(id)arg1 fromViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_adjustScrollViewInsetsForViewController:(id)arg1 ;
-(UIEdgeInsets)_scrollViewInsetsForViewController:(id)arg1 ;
-(void)_updateFrameForViewController:(id)arg1 newFrame:(CGRect)arg2 ;
-(id)transitionContextForTransitionType:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(CGRect)_destinationFrameForViewController:(id)arg1 navigationBarHidden:(BOOL)arg2 ;
-(void)_pushNavigationItemForViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_popNavigationItemForViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateInterruptibilityState;
-(void)_cleanupAfterPresentationOfViewController:(id)arg1 ;
-(void)_cleanupAfterDismissalOfViewController:(id)arg1 ;
-(void)_resolveFramesForTransitionContext:(id)arg1 ;
-(void)_cleanupAfterLegacyTransition:(id)arg1 ;
-(void)_addViewUnderneathViewController:(id)arg1 ;
-(void)_prepareNavigationBarForTransitionOfType:(unsigned long long)arg1 transitionContext:(id)arg2 isInteractive:(BOOL)arg3 ;
-(void)_removeViewUnderneathViewController:(id)arg1 ;
-(void)_pushViewController:(id)arg1 animated:(BOOL)arg2 withVelocity:(CGPoint)arg3 ;
-(void)_prepareViewControllerForPresentation:(id)arg1 fromViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)_popViewControllerAnimated:(BOOL)arg1 withVelocity:(CGPoint)arg2 ;
-(void)_prepareViewControllerForDismissal:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_navigationBarAppearanceDidChange;
-(void)_recursivelyRemoveAnimations:(id)arg1 ;
-(id)_viewControllerAtIndex:(unsigned long long)arg1 ;
-(void)_popViewControllerWithoutAnimationSkippingAppearanceMethods:(id)arg1 ;
-(void)_pushViewControllerWithoutAnimationSkippingAppearanceMethods:(id)arg1 ;
-(void)_prepareRootViewController:(id)arg1 ;
-(BOOL)interruptibilityEnabled;
-(void)setDelegate:(id<UINavigationControllerDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id<UINavigationControllerDelegate>)delegate;
-(UINavigationBar *)navigationBar;
-(BOOL)isNavigationBarHidden;
-(UIViewController *)topViewController;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(long long)positionForBar:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(UIViewController *)visibleViewController;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(UIPanGestureRecognizer *)interactivePopGestureRecognizer;
-(void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSArray *)viewControllers;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(void)setViewControllers:(NSArray *)arg1 ;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(void)_setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)_statusBarFrameDidChange:(id)arg1 ;
@end

