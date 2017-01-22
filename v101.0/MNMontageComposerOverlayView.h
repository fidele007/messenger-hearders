/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/MNMontageComposerTextEditingOverlayDelegate.h>

@protocol FBCancelable, MNMontageComposerOverlayViewDelegate;
@class NSMutableArray, FBKeyboardObserver, UIPinchGestureRecognizer, UIRotationGestureRecognizer, MNMontageDragGestureRecognizer, UIView, POPAnimatableProperty, MNMontageComposerTextEditingOverlay, FBMobileConfigContextManager, MNMontageComposerEditingState, MNMontageComposerTextView, NSDate, NSArray, NSString;

@interface MNMontageComposerOverlayView : UIView <FBKeyboardObserverDelegate, UITextViewDelegate, UIGestureRecognizerDelegate, MNMontageComposerTextEditingOverlayDelegate> {

	NSMutableArray* _artItems;
	FBKeyboardObserver* _keyboardObserver;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UIRotationGestureRecognizer* _rotateGestureRecognizer;
	MNMontageDragGestureRecognizer* _dragGestureRecognizer;
	UIView* _drawingContainerView;
	BOOL _shouldPassThroughTouches;
	POPAnimatableProperty* _deletingAnimProp;
	double _deleteProgress;
	BOOL _isAnimatingDelete;
	MNMontageComposerTextEditingOverlay* _textEditingOverlay;
	CGRect _keyboardFrame;
	SCD_Struct_MN21 _savedTextViewData;
	FBMobileConfigContextManager* _configManager;
	BOOL _textOverlayFadingIn;
	id<FBCancelable> _timeUpdateTimerToken;
	id<MNMontageComposerOverlayViewDelegate> _delegate;
	MNMontageComposerEditingState* _editingState;
	UIView* _drawingView;
	MNMontageComposerTextView* _focusedTextView;
	double _contentAspectRatio;
	NSDate* _contentCreationDate;
	UIView* _manipulatingView;

}

@property (nonatomic,retain) UIView * manipulatingView;                                             //@synthesize manipulatingView=_manipulatingView - In the implementation block
@property (assign,nonatomic,__weak) id<MNMontageComposerOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNMontageComposerEditingState * editingState;                            //@synthesize editingState=_editingState - In the implementation block
@property (nonatomic,retain) UIView * drawingView;                                                  //@synthesize drawingView=_drawingView - In the implementation block
@property (assign,nonatomic,__weak) MNMontageComposerTextView * focusedTextView;                    //@synthesize focusedTextView=_focusedTextView - In the implementation block
@property (assign,nonatomic) double contentAspectRatio;                                             //@synthesize contentAspectRatio=_contentAspectRatio - In the implementation block
@property (nonatomic,copy,readonly) NSArray * composerArtItems; 
@property (nonatomic,copy) NSDate * contentCreationDate;                                            //@synthesize contentCreationDate=_contentCreationDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)setContentAspectRatio:(double)arg1 ;
-(void)setEditingState:(MNMontageComposerEditingState *)arg1 ;
-(void)resetContent;
-(void)setShouldPassThroughTouches:(BOOL)arg1 ;
-(void)addStickerItem:(id)arg1 ;
-(void)addArtItems:(id)arg1 ;
-(void)removeArtItemsWithId:(id)arg1 ;
-(void)_updateEditingState;
-(void)_updateDisplayState;
-(CGRect)_contentRect;
-(void)relayoutContent;
-(void)_updateTextViewFrame:(id)arg1 ;
-(void)_updateTimeTextViews;
-(id)_manipulatableViewAtLocation:(CGPoint)arg1 ;
-(void)_clearAllContent;
-(void)_resetTextViewLayout:(id)arg1 withTextAsset:(id)arg2 ;
-(void)_resetImageViewLayout:(id)arg1 withImageAsset:(id)arg2 ;
-(void)_resetImageViewLayout:(id)arg1 withStickerAsset:(id)arg2 ;
-(BOOL)_isEditingStateText:(id)arg1 ;
-(void)_endEditingTextView;
-(id)_montageComposerArtItemForView:(id)arg1 ;
-(void)setManipulatingView:(UIView *)arg1 ;
-(void)_removeTextViewsIdenticalToTextInArtItems:(id)arg1 ;
-(id)_createTextViewWithFont:(id)arg1 ;
-(double)_textViewMaxWidth;
-(void)_resizeFontToFitText:(id)arg1 withTextAsset:(id)arg2 ;
-(void)_saveTextViewScalingState:(id)arg1 ;
-(void)_scaleTextView:(id)arg1 scale:(double)arg2 ;
-(void)_deleteTextView:(id)arg1 ;
-(id)_createTextView:(double)arg1 ;
-(void)_beginEditingTextView:(id)arg1 ;
-(double)_displayScale;
-(double)_displayRotation;
-(void)_updateDrawingEnabled;
-(void)_updateKeyboardObservation;
-(void)_updateHandGestureRecognizers;
-(BOOL)_textWouldPassMaxNumLines:(id)arg1 inTextView:(id)arg2 ;
-(void)_saveTextViewEditingState;
-(void)_fadeInTextOverlay;
-(CGPoint)_textViewCenterWithKeyboardFrame:(CGRect)arg1 ;
-(void)_showNewTextViewAtCenter:(CGPoint)arg1 ;
-(void)_animateFocusedTextViewTo:(CGPoint)arg1 duration:(double)arg2 curve:(long long)arg3 ;
-(void)_restoreTextViewEditingState:(id)arg1 toCenter:(CGPoint)arg2 ;
-(void)_animateFocusedTextViewBackWithDuration:(double)arg1 curve:(long long)arg2 ;
-(void)_fadeOutTextOverlay:(/*^block*/id)arg1 ;
-(BOOL)_isManipulationGestureRecognizer:(id)arg1 ;
-(BOOL)_isOpaqueAroundPoint:(CGPoint)arg1 imageView:(id)arg2 ;
-(void)_bringTouchedViewToFront:(id)arg1 ;
-(BOOL)_isOtherDirectionManipulationRecognizerInAction:(id)arg1 ;
-(void)_updateManipulatingViewWithLocation:(CGPoint)arg1 ;
-(void)_animatePendingDeletionContent:(BOOL)arg1 ;
-(void)_deleteDraggedContent;
-(void)montageComposerTextEditingOverlayDidTouchToDismiss:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 configManager:(id)arg2 ;
-(void)setDrawingView:(UIView *)arg1 ;
-(BOOL)allowsPanFromPoint:(CGPoint)arg1 ;
-(void)addText:(id)arg1 beginEditing:(BOOL)arg2 ;
-(NSArray *)composerArtItems;
-(CGPoint)_displayTranslation;
-(MNMontageComposerEditingState *)editingState;
-(UIView *)drawingView;
-(MNMontageComposerTextView *)focusedTextView;
-(void)setFocusedTextView:(MNMontageComposerTextView *)arg1 ;
-(UIView *)manipulatingView;
-(void)setDelegate:(id<MNMontageComposerOverlayViewDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<MNMontageComposerOverlayViewDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)hasText;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)hasContent;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(NSDate *)contentCreationDate;
-(void)setContentCreationDate:(NSDate *)arg1 ;
-(void)_handleDrag:(id)arg1 ;
-(void)_updateUserInteractionEnabled;
-(void)_handlePinch:(id)arg1 ;
-(void)_handleRotation:(id)arg1 ;
-(double)contentAspectRatio;
@end
