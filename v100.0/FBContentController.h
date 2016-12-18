/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

