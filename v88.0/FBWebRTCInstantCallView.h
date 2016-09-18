/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/VideoRenderInfoDelegate.h>
#import <Messenger/FBWebRTCButtonPanelDelegate.h>
#import <Messenger/FBWebRTCVideoViewDelegate.h>

@protocol FBWebRTCInstantCallViewDelegate;
@class PABlurView, FBWebRTCInstantPostCallBackgroundView, FBWebRTCInstantCallMainStatusView, UIView, UIImageView, UILabel, FBWebRTCInstantMiniStatusView, FBWebRTCButtonPanel, UIImage, FBWebRTCPeerVideoView, FBWebRTCVideoView, FBWebRTCCallButtonsExperimentContext, NSString;

@interface FBWebRTCInstantCallView : UIView <VideoRenderInfoDelegate, FBWebRTCButtonPanelDelegate, FBWebRTCVideoViewDelegate> {

	PABlurView* _peerVideoBlur;
	FBWebRTCInstantPostCallBackgroundView* _backgroundView;
	FBWebRTCInstantCallMainStatusView* _mainStatusView;
	UIView* _contentView;
	UIView* _peerViewContainer;
	UIView* _fullScreenPrompt;
	UIImageView* _fullScreenPromptIcon;
	UILabel* _fullScreenPromptLabel;
	FBWebRTCInstantMiniStatusView* _miniStatusView;
	unsigned long long _miniStatusVisibleStatusViews;
	FBWebRTCButtonPanel* _buttonPanel;
	UIImageView* _expressionIcon;
	UIView* _selfviewOverlay;
	BOOL _shouldShowExpressionEntry;
	BOOL _fullScreenPromptVisible;
	BOOL _mainStatusVisible;
	BOOL _peerVideoBlurred;
	BOOL _selfVideoTransparent;
	BOOL _expressionEntryPointEnabled;
	id<FBWebRTCInstantCallViewDelegate> _delegate;
	UIImage* _miniStatusProfileImage;
	unsigned long long _videoLayout;
	FBWebRTCPeerVideoView* _peerVideoView;
	unsigned long long _peerVideoOrientation;
	FBWebRTCVideoView* _selfVideoView;
	unsigned long long _selfVideoOrientation;

}

