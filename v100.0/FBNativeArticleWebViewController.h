/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBNativeArticleWebViewNodeDelegate.h>
#import <Messenger/FBContentController.h>

@protocol UIScrollViewDelegate, FBNavigationChromePresenter, FBLoadingProgressDelegate;
@class FBUserSession, NSURL, UITapGestureRecognizer, FBNativeArticleWebViewNode, NSString;

@interface FBNativeArticleWebViewController : UIViewController <FBNativeArticleWebViewNodeDelegate, FBContentController> {

	FBUserSession* _session;
	NSURL* _url;
	BOOL _useWKIfAvailable;
	BOOL _allowsNavigationBarExpansion;
	BOOL _hasTriggeredRequest;
	UITapGestureRecognizer* _navigationBarTapGestureRecognizer;
	FBNativeArticleWebViewNode* _webViewNode;
	BOOL _statusBarHiddenForPreviousViewController;
	long long _statusBarStyleForPreviousViewController;
	UIEdgeInsets _contentInsetBeforeDisappearing;
	struct {
		unsigned scrollViewDidScroll : 1;
		unsigned scrollViewWillBeginDragging : 1;
		unsigned scrollViewWillEndDragging : 1;
		unsigned scrollViewDidEndDragging : 1;
		unsigned scrollViewWillBeginDecelerating : 1;
	}  _scrollDelegateFlags;
	id<UIScrollViewDelegate> _scrollDelegate;
	id<FBNavigationChromePresenter> _chromePresenter;
	id<FBLoadingProgressDelegate> _loadingProgressDelegate;
	UIEdgeInsets _contentInset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollDelegate;                            //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBNavigationChromePresenter> chromePresenter;                    //@synthesize chromePresenter=_chromePresenter - In the implementation block
@property (assign,nonatomic,__weak) id<FBLoadingProgressDelegate> loadingProgressDelegate;              //@synthesize loadingProgressDelegate=_loadingProgressDelegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                 //@synthesize contentInset=_contentInset - In the implementation block
-(void)webViewNode:(id)arg1 scrollViewWillBeginDragging:(id)arg2 ;
-(void)webViewNode:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)webViewNode:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4 ;
-(BOOL)webViewNode:(id)arg1 shouldStartNavigationRequest:(id)arg2 navigationType:(long long)arg3 sourceFrame:(id)arg4 targetFrame:(id)arg5 ;
-(void)webViewNode:(id)arg1 didFinishNavigationRequest:(id)arg2 ;
-(void)webViewNode:(id)arg1 didUpdateProgress:(double)arg2 ;
-(void)webViewNode:(id)arg1 didOpenThirdPartyAppURL:(id)arg2 ;
-(BOOL)canRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(void)cancelScrolling;
-(void)viewDidEnterPreloadingViewport;
-(void)viewDidExitPreloadingViewport;
-(void)didGainActiveFocus;
-(void)didLoseActiveFocus;
-(id<FBNavigationChromePresenter>)chromePresenter;
-(void)setChromePresenter:(id<FBNavigationChromePresenter>)arg1 ;
-(id<FBLoadingProgressDelegate>)loadingProgressDelegate;
-(void)setLoadingProgressDelegate:(id<FBLoadingProgressDelegate>)arg1 ;
-(id)initWithURL:(id)arg1 session:(id)arg2 ;
-(BOOL)fb_shouldBeginDismissModalViewControllerGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(void)fb_willPresentModalViewController:(id)arg1 ;
-(void)fb_willDismissModalViewController:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)shouldAutorotate;
-(UIEdgeInsets)contentInset;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id<UIScrollViewDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
@end
