/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCustomNavigationController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <Messenger/FBMovableNavigationBarViewControllerDelegate.h>
#import <Messenger/FBNavigationControllerInternal_DEPRECATED.h>
#import <Messenger/FBNavigationBarLayoutDelegate.h>
#import <Messenger/FBPopoverOverlayDelegate.h>
#import <Messenger/FBNavigationController_DEPRECATED.h>

@protocol FBNavigationBarDecorating;
@class UIViewController, UINavigationBar, FBJewelController, UIPopoverController, FBNavigationBar, FBNavigationBarQueue, NSMutableDictionary, FBUserSession, NSMapTable, FBNavigationFakePushExecutor, UISearchDisplayController, NSString;

@interface FBNavigationController : FBCustomNavigationController <UIPopoverControllerDelegate, FBMovableNavigationBarViewControllerDelegate, FBNavigationControllerInternal_DEPRECATED, FBNavigationBarLayoutDelegate, FBPopoverOverlayDelegate, FBNavigationController_DEPRECATED> {

	UIPopoverController* _currentPopover;
	FBNavigationBar* _externalNavigationBar;
	FBNavigationBarQueue* _externalNavigationBarQueue;
	unsigned long long _movableNavigationBarMode;
	NSMutableDictionary* _openedControllers;
	unsigned long long _openedPopoverOverlaysCount;
	FBUserSession* _session;
	NSMapTable* _voiceOverSavedState;
	FBNavigationFakePushExecutor* _fakePushExecutor;
	BOOL _movableNavigationBarEnabled;
	BOOL _initialized;
	UIViewController* _modalPresenter;
	id<FBNavigationBarDecorating> _navigationBarDecorator;
	Class _externalNavigationBarClass;
	UISearchDisplayController* _navigationSearchDisplayController;

}

