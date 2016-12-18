/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Messenger/FBQuicksilverPlayerInfoCompactCellDelegate.h>

@protocol FBQuicksilverPlayerInfoTableViewControllerFetcher, FBQuicksilverPlayerInfoTableViewControllerDelegate;
@class NSArray, FBUserSession, UIView, FBCustomActivityIndicatorView, FBQuicksilverCommonUIMetrics, FBQuicksilverPlayerInfoTableData, NSString;

@interface FBQuicksilverPlayerInfoTableViewController : UITableViewController <FBQuicksilverPlayerInfoCompactCellDelegate> {

	NSArray* _sections;
	FBUserSession* _session;
	id<FBQuicksilverPlayerInfoTableViewControllerFetcher> _fetcher;
	BOOL _shouldFastStart;
	BOOL _isPlayButtonEnabled;
	UIView* _containerView;
	FBCustomActivityIndicatorView* _loadingIndicatorView;
	FBQuicksilverCommonUIMetrics* _metrics;
	id<FBQuicksilverPlayerInfoTableViewControllerDelegate> _delegate;
	FBQuicksilverPlayerInfoTableData* _tableData;

}

@property (assign,nonatomic,__weak) id<FBQuicksilverPlayerInfoTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBQuicksilverPlayerInfoTableData * tableData;                                      //@synthesize tableData=_tableData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didFinishFetchTableData:(id)arg1 error:(id)arg2 ;
-(void)_downloadProfileImages:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)quicksilverPlayerInfoCompactCellDidTapPlayButton:(id)arg1 ;
-(void)_removeLoadingIndicatorViewAndReloadData:(id)arg1 ;
-(void)_hideLoadingIndicatorViewWithComplectionBlock:(/*^block*/id)arg1 ;
-(void)_setNullStateCellImageAndText:(id)arg1 withType:(long long)arg2 ;
-(BOOL)_shouldShowHeaderInSection:(long long)arg1 ;
-(id)initWithSession:(id)arg1 fetcher:(id)arg2 shouldFastStart:(BOOL)arg3 ;
-(void)enablePlayButtons;
-(void)setDelegate:(id<FBQuicksilverPlayerInfoTableViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBQuicksilverPlayerInfoTableViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(FBQuicksilverPlayerInfoTableData *)tableData;
@end

