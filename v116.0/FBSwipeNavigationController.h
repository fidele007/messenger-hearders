/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ZRTariffedNavigationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol UINavigationControllerDelegate, FBSwipeNavigationControllerInteractor;
@class NSMutableSet, NSString;

@interface FBSwipeNavigationController : ZRTariffedNavigationController <UIGestureRecognizerDelegate, UINavigationControllerDelegate> {

	BOOL _swipeEnabled;
	id<UINavigationControllerDelegate> _externalDelegate;
	NSMutableSet* _swipeGestures;
	id<FBSwipeNavigationControllerInteractor> _fullScreenSwiper;
	BOOL _fullScreenSwipeEnabled;

}

@property (assign,nonatomic) BOOL swipeEnabled;                        //@synthesize swipeEnabled=_swipeEnabled - In the implementation block
@property (assign,nonatomic) BOOL fullScreenSwipeEnabled;              //@synthesize fullScreenSwipeEnabled=_fullScreenSwipeEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_swipeNavigationControllerCommonInit;
-(void)setSwipeEnabled:(BOOL)arg1 ;
-(void)configureInteractivePopGestureRecognizer;
-(void)setFullScreenSwipeEnabled:(BOOL)arg1 swiper:(id)arg2 ;
-(BOOL)shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(void)navigationController:(id)arg1 didSetNavigationBarHidden:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setFullScreenSwipeEnabled:(BOOL)arg1 ;
-(BOOL)fullScreenSwipeEnabled;
-(void)stopTreatingGestureRecognizerAsSwipeDriving:(id)arg1 ;
-(void)startTreatingGestureRecognizerAsSwipeDriving:(id)arg1 ;
-(BOOL)swipeEnabled;
-(void)setDelegate:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1 ;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
@end

