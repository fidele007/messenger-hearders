/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBWebRTCRecentCallerViewModelListener.h>
#import <Messenger/FBWebRTCCallLogViewModelDelegate.h>
#import <Messenger/MNPeopleCellDelegate.h>
#import <Messenger/FBWebRTCCallCellDelegate.h>
#import <Messenger/FBWebRTCVoicemailCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <Messenger/MNPeopleSearchControllerDelegate.h>
#import <Messenger/MNPeopleSearchControllerRTCDelegate.h>
#import <Messenger/MNPeopleSearchResultsDataSourceRTCCallButtonDataSource.h>
#import <Messenger/FBWebRTCRecentCallsViewControllerDelegate.h>
#import <Messenger/FBWebRTCCallLogNuxViewDelegate.h>
#import <Messenger/FBWebRTCCallLogViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNAvatarImageDecorating, FBWebRTCHostApplication, MNPresenceSubscribing, MNTableViewPreviewingHandling, FBWebRTCCallLogViewControllerDelegate;
@class FBWebRTCCallLogViewModel, NSMutableArray, FBWebRTCRecentCallerViewModel, FBWebRTCCallController, FBWebRTCCallLogView, FBWebRTCCallLogViewHeaderView, UITableView, UISearchBar, UISegmentedControl, FBWebRTCCallLogNuxView, FBWebRTCCallLogNuxViewConfiguration, FBWebRTCPYMCViewController, NSArray, MNDateFormatter, UISearchDisplayController, MNPeopleSearchController, FBWebRTCCallButtonImageProvider, MNPeopleCellFactory, MNProfileImageViewController, MNThreadImageManager, FBExperimentManager, FBWebRtcCallTabFilterExperimentContext, FBWebRtcCallTabAggregationExperimentContext, FBWebRTCRecentCallsViewController, FBWebRTCVoicemailCell, FBWebRTCVoicemailPlayerController, FBMobileConfigContextManager, NSString;

@interface FBWebRTCCallLogViewController : UIViewController <FBWebRTCRecentCallerViewModelListener, FBWebRTCCallLogViewModelDelegate, MNPeopleCellDelegate, FBWebRTCCallCellDelegate, FBWebRTCVoicemailCellDelegate, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate, MNPeopleSearchControllerDelegate, MNPeopleSearchControllerRTCDelegate, MNPeopleSearchResultsDataSourceRTCCallButtonDataSource, FBWebRTCRecentCallsViewControllerDelegate, FBWebRTCCallLogNuxViewDelegate, FBWebRTCCallLogViewDelegate, FBClassProvidable> {

