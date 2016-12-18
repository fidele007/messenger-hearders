/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController;


@protocol FBNavigationCoordinatorInternal
@property (nonatomic,readonly) UIViewController * topViewController; 
@property (nonatomic,readonly) UIViewController * underlyingViewController; 
@property (nonatomic,readonly) UIViewController*<FBStackViewControllerProtocol> bottomStackViewController; 
@required
-(UIViewController*<FBStackViewControllerProtocol>)bottomStackViewController;
-(void)presentModalViewController:(id)arg1 fromViewController:(id)arg2 supportStackViewController:(BOOL)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)dismissModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)removeViewControllerFromStack:(id)arg1;
-(BOOL)hasViewControllersOnBottomStack;
-(UIViewController *)underlyingViewController;
-(UIViewController *)topViewController;
-(void)setNeedsStatusBarAppearanceUpdate;

@end

