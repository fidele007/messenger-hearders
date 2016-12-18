/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBWebViewControllerDelegate.h>
#import <Messenger/FBPopoverControllerDelegate.h>
#import <Messenger/FBWebViewContainerControllerBannerProviderDelegate.h>
#import <Messenger/FBBrowserNavigationTitleViewDelegate.h>
#import <Messenger/FBModalContentViewController.h>
#import <Messenger/FBBrowserChromeDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Messenger/FBSavedDashboardStoreManagerListener.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/FBBrowserSavedLinksDataStoreManagerListener.h>
#import <Messenger/FBBrowserRelatedStoriesViewControllerDelegate.h>
#import <Messenger/FBBrowserLayoutViewDelegate.h>
#import <Messenger/FBMinimizableContentDelegate.h>
#import <Messenger/FBMinimizableModalViewController_DEPRECATED.h>
#import <Messenger/FBInAppNotificationEligibilityProtocol.h>

@protocol FBNuxBannerViewController, FBCancelable, FBMinimizableModalViewControllerDelegate_DEPRECATED, FBWebViewContainerControllerDelegate, FBBrowserScrollViewDelegate, FBWebViewContainerControllerBannerProvider, FBIntentHandler;
@class NSString, UIView, FBUserSession, FBPopoverActionSheet, FBPopoverController, FBPopoverInfo, UIViewController, FBNuxController, UIColor, FBBrowserLayoutView, NSArray, NSMutableArray, FBPulseWebViewBannerProvider, FBSavedUrlNuxManager, NSURL, FBBrowserRelatedStoriesViewController, FBProgressAnimator, FBWebViewController, FBBrowserSaveConfig, FBBrowserShareNowConfig, FBBrowserLayoutConfig, FBAnalyticsInfo, FBMemFeedStory;

@interface FBWebViewContainerController : UIViewController <FBWebViewControllerDelegate, FBPopoverControllerDelegate, FBWebViewContainerControllerBannerProviderDelegate, FBBrowserNavigationTitleViewDelegate, FBModalContentViewController, FBBrowserChromeDelegate, UIScrollViewDelegate, FBSavedDashboardStoreManagerListener, UIGestureRecognizerDelegate, FBBrowserSavedLinksDataStoreManagerListener, FBBrowserRelatedStoriesViewControllerDelegate, FBBrowserLayoutViewDelegate, FBMinimizableContentDelegate, FBMinimizableModalViewController_DEPRECATED, FBInAppNotificationEligibilityProtocol> {

