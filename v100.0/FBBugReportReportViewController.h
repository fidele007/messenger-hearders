/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Messenger/FBBugReportContainerViewControllerChildViewControllerDelegate.h>
#import <Messenger/FBBugReportAttachmentListViewControllerDelegate.h>

@class FBBugReportReportView, FBBugReportAttachmentListViewController, FBBugReportCoordinator, NSString;

@interface FBBugReportReportViewController : UIViewController <UITextViewDelegate, FBBugReportContainerViewControllerChildViewControllerDelegate, FBBugReportAttachmentListViewControllerDelegate> {

	FBBugReportReportView* _reportView;
	FBBugReportAttachmentListViewController* _attachmentListViewController;
	BOOL _bugReportRedesignDidEnterDescriptionEventDidOccur;
	FBBugReportCoordinator* _coordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoordinator:(id)arg1 ;
-(void)personChoseVideoScreenCapture;
-(void)setNavigationItem;
-(void)addedThumbnailToAttachmentList:(int)arg1 ;
-(void)willShowActionSheet;
-(void)personChoseToTakeScreenshot;
-(void)personDidChooseCancel;
-(void)showDataUsePolicy;
-(void)personDidChooseBack;
-(void)personDidChooseSend;
-(void)updateSendButtonIsEnabled;
-(void)dealloc;
-(void)loadView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
@end
