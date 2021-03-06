/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNBlockUserSectionFooterViewDelegate.h>
#import <Messenger/MNContentSubscriptionTopicCellDelegate.h>
#import <Messenger/MNContentSubscriptionTopicsObserverDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBMProfileURLUtils, MNSecureThreadServiceControlling, MNBlockUserFullScreenViewControllerDelegate;
@class FBUserSession, MNNavigationCoordinator, MNThreadParticipantNameFormatter, MNUserBlocker, MNBusinessBlocker, MNIntentHandler, FBLocaleMap, MNUserStore, NSString, FBMUser, UITableView, MNTableViewCell, UISwitch, MNLoadingView, MNContentSubscriptionTopicsFetcher, MNContentSubscriptionTopicsObserver, NSMutableArray, MNProfileImageViewController;

@interface MNBlockUserFullScreenViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MNBlockUserSectionFooterViewDelegate, MNContentSubscriptionTopicCellDelegate, MNContentSubscriptionTopicsObserverDelegate, FBClassProvidable> {

	FBUserSession* _session;
	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNUserBlocker* _userBlocker;
	MNBusinessBlocker* _businessBlocker;
	id<FBMProfileURLUtils> _profileURLUtils;
	MNIntentHandler* _intentHandler;
	FBLocaleMap* _localeMap;
	MNUserStore* _userStore;
	id<MNSecureThreadServiceControlling> _secureThreadService;
	NSString* _userId;
	BOOL _isReportable;
	BOOL _isModal;
	BOOL _showsTopicsOnly;
	FBMUser* _user;
	UITableView* _tableView;
	MNTableViewCell* _blockMessagesCell;
	MNTableViewCell* _blockOnFacebookCell;
	MNTableViewCell* _reportConversationCell;
	UISwitch* _blockMessagesCellSwitch;
	MNLoadingView* _loadingView;
	unsigned long long _currentRequestId;
	BOOL _hasBlockedAllMessages;
	MNContentSubscriptionTopicsFetcher* _topicsFetcher;
	MNContentSubscriptionTopicsObserver* _topicsObserver;
	NSMutableArray* _contentSubscriptionTopics;
	MNProfileImageViewController* _profileImageViewController;
	long long _topicsSection;
	long long _blockMessagesSection;
	long long _blockOnFacebookSection;
	long long _reportConversationSection;
	long long _messageTypesHeaderSection;
	long long _sectionCount;
	NSString* _applicationName;
	id<MNBlockUserFullScreenViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNBlockUserFullScreenViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showAlertForError:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_closeButtonTapped;
-(void)configureWithUserId:(id)arg1 isReportable:(BOOL)arg2 isModal:(BOOL)arg3 showsTopicsOnly:(BOOL)arg4 ;
-(void)cancelUserRequestIfNeeded;
-(BOOL)_shouldShowReportConversationCell;
-(id)_stationAtIndex:(long long)arg1 ;
-(void)_configureTopicCell:(id)arg1 withViewModel:(id)arg2 ;
-(id)_blockOrUnblockMessagesFooterView;
-(id)_blockOrUnblockOnFacebookFooterView;
-(id)_reportConversationFooterView;
-(id)_topicsSectionHeaderView;
-(id)_messageTypesHeaderView;
-(BOOL)_userIsFullyBlocked;
-(void)_openSubTopicsForTopic:(id)arg1 ;
-(void)_blockMessagesCellClicked;
-(void)_saveAndReloadViewsWithUser:(id)arg1 ;
-(void)_userFetchFailedWithError:(id)arg1 ;
-(void)_userFetchDidBeginLongOperation;
-(void)_configureViewForUser;
-(void)_fetchTopicsIfNecessary;
-(void)_updateNavigationItemTitleForUserIfNecessary;
-(void)_setBlockMessagesTextLabel;
-(void)_blockMessagesSwitchChanged:(id)arg1 ;
-(void)_setBlockMessagesCellState:(long long)arg1 forCellSwitch:(id)arg2 ;
-(void)_handleBlockMessagesSuccessWithNewCellState:(long long)arg1 ;
-(void)_handleBlockMessagesFailureWithNewCellState:(long long)arg1 error:(id)arg2 ;
-(void)_logSwitchChanged:(id)arg1 ;
-(void)_setBlockMessagesCellState:(long long)arg1 ;
-(void)_handleBlockMessagesCellSuccessWithNewCellState:(long long)arg1 ;
-(void)_handleBlockMessagesCellFailureWithNewCellState:(long long)arg1 error:(id)arg2 ;
-(void)_logBlockMessagesCellClicked;
-(void)_updateOtherSectionsOnBlockMessagesCellStateDidChange:(long long)arg1 ;
-(BOOL)_shouldShowContentSubscriptionTopicsSection;
-(BOOL)_shouldShowBlockMessagesCell;
-(void)_updateMessageTypesHeaderSectionIfNecessary:(long long)arg1 ;
-(BOOL)_shouldShowBlockOnFacebookCell;
-(long long)_updateAndCountSections;
-(BOOL)_userIsPerson;
-(BOOL)_userIsPartial;
-(id)_footerViewWithText:(id)arg1 callToActionText:(id)arg2 ;
-(id)_unblockOnFacebookFooterView;
-(BOOL)_shouldFetchContentSubscriptionTopics;
-(void)_hideLoadingView;
-(void)_updateContentSubscriptionTopics:(id)arg1 ;
-(void)_reloadTableView;
-(void)topicCell:(id)arg1 didToggleSubscriptionForTopic:(id)arg2 ;
-(void)subscriptionStatusDidChangeForStation:(id)arg1 ;
-(void)blockUserSectionFooterViewDidTapLearnMore:(id)arg1 ;
-(void)_fetchUser;
-(void)setDelegate:(id<MNBlockUserFullScreenViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNBlockUserFullScreenViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_didBecomeActive:(id)arg1 ;
-(void)_showLoadingView;
@end

