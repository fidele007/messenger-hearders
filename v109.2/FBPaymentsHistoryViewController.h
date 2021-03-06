/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol FBPaymentsListDataRetrieving, FBPaymentsHistoryTableViewCellViewModelCreator, FBPaymentsHistoryActionHandling;
@class FBUserSession, UITableView, NSArray, NSString;

@interface FBPaymentsHistoryViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	FBUserSession* _session;
	id<FBPaymentsListDataRetrieving> _historyDataRetriever;
	id<FBPaymentsHistoryTableViewCellViewModelCreator> _cellViewModelCreator;
	id<FBPaymentsHistoryActionHandling> _actionHandler;
	UITableView* _tableView;
	NSArray* _loadedData;
	BOOL _hasMoreData;
	id _loadedCursor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_loadData:(BOOL)arg1 ;
-(void)_handleLoadedData:(id)arg1 hasMoreData:(BOOL)arg2 loadedCursor:(id)arg3 ;
-(id)initWithSession:(id)arg1 historyDataRetriever:(id)arg2 cellViewModelCreator:(id)arg3 actionHandler:(id)arg4 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

