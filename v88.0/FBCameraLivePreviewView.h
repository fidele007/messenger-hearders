/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView, CALayer, UIImage, UILabel;

@interface FBCameraLivePreviewView : UIView {

	UIView* _cancelOverlayView;
	BOOL _enableVideo;
	UIImageView* _freezeImageView;
	UIView* _overlayView;
	BOOL _resizePreviewLayer;
	double _transitionProgress;
	BOOL _showInstructionLabelAtBottom;
	double _freezeImageRotationAngle;
	CALayer* _livePreviewLayer;
	UIImage* _freezeImage;
	UILabel* _captureInstructionsLabel;
	UILabel* _cancelSendHelpLabel;

}

@property (nonatomic,retain) CALayer * livePreviewLayer;                        //@synthesize livePreviewLayer=_livePreviewLayer - In the implementation block
@property (nonatomic,readonly) UIView * cancelOverlayView;                      //@synthesize cancelOverlayView=_cancelOverlayView - In the implementation block
@property (nonatomic,retain) UIImage * freezeImage;                             //@synthesize freezeImage=_freezeImage - In the implementation block
@property (nonatomic,readonly) UILabel * captureInstructionsLabel;              //@synthesize captureInstructionsLabel=_captureInstructionsLabel - In the implementation block
@property (nonatomic,readonly) UILabel * cancelSendHelpLabel;                   //@synthesize cancelSendHelpLabel=_cancelSendHelpLabel - In the implementation block
-(void)setLivePreviewLayer:(CALayer *)arg1 ;
-(CALayer *)livePreviewLayer;
-(void)_updateLabelVisibility;
-(void)setFreezeImage:(UIImage *)arg1 ;
-(void)setPreviewRotationAngle:(double)arg1 ;
-(void)setFreezeImageRotationAngle:(double)arg1 ;
-(UIView *)cancelOverlayView;
-(UIImage *)freezeImage;
-(UILabel *)captureInstructionsLabel;
-(UILabel *)cancelSendHelpLabel;
-(id)initWithFrame:(CGRect)arg1 enableVideo:(BOOL)arg2 overlayView:(id)arg3 resizePreviewLayer:(BOOL)arg4 showInstructionLabelAtBottom:(BOOL)arg5 ;
-(void)layoutSubviews;
-(void)setTransitionProgress:(double)arg1 ;
@end

