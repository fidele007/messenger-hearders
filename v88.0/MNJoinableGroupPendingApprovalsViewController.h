/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNJoinableGroupPendingApprovalsCellDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNAvatarImageDecorating;
@class MNJoinableGroupPendingApprovalsView, MNProfileImageViewController, FBUserSession, NSDictionary, NSOrderedSet, MNThreadViewModel, MNThreadSummaryUpdateRunningService, NSString;

@interface MNJoinableGroupPendingApprovalsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MNJoinableGroupPendingApprovalsCellDelegate, FBClassProvidable, MNThreadViewModelConfigurable> {

	MNJoinableGroupPendingApprovalsView* _approvalsView;
	MNProfileImageViewController* _profileImageViewController;
	id<MNAvatarImageDecorating> _avatarImageDecorating;
	FBUserSession* _session;
	NSDictionary* _pendingApprovalRequestsByUserId;
	NSOrderedSet* _resolvedPendingApprovalViewModels;
	MNThreadViewModel* _threadViewModel;
	MNThreadSummaryUpdateRunningService* _threadSummaryUpdateService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_loadApprovalsTableViewIfNecessary;
-(void)_refreshPendingApprovalsTableView;
-(void)_fetchUserInfoForUsersFromGraphQL:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)didTapDoneButton;
-(void)_performApprovalMutationForUser:(id)arg1 withPendingApprovalAction:(long long)arg2 removeRowAtIndexPath:(id)arg3 ;
-(void)_removeRowAtIndexPath:(id)arg1 ;
-(void)_checkAndShowPendingApprovalsNullState;
-(void)_updateCellSeparatorInsetsForIndexPath:(id)arg1 ;
-(void)_performApprovalMutationForSelectedCell:(id)arg1 withPendingApprovalAction:(long long)arg2 ;
-(void)joinableGroupPendingApprovalsCellDidAcceptPendingRequest:(id)arg1 ;
-(void)joinableGroupPendingApprovalsCellDidIgnorePendingRequest:(id)arg1 ;
-(id)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_configureNavigationBar;
@end

