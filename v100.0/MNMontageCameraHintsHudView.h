/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNMontageCameraFaceDetectionHintView, UILabel, MNMontageCameraInstructionsDisplayConfig, UIImage, NSString;

@interface MNMontageCameraHintsHudView : UIView {

	BOOL _faceDetectionHintViewHidden;
	MNMontageCameraFaceDetectionHintView* _faceDetectionHintView;
	UILabel* _instructionsLabel;
	MNMontageCameraInstructionsDisplayConfig* _pendingInstructionsDisplayConfig;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;                    //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) UIImage * faceDetectionHintImage; 
@property (nonatomic,copy) NSString * faceDetectionHintText; 
-(void)setFaceDetectionHintText:(NSString *)arg1 ;
-(NSString *)faceDetectionHintText;
-(void)setFaceDetectionHintImage:(UIImage *)arg1 ;
-(UIImage *)faceDetectionHintImage;
-(void)_makeFaceDetectionHintViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_displayNewInstructionsWithDisplayConfig:(id)arg1 ;
-(void)_didFinishedDisplayingInstructionsLabelForInstructionsDisplayConfig:(id)arg1 ;
-(void)setFaceDetectionHintViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)displayInstructionsTextWhenPossible:(id)arg1 forDuration:(double)arg2 animated:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
@end

