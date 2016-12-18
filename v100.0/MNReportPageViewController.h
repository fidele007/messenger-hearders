/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Messenger/MNReportPageHeaderFooterViewDelegate.h>
#import <Messenger/MNDismissableViewController.h>

@class FBUserSession, FBMUser, UIViewController, MNReportPageMutator, MNReportPageHeaderFooterView, MNLoadingIndicator, UIView, NSString;

@interface MNReportPageViewController : UITableViewController <MNReportPageHeaderFooterViewDelegate, MNDismissableViewController> {

	FBUserSession* _session;
	FBMUser* _page;
	UIViewController* _blockUserViewController;
	MNReportPageMutator* _reportPageMutator;
	MNReportPageHeaderFooterView* _headerView;
	MNReportPageHeaderFooterView* _footerView;
	MNLoadingIndicator* _loadingIndicator;
	UIView* _loadingOverlay;
	/*^block*/id _dismissBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id dismissBlock;                         //@synthesize dismissBlock=_dismissBlock - In the implementation block
-(long long)dismissButtonItem;
-(long long)dismissButtonPosition;
-(id)dismissBlock;
-(void)setDismissBlock:(id)arg1 ;
-(id)initWithSession:(id)arg1 page:(id)arg2 blockUserViewController:(id)arg3 ;
-(void)reportPageHeaderFooterViewDidTap:(id)arg1 ;
-(BOOL)_shouldShowFooterView;
-(void)_showAlertToReportPageForReportPageOption:(long long)arg1 ;
-(void)_reportPageForReportPageOption:(long long)arg1 ;
-(void)showLoadingIndicatorView;
-(void)_handleReportPageSuccess;
-(void)_handleReportPageFailure:(id)arg1 ;
-(void)hideLoadingIndicatorView;
-(void)_presentBlockUserViewController;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(BOOL)shouldDismiss;
@end
