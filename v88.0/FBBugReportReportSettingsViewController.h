/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBBugReportContainerViewControllerChildViewControllerDelegate.h>

@class FBBugReportReportSettingsViewTinesInfo, FBBugReportReportSettingsView, FBBugReportCoordinator, NSString;

@interface FBBugReportReportSettingsViewController : UIViewController <FBBugReportContainerViewControllerChildViewControllerDelegate> {

	FBBugReportReportSettingsViewTinesInfo* _tinesInfo;
	FBBugReportReportSettingsView* _reportSettingsView;
	FBBugReportCoordinator* _coordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoordinator:(id)arg1 ;
-(void)shakeToReportSwitchValueChanged:(id)arg1 ;
-(void)setNavigationItem;
-(void)personDidChooseBack;
-(void)loadView;
@end

