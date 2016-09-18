/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/CAAnimationDelegate.h>

@class FBImageDownloader, CAGradientLayer, UIProgressView, UIImageView, FBQuicksilverURLBarView, NSString;

@interface FBQuicksilverLoadingView : UIView <CAAnimationDelegate> {

	FBImageDownloader* _imageDownloader;
	CAGradientLayer* _gradient;
	UIProgressView* _progressBar;
	UIImageView* _splashImage;
	FBQuicksilverURLBarView* _urlBar;
	BOOL _allowLayoutUrlBar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showProgressBar;
-(void)hideProgressBar;
-(void)_animateGradient;
-(void)_setSplashImage:(id)arg1 ;
-(id)initWithSplashImageURL:(id)arg1 imageDownloader:(id)arg2 displayURL:(id)arg3 ;
-(void)hideURLBar;
-(void)loadProgress:(float)arg1 ;
-(void)layoutSubviews;
@end

