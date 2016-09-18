/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNActionSheetPresenting.h>

@protocol MNActionSheetPresentationDelegate, MNRideServiceProviderListViewControllerDelegate;
@class FBUserSession, NSArray, FBImageDownloader, MNBusinessDefaultViewProvider, MNRideServiceActionSheetDescriptionExperimentContext, NSString;

@interface MNRideServiceProviderListViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, MNActionSheetPresenting> {

	FBUserSession* _session;
	NSArray* _providerList;
	FBImageDownloader* _imageDownloader;
	MNBusinessDefaultViewProvider* _viewProvider;
	MNRideServiceActionSheetDescriptionExperimentContext* _actionSheetDescriptionExperimentContext;
	id<MNActionSheetPresentationDelegate> _presentationDelegate;
	id<MNRideServiceProviderListViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRideServiceProviderListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNActionSheetPresentationDelegate> presentationDelegate;                //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(void)actionSheetDidResize;
-(void)actionSheetWillDismiss;
-(void)actionSheetWillPresent;
-(id)initWithSession:(id)arg1 imageDownloader:(id)arg2 ;
-(void)configureWithProviderList:(id)arg1 ;
-(void)setDelegate:(id<MNRideServiceProviderListViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<MNRideServiceProviderListViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setPresentationDelegate:(id<MNActionSheetPresentationDelegate>)arg1 ;
-(id<MNActionSheetPresentationDelegate>)presentationDelegate;
@end

