/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNJoinableGroupPendingApprovalsCellDelegate.h>
#import <FBSharedFramework/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNAvatarImageDecorating;
@class MNJoinableGroupPendingApprovalsView, MNProfileImageViewController, FBUserSession, NSDictionary, NSOrderedSet, MNThreadViewModel, MNThreadUpdateRunningService, FBToastPresenter, MNJoinableGroupPendingApprovalsToastView, FBToast, NSString;

@interface MNJoinableGroupPendingApprovalsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MNJoinableGroupPendingApprovalsCellDelegate, FBClassProvidable, MNThreadViewModelConfigurable> {

	MNJoinableGroupPendingApprovalsView* _approvalsView;
	MNProfileImageViewController* _profileImageViewController;
	id<MNAvatarImageDecorating> _avatarImageDecorating;
	FBUserSession* _session;
	NSDictionary* _pendingApprovalRequestsByUserId;
	NSOrderedSet* _resolvedPendingApprovalViewModels;
	MNThreadViewModel* _threadViewModel;
	MNThreadUpdateRunningService* _threadSummaryUpdateService;
	FBToastPresenter* _topToastPresenter;
	MNJoinableGroupPendingApprovalsToastView* _toastView;
	FBToast* _toast;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(id)threadViewModel;
-(void)_loadApprovalsTableViewIfNecessary;
-(void)_refreshPendingApprovalsTableView;
-(void)_showToastType:(unsigned long long)arg1 withMessage:(id)arg2 ;
-(void)_fetchUserInfoForUsersFromGraphQL:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)didTapDoneButton;
-(void)_performApprovalMutationForUser:(id)arg1 withPendingApprovalAction:(long long)arg2 removeRowAtIndexPath:(id)arg3 ;
-(void)_showSuccessToastForRowAtIndexPath:(id)arg1 pendingApprovalAction:(long long)arg2 ;
-(void)_removeRowAtIndexPath:(id)arg1 ;
-(void)_checkAndShowPendingApprovalsNullState;
-(void)_updateCellSeparatorInsetsForIndexPath:(id)arg1 ;
-(void)_performApprovalMutationForSelectedCell:(id)arg1 withPendingApprovalAction:(long long)arg2 ;
-(void)joinableGroupPendingApprovalsCellDidAcceptPendingRequest:(id)arg1 ;
-(void)joinableGroupPendingApprovalsCellDidIgnorePendingRequest:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)_configureNavigationBar;
@end

