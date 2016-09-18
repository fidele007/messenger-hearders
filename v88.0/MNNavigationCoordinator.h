/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <Messenger/FBPopoverControllerDelegate.h>
#import <Messenger/MNSettingsViewControllerDelegate.h>
#import <Messenger/MNActionSheetViewControllerDelegate.h>
#import <Messenger/FBWebRTCCallTabViewControllerDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNAlertControllerPresenting.h>
#import <Messenger/MNMinimizableModalsPresentation.h>
#import <Messenger/MNModalPresentation.h>
#import <Messenger/MNViewControllerNavigation.h>
#import <Messenger/MNConfirmationViewPresenting.h>
#import <Messenger/MNApplicationRootViewControllerGetting.h>

@protocol FBModalPresentationLayer, MNTabBarIconDecorating, FBProvider;
@class MNInboxNavigationHandler, MNNavigationController, UIViewController, MNSplitViewController, FBKeyboardResettingTracker, MNKeyboardAwareContainerViewController, NSHashTable, MNActionSheetViewController, MNRecentTabConfiguration, MNPeopleTabConfiguration, MNAppThemeConfiguration, MNPlaceholderViewControllerConfiguration, NSMutableDictionary, MNSettingsTabNameConfiguration, UIButton, UIBarButtonItem, FBProviderCircularDependencyInstanceHolder, MNUserSettings, MNStackViewController, MNModalHostViewController, FBMinimizableModalsHostViewController, FBTopBarAndContentViewController, MNTabBarController, FBWebRTCCallTabViewController, UINavigationController, FBPopoverController, MNDialogHostViewController, FBGlobalToastNavigationStack, MNNavigationListenerAnnouncer, FBUserSession, UIPopoverController, MNInboxTabBadgeUpdater, MNTabsConfiguration, NSString;

@interface MNNavigationCoordinator : NSObject <UITabBarControllerDelegate, UINavigationControllerDelegate, UISplitViewControllerDelegate, UIPopoverControllerDelegate, FBPopoverControllerDelegate, MNSettingsViewControllerDelegate, MNActionSheetViewControllerDelegate, FBWebRTCCallTabViewControllerDelegate, FBViewerContextClassProvidable, MNAlertControllerPresenting, MNMinimizableModalsPresentation, MNModalPresentation, MNViewControllerNavigation, MNConfirmationViewPresenting, MNApplicationRootViewControllerGetting> {

	MNInboxNavigationHandler* _inboxNavigationHandler;
	MNNavigationController* _detailNavigationController;
	UIViewController* _placeholderViewController;
	MNSplitViewController* _splitViewController;
	FBKeyboardResettingTracker* _keyboardResettingTracker;
	MNKeyboardAwareContainerViewController* _tabBarContainerViewController;
	UIViewController* _primaryColumnViewController;
	NSHashTable* _presentedMinimizableModalViewControllers;
	/*^block*/id _setupCompletionBlock;
	MNActionSheetViewController* _actionSheetViewController;
	id<FBModalPresentationLayer> _modalLayer;
	MNRecentTabConfiguration* _recentTabConfiguration;
	MNPeopleTabConfiguration* _peopleTabConfiguration;
	MNAppThemeConfiguration* _appThemeConfiguration;
	MNPlaceholderViewControllerConfiguration* _splitViewPlaceholderConfiguration;
	NSMutableDictionary* _tabBadgeUpdaters;
	id<MNTabBarIconDecorating> _tabBarIconDecorator;
	id<FBProvider> _splitViewControllerProvider;
	MNSettingsTabNameConfiguration* _settingsTabNameConfiguration;
	UIButton* _montageTabBarButton;
	UIBarButtonItem* _meTabDoneButton;
	FBProviderCircularDependencyInstanceHolder* _inboxTabViewControllerHolder;
	FBProviderCircularDependencyInstanceHolder* _meTabBarControllerHolder;
	FBProviderCircularDependencyInstanceHolder* _peopleTabViewControllerHolder;
	FBProviderCircularDependencyInstanceHolder* _groupsTabViewControllerHolder;
	FBProviderCircularDependencyInstanceHolder* _groupsTabNavigationHandlerHolder;
	long long _initialTab;
	BOOL _transferringNavigationStack;
	MNUserSettings* _userSettings;
	id<FBProvider> _stackViewControllerProvider;
	id<FBProvider> _tabBarControllerProvider;
	id<FBProvider> _inboxTabViewControllerProvider;
	id<FBProvider> _meTabViewControllerProvider;
	id<FBProvider> _peopleTabViewControllerProvider;
	id<FBProvider> _groupsTabViewControllerProvider;
	id<FBProvider> _callTabViewControllerProvider;
	MNStackViewController* _stackViewController;
	MNModalHostViewController* _modalHostViewController;
	FBMinimizableModalsHostViewController* _minimizableModalsHostViewController;
	FBTopBarAndContentViewController* _topBarAndContentViewController;
	MNTabBarController* _tabBarViewController;
	FBWebRTCCallTabViewController* _callTabViewController;
	UINavigationController* _inboxTabNavigationController;
	UINavigationController* _meTabNavigationController;
	UINavigationController* _peopleTabNavigationController;
	UINavigationController* _callTabNavigationController;
	UINavigationController* _groupsTabNavigationController;
	UINavigationController* _montageFakeTabNavigationController;
	UIViewController* _lastSelectedViewController;
	FBPopoverController* _currentDialogPresenter;
	MNDialogHostViewController* _dialogHostViewController;
	FBGlobalToastNavigationStack* _globalToastNavigationStack;
	MNNavigationListenerAnnouncer* _navigationAnnouncer;
	FBUserSession* _session;
	UIPopoverController* _currentPopoverController;
	MNInboxTabBadgeUpdater* _inboxTabBadgeUpdater;
	MNTabsConfiguration* _tabsConfiguration;

}

