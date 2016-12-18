/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNPeopleModelControllerDelegate.h>
#import <Messenger/MNPeopleOnlineSwitchCellControllerDelegate.h>
#import <Messenger/MNPeopleTableSelectionDelegate.h>
#import <Messenger/MNPeopleCellDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNPeopleSearchControllerDelegate.h>
#import <Messenger/MNPeopleViewDelegate.h>
#import <Messenger/MNThreadSelectionStateListener.h>
#import <Messenger/MNContactImportInitiationListener.h>
#import <Messenger/MNContactSyncUpsellDialogControllerDelegate.h>
#import <Messenger/MNUniversalSearchControllerDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNListViewContaining.h>
#import <Messenger/MNViewControllerAppearanceTransitioning.h>

@protocol FBProvider, MNInviteEligibilityChecking, MNPerformanceMarking, FBAddressBookAccessPermissionChecker, FBContactImporter, MNAvatarImageDecorating;
@class NSString, MNAddContactController, MNSearchBarThemeConfiguration, FBWebRTCCallButtonImageProvider, MNPeopleTabContactSyncBadgeCountController, MNPeopleCellFactory, MNCDNProfileImageDownloader, MNUniversalSearchPolicy, MNUniversalSearchController, MNNavigationCoordinator, MNViewPreviewingHandler, MNInviteSender, MNSMSInvitePresenter, MNNavigationBarItemFactory, FBLazyCreator, MNAddressBook, MNScrollViewScrollingListenerAnnouncer, MNViewControllerAppearanceListenerAnnouncer, FBMobileConfigContextManager, MNLightweightActionConfigManager, MNLightweightActionSender, MNOmniMNavigationCoordinator, FBMLoggedInUserInfoManager, MNPeopleModelController, MNPeopleView, UISegmentedControl, UIBarButtonItem, MNThreadNavigationCoordinator, FBUserSession, MNPeopleTablePresenceManager, MNThreadParticipantNameFormatter, MNThreadSelectionStateCoordinator, FBMThreadSummary, FBTableViewAggregatedDataSource, MNOnlineSwitcherCellDataSource, MNPeopleTableDelegate, MNOptionalSingleCellDataSource, MNPeopleOnlineSwitchCellController, FBDelegateForwarder, MNPeopleOnlineLoadingCell, MNFindFriendsTableViewController, MNPeopleSearchController, MNPeopleSearchAccessibilityController, MNUserSettings, MNPeopleViewImportedContactCardPresenter, FBWebRTCCallStarter, MNUserStore, NSDictionary, MNAddressBookContactImportInitiator, MNGraphGlobalContactsSyncLock, FBLocaleMap, MNUserSetUpStatePersister, MNContactSyncUpsellDialogController, MNPeopleTabConfiguration;

@interface MNPeopleViewController : UIViewController <MNPeopleModelControllerDelegate, MNPeopleOnlineSwitchCellControllerDelegate, MNPeopleTableSelectionDelegate, MNPeopleCellDelegate, UISearchDisplayDelegate, UITableViewDelegate, MNPeopleSearchControllerDelegate, MNPeopleViewDelegate, MNThreadSelectionStateListener, MNContactImportInitiationListener, MNContactSyncUpsellDialogControllerDelegate, MNUniversalSearchControllerDelegate, FBViewerContextClassProvidable, MNListViewContaining, MNViewControllerAppearanceTransitioning> {

