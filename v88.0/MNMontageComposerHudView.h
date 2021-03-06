/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNMontageColorSliderDelegate.h>

@protocol MNMontageComposerHudCameraListener, MNMontageComposerHudEditListener, MNMontageComposerHudNavigationListener, MNMontageComposerHudPreviewListener;
@class FBLazyCreator, MNMontageComposerHudCameraConfig, MNMontageComposerHudEditConfig, MNMontageComposerHudNavigationConfig, MNMontageComposerHudDrawingConfig, MNMontageCameraCaptureButton, NSString;

@interface MNMontageComposerHudView : UIView <MNMontageColorSliderDelegate> {

	FBLazyCreator* _closeButtonCreator;
	FBLazyCreator* _backButtonCreator;
	FBLazyCreator* _cameraFlashButtonCreator;
	FBLazyCreator* _cameraFlipButtonCreator;
	FBLazyCreator* _trashIconCreator;
	FBLazyCreator* _changeColorButtonCreator;
	FBLazyCreator* _stickerButtonCreator;
	FBLazyCreator* _textButtonCreator;
	FBLazyCreator* _drawingButtonCreator;
	FBLazyCreator* _undoButtonCreator;
	FBLazyCreator* _textColorSliderCreator;
	FBLazyCreator* _saveButtonCreator;
	FBLazyCreator* _leftViewSwitchButtonCreator;
	FBLazyCreator* _cameraCaptureButtonCreator;
	FBLazyCreator* _rightViewSwitchButtonCreator;
	FBLazyCreator* _nextButtonCreator;
	FBLazyCreator* _placeholderLabelCreator;
	MNMontageComposerHudCameraConfig* _cameraConfig;
	id<MNMontageComposerHudCameraListener> _cameraListener;
	MNMontageComposerHudEditConfig* _editConfig;
	id<MNMontageComposerHudEditListener> _editListener;
	MNMontageComposerHudNavigationConfig* _navigationConfig;
	id<MNMontageComposerHudNavigationListener> _navigationListener;
	MNMontageComposerHudDrawingConfig* _drawingConfig;
	id<MNMontageComposerHudPreviewListener> _previewListener;
	CGRect _keyboardFrame;

}

@property (nonatomic,retain) MNMontageComposerHudCameraConfig * cameraConfig;                                   //@synthesize cameraConfig=_cameraConfig - In the implementation block
@property (assign,nonatomic,__weak) id<MNMontageComposerHudCameraListener> cameraListener;                      //@synthesize cameraListener=_cameraListener - In the implementation block
@property (nonatomic,retain) MNMontageComposerHudEditConfig * editConfig;                                       //@synthesize editConfig=_editConfig - In the implementation block
@property (assign,nonatomic,__weak) id<MNMontageComposerHudEditListener> editListener;                          //@synthesize editListener=_editListener - In the implementation block
@property (nonatomic,retain) MNMontageComposerHudNavigationConfig * navigationConfig;                           //@synthesize navigationConfig=_navigationConfig - In the implementation block
@property (assign,nonatomic,__weak) id<MNMontageComposerHudNavigationListener> navigationListener;              //@synthesize navigationListener=_navigationListener - In the implementation block
@property (nonatomic,retain) MNMontageComposerHudDrawingConfig * drawingConfig;                                 //@synthesize drawingConfig=_drawingConfig - In the implementation block
@property (assign,nonatomic,__weak) id<MNMontageComposerHudPreviewListener> previewListener;                    //@synthesize previewListener=_previewListener - In the implementation block
@property (assign,nonatomic) CGRect keyboardFrame;                                                              //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (nonatomic,readonly) MNMontageCameraCaptureButton * captureButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForBottomToolbar;
+(double)heightForTopToolbar;
-(void)_didTapNext;
-(void)_didTapSave;
-(void)_didTapClose;
-(void)setNavigationConfig:(MNMontageComposerHudNavigationConfig *)arg1 ;
-(void)setEditConfig:(MNMontageComposerHudEditConfig *)arg1 ;
-(void)setDrawingConfig:(MNMontageComposerHudDrawingConfig *)arg1 ;
-(void)setCameraConfig:(MNMontageComposerHudCameraConfig *)arg1 ;
-(void)setPreviewListener:(id<MNMontageComposerHudPreviewListener>)arg1 ;
-(void)setEditListener:(id<MNMontageComposerHudEditListener>)arg1 ;
-(void)setCameraListener:(id<MNMontageComposerHudCameraListener>)arg1 ;
-(MNMontageCameraCaptureButton *)captureButton;
-(BOOL)rectIntersectWithTrashIcon:(CGRect)arg1 ;
-(void)montageColorSliderColorChanged:(id)arg1 to:(id)arg2 ;
-(id)_buttonCreatorWithImageName:(id)arg1 accessibilityLabel:(id)arg2 alpha:(double)arg3 action:(SEL)arg4 ;
-(void)_didTapBack;
-(void)_didTapFlash;
-(void)_didTapFlip;
-(void)_didTapColorBackground;
-(void)_didTapArt;
-(void)_didTapText;
-(void)_didTapDrawing;
-(void)_didTapUndo;
-(void)_didTapViewSwitchLeft;
-(void)_didTapViewSwitchRight;
-(id<MNMontageComposerHudEditListener>)editListener;
-(void)_updateStickerButton;
-(void)_updateTextButton;
-(void)_updateDrawingButton;
-(void)_updateEditModeButtonCreator:(id)arg1 buttonMode:(long long)arg2 ;
-(void)_updateEditButtons;
-(void)_updateTrashIcon;
-(void)_didTapCapture;
-(MNMontageComposerHudCameraConfig *)cameraConfig;
-(id<MNMontageComposerHudCameraListener>)cameraListener;
-(MNMontageComposerHudEditConfig *)editConfig;
-(MNMontageComposerHudNavigationConfig *)navigationConfig;
-(MNMontageComposerHudDrawingConfig *)drawingConfig;
-(id<MNMontageComposerHudPreviewListener>)previewListener;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGRect)keyboardFrame;
-(void)setKeyboardFrame:(CGRect)arg1 ;
-(id<MNMontageComposerHudNavigationListener>)navigationListener;
-(void)setNavigationListener:(id<MNMontageComposerHudNavigationListener>)arg1 ;
@end