@property (nonatomic,retain) MNUserSettings * userSettings;                                                            //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,retain) id<FBProvider> stackViewControllerProvider;                                               //@synthesize stackViewControllerProvider=_stackViewControllerProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> tabBarControllerProvider;                                                  //@synthesize tabBarControllerProvider=_tabBarControllerProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> inboxTabViewControllerProvider;                                            //@synthesize inboxTabViewControllerProvider=_inboxTabViewControllerProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> meTabViewControllerProvider;                                               //@synthesize meTabViewControllerProvider=_meTabViewControllerProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> peopleTabViewControllerProvider;                                           //@synthesize peopleTabViewControllerProvider=_peopleTabViewControllerProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> groupsTabViewControllerProvider;                                           //@synthesize groupsTabViewControllerProvider=_groupsTabViewControllerProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> callTabViewControllerProvider;                                             //@synthesize callTabViewControllerProvider=_callTabViewControllerProvider - In the implementation block
@property (nonatomic,retain) MNStackViewController * stackViewController;                                              //@synthesize stackViewController=_stackViewController - In the implementation block
@property (nonatomic,retain) MNModalHostViewController * modalHostViewController;                                      //@synthesize modalHostViewController=_modalHostViewController - In the implementation block
@property (nonatomic,retain) FBMinimizableModalsHostViewController * minimizableModalsHostViewController;              //@synthesize minimizableModalsHostViewController=_minimizableModalsHostViewController - In the implementation block
@property (nonatomic,retain) FBTopBarAndContentViewController * topBarAndContentViewController;                        //@synthesize topBarAndContentViewController=_topBarAndContentViewController - In the implementation block
@property (nonatomic,retain) MNTabBarController * tabBarViewController;                                                //@synthesize tabBarViewController=_tabBarViewController - In the implementation block
@property (nonatomic,retain) FBWebRTCCallTabViewController * callTabViewController;                                    //@synthesize callTabViewController=_callTabViewController - In the implementation block
@property (nonatomic,retain) UINavigationController * inboxTabNavigationController;                                    //@synthesize inboxTabNavigationController=_inboxTabNavigationController - In the implementation block
@property (nonatomic,retain) UINavigationController * meTabNavigationController;                                       //@synthesize meTabNavigationController=_meTabNavigationController - In the implementation block
@property (nonatomic,retain) UINavigationController * peopleTabNavigationController;                                   //@synthesize peopleTabNavigationController=_peopleTabNavigationController - In the implementation block
@property (nonatomic,retain) UINavigationController * callTabNavigationController;                                     //@synthesize callTabNavigationController=_callTabNavigationController - In the implementation block
@property (nonatomic,retain) UINavigationController * groupsTabNavigationController;                                   //@synthesize groupsTabNavigationController=_groupsTabNavigationController - In the implementation block
@property (nonatomic,retain) UINavigationController * montageFakeTabNavigationController;                              //@synthesize montageFakeTabNavigationController=_montageFakeTabNavigationController - In the implementation block
@property (nonatomic,retain) UIViewController * lastSelectedViewController;                                            //@synthesize lastSelectedViewController=_lastSelectedViewController - In the implementation block
@property (nonatomic,retain) FBPopoverController * currentDialogPresenter;                                             //@synthesize currentDialogPresenter=_currentDialogPresenter - In the implementation block
@property (nonatomic,retain) MNDialogHostViewController * dialogHostViewController;                                    //@synthesize dialogHostViewController=_dialogHostViewController - In the implementation block
@property (nonatomic,retain) FBGlobalToastNavigationStack * globalToastNavigationStack;                                //@synthesize globalToastNavigationStack=_globalToastNavigationStack - In the implementation block
@property (nonatomic,retain) MNNavigationListenerAnnouncer * navigationAnnouncer;                                      //@synthesize navigationAnnouncer=_navigationAnnouncer - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) UIPopoverController * currentPopoverController;                                           //@synthesize currentPopoverController=_currentPopoverController - In the implementation block
@property (nonatomic,retain) MNInboxTabBadgeUpdater * inboxTabBadgeUpdater;                                            //@synthesize inboxTabBadgeUpdater=_inboxTabBadgeUpdater - In the implementation block
@property (nonatomic,retain) MNTabsConfiguration * tabsConfiguration;                                                  //@synthesize tabsConfiguration=_tabsConfiguration - In the implementation block
@property (nonatomic,readonly) BOOL transferringNavigationStack;                                                       //@synthesize transferringNavigationStack=_transferringNavigationStack - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(void)presentAlertController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)visibleNavigationController;
-(void)presentFloatingViewController:(id)arg1 ;
-(void)dismissFloatingViewController:(id)arg1 ;
-(void)setUserSettings:(MNUserSettings *)arg1 ;
-(void)addNavigationListener:(id)arg1 ;
-(BOOL)dismissAllViewControllersAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)presentingNavigationControllerWithRootVC:(id)arg1 ;
-(void)presentViewControllerInActionSheet:(id)arg1 animated:(BOOL)arg2 keyboardAware:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentViewControllerInActionSheet:(id)arg1 maxHeightRatio:(double)arg2 animated:(BOOL)arg3 keyboardAware:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)presentViewControllerInFullHeightActionSheet:(id)arg1 animated:(BOOL)arg2 keyboardAware:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissActionSheetViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)presentedActionSheetViewController;
-(void)removeNavigationListener:(id)arg1 ;
-(id)visibleContentViewControllers;
-(void)dismissAlertControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(long long)splitViewControllerState;
-(void)presentTab:(long long)arg1 popToRoot:(BOOL)arg2 ;
-(long long)currentTab;
-(void)showViewController:(id)arg1 inNavigationController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)presentedTabViewController;
-(BOOL)isInboxNavigable;
-(BOOL)isViewingInbox;
-(id)initWithStackViewControllerProvider:(id)arg1 tabBarControllerProvider:(id)arg2 userSettings:(id)arg3 session:(id)arg4 inboxTabViewControllerProvider:(id)arg5 inboxNavigationHandler:(id)arg6 inboxTabBadgeUpdater:(id)arg7 groupsTabViewControllerProvider:(id)arg8 groupsTabNavigationHandler:(id)arg9 peopleTabViewControllerProvider:(id)arg10 meTabViewControllerProvider:(id)arg11 callTabViewControllerProvider:(id)arg12 globalToastNavigationStack:(id)arg13 keyboardResettingTracker:(id)arg14 navigationAnnouncer:(id)arg15 recentTabConfiguration:(id)arg16 peopleTabConfiguration:(id)arg17 tabsConfiguration:(id)arg18 appThemeConfiguration:(id)arg19 tabBarIconDecorator:(id)arg20 splitViewPlaceholderConfiguration:(id)arg21 splitViewControllerProvider:(id)arg22 settingsTabNameConfiguration:(id)arg23 ;
-(void)setTabBarViewController:(MNTabBarController *)arg1 ;
-(void)_reloadTabBar;
-(void)_updateTabBarContainerViewControllerWithSplitViewIsCollapsed:(BOOL)arg1 ;
-(void)setTopBarAndContentViewController:(FBTopBarAndContentViewController *)arg1 ;
-(void)_setUpTopBarObservers;
-(BOOL)_isTabAvailable:(long long)arg1 ;
-(void)setStackViewController:(MNStackViewController *)arg1 ;
-(void)setMinimizableModalsHostViewController:(FBMinimizableModalsHostViewController *)arg1 ;
-(void)setModalHostViewController:(MNModalHostViewController *)arg1 ;
-(id)_tabNavigationControllers;
-(void)_setUpMontageTabBarButtonIfNeeded;
-(void)_presentMontageComposer;
-(void)_navigationControllerDidTransitionWithNotification:(id)arg1 ;
-(void)_navigationControllerWillTransitionWithNotification:(id)arg1 ;
-(id)_inboxNavigationController;
-(id)_callsNavigationController;
-(id)_groupsNavigationController;
-(id)_peopleNavigationController;
-(id)_meNavigationController;
-(id)_montageFakeTabNavigationController;
-(void)_setBadgeUpdaterWithTabBarItem:(id)arg1 forTab:(long long)arg2 ;
-(id)_navigationControllerWithTabBarItem:(id)arg1 ;
-(void)setInboxTabNavigationController:(UINavigationController *)arg1 ;
-(void)setGroupsTabNavigationController:(UINavigationController *)arg1 ;
-(void)setPeopleTabNavigationController:(UINavigationController *)arg1 ;
-(void)setCallTabNavigationController:(UINavigationController *)arg1 ;
-(void)setMeTabNavigationController:(UINavigationController *)arg1 ;
-(void)_tearDownNavigationControllers;
-(void)_tearDownCircularDependencies;
-(void)setInboxTabBadgeUpdater:(MNInboxTabBadgeUpdater *)arg1 ;
-(void)setInboxTabViewControllerProvider:(id<FBProvider>)arg1 ;
-(FBWebRTCCallTabViewController *)callTabViewController;
-(void)setCallTabViewController:(FBWebRTCCallTabViewController *)arg1 ;
-(void)setCallTabViewControllerProvider:(id<FBProvider>)arg1 ;
-(void)setMeTabViewControllerProvider:(id<FBProvider>)arg1 ;
-(void)setPeopleTabViewControllerProvider:(id<FBProvider>)arg1 ;
-(void)setGroupsTabViewControllerProvider:(id<FBProvider>)arg1 ;
-(MNTabBarController *)tabBarViewController;
-(void)setStackViewControllerProvider:(id<FBProvider>)arg1 ;
-(void)setLastSelectedViewController:(UIViewController *)arg1 ;
-(void)setGlobalToastNavigationStack:(FBGlobalToastNavigationStack *)arg1 ;
-(void)setNavigationAnnouncer:(MNNavigationListenerAnnouncer *)arg1 ;
-(id)modalPresentationStackManager;
-(void)dismissAllFullScreenModalPresentationItems;
-(id)_selectedMainNavigationController;
-(void)_setUpInboxTabIfNeeded;
-(void)_setUpPeopleTabIfNeeded;
-(void)_setUpGroupsTabIfNeeded;
-(void)_setupCallTabIfNeeded;
-(void)_setUpMeTabIfNeeded;
-(void)_updateToastNavigationStackAnimated:(BOOL)arg1 ;
-(UIViewController *)lastSelectedViewController;
-(id)_selectedTabNavigationController;
-(void)_didDismissMeTab;
-(id)navigationControllerForTab:(long long)arg1 useDetailPanelIfActive:(BOOL)arg2 ;
-(void)_setSelectedTabNavigationController:(id)arg1 ;
-(id)presentedViewControllerInPopover;
-(void)pushViewController:(id)arg1 toNavigationController:(id)arg2 animated:(BOOL)arg3 ;
-(id)popViewControllerFromNavigationController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popNavigationControllerToRoot:(id)arg1 animated:(BOOL)arg2 ;
-(void)_willDismiss:(id)arg1 ;
-(void)_didDismiss:(id)arg1 ;
-(id)topVisibleViewController;
-(void)setCurrentPopoverController:(UIPopoverController *)arg1 ;
-(BOOL)canPresentViewControllerAsMinimizableModal;
-(id)_dialogPresenterWithDialogViewController:(id)arg1 ;
-(void)setDialogHostViewController:(MNDialogHostViewController *)arg1 ;
-(MNDialogHostViewController *)dialogHostViewController;
-(void)_performNavigationStackTransferWithSourceNavigationController:(id)arg1 destinationNavigationController:(id)arg2 transferBlock:(/*^block*/id)arg3 ;
-(void)setCurrentDialogPresenter:(FBPopoverController *)arg1 ;
-(void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)settingsViewController:(id)arg1 didSelectViewController:(id)arg2 ;
-(BOOL)settingsViewControllerShouldAllowSearchInNavbar:(id)arg1 ;
-(void)settingsViewController:(id)arg1 willLogoutWithCompletion:(/*^block*/id)arg2 ;
-(void)actionSheetViewControllerDidDismiss:(id)arg1 ;
-(BOOL)shouldShowSearchBarInNavigationBar;
-(BOOL)shouldShowCloseNavigationItemLeftBarButtonItem;
-(void)callTabViewControllerDidRequestClose:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentMinimizableModalViewController:(id)arg1 ;
-(void)dismissMinimizableModalViewController:(id)arg1 ;
-(void)minimizeAllMinimizableModalViewControllers;
-(void)minimizeAllMinimizableModalViewControllersAndShowSwitcherView;
-(void)presentConfirmationView:(id)arg1 ;
-(id)applicationRootViewController;
-(void)setUpViewControllersWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)tearDownViewControllers;
-(id)modalPresentationSource;
-(id)_navigationControllerWithViewController:(id)arg1 ;
-(id)badgeUpdaterForTab:(long long)arg1 ;
-(id)visibleRootViewController;
-(id)selectedLeftColumnlNavigationController;
-(id)topFloatingViewController;
-(id)popViewController:(id)arg1 fromNavigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)presentViewControllerInPopover:(id)arg1 popoverInfo:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)transferringNavigationStack;
-(id<FBProvider>)stackViewControllerProvider;
-(id<FBProvider>)tabBarControllerProvider;
-(void)setTabBarControllerProvider:(id<FBProvider>)arg1 ;
-(id<FBProvider>)inboxTabViewControllerProvider;
-(id<FBProvider>)meTabViewControllerProvider;
-(id<FBProvider>)peopleTabViewControllerProvider;
-(id<FBProvider>)groupsTabViewControllerProvider;
-(id<FBProvider>)callTabViewControllerProvider;
-(MNStackViewController *)stackViewController;
-(MNModalHostViewController *)modalHostViewController;
-(FBMinimizableModalsHostViewController *)minimizableModalsHostViewController;
-(FBTopBarAndContentViewController *)topBarAndContentViewController;
-(UINavigationController *)inboxTabNavigationController;
-(UINavigationController *)meTabNavigationController;
-(UINavigationController *)peopleTabNavigationController;
-(UINavigationController *)callTabNavigationController;
-(UINavigationController *)groupsTabNavigationController;
-(UINavigationController *)montageFakeTabNavigationController;
-(void)setMontageFakeTabNavigationController:(UINavigationController *)arg1 ;
-(FBPopoverController *)currentDialogPresenter;
-(FBGlobalToastNavigationStack *)globalToastNavigationStack;
-(MNNavigationListenerAnnouncer *)navigationAnnouncer;
-(UIPopoverController *)currentPopoverController;
-(MNInboxTabBadgeUpdater *)inboxTabBadgeUpdater;
-(MNTabsConfiguration *)tabsConfiguration;
-(void)setTabsConfiguration:(MNTabsConfiguration *)arg1 ;
-(void)dealloc;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(id)rootViewController;
-(id)presentedViewController;
-(BOOL)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(BOOL)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(long long)arg3 ;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(id)primaryViewControllerForCollapsingSplitViewController:(id)arg1 ;
-(id)primaryViewControllerForExpandingSplitViewController:(id)arg1 ;
-(id)_topViewController;
-(void)presentDialog:(id)arg1 ;
-(FBUserSession *)session;
-(id)_presentingViewController;
-(void)setSession:(FBUserSession *)arg1 ;
-(MNUserSettings *)userSettings;
@end