	BOOL _isCurrentViewControllerVisible;
	NSString* _searchText;
	unsigned long long _userRequestId;
	MNAddContactController* _addContactController;
	MNSearchBarThemeConfiguration* _searchBarConfiguration;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	MNPeopleTabContactSyncBadgeCountController* _peopleTabContactSyncBadgeCountController;
	MNPeopleCellFactory* _peopleCellFactory;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	MNUniversalSearchPolicy* _universalSearchPolicy;
	id<FBProvider> _universalSearchControllerProvider;
	MNUniversalSearchController* _universalSearchController;
	MNNavigationCoordinator* _navigationCoordinator;
	MNViewPreviewingHandler* _viewPreviewingHandler;
	MNInviteSender* _inviteSender;
	MNSMSInvitePresenter* _smsInvitePresenter;
	id<MNInviteEligibilityChecking> _inviteEligibilityChecker;
	MNNavigationBarItemFactory* _navigationBarItemFactory;
	FBLazyCreator* _switchNuxCellCreator;
	MNAddressBook* _addressBook;
	MNScrollViewScrollingListenerAnnouncer* _scrollingAnnouncer;
	unsigned long long _appearanceState;
	MNViewControllerAppearanceListenerAnnouncer* _appearanceAnnouncer;
	id<MNPerformanceMarking> _performanceMarker;
	FBMobileConfigContextManager* _configManager;
	MNLightweightActionConfigManager* _lightweightActionConfigManager;
	MNLightweightActionSender* _lightweightActionSender;
	MNOmniMNavigationCoordinator* _omniMNavigationCoordinator;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	MNPeopleModelController* _peopleModelController;
	MNPeopleView* _peopleView;
	UISegmentedControl* _segmentedControl;
	UIBarButtonItem* _addContactButton;
	UIBarButtonItem* _searchButton;
	unsigned long long _filterType;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	FBUserSession* _session;
	MNPeopleTablePresenceManager* _presenceManager;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNThreadSelectionStateCoordinator* _threadSelectionStateCoordinator;
	FBMThreadSummary* _selectedThreadSummary;
	FBTableViewAggregatedDataSource* _facebookPeopleDataSource;
	MNOnlineSwitcherCellDataSource* _facebookPeopleCellSwitcherDataSource;
	MNPeopleTableDelegate* _facebookPeopleDelegate;
	MNOptionalSingleCellDataSource* _switchNuxCellDataSource;
	MNPeopleOnlineSwitchCellController* _onlineSwitchCellController;
	FBDelegateForwarder* _facebookTableForker;
	MNPeopleOnlineLoadingCell* _onlineLoadingCell;
	MNOptionalSingleCellDataSource* _onlineLoadingDataSource;
	FBTableViewAggregatedDataSource* _messengerPeopleDataSource;
	MNPeopleTableDelegate* _messengerPeopleDelegate;
	MNFindFriendsTableViewController* _findFriendsTableViewController;
	id<FBProvider> _findFriendsTableViewControllerProvider;
	id<FBProvider> _bymmTableViewControllerProvider;
	FBDelegateForwarder* _mesengerTableForker;
	MNPeopleSearchController* _peopleSearchController;
	MNPeopleSearchAccessibilityController* _peopleSearchAccessibilityController;
	MNUserSettings* _userSettings;
	MNPeopleViewImportedContactCardPresenter* _importedContactCardPresenter;
	FBWebRTCCallStarter* _callStarter;
	MNUserStore* _userStore;
	NSDictionary* _sourceExtras;
	NSString* _analyticsSearchSessionId;
	id<FBAddressBookAccessPermissionChecker> _addressBookAccessPermissionChecker;
	MNAddressBookContactImportInitiator* _contactImportInitiator;
	id<FBContactImporter> _contactImporter;
	MNGraphGlobalContactsSyncLock* _contactsSyncLock;
	FBLocaleMap* _localeMap;
	MNUserSetUpStatePersister* _userSetUpStatePersister;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNContactSyncUpsellDialogController* _contactSyncUpsellDialogController;
	MNPeopleTabConfiguration* _peopleTabConfiguration;
	NSString* _contextBasedMainAppName;

}

