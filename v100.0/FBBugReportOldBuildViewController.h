/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBBugReportContainerViewControllerChildViewControllerDelegate.h>

@class FBBugReportOldBuildView, FBBugReportCoordinator, FBBugReportReportAProblemViewController, NSString;

@interface FBBugReportOldBuildViewController : UIViewController <UITextViewDelegate, UIAlertViewDelegate, FBBugReportContainerViewControllerChildViewControllerDelegate> {

	FBBugReportOldBuildView* _oldBuildView;
	FBBugReportCoordinator* _coordinator;
	FBBugReportReportAProblemViewController* _reportAProblemViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didPressUpdateBuild;
-(void)didPressReportAnyway;
-(void)setNavigationItem;
-(id)initWithCoordinator:(id)arg1 reportAProblemViewController:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
@end

