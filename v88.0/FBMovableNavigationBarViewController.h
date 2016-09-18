/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBUberScrollViewDelegate.h>
#import <Messenger/FBMovableNavigationBarViewDelegate.h>
#import <Messenger/FBScrolling.h>
#import <Messenger/FBPresentableViewController.h>

@protocol UIScrollViewDelegate, FBMovableNavigationBarViewControllerDelegate;
@class FBKVOController, UIScrollView, UINavigationController, FBMovableNavigationBarView, UIView, UIViewController, NSString;

@interface FBMovableNavigationBarViewController : UIViewController <FBUberScrollViewDelegate, FBMovableNavigationBarViewDelegate, FBScrolling, FBPresentableViewController> {

	FBKVOController* _KVOController;
	UIScrollView* _scrollView;
	UINavigationController* _navigationController;
	FBMovableNavigationBarView* _containerView;
	UIView* _fakeNavigationBar;
	UIView* _fakeNavigationBarContents;
	UIView* _headerView;
	id<UIScrollViewDelegate> _scrollDelegate;
	BOOL _scrollDelegateRespondsToScrollViewWillBeginDragging;
	BOOL _scrollDelegateRespondsToScrollViewDidScroll;
	BOOL _scrollDelegateRespondsToScrollViewDidEndDragging;
	BOOL _scrollDelegateRespondsToScrollViewDidEndDecelerating;
	BOOL _scrollDelegateRespondsToScrollViewShouldScrollToTop;
	BOOL _scrollDelegateRespondsToScrollViewDidScrollToTop;
	BOOL _scrollDelegateRespondsToScrollViewWillScrollToTop;
	BOOL _delegateRespondsToMovableNavigationBarViewControllerDidMoveNavigationBar;
	BOOL _viewControllerRespondsToMovableNavigationBarViewControllerDidMoveNavigationBar;
	BOOL _delegateRespondsTooMovableNavigationBarViewControllerHeaderViewMovedToOffset;
	BOOL _viewControllerRespondsTooMovableNavigationBarViewControllerHeaderViewMovedToOffset;
	double _lastScrollOffset;
	double _beginScrollOffset;
	BOOL _scrollBeganWithNavigationBarHidden;
	BOOL _partiallyVisibleNavBarAndHeaderView;
	double _lastHeaderHeight;
	BOOL _isViewDisappearing;
	BOOL _allowPartiallyVisibleHeaderWhenScrollDown;
	BOOL _shouldAnimateScrollViewOffsetChangeWhenHeaderFrameChanges;
	BOOL _isScrollableHeaderHidden;
	BOOL _visible;
	BOOL _isLoadingView;
	BOOL _needsToRestoreScrollViewDelegate;
	BOOL _shouldShowNavigationBarUponReachingBottom;
	id<FBMovableNavigationBarViewControllerDelegate> _delegate;
	UIViewController* _viewController;
	unsigned long long _scrollAwayMode;

}