@property (nonatomic,retain) FBMLoggedInUserInfoManager * loggedInUserInfoManager;                                     //@synthesize loggedInUserInfoManager=_loggedInUserInfoManager - In the implementation block
@property (nonatomic,retain) MNPeopleModelController * peopleModelController;                                          //@synthesize peopleModelController=_peopleModelController - In the implementation block
@property (nonatomic,retain) MNPeopleView * peopleView;                                                                //@synthesize peopleView=_peopleView - In the implementation block
@property (nonatomic,retain) UISegmentedControl * segmentedControl;                                                    //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * addContactButton;                                                       //@synthesize addContactButton=_addContactButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * searchButton;                                                           //@synthesize searchButton=_searchButton - In the implementation block
@property (assign,nonatomic) unsigned long long filterType;                                                            //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,retain) MNNavigationCoordinator * navigationCoordinator;                                          //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,retain) MNThreadNavigationCoordinator * threadNavigationCoordinator;                              //@synthesize threadNavigationCoordinator=_threadNavigationCoordinator - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) MNPeopleTablePresenceManager * presenceManager;                                           //@synthesize presenceManager=_presenceManager - In the implementation block
@property (nonatomic,retain) MNThreadParticipantNameFormatter * nameFormatter;                                         //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (nonatomic,retain) MNThreadSelectionStateCoordinator * threadSelectionStateCoordinator;                      //@synthesize threadSelectionStateCoordinator=_threadSelectionStateCoordinator - In the implementation block
@property (nonatomic,retain) FBMThreadSummary * selectedThreadSummary;                                                 //@synthesize selectedThreadSummary=_selectedThreadSummary - In the implementation block
@property (nonatomic,retain) FBTableViewAggregatedDataSource * facebookPeopleDataSource;                               //@synthesize facebookPeopleDataSource=_facebookPeopleDataSource - In the implementation block
@property (nonatomic,retain) MNOnlineSwitcherCellDataSource * facebookPeopleCellSwitcherDataSource;                    //@synthesize facebookPeopleCellSwitcherDataSource=_facebookPeopleCellSwitcherDataSource - In the implementation block
@property (nonatomic,retain) MNPeopleTableDelegate * facebookPeopleDelegate;                                           //@synthesize facebookPeopleDelegate=_facebookPeopleDelegate - In the implementation block
@property (nonatomic,retain) MNOptionalSingleCellDataSource * switchNuxCellDataSource;                                 //@synthesize switchNuxCellDataSource=_switchNuxCellDataSource - In the implementation block
@property (nonatomic,retain) MNPeopleOnlineSwitchCellController * onlineSwitchCellController;                          //@synthesize onlineSwitchCellController=_onlineSwitchCellController - In the implementation block
@property (nonatomic,retain) FBDelegateForwarder * facebookTableForker;                                                //@synthesize facebookTableForker=_facebookTableForker - In the implementation block
@property (nonatomic,retain) MNPeopleOnlineLoadingCell * onlineLoadingCell;                                            //@synthesize onlineLoadingCell=_onlineLoadingCell - In the implementation block
@property (nonatomic,retain) MNOptionalSingleCellDataSource * onlineLoadingDataSource;                                 //@synthesize onlineLoadingDataSource=_onlineLoadingDataSource - In the implementation block
@property (nonatomic,retain) FBTableViewAggregatedDataSource * messengerPeopleDataSource;                              //@synthesize messengerPeopleDataSource=_messengerPeopleDataSource - In the implementation block
@property (nonatomic,retain) MNPeopleTableDelegate * messengerPeopleDelegate;                                          //@synthesize messengerPeopleDelegate=_messengerPeopleDelegate - In the implementation block
@property (nonatomic,retain) MNFindFriendsTableViewController * findFriendsTableViewController;                        //@synthesize findFriendsTableViewController=_findFriendsTableViewController - In the implementation block
@property (nonatomic,retain) id<FBProvider> findFriendsTableViewControllerProvider;                                    //@synthesize findFriendsTableViewControllerProvider=_findFriendsTableViewControllerProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> bymmTableViewControllerProvider;                                           //@synthesize bymmTableViewControllerProvider=_bymmTableViewControllerProvider - In the implementation block
@property (nonatomic,retain) FBDelegateForwarder * mesengerTableForker;                                                //@synthesize mesengerTableForker=_mesengerTableForker - In the implementation block
@property (nonatomic,retain) MNPeopleSearchController * peopleSearchController;                                        //@synthesize peopleSearchController=_peopleSearchController - In the implementation block
@property (nonatomic,retain) MNPeopleSearchAccessibilityController * peopleSearchAccessibilityController;              //@synthesize peopleSearchAccessibilityController=_peopleSearchAccessibilityController - In the implementation block
@property (nonatomic,retain) MNUserSettings * userSettings;                                                            //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,retain) MNPeopleViewImportedContactCardPresenter * importedContactCardPresenter;                  //@synthesize importedContactCardPresenter=_importedContactCardPresenter - In the implementation block
@property (nonatomic,retain) FBWebRTCCallStarter * callStarter;                                                        //@synthesize callStarter=_callStarter - In the implementation block
@property (nonatomic,retain) MNUserStore * userStore;                                                                  //@synthesize userStore=_userStore - In the implementation block
@property (nonatomic,copy) NSDictionary * sourceExtras;                                                                //@synthesize sourceExtras=_sourceExtras - In the implementation block
@property (nonatomic,copy) NSString * analyticsSearchSessionId;                                                        //@synthesize analyticsSearchSessionId=_analyticsSearchSessionId - In the implementation block
@property (nonatomic,retain) id<FBAddressBookAccessPermissionChecker> addressBookAccessPermissionChecker;              //@synthesize addressBookAccessPermissionChecker=_addressBookAccessPermissionChecker - In the implementation block
@property (nonatomic,retain) MNAddressBookContactImportInitiator * contactImportInitiator;                             //@synthesize contactImportInitiator=_contactImportInitiator - In the implementation block
@property (nonatomic,retain) id<FBContactImporter> contactImporter;                                                    //@synthesize contactImporter=_contactImporter - In the implementation block
@property (nonatomic,retain) MNGraphGlobalContactsSyncLock * contactsSyncLock;                                         //@synthesize contactsSyncLock=_contactsSyncLock - In the implementation block
@property (nonatomic,retain) FBLocaleMap * localeMap;                                                                  //@synthesize localeMap=_localeMap - In the implementation block
@property (nonatomic,retain) MNUserSetUpStatePersister * userSetUpStatePersister;                                      //@synthesize userSetUpStatePersister=_userSetUpStatePersister - In the implementation block
@property (nonatomic,retain) id<MNAvatarImageDecorating> avatarImageDecoration;                                        //@synthesize avatarImageDecoration=_avatarImageDecoration - In the implementation block
@property (nonatomic,retain) MNContactSyncUpsellDialogController * contactSyncUpsellDialogController;                  //@synthesize contactSyncUpsellDialogController=_contactSyncUpsellDialogController - In the implementation block
@property (nonatomic,copy) MNPeopleTabConfiguration * peopleTabConfiguration;                                          //@synthesize peopleTabConfiguration=_peopleTabConfiguration - In the implementation block
@property (nonatomic,copy) NSString * contextBasedMainAppName;                                                         //@synthesize contextBasedMainAppName=_contextBasedMainAppName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long appearanceState; 
+(id)analyticsSegmentTypeFromSegmentIndex:(unsigned long long)arg1 ;
+(unsigned long long)peopleModelFilterFromSegmentIndex:(unsigned long long)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNUserSetUpStatePersister *)userSetUpStatePersister;
-(id)analyticsModule;
-(void)userInitiatedContactImportAllowed;
-(void)userInitiatedContactImportDisallowed;
-(void)userInitiatedContactImportFailedToInitiate;
-(id<FBContactImporter>)contactImporter;
-(void)setContactImporter:(id<FBContactImporter>)arg1 ;
-(void)setUserSettings:(MNUserSettings *)arg1 ;
-(MNNavigationCoordinator *)navigationCoordinator;
-(MNThreadNavigationCoordinator *)threadNavigationCoordinator;
-(void)_registerForPreviewing;
-(unsigned long long)universalSearchControllerSurfaceForPeopleSearch;
-(void)universalSearchControllerWillBeginSearch:(id)arg1 ;
-(void)universalSearchControllerDidBeginSearch:(id)arg1 ;
-(void)universalSearchControllerWillEndSearch:(id)arg1 ;
-(void)universalSearchControllerDidEndSearch:(id)arg1 ;
-(void)universalSearchController:(id)arg1 didPresentSearchController:(id)arg2 ;
-(void)universalSearchController:(id)arg1 didSelectSearchThreadWithLocalThreadKey:(id)arg2 ;
-(void)universalSearchController:(id)arg1 didSelectSearchResultsWithViewController:(id)arg2 ;
-(void)universalSearchControllerDidSelectSearchDirectM:(id)arg1 ;
-(void)addListViewScrollingListener:(id)arg1 ;
-(void)removeListViewScrollingListener:(id)arg1 ;
-(id)containedListView;
-(void)addAppearanceListener:(id)arg1 ;
-(void)removeAppearanceListener:(id)arg1 ;
-(id<MNAvatarImageDecorating>)avatarImageDecoration;
-(void)setAvatarImageDecoration:(id<MNAvatarImageDecorating>)arg1 ;
-(id)analyticsSourceExtras;
-(BOOL)mn_shouldShowToastInNavigationBar;
-(FBMThreadSummary *)selectedThreadSummary;
-(void)setSourceExtras:(NSDictionary *)arg1 ;
-(NSDictionary *)sourceExtras;
-(void)didSelectThreadWithSummary:(id)arg1 ;
-(void)didSelectThreadWithOfflineThreadId:(id)arg1 ;
-(void)contextTappedForConversationContact:(id)arg1 ;
-(void)callButtonTappedForConversationContact:(id)arg1 isVideoCall:(BOOL)arg2 ;
-(void)peopleCell:(id)arg1 didTapLightweightActionButtonForConversationContact:(id)arg2 ;
-(void)peopleCell:(id)arg1 didTapActionButtonForConversationContact:(id)arg2 ;
-(void)peopleCell:(id)arg1 didTapSecondaryActionButtonForConversationContact:(id)arg2 ;
-(void)didUpdatePeopleCellActionButtonState:(id)arg1 forConversationContact:(id)arg2 ;
-(FBMLoggedInUserInfoManager *)loggedInUserInfoManager;
-(void)setLoggedInUserInfoManager:(FBMLoggedInUserInfoManager *)arg1 ;
-(FBLocaleMap *)localeMap;
-(void)setLocaleMap:(FBLocaleMap *)arg1 ;
-(MNUserStore *)userStore;
-(void)setUserStore:(MNUserStore *)arg1 ;
-(void)setSelectedThreadSummary:(FBMThreadSummary *)arg1 ;
-(void)setThreadNavigationCoordinator:(MNThreadNavigationCoordinator *)arg1 ;
-(void)setCallStarter:(FBWebRTCCallStarter *)arg1 ;
-(void)presentContactSyncUpsellDialog;
-(void)contactSyncUpsellDialogController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 ;
-(void)setNameFormatter:(MNThreadParticipantNameFormatter *)arg1 ;
-(void)onlineSwitchCellController:(id)arg1 didChangeOnlineState:(BOOL)arg2 ;
-(void)loggedInUserDidUpdatePhoneInfo;
-(MNAddressBookContactImportInitiator *)contactImportInitiator;
-(void)setContactImportInitiator:(MNAddressBookContactImportInitiator *)arg1 ;
-(MNPeopleTabConfiguration *)peopleTabConfiguration;
-(void)peopleView:(id)arg1 didPresentSearchBar:(id)arg2 ;
-(void)peopleView:(id)arg1 didHideSearchBar:(id)arg2 ;
-(void)peopleViewSearchBarCancelPressed:(id)arg1 ;
-(void)peopleView:(id)arg1 searchTextDidChangeTo:(id)arg2 ;
-(void)peopleViewInviteFriendsButtonPressed:(id)arg1 ;
-(void)peopleViewEnableContactSyncButtonPressed:(id)arg1 ;
-(void)peopleViewContactSyncLearnMorePressed:(id)arg1 ;
-(id)_peopleCellWithReuseIdentifier:(id)arg1 ;
-(BOOL)_isConversationPersonSelected:(id)arg1 ;
-(void)_updateSwitcherCellWithOnlineState:(BOOL)arg1 ;
-(void)_loadFacebookSegment;
-(void)_loadMessengerSegment;
-(void)_loadNavBarViews;
-(unsigned long long)_fetchDefaultPeopleSegment;
-(void)_updateNUXStateAndLogImpression;
-(void)_updateSegmentControlHeightForInterfaceOrientation:(long long)arg1 ;
-(BOOL)_shouldShowLoadingCellForOnlineState:(BOOL)arg1 ;
-(void)_updateLoadingCellForOnlineState:(BOOL)arg1 ;
-(id)_segmentedControlItemTitles;
-(void)_didChangeSegmentedControl:(id)arg1 ;
-(void)_addContactPressed:(id)arg1 ;
-(void)setAddContactButton:(UIBarButtonItem *)arg1 ;
-(void)_searchIconPressed:(id)arg1 ;
-(void)setSearchButton:(UIBarButtonItem *)arg1 ;
-(void)_presentAddContactFlow;
-(BOOL)_isCurrentUserPartial;
-(void)setSourceExtrasWithAnalyticsExtras:(id)arg1 ;
-(NSString *)analyticsSearchSessionId;
-(void)_completeContactSync;
-(void)_updateSelectedContactForTableView:(id)arg1 ;
-(unsigned long long)_peopleViewNUXState;
-(void)_logNuxImpression:(unsigned long long)arg1 ;
-(void)peopleModelControllerDidStartLoading:(id)arg1 ;
-(void)peopleModelControllerDidFinishFetch:(id)arg1 ;
-(BOOL)shouldSelectPersonWhenTapped:(id)arg1 ;
-(void)didSelectPerson:(id)arg1 withAnalyticsExtras:(id)arg2 ;
-(BOOL)peopleSearchControllerShouldIncludeGroup:(id)arg1 ;
-(BOOL)peopleSearchControllerShouldIncludeAddressBookContacts:(id)arg1 ;
-(unsigned long long)peopleSearchControllerPageFilterRule:(id)arg1 ;
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
-(MNPeopleModelController *)peopleModelController;
-(void)setPeopleModelController:(MNPeopleModelController *)arg1 ;
-(MNPeopleView *)peopleView;
-(void)setPeopleView:(MNPeopleView *)arg1 ;
-(UIBarButtonItem *)addContactButton;
-(UIBarButtonItem *)searchButton;
-(MNPeopleTablePresenceManager *)presenceManager;
-(void)setPresenceManager:(MNPeopleTablePresenceManager *)arg1 ;
-(MNThreadSelectionStateCoordinator *)threadSelectionStateCoordinator;
-(void)setThreadSelectionStateCoordinator:(MNThreadSelectionStateCoordinator *)arg1 ;
-(FBTableViewAggregatedDataSource *)facebookPeopleDataSource;
-(void)setFacebookPeopleDataSource:(FBTableViewAggregatedDataSource *)arg1 ;
-(MNOnlineSwitcherCellDataSource *)facebookPeopleCellSwitcherDataSource;
-(void)setFacebookPeopleCellSwitcherDataSource:(MNOnlineSwitcherCellDataSource *)arg1 ;
-(MNPeopleTableDelegate *)facebookPeopleDelegate;
-(void)setFacebookPeopleDelegate:(MNPeopleTableDelegate *)arg1 ;
-(MNOptionalSingleCellDataSource *)switchNuxCellDataSource;
-(void)setSwitchNuxCellDataSource:(MNOptionalSingleCellDataSource *)arg1 ;
-(MNPeopleOnlineSwitchCellController *)onlineSwitchCellController;
-(void)setOnlineSwitchCellController:(MNPeopleOnlineSwitchCellController *)arg1 ;
-(FBDelegateForwarder *)facebookTableForker;
-(void)setFacebookTableForker:(FBDelegateForwarder *)arg1 ;
-(MNPeopleOnlineLoadingCell *)onlineLoadingCell;
-(void)setOnlineLoadingCell:(MNPeopleOnlineLoadingCell *)arg1 ;
-(MNOptionalSingleCellDataSource *)onlineLoadingDataSource;
-(void)setOnlineLoadingDataSource:(MNOptionalSingleCellDataSource *)arg1 ;
-(FBTableViewAggregatedDataSource *)messengerPeopleDataSource;
-(void)setMessengerPeopleDataSource:(FBTableViewAggregatedDataSource *)arg1 ;
-(MNPeopleTableDelegate *)messengerPeopleDelegate;
-(void)setMessengerPeopleDelegate:(MNPeopleTableDelegate *)arg1 ;
-(MNFindFriendsTableViewController *)findFriendsTableViewController;
-(void)setFindFriendsTableViewController:(MNFindFriendsTableViewController *)arg1 ;
-(id<FBProvider>)findFriendsTableViewControllerProvider;
-(void)setFindFriendsTableViewControllerProvider:(id<FBProvider>)arg1 ;
-(id<FBProvider>)bymmTableViewControllerProvider;
-(void)setBymmTableViewControllerProvider:(id<FBProvider>)arg1 ;
-(FBDelegateForwarder *)mesengerTableForker;
-(void)setMesengerTableForker:(FBDelegateForwarder *)arg1 ;
-(MNPeopleSearchController *)peopleSearchController;
-(void)setPeopleSearchController:(MNPeopleSearchController *)arg1 ;
-(MNPeopleSearchAccessibilityController *)peopleSearchAccessibilityController;
-(void)setPeopleSearchAccessibilityController:(MNPeopleSearchAccessibilityController *)arg1 ;
-(MNPeopleViewImportedContactCardPresenter *)importedContactCardPresenter;
-(void)setImportedContactCardPresenter:(MNPeopleViewImportedContactCardPresenter *)arg1 ;
-(void)setAnalyticsSearchSessionId:(NSString *)arg1 ;
-(id<FBAddressBookAccessPermissionChecker>)addressBookAccessPermissionChecker;
-(void)setAddressBookAccessPermissionChecker:(id<FBAddressBookAccessPermissionChecker>)arg1 ;
-(MNContactSyncUpsellDialogController *)contactSyncUpsellDialogController;
-(void)setContactSyncUpsellDialogController:(MNContactSyncUpsellDialogController *)arg1 ;
-(void)setPeopleTabConfiguration:(MNPeopleTabConfiguration *)arg1 ;
-(NSString *)contextBasedMainAppName;
-(void)setContextBasedMainAppName:(NSString *)arg1 ;
-(FBWebRTCCallStarter *)callStarter;
-(void)setNavigationCoordinator:(MNNavigationCoordinator *)arg1 ;
-(MNGraphGlobalContactsSyncLock *)contactsSyncLock;
-(void)setContactsSyncLock:(MNGraphGlobalContactsSyncLock *)arg1 ;
-(void)setUserSetUpStatePersister:(MNUserSetUpStatePersister *)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(unsigned long long)filterType;
-(void)setFilterType:(unsigned long long)arg1 ;
-(UISegmentedControl *)segmentedControl;
-(MNThreadParticipantNameFormatter *)nameFormatter;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(FBUserSession *)session;
-(unsigned long long)appearanceState;
-(void)setSession:(FBUserSession *)arg1 ;
-(BOOL)_shouldShowSegmentedControl;
-(MNUserSettings *)userSettings;
@end

