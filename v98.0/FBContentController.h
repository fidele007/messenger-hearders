/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBContentController <NSObject>
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollDelegate; 
@property (assign,nonatomic,__weak) id<FBNavigationChromePresenter> chromePresenter; 
@property (assign,nonatomic,__weak) id<FBLoadingProgressDelegate> loadingProgressDelegate; 
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@required
-(BOOL)canRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2;
-(void)cancelScrolling;
-(void)viewDidEnterPreloadingViewport;
-(void)viewDidExitPreloadingViewport;
-(void)didGainActiveFocus;
-(void)didLoseActiveFocus;
-(id<FBNavigationChromePresenter>)chromePresenter;
-(void)setChromePresenter:(id)arg1;
-(id<FBLoadingProgressDelegate>)loadingProgressDelegate;
-(void)setLoadingProgressDelegate:(id)arg1;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1;
-(id<UIScrollViewDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id)arg1;
-(void)scrollToTopAnimated:(BOOL)arg1;

@end