@property (nonatomic,retain) UIView * headerView;                                                           //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic,__weak) id<FBMovableNavigationBarViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                                           //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) unsigned long long scrollAwayMode;                                             //@synthesize scrollAwayMode=_scrollAwayMode - In the implementation block
@property (assign,nonatomic) BOOL shouldShowNavigationBarUponReachingBottom;                                //@synthesize shouldShowNavigationBarUponReachingBottom=_shouldShowNavigationBarUponReachingBottom - In the implementation block
@property (nonatomic,readonly) double maximumHeaderPosition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
+(id)viewControllerForMovingNavigationBarInViewController:(id)arg1 navigationController:(id)arg2 ;
-(id)analyticsModule;
-(id)analyticsExtras;
-(id)analyticsUUID;
-(id)analyticsSourceExtras;
-(id)analyticsPresentedViewController;
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_deferSwipeToOpenLeftNav;
-(BOOL)fb_swipeToOpenLeftNav;
-(BOOL)isScrolledToTop;
-(BOOL)fb_hidesTabBar;
-(BOOL)fb_showBackArrowButton;
-(BOOL)fb_touchShouldPreventSwipeToOpenLeftNav:(id)arg1 ;
-(BOOL)fb_enableChatBarButton;
-(id)initWithViewController:(id)arg1 navigationController:(id)arg2 ;
-(void)_titleDidChange;
-(void)movableNavigationBarView:(id)arg1 didMoveNavigationBarToOffset:(double)arg2 ;
-(void)showNavigationBarAndHeaderViewAnimated:(BOOL)arg1 ;
-(void)_setupFakeNavigationBar;
-(void)setShouldShowNavigationBarUponReachingBottom:(BOOL)arg1 ;
-(double)_headerViewHeight;
-(void)_headerViewDidChangeBounds:(id)arg1 ;
-(double)_heightForFakeNavigationBar;
-(void)_setupScrollViewWithViewControllerConformsToFBScrolling:(id)arg1 ;
-(BOOL)_scrollingShouldMoveNavigationBar;
-(double)_scrollViewDidScrollOffset;
-(BOOL)_needToEnsureNavigationBarNotPartiallyVisibleDueToScrolling:(id)arg1 ;
-(void)snapshotNavigationBarContents;
-(void)movableNavigationBarView:(id)arg1 willShowFakeNavigationBar:(id)arg2 ;
-(BOOL)fb_handleTabReselection;
-(id)fb_searchTitleContext;
-(BOOL)fb_useDefaultSearchText;
-(BOOL)fb_leftAlignSearchText;
-(BOOL)fb_searchTextFieldEnableTicker;
-(BOOL)fb_hidesNavigationBarShadow;
-(void)fb_willResetToRoot;
-(id)fb_tabBarBackgroundColor;
-(id)fb_tabBarTopBorderColor;
-(id)fb_tabBarUnselectedIconColor;
-(id)fb_tabBarUnselectedTitleColor;
-(id)fb_navBarTintColor;
-(id)fb_navBarTitleColor;
-(unsigned long long)fb_searchFieldStyle;
-(id)fb_searchFieldAttributedText;
-(void)_handleTopNavMoreOptionsButtonTapped:(id)arg1 ;
-(void)movableNavigationBarViewWillShowRealNavigationBar:(id)arg1 ;
-(void)movableNavigationBarViewWillHideRealNavigationBar:(id)arg1 ;
-(double)movableDistanceForHeaderViewInMovableNavigationBarView:(id)arg1 ;
-(void)movableNavigationBarView:(id)arg1 headerView:(id)arg2 didMoveHeaderViewToOffset:(double)arg3 ;
-(double)maximumHeaderPosition;
-(void)_scrollViewDidChange;
-(unsigned long long)scrollAwayMode;
-(void)setScrollAwayMode:(unsigned long long)arg1 ;
-(BOOL)shouldShowNavigationBarUponReachingBottom;
-(BOOL)fb_viewControllerSuppressBackButton;
-(id)fb_navBarButtonsTintColor;
-(SEL)fb_actionForTopNavMoreOptionsButton;
-(BOOL)fb_searchTextFieldAllowUnreadBadge;
-(BOOL)fb_allowVoiceSearchButton;
-(BOOL)fb_allowPinnedConversationsButton;
-(double)fb_navigationSearchBarRightOffset;
-(CGRect)fb_interactiveTransitionDestinationFrame;
-(void)setDelegate:(id<FBMovableNavigationBarViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSString *)description;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(id<FBMovableNavigationBarViewControllerDelegate>)delegate;
-(id)navigationItem;
-(unsigned long long)supportedInterfaceOrientations;
-(UIScrollView *)scrollView;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIViewController *)viewController;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(BOOL)automaticallyAdjustsScrollViewInsets;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)_setupScrollView;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(void)scrollViewWillScrollToTop:(id)arg1 ;
@end

