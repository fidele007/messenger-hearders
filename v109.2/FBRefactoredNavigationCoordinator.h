/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNavigationCoordinatorSelfDismissal.h>
#import <Messenger/FBNavigationCoordinatorViewCoordinator.h>
#import <Messenger/FBNavigationCoordinatorIntrospection.h>
#import <Messenger/FBNavigationCoordinatorInternal.h>
#import <Messenger/FBNavigationCoordinatorModalPresentation.h>
#import <Messenger/FBRefactoredNavigationCoordinatorInternal.h>
#import <Messenger/FBNavigationCoordinatorImplProtocol.h>

@protocol FBNavigationURLHandler;
@class UIViewController, FBRefactoredNavigationController, FBRefactoredNavigationStateManager, FBNavigationBugReportLogger, FBUserSession, FBNavigationModalPresentationCoordinator, FBNavigationPopoverControllerPresenter, FBNavigationPopoverPresenter, NSString;

@interface FBRefactoredNavigationCoordinator : NSObject <FBNavigationCoordinatorSelfDismissal, FBNavigationCoordinatorViewCoordinator, FBNavigationCoordinatorIntrospection, FBNavigationCoordinatorInternal, FBNavigationCoordinatorModalPresentation, FBRefactoredNavigationCoordinatorInternal, FBNavigationCoordinatorImplProtocol> {

	FBRefactoredNavigationController* _navigationController;
	FBRefactoredNavigationStateManager* _navigationStateManager;
	FBNavigationBugReportLogger* _bugReportLogger;
	FBUserSession* _session;
	id<FBNavigationURLHandler> _urlHandler;
	FBNavigationModalPresentationCoordinator* _modalPresentationCoordinator;
	FBNavigationPopoverControllerPresenter* _popoverControllerPresenter;
	FBNavigationPopoverPresenter* _popoverPresenter;

}

@property (nonatomic,retain) FBNavigationModalPresentationCoordinator * modalPresentationCoordinator;                        //@synthesize modalPresentationCoordinator=_modalPresentationCoordinator - In the implementation block
@property (nonatomic,retain) FBNavigationPopoverControllerPresenter * popoverControllerPresenter;                            //@synthesize popoverControllerPresenter=_popoverControllerPresenter - In the implementation block
@property (nonatomic,retain) FBNavigationPopoverPresenter * popoverPresenter;                                                //@synthesize popoverPresenter=_popoverPresenter - In the implementation block
@property (nonatomic,readonly) UIViewController * topViewController; 
@property (nonatomic,readonly) UIViewController * underlyingViewController; 
@property (nonatomic,readonly) UIViewController*<FBStackViewControllerProtocol> bottomStackViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIViewController * modalPresentingViewController; 
@property (nonatomic,readonly) id<FBNavigation_DEPRECATED_DO_NOT_USE> DEPRECATED_DO_NOT_USE_fb_navigationOwner; 
@property (nonatomic,readonly) BOOL hasModalViewController; 
@property (nonatomic,readonly) UIViewController * viewControllerOnBottomStack; 
@property (assign,nonatomic,__weak) id<FBNavigationURLHandler> urlHandler;                                                   //@synthesize urlHandler=_urlHandler - In the implementation block
-(void)dismissFloatingViewController:(id)arg1 ;
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissViewController:(id)arg1 ;
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)closeAllPopovers;
-(BOOL)canPresentWithNavigationInfo:(id)arg1 ;
-(BOOL)isPresentingPopover;
-(BOOL)topViewControllerPassesTest:(/*^block*/id)arg1 ;
-(id)topViewControllerConformingToProtocol:(id)arg1 ;
-(id)modalPresentationStackManager;
-(UIViewController*<FBStackViewControllerProtocol>)bottomStackViewController;
-(void)zeroRatingFence:(id)arg1 wantsToPresentInterstitialController:(id)arg2 ;
-(void)zeroRatingFence:(id)arg1 wantsToDismissInterstitialController:(id)arg2 ;
-(void)cleanUpDismissedModalViewController:(id)arg1 ;
-(void)_setBugReportData:(id)arg1 ;
-(BOOL)openViewController:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 popoverInfo:(id)arg4 animated:(BOOL)arg5 completion:(/*^block*/id)arg6 whenClosed:(/*^block*/id)arg7 ;
-(void)dismissOpenedViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasModalViewController;
-(id)rootContainerController;
-(void)presentPopoverOverlay:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissPopoverOverlay:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissPopoverOverlay:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissPopoverOverlayContainingContentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)hasPresentedModalPresentationLayer;
-(void)presentModalViewController:(id)arg1 fromViewController:(id)arg2 supportStackViewController:(BOOL)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)dismissModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeViewControllerFromStack:(id)arg1 ;
-(BOOL)hasViewControllersOnBottomStack;
-(UIViewController *)underlyingViewController;
-(id)initWithNavigationController:(id)arg1 session:(id)arg2 navigationBarDecoratorProvider:(/*^block*/id)arg3 ;
-(id<FBNavigationURLHandler>)urlHandler;
-(void)setUrlHandler:(id<FBNavigationURLHandler>)arg1 ;
-(void)presentFloatingViewController:(id)arg1 viewFrameBlock:(/*^block*/id)arg2 ;
-(void)presentPopoverOverlay:(id)arg1 animated:(BOOL)arg2 ;
-(id<FBNavigation_DEPRECATED_DO_NOT_USE>)DEPRECATED_DO_NOT_USE_fb_navigationOwner;
-(UIViewController *)viewControllerOnBottomStack;
-(void)addViewControllerOnTopStack:(id)arg1 ;
-(void)removeAllStacks;
-(BOOL)_revealOrWigglePresentedViewController:(id)arg1 fromURL:(id)arg2 presentationMethod:(unsigned long long)arg3 presentationOptions:(unsigned long long)arg4 animated:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_openViewController:(id)arg1 fromURL:(id)arg2 method:(unsigned long long)arg3 fakePush:(BOOL)arg4 options:(unsigned long long)arg5 popoverInfo:(id)arg6 animated:(BOOL)arg7 completion:(/*^block*/id)arg8 whenClosed:(/*^block*/id)arg9 ;
-(BOOL)hasNonStackModalViewController;
-(void)_wiggleTopView;
-(FBNavigationModalPresentationCoordinator *)modalPresentationCoordinator;
-(void)setModalPresentationCoordinator:(FBNavigationModalPresentationCoordinator *)arg1 ;
-(FBNavigationPopoverControllerPresenter *)popoverControllerPresenter;
-(void)setPopoverControllerPresenter:(FBNavigationPopoverControllerPresenter *)arg1 ;
-(FBNavigationPopoverPresenter *)popoverPresenter;
-(void)setPopoverPresenter:(FBNavigationPopoverPresenter *)arg1 ;
-(UIViewController *)modalPresentingViewController;
-(BOOL)presentWithNavigationInfo:(id)arg1 ;
-(BOOL)presentWithNavigationInfo:(id)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(UIViewController *)topViewController;
-(void)setNeedsStatusBarAppearanceUpdate;
@end

