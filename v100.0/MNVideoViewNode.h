/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPageablePickUpAttachmentNode.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol MNRoundedCornersView, MNFullscreenableVideo, MNVideoViewNodeDelegate, MNVideoViewNodeCloseDelegate;
@class MNCenteringScrollView, UIView, MNVideoViewNodeConfiguration, NSString;

@interface MNVideoViewNode : FBPageablePickUpAttachmentNode <UIScrollViewDelegate> {

	MNCenteringScrollView* _scrollView;
	UIView*<MNRoundedCornersView> _maskView;
	MNVideoViewNodeConfiguration* _configuration;
	UIView*<MNFullscreenableVideo> _videoView;
	double _videoAspectRatio;
	id<MNVideoViewNodeDelegate> _videoNodeDelegate;
	id<MNVideoViewNodeCloseDelegate> _videoNodeCloseDelegate;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) UIView*<MNFullscreenableVideo> videoView;                                  //@synthesize videoView=_videoView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                                  //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) double videoAspectRatio;                                                     //@synthesize videoAspectRatio=_videoAspectRatio - In the implementation block
@property (assign,nonatomic,__weak) id<MNVideoViewNodeDelegate> videoNodeDelegate;                        //@synthesize videoNodeDelegate=_videoNodeDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNVideoViewNodeCloseDelegate> videoNodeCloseDelegate;              //@synthesize videoNodeCloseDelegate=_videoNodeCloseDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(void)setVideoNodeDelegate:(id<MNVideoViewNodeDelegate>)arg1 ;
-(void)setVideoAspectRatio:(double)arg1 ;
-(id)initWithVideoView:(id)arg1 configuration:(id)arg2 ;
-(void)setVideoNodeCloseDelegate:(id<MNVideoViewNodeCloseDelegate>)arg1 ;
-(void)_layoutMaskView;
-(CGSize)_aspectFitSize;
-(void)willOpen;
-(void)willLift;
-(void)didUnlift;
-(void)mayClose;
-(void)willClose;
-(void)cleanUpAfterClosing;
-(id)dropShadowCastingLayers;
-(CGSize)openedSizeForOrientation:(long long)arg1 ;
-(CGRect)closedFrameInView:(id)arg1 ;
-(void)_updateVideoViewInsetsWithFrame:(CGRect)arg1 ;
-(double)videoAspectRatio;
-(id<MNVideoViewNodeDelegate>)videoNodeDelegate;
-(id<MNVideoViewNodeCloseDelegate>)videoNodeCloseDelegate;
-(void)dealloc;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)layout;
-(void)didOpen;
-(UIView*<MNFullscreenableVideo>)videoView;
@end

