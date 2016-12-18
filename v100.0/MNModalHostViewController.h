/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBModalPresentationStackViewController.h>
#import <Messenger/MNContainerViewController.h>
#import <Messenger/FBToastPresenterProviding.h>

@class MNAppThemeConfiguration, UIViewController, NSString;

@interface MNModalHostViewController : FBModalPresentationStackViewController <MNContainerViewController, FBToastPresenterProviding> {

	MNAppThemeConfiguration* _appThemeConfiguration;
	BOOL _forcePrefersStatusBarHidden;
	UIViewController* _baseViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * baseViewController;              //@synthesize baseViewController=_baseViewController - In the implementation block
@property (assign,nonatomic) BOOL forcePrefersStatusBarHidden;                     //@synthesize forcePrefersStatusBarHidden=_forcePrefersStatusBarHidden - In the implementation block
-(id)analyticsModule;
-(id)globalToastPresenter;
-(id)analyticsPresentedViewController;
-(id)initWithBaseViewController:(id)arg1 appThemeConfiguration:(id)arg2 ;
-(id)mn_modalPresentationStackManager;
-(void)dismissAllFullScreenModalPresentationItems;
-(UIViewController *)baseViewController;
-(id)mn_visibleContentViewControllers;
-(id)addModalPresentationLayerForItem:(id)arg1 ;
-(void)removeModalPresentationLayerForItem:(id)arg1 ;
-(void)setForcePrefersStatusBarHidden:(BOOL)arg1 ;
-(id)_topPresentedFullscreenViewController;
-(BOOL)_occludesScreen:(id)arg1 ;
-(void)_viewController:(id)arg1 didAddFirstModalPresentationLayerForItem:(id)arg2 ;
-(void)_viewController:(id)arg1 didRemoveLastModalPresentationLayerForItem:(id)arg2 ;
-(id)analyticsContentDelegate;
-(BOOL)forcePrefersStatusBarHidden;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)preferredFocusedView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
@end

