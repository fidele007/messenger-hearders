/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <FBSharedFramework/FBClassInjectable.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNThreadDetailsHeaderViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <FBSharedFramework/MNPresenceUpdateListening.h>
#import <FBSharedFramework/FBKeyboardObserverDelegate.h>
#import <Messenger/MNGroupPhotoUploaderListener.h>
#import <Messenger/FBWebRTCCallStarterDelegate.h>
#import <Messenger/MNPlatformThreadDetailsFetcherDelegate.h>
#import <Messenger/MNThreadPhotosViewControllerDelegate.h>
#import <Messenger/MNThreadDetailsSectionExtensionDelegate.h>
#import <Messenger/MNBookingRequestsDataFetcherDelegate.h>
#import <FBSharedFramework/MNUserStoreExternalUserUpdateListening.h>
#import <Messenger/MNThreadDetailsTableSectionHeaderViewDelegate.h>
#import <Messenger/MNGroupsAddRoomDescriptionViewControllerDelegate.h>
#import <Messenger/MNThreadViewModelLoadResultConfigurable.h>
#import <Messenger/MNThreadDetailsTableViewDataSourceDelegate.h>
#import <Messenger/MNThreadContactInfoAccessoryViewDelegate.h>

@protocol MNThreadClientSummaryUpdateCreating, MNThreadDetailsViewControllerDelegate;
@class MNPageResponsivenessViewModel, MNThreadDetailsView, MNThreadDetailsHeaderView, MNThreadDetailsTableViewDataSource, UIBarButtonItem, UIActionSheet, MNThreadViewModel, FBKeyboardObserver, MNPlatformThreadDetailsFetcher, MNPlatformThreadDetailsViewModel, NSString, MNBusinessPlugin, MNThreadDetailsContactInfoViewModel, UIImage, MNBookingRequestsDataFetcher, MNGroupsAddRoomDescriptionViewController, MNThreadDetailsViewControllerInjector, MNThreadDetailsIgnoreMessagesActionFunnelLogger, FBMUser, MNPresence;

@interface MNThreadDetailsViewController : UIViewController <FBClassInjectable, UITableViewDelegate, MNThreadDetailsHeaderViewDelegate, UIActionSheetDelegate, MNPresenceUpdateListening, FBKeyboardObserverDelegate, MNGroupPhotoUploaderListener, FBWebRTCCallStarterDelegate, MNPlatformThreadDetailsFetcherDelegate, MNThreadPhotosViewControllerDelegate, MNThreadDetailsSectionExtensionDelegate, MNBookingRequestsDataFetcherDelegate, MNUserStoreExternalUserUpdateListening, MNThreadDetailsTableSectionHeaderViewDelegate, MNGroupsAddRoomDescriptionViewControllerDelegate, MNThreadViewModelLoadResultConfigurable, MNThreadDetailsTableViewDataSourceDelegate, MNThreadContactInfoAccessoryViewDelegate> {

