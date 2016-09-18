/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNInAppNotificationViewDelegate.h>

@protocol MNInAppNotificationViewControllerDelegate;
@class MNInAppNotificationView, UIView, UIWindow, UIViewController, NSString;

@interface MNInAppNotificationViewController : UIViewController <MNInAppNotificationViewDelegate> {

	MNInAppNotificationView* _inAppNotificationView;
	UIView* _notificationView;
	UIView* _backgroundView;
	UIWindow* _notificationWindow;
	UIViewController* _rootViewController;
	id<MNInAppNotificationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNInAppNotificationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * notificationView;                                                //@synthesize notificationView=_notificationView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showWithDismissalDelayInSeconds:(double)arg1 ;
-(UIView *)notificationView;
-(id)initWithNotificationView:(id)arg1 backgroundView:(id)arg2 rootViewController:(id)arg3 ;
-(void)inAppNotificationViewDidTap:(id)arg1 ;
-(void)inAppNotificationViewDidPullDown:(id)arg1 ;
-(void)inAppNotificationViewDidDismiss:(id)arg1 ;
-(void)inAppNotificationViewDidDisappear:(id)arg1 ;
-(void)_layoutViewInWindow;
-(id)_viewControllerForForwarding;
-(void)_initInAppNotificationWindowIfNecessary;
-(void)hide;
-(void)show;
-(void)setDelegate:(id<MNInAppNotificationViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNInAppNotificationViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)childViewControllerForStatusBarHidden;
@end
