/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNMontageCameraFaceDetectionHintView, UILabel, MNMessengerCodeScanMaskView, MNMontageCameraInstructionsDisplayConfig, UIImage, NSString;

@interface MNMontageCameraHintsHudView : UIView {

	BOOL _faceDetectionHintViewHidden;
	MNMontageCameraFaceDetectionHintView* _faceDetectionHintView;
	UILabel* _instructionsLabel;
	MNMessengerCodeScanMaskView* _messengerCodeScanMaskView;
	MNMontageCameraInstructionsDisplayConfig* _pendingInstructionsDisplayConfig;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;                    //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) UIImage * faceDetectionHintImage; 
@property (nonatomic,copy) NSString * faceDetectionHintText; 
-(NSString *)faceDetectionHintText;
-(void)setFaceDetectionHintText:(NSString *)arg1 ;
-(UIImage *)faceDetectionHintImage;
-(void)setFaceDetectionHintImage:(UIImage *)arg1 ;
-(void)_makeFaceDetectionHintViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_displayNewInstructionsWithDisplayConfig:(id)arg1 ;
-(void)_didFinishedDisplayingInstructionsLabelForInstructionsDisplayConfig:(id)arg1 ;
-(void)setFaceDetectionHintViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)displayInstructionsTextWhenPossible:(id)arg1 forDuration:(double)arg2 animated:(BOOL)arg3 ;
-(void)updateCodeScannerViewVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
@end

