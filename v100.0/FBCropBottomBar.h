/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/SPBottomBar.h>

@protocol FBCropBottomBarDelegate;
@class UIButton, UILabel;

@interface FBCropBottomBar : SPBottomBar {

	UIButton* _presetRotationButton;
	UIButton* _cropOptionsButton;
	UIButton* _cancelButton;
	UIButton* _doneButton;
	UILabel* _moveAndScaleLabel;
	unsigned long long _mediaPickerStyle;
	BOOL _presetRotationButtonShown;
	BOOL _cropOptionsButtonShown;
	BOOL _moveAndScaleHintShown;
	id<FBCropBottomBarDelegate> _delegate;

}

@property (assign,nonatomic) id<FBCropBottomBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL presetRotationButtonShown;                    //@synthesize presetRotationButtonShown=_presetRotationButtonShown - In the implementation block
@property (assign,nonatomic) BOOL cropOptionsButtonShown;                       //@synthesize cropOptionsButtonShown=_cropOptionsButtonShown - In the implementation block
@property (assign,nonatomic) BOOL moveAndScaleHintShown;                        //@synthesize moveAndScaleHintShown=_moveAndScaleHintShown - In the implementation block
-(void)applyAction:(id)arg1 ;
-(void)compositionHelperAction:(id)arg1 ;
-(void)presetRotationAction:(id)arg1 ;
-(void)_updateControls;
-(void)aspectRatioAction:(id)arg1 ;
-(void)setcropOptionsButtonShown:(BOOL)arg1 ;
-(BOOL)moveAndScaleHintShown;
-(id)initWithOption:(unsigned long long)arg1 mediaPickerStyle:(unsigned long long)arg2 ;
-(void)setPresetRotationButtonShown:(BOOL)arg1 ;
-(void)setCropOptionsButtonShown:(BOOL)arg1 ;
-(BOOL)presetRotationButtonShown;
-(BOOL)cropOptionsButtonShown;
-(void)setMoveAndScaleHintShown:(BOOL)arg1 ;
-(void)setDelegate:(id<FBCropBottomBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBCropBottomBarDelegate>)delegate;
-(void)cancelAction:(id)arg1 ;
@end