	MNPageResponsivenessViewModel* _pageResponsivenessViewModel;
	MNThreadDetailsView* _view;
	MNThreadDetailsHeaderView* _threadDetailsHeaderView;
	MNThreadDetailsTableViewDataSource* _tableViewDataSource;
	UIBarButtonItem* _editBarButtonItem;
	UIBarButtonItem* _doneBarButtonItem;
	UIBarButtonItem* _shareBarButtonItem;
	UIActionSheet* _editActionSheet;
	MNThreadViewModel* _threadViewModel;
	id<MNThreadClientSummaryUpdateCreating> _threadSummaryUpdateCreator;
	FBKeyboardObserver* _keyboardObserver;
	MNPlatformThreadDetailsFetcher* _platformThreadDetailsFetcher;
	MNPlatformThreadDetailsViewModel* _platformThreadDetailsViewModel;
	NSString* _pageID;
	MNBusinessPlugin* _businessPlugin;
	BOOL _showHeaderAsCell;
	MNThreadDetailsContactInfoViewModel* _contactInfoViewModel;
	UIImage* _optimisticGroupThreadImage;
	MNBookingRequestsDataFetcher* _bookingRequestsDataFetcher;
	BOOL _isShowingFullGroupDescription;
	BOOL _isShowingFullPageDescription;
	MNGroupsAddRoomDescriptionViewController* _addRoomDescriptionViewController;
	MNThreadDetailsViewControllerInjector* _injector;
	MNThreadDetailsIgnoreMessagesActionFunnelLogger* _ignoreMessagesFunnelLogger;
	id<MNThreadDetailsViewControllerDelegate> _delegate;
	FBMUser* _otherUser;
	MNPresence* _presenceValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBMUser * otherUser;                                                    //@synthesize otherUser=_otherUser - In the implementation block
@property (nonatomic,retain) MNPresence * presenceValue;                                             //@synthesize presenceValue=_presenceValue - In the implementation block
@property (assign,nonatomic,__weak) id<MNThreadDetailsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)injectorClass;
-(id)summaryUpdateCreator;
-(void)tearDownThreadViewModelDependencies;
-(id)threadViewModel;
-(void)groupPhotoUpload:(id)arg1 startedForGroupThreadKey:(id)arg2 ;
-(void)groupPhotoUpload:(id)arg1 finishedForGroupThreadKey:(id)arg2 ;
-(void)groupPhotoUpload:(id)arg1 failedForGroupThreadKey:(id)arg2 withError:(id)arg3 ;
-(void)addRoomDescriptionViewController:(id)arg1 didEditGroupDescription:(id)arg2 ;
-(void)callStarterDidUpdateCallState:(id)arg1 ;
-(void)callStarter:(id)arg1 canMakeOutboundCallDidChange:(BOOL)arg2 ;
-(FBMUser *)otherUser;
-(void)setPresenceValue:(MNPresence *)arg1 ;
-(void)setOtherUser:(FBMUser *)arg1 ;
-(void)_updatePageResponsivenessIfNecessary:(id)arg1 ;
-(MNPresence *)presenceValue;
-(void)configureThreadViewModelDependenciesWithViewModelLoadResult:(id)arg1 ;
-(id)_threadName;
-(void)threadDeatilsSectionExtensionDidUpdate:(id)arg1 ;
-(void)_didTapEditBarButtonItem:(id)arg1 ;
-(void)_didTapDoneBarButtonItem:(id)arg1 ;
-(void)_didTapShareBarButtonItem:(id)arg1 ;
-(void)_disableEditModeIfNeeded;
-(void)_setEditModeEnabled:(BOOL)arg1 ;
-(void)_dismissEditableGroupNameTextField;
-(void)_loadPlatformDataForPageID:(id)arg1 ;
-(void)_loadBookingRequestsForPageID:(id)arg1 ;
-(void)_updateSectionExtensions;
-(void)_configureThreadDetailsHeaderViewWithThreadViewModel;
-(void)_enableContactAdditionIfNecessary;
-(void)_updateHeaderViewPresenceTextForCanonicalThread;
-(void)_presentEditActionSheet;
-(void)_updatePeopleSectionExpanded:(BOOL)arg1 ;
-(void)_presentJoinableShareSheet;
-(void)_hideHeaderEditKeyboard;
-(BOOL)_isDetailedNotificationSettingsEnabled;
-(void)_beginEditingGroupDescription;
-(id)_footerViewForGroupThreadJoinableSetting;
-(id)_headerViewForSection:(unsigned long long)arg1 ;
-(void)_setContactAdditionAllowed:(BOOL)arg1 ;
-(void)_updateContactInfoViewModel:(id)arg1 ;
-(void)_updateHeaderViewWithPresenceText:(id)arg1 accessibilityLabel:(id)arg2 ;
-(void)_setEditModeEnabled:(BOOL)arg1 showKeyboard:(BOOL)arg2 ;
-(void)_scrollToHeaderViewIfNeeded;
-(void)_commitEditThreadName;
-(void)_updateThreadName;
-(void)_updateUsername;
-(void)_updateHeaderViewImage;
-(void)_showNameTooLongAlert;
-(id)_joinableRoomLinkIfVisible;
-(unsigned long long)_totalParticipantsCount;
-(id)_userInfoHeaderCell;
-(void)_resetUserInfoHeaderCellProfileImage;
-(void)_editGroupsPhoto;
-(void)_editThreadName;
-(void)threadDetailsHeaderViewDidPressImageView:(id)arg1 ;
-(void)threadDetailsHeaderViewDidPressThreadNameLabel:(id)arg1 ;
-(void)threadDetailsHeaderViewDidTapEmptySpace:(id)arg1 ;
-(void)threadDetailsHeaderViewDidEndEditingThreadName:(id)arg1 ;
-(BOOL)threadDetailsHeaderViewCanEditThreadName:(id)arg1 ;
-(void)platformThreadDetailsFetcherDidFinishLoad:(id)arg1 withReceiptsListViewModel:(id)arg2 ;
-(void)platformThreadDetailsFetcherDidFinishLoad:(id)arg1 withThreadDetailsViewModel:(id)arg2 ;
-(void)threadPhotosViewController:(id)arg1 didCommitSendingWithAttachment:(id)arg2 extraClientTags:(id)arg3 ;
-(id)threadPhotosViewControllerThreadName:(id)arg1 ;
-(void)threadDetailsSectionExtension:(id)arg1 shouldReloadForIndexes:(id)arg2 ;
-(id)reusableCellForThreadDetailsSectionExtension:(id)arg1 cellIdentifier:(id)arg2 ;
-(void)didFetchPageBookingRequestsCount:(unsigned long long)arg1 nativeBookingEntryLink:(id)arg2 ;
-(void)didFetchBookingRequestsDetails:(id)arg1 endCursor:(id)arg2 ;
-(void)threadDetailsTableSectionHeaderView:(id)arg1 didTapCallToActionForSection:(unsigned long long)arg2 ;
-(void)threadDetailsTableViewDataSource:(id)arg1 didRemoveParticipantWithUserId:(id)arg2 ;
-(BOOL)threadDetailsTableViewDataShourceShouldShowRoundedCorners:(id)arg1 ;
-(void)threadDetailsTableViewDataSourceDidEndEditingEditablePeopleCell:(id)arg1 ;
-(void)threadDetailsTableViewDataSource:(id)arg1 didChangeGroupThreadJoinableSetting:(BOOL)arg2 switchView:(id)arg3 ;
-(void)threadDetailsTableViewDataSource:(id)arg1 didChangeGroupThreadMembersApprovalsSetting:(BOOL)arg2 ;
-(void)threadDetailsTableViewDataSource:(id)arg1 willShowFullDescriptionForSection:(unsigned long long)arg2 ;
-(BOOL)threadDetailsTableViewDataSourceShouldShowDisclosureIndicatorForNotificationsRow:(id)arg1 ;
-(void)threadDetailsTableViewDataSourceDidTapPageAboutButton:(id)arg1 ;
-(void)threadDetailsContactInfoAccessoryViewDidPressAudioCallButton:(id)arg1 ;
-(void)threadDetailsContactInfoAccessoryViewDidPressVideoCallButton:(id)arg1 ;
-(id)initWithInjector:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(void)didFinishNetworkFetchOfUsers:(id)arg1 ;
-(void)didInvalidateUsersWithIds:(id)arg1 ;
-(void)didInvalidateAllUsers;
-(void)didReceivePresenceUpdate:(id)arg1 ;
-(void)setDelegate:(id<MNThreadDetailsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(id<MNThreadDetailsViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)_updateRightBarButtonItem;
@end

