/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSString, FBUserSession, MNBusinessNavigationHandler, FBMemMessengerRetailReceipt, MNCommerceOrderDetailInformationViewModel, MNCommerceOrderDetailInformationView, MNBusinessLogoView, FBRichTextView, NSArray, FBMemPageInfo, FBGraphQLMemPaginatedConnectionController, MNBusinessFetcher, UITableView, MNLoadingView;

@interface MNCommerceOrderDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	NSString* _receiptID;
	NSString* _businessID;
	FBUserSession* _session;
	MNBusinessNavigationHandler* _navigationHandler;
	FBMemMessengerRetailReceipt* _receipt;
	NSString* _merchantName;
	MNCommerceOrderDetailInformationViewModel* _informationViewModel;
	MNCommerceOrderDetailInformationView* _informationView;
	MNBusinessLogoView* _logoView;
	FBRichTextView* _merchantNameView;
	NSArray* _items;
	FBMemPageInfo* _pageInfo;
	FBGraphQLMemPaginatedConnectionController* _itemPaginationController;
	MNBusinessFetcher* _fetcher;
	UITableView* _tableView;
	MNLoadingView* _loadingView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_hideLoadingView;
-(void)_handleResponseContent:(id)arg1 cachedContent:(BOOL)arg2 error:(id)arg3 startTime:(double)arg4 ;
-(void)_initiateGraphQLFetchForReceiptID:(id)arg1 ;
-(id)_itemViewCellForIndexPath:(id)arg1 ;
-(id)_moreItemsCell;
-(void)_loadMoreRetailItems;
-(void)_configureViewsWithDownloadedData;
-(void)_didLoadMoreItems;
-(id)initWithSession:(id)arg1 receiptID:(id)arg2 businessID:(id)arg3 navigationHandler:(id)arg4 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
@end