	FBUserSession* _session;
	FBPopoverActionSheet* _popoverShareActionSheet;
	FBPopoverController* _popoverSecurityController;
	FBPopoverActionSheet* _popoverMoreActionSheet;
	FBPopoverInfo* _popoverInfo;
	long long _shareLinkButtonIndex;
	UIViewController*<FBNuxBannerViewController> _bannerViewController;
	BOOL _popoverMoreActionSheetIsHiddenForRotate;
	BOOL _popoverShareActionSheetIsHiddenForRotate;
	UIView* _clickedView;
	BOOL _dataForBannerIsReady;
	BOOL _webViewIsDragged;
	BOOL _interfaceWillRotate;
	id<FBCancelable> _pulseLoadCancelable;
	FBNuxController* _pulseWebViewBannerNuxController;
	FBNuxController* _browserDomainDropdownMenuNuxController;
	FBNuxController* _browserQuoteShareFeatureNuxController;
	BOOL _quoteShareFeatureNUXShowed;
	UIColor* _originalNavigationBarTintColor;
	FBBrowserLayoutView* _browserLayoutView;
	CGPoint _lastScrollContentOffset;
	NSArray* _browserSurfaces;
	UIView* _dismissButtonContainerView;
	UIView* _shareButtonContainerView;
	long long _willRotateToInterfaceOrientation;
	NSMutableArray* _savedItems;
	NSMutableArray* _savedItemsImages;
	FBPulseWebViewBannerProvider* _pulseBannerController;
	FBSavedUrlNuxManager* _savedUrlNuxManager;
	NSString* _pageTitle;
	NSURL* _pageURL;
	NSString* _webViewSelectedText;
	BOOL _webViewSingleTapped;
	BOOL _hasURLChanged;
	FBBrowserRelatedStoriesViewController* _relatedStoriesViewController;
	BOOL _browserMultiTabsExperimentEnabled;
	BOOL _shouldShowUFIAsFooter;
	FBProgressAnimator* _minimizedTabProgressAnimator;
	BOOL _hideBannerViewTillDataIsReady;
	BOOL _isBeingPreviewed;
	BOOL _hasMinimizeButton;
	BOOL _shouldUseMinimizableModalsAnimation;
	BOOL _isPresentedInMinimizedBrowser;
	id<FBMinimizableModalViewControllerDelegate_DEPRECATED> _minimizableViewControllerDelegate;
	id<FBWebViewContainerControllerDelegate> _delegate;
	id<FBBrowserScrollViewDelegate> _scrollViewDelegate;
	id<FBWebViewContainerControllerBannerProvider> _bannerProvider;
	FBWebViewController* _webViewController;
	id<FBIntentHandler> _intentHandler;
	unsigned long long _excludedShareMenuOptions;
	FBBrowserSaveConfig* _saveConfig;
	FBBrowserShareNowConfig* _shareNowConfig;
	FBBrowserLayoutConfig* _layoutConfig;
	FBAnalyticsInfo* _analyticsInfo;
	FBMemFeedStory* _feedStory;
	unsigned long long _browserUFIStyle;
	double _loadingProgress;
	NSString* _minimizedTabTitle;
	UIView* _minimizedTabBrowserContentView;
	NSString* _restoreURLString;

}

