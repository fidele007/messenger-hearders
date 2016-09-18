/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBMinimizableModalsHostViewDelegate.h>
#import <Messenger/FBMinimizableModalViewControllerDelegate.h>

@class UIViewController, NSMapTable, FBMinimizableModalsHostView, NSString;

@interface FBMinimizableModalsHostViewController : UIViewController <FBMinimizableModalsHostViewDelegate, FBMinimizableModalViewControllerDelegate> {

	UIViewController* _baseViewController;
	NSMapTable* _modalViewControllers;
	FBMinimizableModalsHostView* _view;
	unsigned long long _appearanceState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissViewController:(id)arg1 ;
-(id)initWithBaseViewController:(id)arg1 ;
-(void)minimizeAllPresentedViewControllers;
-(void)minimizeAllPresentedViewControllersAndShowSwitcherView;
-(void)minimizableViewController:(id)arg1 setTitle:(id)arg2 ;
-(void)hostView:(id)arg1 modalViewMustDismiss:(id)arg2 ;
-(void)baseViewWillAppearInHostView:(id)arg1 ;
-(void)hostView:(id)arg1 modalViewWillAppear:(id)arg2 ;
-(void)baseViewDidAppearInHostView:(id)arg1 ;
-(void)hostView:(id)arg1 modalViewDidAppear:(id)arg2 ;
-(void)baseViewWillDisappearInHostView:(id)arg1 ;
-(void)hostView:(id)arg1 modalViewWillDisappear:(id)arg2 ;
-(void)baseViewDidDisappearInHostView:(id)arg1 ;
-(void)hostView:(id)arg1 modalViewDidDisappear:(id)arg2 ;
-(id)_modalViewControllerForModalView:(id)arg1 ;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)presentViewController:(id)arg1 ;
@end

