/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBClassInjectable.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/MNSettingsCellSwitchDelegate.h>
#import <Messenger/MNUserInfoUpdateActionDelegate.h>
#import <Messenger/MNUserInfoUpdatesControllerDelegate.h>
#import <Messenger/MNUserHashResetListener.h>
#import <Messenger/MNUniversalSearchControllerDelegate.h>
#import <Messenger/MNSettingsHeaderViewDelegate.h>
#import <Messenger/MNTabBadgeCountControllerListener.h>
#import <Messenger/FBMLoggedInUserInfoManagerListening.h>
#import <Messenger/MNListViewContaining.h>
#import <Messenger/MNViewControllerAppearanceTransitioning.h>

@protocol MNSettingsViewControllerDelegate;
@class MNSettingsSection, MNSettingsView, ZRApplicationState, UIAlertView, FBMessengerPaymentsPlugin, MNNotificationSettingsViewController, MNContactSettingsViewController, MNMontageAudienceSettingsViewController, MNMediaSettingsViewController, MNWatchSettingsViewController, MNMiscellaneousSettingsViewController, MNUniversalSearchController, NSIndexPath, MNSettingsItem, MNSettingsUserInfoCellController, NSString, MNSettingsViewModel, MNSettingsViewModelLoader, MNSettingsHeaderView, NSDictionary, MNSettingsViewControllerInjector, MNContactsSyncSettingController, FBMLoggedInUserFetcher, MNAutoDownloadVideoSettingController, MNEmojiDefaultColorPickerPresenter, MNScrollViewScrollingListenerAnnouncer, MNViewControllerAppearanceListenerAnnouncer;

@interface MNSettingsViewController : UIViewController <FBClassInjectable, UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, MNSettingsCellSwitchDelegate, MNUserInfoUpdateActionDelegate, MNUserInfoUpdatesControllerDelegate, MNUserHashResetListener, MNUniversalSearchControllerDelegate, MNSettingsHeaderViewDelegate, MNTabBadgeCountControllerListener, FBMLoggedInUserInfoManagerListening, MNListViewContaining, MNViewControllerAppearanceTransitioning> {

	MNSettingsSection* _mainSettingsSection;
	MNSettingsSection* _extraSettingsSection;
	MNSettingsSection* _advancedSection;
	MNSettingsView* _settingsView;
	ZRApplicationState* _zeroRatingState;
	UIAlertView* _logoutAlertView;
	FBMessengerPaymentsPlugin* _paymentsPlugin;
	MNNotificationSettingsViewController* _notificationSettingsViewController;
	MNContactSettingsViewController* _contactSettingsViewController;
	MNMontageAudienceSettingsViewController* _montageAudienceSettingsViewController;
	MNMediaSettingsViewController* _mediaSettingsViewController;
	MNWatchSettingsViewController* _watchSettingsViewController;
	MNMiscellaneousSettingsViewController* _extraSettingsViewController;
	MNUniversalSearchController* _universalSearchController;
	NSIndexPath* _notificationSettingsIndexPath;
	MNSettingsItem* _advanceSettingsItem;
	MNSettingsUserInfoCellController* _userInfoCellController;
	NSString* _applicationName;
	MNSettingsViewModel* _settingsViewModel;
	MNSettingsViewModelLoader* _settingsViewModelLoader;
	MNSettingsHeaderView* _settingsHeaderView;
	NSDictionary* _actionMapping;
	MNSettingsViewControllerInjector* _injector;
	MNContactsSyncSettingController* _contactsSyncSettingController;
	FBMLoggedInUserFetcher* _loggedInUserFetcher;
	MNAutoDownloadVideoSettingController* _autoDownloadSettingController;
	MNEmojiDefaultColorPickerPresenter* _emojiDefaultColorPickerPresenter;
	unsigned long long _appearanceState;
	MNScrollViewScrollingListenerAnnouncer* _scrollingAnnouncer;
	MNViewControllerAppearanceListenerAnnouncer* _appearanceAnnouncer;
	id<MNSettingsViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNSettingsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long appearanceState; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
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
-(void)didUpdateBadgeCount:(long long)arg1 ;
-(BOOL)mn_shouldShowToastInNavigationBar;
-(void)openContactSettingPage;
-(void)_setViewModel:(id)arg1 ;
-(void)didUpdateLoggedInUser;
-(void)loggedInUserDidUpdatePhoneInfo;
-(void)userHashResetToUserHash:(id)arg1 forUserId:(id)arg2 ;
-(void)_usernameSettingTapped;
-(void)_phoneSettingTapped;
-(void)_initializeMainSettingsItems;
-(void)_initializeExtraSettingsItems;
-(void)_initializeAdvancedSettingsItems;
-(void)_setNavBarTitle;
-(void)_fetchLoggedInUserIfNecessary;
-(void)_updateNotificationSettingsCellFromPushabilityStatus;
-(void)_didTapEditBarButtonItem;
-(id)_userInfoCellForTableView:(id)arg1 ;
-(void)_updateHeaderViewMessengerCodeWithUserId:(id)arg1 ;
-(void)_fetchLoggedInUser;
-(void)_userInfoCellTapped;
-(void)_contactSettingTapped;
-(void)_presentUserInfoUpdateAction:(id)arg1 sourceView:(id)arg2 ;
-(void)_presentAccountsViewController:(id)arg1 ;
-(void)_logSettingsCellTappedWithLabel:(id)arg1 ;
-(void)_performLogout;
-(void)_updateViewModelWithUser:(id)arg1 ;
-(void)_didFailLoggedInUserFetchWithError:(id)arg1 ;
-(void)_didFetchLoggedInUser:(id)arg1 ;
-(void)_configureSettingsHeaderViewWithUser:(id)arg1 ;
-(void)_setNavBarButtons;
-(void)_editUsernameWithSourceView:(id)arg1 ;
-(void)_shareUsernameWithSourceView:(id)arg1 ;
-(void)_presentUserInfoUpdateOptionsOfType:(unsigned long long)arg1 ;
-(void)_showUsernameActionSheetWithSourceView:(id)arg1 ;
-(void)_updateAccountsSettingsCell;
-(void)_notificationSettingTapped;
-(void)_montageSettingTapped;
-(void)_mediaSettingTapped;
-(void)_watchSettingTapped;
-(void)_paymentsSettingTapped;
-(void)_secureThreadSettingsTapped;
-(void)_mAISettingsTapped;
-(void)_flowersBorderSettingTapped:(id)arg1 ;
-(void)_switchAccountsSettingTapped;
-(void)_reportProblemSettingTapped;
-(void)_helpSettingTapped;
-(void)_extraSettingTapped;
-(void)_advancedSettingTapped;
-(void)_empathySettingsTapped;
-(void)_logoutSettingTapped;
-(void)userInfoUpdateActionDidUpdateUser:(id)arg1 ;
-(void)userInfoUpdatesControllerDidUpdateUser:(id)arg1 ;
-(void)settingsHeaderViewDidPressImageView:(id)arg1 ;
-(void)settingsHeaderViewDidTapProfilePhotoMissingErrorView:(id)arg1 ;
-(void)openEditUsernamePage;
-(void)openAccountsPageWithDidOpenAccountsPageBlock:(/*^block*/id)arg1 ;
-(void)_subscribeForPushNotificationsChanges;
-(void)_unsubscribeFromPushNotificationsChanges;
-(void)_systemNotificationStateChanged:(id)arg1 ;
-(void)didToggleSettingsSwitch:(id)arg1 ;
-(void)setDelegate:(id<MNSettingsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
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
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<MNSettingsViewControllerDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(unsigned long long)appearanceState;
@end