@property (assign,nonatomic,__weak) id<FBWebRTCInstantCallViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBWebRTCCallButtonsExperimentContext * callButtonsExperiment; 
@property (nonatomic,retain) UIImage * fullBackgroundProfileImage; 
@property (assign,nonatomic) BOOL fullScreenPromptVisible;                                              //@synthesize fullScreenPromptVisible=_fullScreenPromptVisible - In the implementation block
@property (assign,nonatomic) BOOL mainStatusVisible;                                                    //@synthesize mainStatusVisible=_mainStatusVisible - In the implementation block
@property (nonatomic,retain) UIImage * statusProfileImage; 
@property (nonatomic,copy) NSString * primaryStatus; 
@property (nonatomic,copy) NSString * secondaryStatus; 
@property (nonatomic,retain) UIImage * miniStatusProfileImage;                                          //@synthesize miniStatusProfileImage=_miniStatusProfileImage - In the implementation block
@property (nonatomic,readonly) unsigned long long videoLayout;                                          //@synthesize videoLayout=_videoLayout - In the implementation block
@property (assign,nonatomic) BOOL peerVideoBlurred;                                                     //@synthesize peerVideoBlurred=_peerVideoBlurred - In the implementation block
@property (assign,nonatomic) BOOL selfVideoTransparent;                                                 //@synthesize selfVideoTransparent=_selfVideoTransparent - In the implementation block
@property (assign,nonatomic) long long selfVideoCaptureOrientation; 
@property (nonatomic,readonly) FBWebRTCPeerVideoView * peerVideoView;                                   //@synthesize peerVideoView=_peerVideoView - In the implementation block
@property (nonatomic,readonly) unsigned long long peerVideoOrientation;                                 //@synthesize peerVideoOrientation=_peerVideoOrientation - In the implementation block
@property (nonatomic,readonly) FBWebRTCVideoView * selfVideoView;                                       //@synthesize selfVideoView=_selfVideoView - In the implementation block
@property (nonatomic,readonly) unsigned long long selfVideoOrientation;                                 //@synthesize selfVideoOrientation=_selfVideoOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long buttonCollection; 
@property (assign,getter=areMultipleCamerasEnabled,nonatomic) BOOL multipleCamerasEnabled; 
@property (assign,getter=isLocalVideoEnabled,nonatomic) BOOL localVideoEnabled; 
@property (assign,getter=isRemoteVideoEnabled,nonatomic) BOOL remoteVideoEnabled; 
@property (assign,nonatomic) BOOL sendingVideo; 
@property (assign,nonatomic) BOOL microphoneMuted; 
@property (assign,nonatomic) BOOL expressionEntryPointEnabled;                                          //@synthesize expressionEntryPointEnabled=_expressionEntryPointEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setButtonCollection:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)buttonPanel:(id)arg1 didTapButtonWithTypeCategory:(unsigned long long)arg2 ;
-(BOOL)areMultipleCamerasEnabled;
-(BOOL)isLocalVideoEnabled;
-(void)setButtonCollection:(unsigned long long)arg1 ;
-(void)setLocalVideoEnabled:(BOOL)arg1 ;
-(void)setMultipleCamerasEnabled:(BOOL)arg1 ;
-(unsigned long long)buttonCollection;
-(FBWebRTCCallButtonsExperimentContext *)callButtonsExperiment;
-(void)setCallButtonsExperiment:(FBWebRTCCallButtonsExperimentContext *)arg1 ;
-(NSString *)primaryStatus;
-(void)setPrimaryStatus:(NSString *)arg1 ;
-(NSString *)secondaryStatus;
-(void)setSecondaryStatus:(NSString *)arg1 ;
-(void)didTapOnSelfView;
-(BOOL)_canShowExpressionEntryPointWithButtonCollection:(unsigned long long)arg1 ;
-(void)_setPeerViewHidden:(BOOL)arg1 ;
-(void)_setSelfViewHidden:(BOOL)arg1 ;
-(void)_setPeerViewFrame:(CGRect)arg1 ;
-(void)_setSelfViewFrame:(CGRect)arg1 ;
-(void)_updateVideoViewVisibility;
-(void)_updateExpressionIconVisibility;
-(void)_layoutMiniStatusViewToBounds:(CGRect)arg1 ;
-(void)_layoutMiniStatusViewWithVisibleViews:(unsigned long long)arg1 toBounds:(CGRect)arg2 ;
-(void)setMainStatusVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_layoutFullScreenPromptToBounds:(CGRect)arg1 ;
-(void)_layoutButtonsToBounds:(CGRect)arg1 ;
-(void)_updatePeerVideoOrientation;
-(void)_updateSelfVideoOrientation;
-(void)videoView:(id)arg1 didChangeVideoOrientation:(long long)arg2 ;
-(long long)selfVideoCaptureOrientation;
-(void)setFullScreenPromptVisible:(BOOL)arg1 ;
-(UIImage *)fullBackgroundProfileImage;
-(UIImage *)statusProfileImage;
-(id)miniStatusProfielImage;
-(void)setSelfVideoTransparent:(BOOL)arg1 ;
-(void)setPeerVideoBlurred:(BOOL)arg1 ;
-(BOOL)sendingVideo;
-(BOOL)microphoneMuted;
-(BOOL)fullScreenPromptVisible;
-(BOOL)mainStatusVisible;
-(UIImage *)miniStatusProfileImage;
-(unsigned long long)videoLayout;
-(BOOL)peerVideoBlurred;
-(BOOL)selfVideoTransparent;
-(void)setExpressionEntryPointEnabled:(BOOL)arg1 ;
-(FBWebRTCVideoView *)selfVideoView;
-(void)setFullBackgroundProfileImage:(UIImage *)arg1 ;
-(void)setMiniStatusProfileImage:(UIImage *)arg1 ;
-(void)setStatusProfileImage:(UIImage *)arg1 ;
-(void)setSelfVideoCaptureOrientation:(long long)arg1 ;
-(void)setSendingVideo:(BOOL)arg1 ;
-(void)setPeerVideoBlurred:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setVideoLayout:(unsigned long long)arg1 size:(CGSize)arg2 withFutureButtonCollection:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(void)setSelfVideoTransparent:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setMiniStatusViews:(unsigned long long)arg1 showBackground:(BOOL)arg2 statusText:(id)arg3 animated:(BOOL)arg4 ;
-(void)setMainStatusVisible:(BOOL)arg1 ;
-(unsigned long long)selfVideoOrientation;
-(unsigned long long)peerVideoOrientation;
-(void)setFullScreenPromptVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)expressionEntryPointEnabled;
-(void)videoSizeChangedForInfo:(id)arg1 ;
-(BOOL)isRemoteVideoEnabled;
-(void)setRemoteVideoEnabled:(BOOL)arg1 ;
-(FBWebRTCPeerVideoView *)peerVideoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBWebRTCInstantCallViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBWebRTCInstantCallViewDelegate>)delegate;
-(void)setMicrophoneMuted:(BOOL)arg1 ;
@end