@property (nonatomic,readonly) Class externalNavigationBarClass;                                         //@synthesize externalNavigationBarClass=_externalNavigationBarClass - In the implementation block
@property (assign,getter=hasInitialized,nonatomic) BOOL initialized;                                     //@synthesize initialized=_initialized - In the implementation block
@property (nonatomic,retain) UISearchDisplayController * navigationSearchDisplayController;              //@synthesize navigationSearchDisplayController=_navigationSearchDisplayController - In the implementation block
@property (assign,nonatomic) BOOL movableNavigationBarEnabled;                                           //@synthesize movableNavigationBarEnabled=_movableNavigationBarEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBJewelController * jewelController; 
@property (assign,nonatomic,__weak) id<FBNavigationControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) UIViewController * modalPresenter;                                   //@synthesize modalPresenter=_modalPresenter - In the implementation block
@property (nonatomic,retain) id<FBNavigationBarDecorating> navigationBarDecorator;                       //@synthesize navigationBarDecorator=_navigationBarDecorator - In the implementation block
@property (nonatomic,readonly) UINavigationBar * externalNavigationBar; 
+(id)navigationControllerWithSession:(id)arg1 rootViewController:(id)arg2 movableNavigationBarEnabled:(BOOL)arg3 movableNavigationBarMode:(unsigned long long)arg4 ;
+(id)navigationControllerWithSession:(id)arg1 rootViewController:(id)arg2 navigationBarClass:(Class)arg3 movableNavigationBarEnabled:(BOOL)arg4 movableNavigationBarMode:(unsigned long long)arg5 ;
+(id)navigationControllerWithSession:(id)arg1 rootViewController:(id)arg2 externalNavigationBarClass:(Class)arg3 movableNavigationBarEnabled:(BOOL)arg4 movableNavigationBarMode:(unsigned long long)arg5 ;
+(id)navigationControllerWithSession:(id)arg1 navigationBarClass:(Class)arg2 movableNavigationBarEnabled:(BOOL)arg3 movableNavigationBarMode:(unsigned long long)arg4 ;
-(UIViewController *)modalPresenter;
-(void)closeAllPopovers;
-(BOOL)isPresentingPopover;
-(BOOL)fb_deferSwipeToOpenLeftNav;
-(BOOL)fb_swipeToOpenLeftNav;
-(BOOL)fb_touchShouldPreventSwipeToOpenLeftNav:(id)arg1 ;
-(void)fb_setTopLayoutGuideLength:(double)arg1 ;
-(void)setNavigationBarDecorator:(id<FBNavigationBarDecorating>)arg1 ;
-(BOOL)openViewController:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 popoverInfo:(id)arg4 animated:(BOOL)arg5 completion:(/*^block*/id)arg6 whenClosed:(/*^block*/id)arg7 ;
-(void)dismissOpenedViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasModalViewController;
-(BOOL)popoverOverlayShouldDismissPopover:(id)arg1 ;
-(BOOL)isViewController:(id)arg1 alreadyOpenWithViewController:(id)arg2 orWithURL:(id)arg3 ;
-(void)_wiggleTopView;
-(void)_presentPopoverWithInfo:(id)arg1 fromPopoverController:(id)arg2 ;
-(id)viewControllerInCurrentPopover;
-(void)_didDismissPopover:(id)arg1 ;
-(void)_cleanupViewController:(id)arg1 ;
-(void)popoverOverlayWillDismissPopover:(id)arg1 ;
-(void)popoverOverlayDidDismissPopover:(id)arg1 ;
-(void)movableNavigationBarViewWillShowFullNavigationBar:(id)arg1 ;
-(void)navigationBarDidLayout:(id)arg1 ;
-(UINavigationBar *)externalNavigationBar;
-(FBJewelController *)jewelController;
-(void)setJewelController:(FBJewelController *)arg1 ;
-(id)initWithSession:(id)arg1 rootViewController:(id)arg2 navigationBarClass:(Class)arg3 movableNavigationBarEnabled:(BOOL)arg4 movableNavigationBarMode:(unsigned long long)arg5 ;
-(id)initWithSession:(id)arg1 rootViewController:(id)arg2 externalNavigationBarClass:(Class)arg3 movableNavigationBarEnabled:(BOOL)arg4 movableNavigationBarMode:(unsigned long long)arg5 ;
-(id)initWithSession:(id)arg1 navigationBarClass:(Class)arg2 toolbarClass:(Class)arg3 movableNavigationBarEnabled:(BOOL)arg4 movableNavigationBarMode:(unsigned long long)arg5 ;
-(id)initWithSession:(id)arg1 rootViewController:(id)arg2 movableNavigationBarEnabled:(BOOL)arg3 movableNavigationBarMode:(unsigned long long)arg4 ;
-(BOOL)hasInitialized;
-(void)_commonInitWithSession:(id)arg1 ;
-(void)_postDidChangeVisibleNotification:(id)arg1 animated:(BOOL)arg2 ;
-(id)wrappedMovableNavigationBarViewControllerFor:(id)arg1 wrapAll:(BOOL)arg2 ;
-(void)_doPushExternalNavigationBarItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_controllerStateForViewController:(id)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 tearDownCurrentViewControllers:(BOOL)arg3 ;
-(void)_doPopExternalNavigationBarItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_backViewController;
-(void)refocusVoiceoverElementInViewController:(id)arg1 ;
-(id)_doPopViewControllerAnimated:(BOOL)arg1 ;
-(void)_setViewControllers:(id)arg1 animated:(BOOL)arg2 tearDownCurrentViewControllers:(BOOL)arg3 ;
-(void)_tearDownCurrentViewControllers;
-(void)toggleViewAccessibility:(id)arg1 isHidden:(BOOL)arg2 shouldNotify:(BOOL)arg3 ;
-(id)_controllerStateForViewController:(id)arg1 outControllerKey:(id*)arg2 ;
-(void)_cleanupViewControllersPresentedByViewController:(id)arg1 ;
-(id)_findModalPresenter;
-(void)pushSingletonViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id<FBNavigationBarDecorating>)navigationBarDecorator;
-(void)_handleNavigationBarLayout;
-(void)setModalPresenter:(UIViewController *)arg1 ;
-(void)dismissModalViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)navigationView;
-(BOOL)movableNavigationBarEnabled;
-(void)setMovableNavigationBarEnabled:(BOOL)arg1 ;
-(Class)externalNavigationBarClass;
-(UISearchDisplayController *)navigationSearchDisplayController;
-(void)setNavigationSearchDisplayController:(UISearchDisplayController *)arg1 ;
-(BOOL)shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)transitioningDelegate;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentModalViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissModalViewControllerAnimated:(BOOL)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(id)_navigationBar;
-(void)setInitialized:(BOOL)arg1 ;
@end

