/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBLoopableView;
@class FBLoopingIconsConfig, UIView;

@interface FBLoopingIconsController : NSObject {

	FBLoopingIconsConfig* _config;
	long long _currentIndex;
	long long _currentNumberOfLoops;
	BOOL _finishedLoopingOnce;
	UIView*<FBLoopableView> _viewDelegate;

}

@property (assign,nonatomic,__weak) UIView*<FBLoopableView> viewDelegate;              //@synthesize viewDelegate=_viewDelegate - In the implementation block
-(void)_animateImages;
-(void)recursiveAnimationBlock;
-(UIView*<FBLoopableView>)viewDelegate;
-(void)setViewDelegate:(UIView*<FBLoopableView>)arg1 ;
-(void)startAnimating;
-(id)initWithConfig:(id)arg1 ;
@end