	FBWebRTCCallLogViewModel* _callLogViewModel;
	NSMutableArray* _calllogViewModelSnapshot;
	NSMutableArray* _calllogViewModelFilterOfMissedCalls;
	FBWebRTCRecentCallerViewModel* _recentCallerViewModel;
	FBWebRTCCallController* _callController;
	FBWebRTCCallLogView* _callLogView;
	FBWebRTCCallLogViewHeaderView* _headerView;
	UITableView* _tableView;
	UISearchBar* _searchBar;
	UISegmentedControl* _missedCallsFilterSegmentedControl;
	FBWebRTCCallLogNuxView* _nuxView;
	FBWebRTCCallLogNuxViewConfiguration* _nuxViewConfiguration;
	FBWebRTCPYMCViewController* _rtcPymcViewController;
	id<FBProvider> _callTabContactsSelectorViewControllerProvider;
	NSArray* _promoCellControllers;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNDateFormatter* _dateFormatter;
	UISearchDisplayController* _searchDisplayController;
	MNPeopleSearchController* _peopleSearchController;
	BOOL _searching;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	MNPeopleCellFactory* _peopleCellFactory;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;
	FBExperimentManager* _experimentManager;
	long long _callTabTapSuggestedAction;
	long long _callTabTapSearchAction;
	FBWebRtcCallTabFilterExperimentContext* _missedFilterExperement;
	FBWebRtcCallTabAggregationExperimentContext* _advancedCallAggregationExperement;
	BOOL fFirstLoadComplete;
	unsigned long long _visibleCallLogs;
	BOOL _recentCallsViewActive;
	FBWebRTCRecentCallsViewController* _recentCallsView;
	id<FBWebRTCHostApplication> _hostApplication;
	id<MNPresenceSubscribing> _presenceSubscriptionService;
	id<MNTableViewPreviewingHandling> _tableViewPreviewingHandler;
	FBWebRTCVoicemailCell* _voiceMailCell;
	BOOL _voiceMailCellActive;
	BOOL _refreshCallLogByVoiceMail;
	FBWebRTCVoicemailPlayerController* _voicemailController;
	FBMobileConfigContextManager* _configManager;
	id<FBWebRTCCallLogViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWebRTCCallLogViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_registerForPreviewing;
-(void)contextTappedForConversationContact:(id)arg1 ;
-(void)callButtonTappedForConversationContact:(id)arg1 isVideoCall:(BOOL)arg2 ;
-(void)peopleCellActionButtonTappedForConversationContact:(id)arg1 ;
-(void)didUpdatePeopleCellActionButtonState:(id)arg1 forConversationContact:(id)arg2 ;
-(BOOL)peopleSearchControllerShouldIncludeGroup:(id)arg1 ;
-(BOOL)peopleSearchControllerShouldIncludeAddressBookContacts:(id)arg1 ;
-(BOOL)peopleSearchControllerShouldIncludePages:(id)arg1 ;
-(BOOL)peopleSearchControllerShouldIncludeBlendedResults:(id)arg1 ;
-(BOOL)peopleSearchControllerShouldIncludeNicknameResults:(id)arg1 ;
-(id)searchTextForPeopleSearchController:(id)arg1 ;
-(id)pickedUserIdsForPeopleSearchController:(id)arg1 ;
-(void)peopleSearchControllerDidFinishSearch:(id)arg1 ;
-(BOOL)peopleSearchController:(id)arg1 shouldSelectResultWhenTapped:(id)arg2 ;
-(void)peopleSearchController:(id)arg1 didSelectResult:(id)arg2 withAnalyticsExtras:(id)arg3 ;
-(BOOL)peopleSearchController:(id)arg1 shouldShowResult:(id)arg2 ;
-(BOOL)peopleSearchControllerShouldSearchServer:(id)arg1 ;
-(unsigned long long)surfaceForPeopleSearchSession;
-(id)initWithCallLogViewModel:(id)arg1 callLogViewModel:(id)arg2 recentCallerViewModel:(id)arg3 callController:(id)arg4 avatarImageDecoration:(id)arg5 dateFormatter:(id)arg6 callButtonImageProvider:(id)arg7 peopleSearchController:(id)arg8 peopleCellFactory:(id)arg9 experimentManager:(id)arg10 profileImageViewController:(id)arg11 threadImageManager:(id)arg12 hostApplication:(id)arg13 presenceSubscriptionService:(id)arg14 callTabContactsSelectorVCProvider:(id)arg15 rtcPymcViewController:(id)arg16 audioCache:(id)arg17 webAudioManager:(id)arg18 nuxViewConfiguration:(id)arg19 promoCellControllers:(id)arg20 tableViewPreviewingHandler:(id)arg21 configManager:(id)arg22 ;
-(void)didPressClose;
-(void)_prepareNuxView;
-(void)_prepareMissedCallsFilterSegmentedControl;
-(void)_setUpNullStateIfNeeded;
-(void)closeRecentCallsView;
-(void)_refreshView:(BOOL)arg1 forceReloadTableView:(BOOL)arg2 hasNewMissedCall:(BOOL)arg3 ;
-(void)_closeVoiceMailPlayer;
-(void)_endSearchSession;
-(void)_startSearchSession;
-(void)openThread:(id)arg1 ;
-(void)voiceMailControllerActive:(BOOL)arg1 setVoiceMailSeen:(BOOL)arg2 cell:(id)arg3 callEntry:(id)arg4 ;
-(void)_updateViewsWithChangeVoicemailState;
-(id)_viewableCalls;
-(id)_generatePromoCellAtIndexPath:(id)arg1 ;
-(id)_generateCallHistoryCellForRowAtIndexPath:(id)arg1 ;
-(id)_generateSeeMoreHistoryCell;
-(id)_generateTopCallersCellForRowAtIndexPath:(id)arg1 ;
-(BOOL)_shouldShowNuxView;
-(void)_deleteCallsLogViewModelEntry:(id)arg1 ;
-(void)_setImageForCallLogCell:(id)arg1 contact:(id)arg2 isVoicemail:(BOOL)arg3 ;
-(void)_didSelectSeeMoreHistorySectionAtRow:(long long)arg1 ;
-(void)_didSelectCallHistorySectionAtIndexPath:(id)arg1 ;
-(void)_didSelectTopCallersSectionAtRow:(long long)arg1 ;
-(void)_setImageForTableViewCell:(id)arg1 indexPath:(id)arg2 ;
-(id)_filterCallLogViewModelToMissedCallsOnly:(id)arg1 ;
-(BOOL)_shouldShowMissedCallFilter;
-(void)_updateMissedCallFilterSegmentedControlView;
-(void)_updateNuxView;
-(void)_setProfileImagePerson:(id)arg1 tableCell:(id)arg2 isVoicemail:(BOOL)arg3 ;
-(void)_setProfileImageGroup:(id)arg1 tableCell:(id)arg2 isVoicemail:(BOOL)arg3 ;
-(void)_didChangeValueOfMissedCallFilterSegmentedControl;
-(void)openRecentCallsView;
-(void)recentCallerViewModelDidFinishFetching:(id)arg1 ;
-(void)callLogViewModelDidChange:(id)arg1 hasUnseenMissedCalls:(BOOL)arg2 ;
-(void)callCell:(id)arg1 didTapCallButtonForContact:(id)arg2 isVideoCall:(BOOL)arg3 ;
-(void)peopleSearchController:(id)arg1 didTapCallButtonForContact:(id)arg2 isVideoCall:(BOOL)arg3 ;
-(id)peopleSearchDataSourceAudioCallButtonImage;
-(BOOL)peopleSearchDataSourceIsAudioCallingAvailableForContact:(id)arg1 ;
-(id)peopleSearchDataSourceVideoCallButtonImage;
-(BOOL)peopleSearchDataSourceIsVideoCallingAvailableForContact:(id)arg1 ;
-(void)loadImageForCallCell:(id)arg1 contact:(id)arg2 ;
-(void)recentCallButtonTappedForConversation:(id)arg1 isVideoCall:(BOOL)arg2 source:(unsigned long long)arg3 ;
-(void)callLogNuxViewCallButtonPressed:(id)arg1 ;
-(void)callLogViewCoverTaped:(id)arg1 ;
-(void)tableView:(id)arg1 didEndDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setDelegate:(id<FBWebRTCCallLogViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<FBWebRTCCallLogViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
@end

