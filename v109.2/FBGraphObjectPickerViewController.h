/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewController.h>
#import <Messenger/FBGraphObjectSelectionChangedDelegate.h>
#import <Messenger/FBGraphObjectPagingLoaderDelegate.h>

@class FBSession, UIActivityIndicatorView, UITableView, NSSet, FBGraphObjectTableDataSource, FBGraphObjectTableSelection, FBGraphObjectPagingLoader, NSString;

@interface FBGraphObjectPickerViewController : FBViewController <FBGraphObjectSelectionChangedDelegate, FBGraphObjectPagingLoaderDelegate> {

	FBSession* _session;
	BOOL _allowsMultipleSelection;
	BOOL _implicitSession;
	UIActivityIndicatorView* _spinner;
	UITableView* _tableView;
	NSSet* _fieldsForRequest;
	FBGraphObjectTableDataSource* _dataSource;
	FBGraphObjectTableSelection* _selectionManager;
	FBGraphObjectPagingLoader* _loader;

}

@property (nonatomic,retain) FBGraphObjectTableDataSource * dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) FBGraphObjectTableSelection * selectionManager;              //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,retain) FBGraphObjectPagingLoader * loader;                          //@synthesize loader=_loader - In the implementation block
@property (assign,nonatomic) BOOL allowsMultipleSelection; 
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                           //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                     //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSSet * fieldsForRequest;                                      //@synthesize fieldsForRequest=_fieldsForRequest - In the implementation block
@property (assign,nonatomic) BOOL itemPicturesEnabled; 
@property (nonatomic,retain) FBSession * session; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)cacheRefreshDelay;
+(unsigned long long)graphObjectPagingMode;
+(id)firstRenderLogString;
-(void)pagingLoaderDidFinishLoading:(id)arg1 ;
-(void)pagingLoader:(id)arg1 didLoadData:(id)arg2 ;
-(void)pagingLoader:(id)arg1 willLoadURL:(id)arg2 ;
-(void)pagingLoaderWasCancelled:(id)arg1 ;
-(void)pagingLoader:(id)arg1 handleError:(id)arg2 ;
-(BOOL)itemPicturesEnabled;
-(void)setItemPicturesEnabled:(BOOL)arg1 ;
-(void)notifyDelegateDataDidChange;
-(void)notifyDelegateSelectionDidChange;
-(void)initializeGraphObjectPicker;
-(void)_removeSessionObserver:(id)arg1 ;
-(void)setSession:(id)arg1 implicit:(BOOL)arg2 ;
-(void)_addSessionObserver:(id)arg1 ;
-(void)loadDataThrottledSkippingRoundTripIfCached:(id)arg1 ;
-(void)_centerAndStartSpinner;
-(void)graphObjectTableSelectionDidChange:(id)arg1 ;
-(void)configureDataSource:(id)arg1 ;
-(BOOL)delegateIncludesGraphObject:(id)arg1 ;
-(void)loadDataSkippingRoundTripIfCached:(id)arg1 ;
-(NSSet *)fieldsForRequest;
-(void)setFieldsForRequest:(NSSet *)arg1 ;
-(void)notifyDelegateOfError:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDataSource:(FBGraphObjectTableDataSource *)arg1 ;
-(void)dealloc;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(BOOL)allowsMultipleSelection;
-(FBGraphObjectTableDataSource *)dataSource;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)clearSelection;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)updateView;
-(void)loadData;
-(void)_clearData;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setSession:(FBSession *)arg1 ;
-(void)setLoader:(FBGraphObjectPagingLoader *)arg1 ;
-(FBSession *)session;
-(FBGraphObjectTableSelection *)selectionManager;
-(FBGraphObjectPagingLoader *)loader;
-(void)setSelectionManager:(FBGraphObjectTableSelection *)arg1 ;
@end