@property (assign,nonatomic,__weak) id<FBWebViewContainerControllerDelegate> delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBBrowserScrollViewDelegate> scrollViewDelegate;                                                     //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (nonatomic,retain) id<FBWebViewContainerControllerBannerProvider> bannerProvider;                                                 //@synthesize bannerProvider=_bannerProvider - In the implementation block
@property (nonatomic,retain) FBWebViewController * webViewController;                                                                       //@synthesize webViewController=_webViewController - In the implementation block
@property (nonatomic,retain) id<FBIntentHandler> intentHandler;                                                                             //@synthesize intentHandler=_intentHandler - In the implementation block
@property (assign,nonatomic) BOOL hideBannerViewTillDataIsReady;                                                                            //@synthesize hideBannerViewTillDataIsReady=_hideBannerViewTillDataIsReady - In the implementation block
@property (assign,nonatomic) unsigned long long excludedShareMenuOptions;                                                                   //@synthesize excludedShareMenuOptions=_excludedShareMenuOptions - In the implementation block
@property (nonatomic,copy) FBBrowserSaveConfig * saveConfig;                                                                                //@synthesize saveConfig=_saveConfig - In the implementation block
@property (nonatomic,retain) FBBrowserShareNowConfig * shareNowConfig;                                                                      //@synthesize shareNowConfig=_shareNowConfig - In the implementation block
@property (nonatomic,copy) FBBrowserLayoutConfig * layoutConfig;                                                                            //@synthesize layoutConfig=_layoutConfig - In the implementation block
@property (assign,nonatomic) BOOL isBeingPreviewed;                                                                                         //@synthesize isBeingPreviewed=_isBeingPreviewed - In the implementation block
@property (assign,nonatomic) BOOL hasMinimizeButton;                                                                                        //@synthesize hasMinimizeButton=_hasMinimizeButton - In the implementation block
@property (nonatomic,copy) FBAnalyticsInfo * analyticsInfo;                                                                                 //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
@property (nonatomic,copy) FBMemFeedStory * feedStory;                                                                                      //@synthesize feedStory=_feedStory - In the implementation block
@property (assign,nonatomic) unsigned long long browserUFIStyle;                                                                            //@synthesize browserUFIStyle=_browserUFIStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldUseMinimizableModalsAnimation;                                                                      //@synthesize shouldUseMinimizableModalsAnimation=_shouldUseMinimizableModalsAnimation - In the implementation block
@property (assign,nonatomic) BOOL isPresentedInMinimizedBrowser;                                                                            //@synthesize isPresentedInMinimizedBrowser=_isPresentedInMinimizedBrowser - In the implementation block
@property (assign,nonatomic) double loadingProgress;                                                                                        //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (nonatomic,copy) NSString * minimizedTabTitle;                                                                                    //@synthesize minimizedTabTitle=_minimizedTabTitle - In the implementation block
@property (nonatomic,readonly) UIView * minimizedTabBrowserContentView;                                                                     //@synthesize minimizedTabBrowserContentView=_minimizedTabBrowserContentView - In the implementation block
@property (nonatomic,copy) NSString * restoreURLString;                                                                                     //@synthesize restoreURLString=_restoreURLString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBMinimizableModalViewControllerDelegate_DEPRECATED> minimizableViewControllerDelegate;              //@synthesize minimizableViewControllerDelegate=_minimizableViewControllerDelegate - In the implementation block
+(void)logTopLevelSaveButtonImpression:(id)arg1 saveState:(BOOL)arg2 ;
+(void)logSavedItemsImpression:(id)arg1 numItems:(int)arg2 ;
+(void)logSavedItemTapped:(id)arg1 ;
+(id)getSavedLinksActionButtonMetrics:(BOOL)arg1 ;
-(id)analyticsModule;
-(void)setAnalyticsInfo:(FBAnalyticsInfo *)arg1 ;
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(id<FBIntentHandler>)intentHandler;
-(void)setIntentHandler:(id<FBIntentHandler>)arg1 ;
-(void)setSaveConfig:(FBBrowserSaveConfig *)arg1 ;
-(void)setLayoutConfig:(FBBrowserLayoutConfig *)arg1 ;
-(void)setExcludedShareMenuOptions:(unsigned long long)arg1 ;
-(void)webViewController:(id)arg1 webViewTitleChanged:(id)arg2 ;
-(void)webViewController:(id)arg1 webViewURLChanged:(id)arg2 ;
-(void)webViewController:(id)arg1 webViewNavigationHistoryChangedCanGoBack:(BOOL)arg2 canGoForward:(BOOL)arg3 ;
-(void)webViewController:(id)arg1 loadingChanged:(BOOL)arg2 ;
-(void)webViewController:(id)arg1 didUpdateProgress:(double)arg2 ;
-(void)webViewController:(id)arg1 didLoadHostString:(id)arg2 didLoadScheme:(id)arg3 ;
-(BOOL)webViewController:(id)arg1 shouldStartLoadURL:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewController:(id)arg1 didStartLoadURL:(id)arg2 ;
-(void)webViewController:(id)arg1 didFinishLoadURL:(id)arg2 ;
-(void)webViewController:(id)arg1 userCanceledLoadURL:(id)arg2 ;
-(void)webViewController:(id)arg1 currentRequestPrefetchedChangedTo:(BOOL)arg2 ;
-(void)webViewControllerSelectionChanged:(id)arg1 ;
-(void)webViewBlockingResourceLoaded:(id)arg1 ;
-(FBAnalyticsInfo *)analyticsInfo;
-(void)setIsBeingPreviewed:(BOOL)arg1 ;
-(BOOL)fb_showAuxiliaryViewController;
-(BOOL)fb_hidesTabBar;
-(BOOL)fb_showNavBarSearchField;
-(FBMemFeedStory *)feedStory;
-(void)setFeedStory:(FBMemFeedStory *)arg1 ;
-(void)setBrowserUFIStyle:(unsigned long long)arg1 ;
-(void)setShareNowConfig:(FBBrowserShareNowConfig *)arg1 ;
-(unsigned long long)excludedShareMenuOptions;
-(void)setBannerProvider:(id<FBWebViewContainerControllerBannerProvider>)arg1 ;
-(void)setHideBannerViewTillDataIsReady:(BOOL)arg1 ;
-(void)dismissBrowserSurface;
-(void)associateBrowserSurfaces:(id)arg1 ;
-(void)setHasMinimizeButton:(BOOL)arg1 ;
-(id<FBWebViewContainerControllerBannerProvider>)bannerProvider;
-(unsigned long long)browserUFIStyle;
-(void)chromeDismissButtonTapped:(id)arg1 ;
-(void)chromeBackButtonTapped:(id)arg1 ;
-(void)chromeForwardButtonTapped:(id)arg1 ;
-(void)chromeSaveButtonTapped:(id)arg1 ;
-(void)chromePulseViewTapped:(id)arg1 ;
-(void)chromeShareButtonTapped:(id)arg1 ;
-(void)chromeMoreActionsButtonTapped:(id)arg1 ;
-(void)chromeSwitcherButtonTapped:(id)arg1 ;
-(BOOL)isBeingPreviewed;
-(void)chromePrefersStatusBarHiddenDidChange;
-(void)chromeUFIDidTapCommentView:(id)arg1 popoverOrigin:(CGPoint)arg2 shouldShowKeyboard:(BOOL)arg3 ;
-(void)chromeUFIDidTapShareView:(id)arg1 popoverOrigin:(CGPoint)arg2 ;
-(void)chromeWillDismissBrowserSurface;
-(void)chromeDidDismissBrowserSurface;
-(void)relatedStoryVisiblityToggled:(BOOL)arg1 ;
-(BOOL)hasMinimizeButton;
-(void)navigationTitleView:(id)arg1 subtitleTapped:(id)arg2 ;
-(void)backButtonTappedInNavigationTitleView:(id)arg1 ;
-(void)forwardButtonTappedInNavigationTitleView:(id)arg1 ;
-(id)analyticsArray;
-(void)relatedStoryTapped:(id)arg1 ;
-(void)chromeSearchFieldTapped:(id)arg1 ;
-(void)chromeSearchFieldLongPressed:(id)arg1 ;
-(void)chromeReloadButtonTapped:(id)arg1 ;
-(void)chromeStopLoadingButtonTapped:(id)arg1 ;
-(void)chromeDidTapShareQuoteBanner:(id)arg1 ;
-(void)bannerProviderReadyToDisplayBanner:(id)arg1 ;
-(void)bannerProviderOpenGraphNodeReady:(id)arg1 ;
-(FBBrowserLayoutConfig *)layoutConfig;
-(void)_setShareQuoteView;
-(void)_performPulseLoadWithURL:(id)arg1 ;
-(void)parseSavedItemEdges:(id)arg1 ;
-(FBBrowserSaveConfig *)saveConfig;
-(void)_presentMoreActionSheetFromView:(id)arg1 ;
-(void)_presentShareActionSheetFromView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)_logPreviewingActionSelection:(id)arg1 ;
-(void)_handlePreviewActionForShareInNewPost;
-(void)_handlePreviewActionForSendInMessenger;
-(void)_handlePreviewActionForCopyLink;
-(void)_openInSafariFromButtonItem:(id)arg1 ;
-(void)_logTapEventFromActionSheet:(id)arg1 ;
-(void)_updateMinimizableModalTitle;
-(void)_presentQuoteShareFeatureNux;
-(void)_tappedCloseButton;
-(void)_saveLinkViaSaveButton:(id)arg1 ;
-(void)_didSelectShareView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)_minimizedTabBarMetrics;
-(void)_logTapEventFromChrome:(id)arg1 ;
-(void)_displayCopyConfirmation;
-(void)_shareQuote;
-(id)_shareActionSheetButtonItems;
-(id)analyticsDestinationURL;
-(void)setMinimizedTabTitle:(NSString *)arg1 ;
-(void)_shareNowFromButtonItem:(id)arg1 ;
-(void)_shareInNewPostFromButtonItem:(id)arg1 ;
-(void)_sendInMessageFromButtonItem:(id)arg1 ;
-(void)_copyLinkFromButtonItem:(id)arg1 ;
-(void)_backButtonTappedInPopover;
-(void)_forwardButtonTappedInPopover;
-(id)getSavedLinksHeader;
-(id)getSavedLinkButtonItem:(int)arg1 isLastButton:(BOOL)arg2 ;
-(void)_openSavedDashboardFromButtonItem:(id)arg1 ;
-(void)_displaySaveConfirmation:(BOOL)arg1 ;
-(void)_updateSavedItems:(BOOL)arg1 openGraphNode:(id)arg2 ;
-(id)_moreActionSheetButtonItems;
-(void)_showQuoteShareFeatureNux;
-(void)_webViewContentSingleTapped;
-(void)_openSavedLink:(id)arg1 ;
-(id)headerViewForModalContainerViewController:(id)arg1 ;
-(id)scrollViewForDismissingModalContainerViewController:(id)arg1 ;
-(id)previewActionItemsForModalContainerViewController:(id)arg1 ;
-(BOOL)swipeGestureCanDismissModalContainerViewController:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)chromeMinimizeButtonTapped:(id)arg1 ;
-(void)manager:(id)arg1 section:(id)arg2 results:(id)arg3 error:(id)arg4 ;
-(void)managerDidFetchData:(id)arg1 ;
-(void)minimizedContentWillBeReopened;
-(BOOL)shouldUseMinimizableModalsAnimation;
-(void)setShouldUseMinimizableModalsAnimation:(BOOL)arg1 ;
-(NSString *)minimizedTabTitle;
-(UIView *)minimizedTabBrowserContentView;
-(BOOL)isPresentedInMinimizedBrowser;
-(void)setIsPresentedInMinimizedBrowser:(BOOL)arg1 ;
-(NSString *)restoreURLString;
-(void)setRestoreURLString:(NSString *)arg1 ;
-(void)dismissMinimizableViewController;
-(id<FBMinimizableModalViewControllerDelegate_DEPRECATED>)minimizableViewControllerDelegate;
-(void)setMinimizableViewControllerDelegate:(id<FBMinimizableModalViewControllerDelegate_DEPRECATED>)arg1 ;
-(BOOL)inAppNotificationBeeperManager:(id)arg1 shouldShowNotification:(id)arg2 ;
-(BOOL)inAppNotificationBeeperManager:(id)arg1 shouldShowFacecastNotification:(id)arg2 broadcaster:(id)arg3 ;
-(void)setPopoverActionSheet:(id)arg1 ;
-(BOOL)_shouldDisplayFullMode;
-(void)_browserSecuritySheetContentViewClicked;
-(BOOL)hideBannerViewTillDataIsReady;
-(FBBrowserShareNowConfig *)shareNowConfig;
-(void)setDelegate:(id<FBWebViewContainerControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBWebViewContainerControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(BOOL)extendedLayoutIncludesOpaqueBars;
-(id)previewActionItems;
-(void)didEnterBackground:(id)arg1 ;
-(id<FBBrowserScrollViewDelegate>)scrollViewDelegate;
-(void)setScrollViewDelegate:(id<FBBrowserScrollViewDelegate>)arg1 ;
-(FBWebViewController *)webViewController;
-(void)setWebViewController:(FBWebViewController *)arg1 ;
-(double)loadingProgress;
-(id)initWithSession:(id)arg1 ;
-(void)loadURL:(id)arg1 ;
-(void)setLoadingProgress:(double)arg1 ;
@end

