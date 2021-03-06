/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBShadowLayer, FBVideoPlaybackController;

@interface VideoContainerView : UIView {

	FBShadowLayer* _shadowLayer;
	BOOL _showRoundedBorder;
	FBVideoPlaybackController* _controller;
	UIEdgeInsets _videoPluginsInset;

}

@property (assign,nonatomic) UIEdgeInsets videoPluginsInset;                               //@synthesize videoPluginsInset=_videoPluginsInset - In the implementation block
@property (nonatomic,__weak,readonly) FBVideoPlaybackController * controller;              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic) BOOL showShadow; 
@property (assign,nonatomic) BOOL showRoundedBorder;                                       //@synthesize showRoundedBorder=_showRoundedBorder - In the implementation block
-(BOOL)showShadow;
-(void)setShowShadow:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 controller:(id)arg2 ;
-(void)setShowRoundedBorder:(BOOL)arg1 ;
-(UIEdgeInsets)videoPluginsInset;
-(void)setVideoPluginsInset:(UIEdgeInsets)arg1 ;
-(BOOL)showRoundedBorder;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(FBVideoPlaybackController *)controller;
-(BOOL)isAccessibilityElement;
@end

