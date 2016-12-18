/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNMontageColorSliderDelegate.h>

@protocol MNMontageDrawingControlsViewDelegate;
@class MNMontageColorSlider, UIButton, UIColor, NSString;

@interface MNMontageDrawingControlsView : UIView <MNMontageColorSliderDelegate> {

	MNMontageColorSlider* _drawingColorSlider;
	UIButton* _drawingUndoButton;
	id<MNMontageDrawingControlsViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMontageDrawingControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL undoVisible; 
@property (nonatomic,copy,readonly) UIColor * currentColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)montageColorSliderColorChanged:(id)arg1 to:(id)arg2 ;
-(BOOL)undoVisible;
-(void)_didUndoDrawing;
-(id)_buttonWithImageName:(id)arg1 accessibilityLabel:(id)arg2 action:(SEL)arg3 ;
-(void)setUndoVisible:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNMontageDrawingControlsViewDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<MNMontageDrawingControlsViewDelegate>)delegate;
-(UIColor *)currentColor;
@end
