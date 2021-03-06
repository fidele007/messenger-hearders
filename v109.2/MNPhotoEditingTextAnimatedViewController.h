/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNPhotoEditingTextAnimatedViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MNPhotoEditingTextAnimatedViewControllerDelegate;
@class MNPhotoEditingTextAnimatedLayersView, MNPhotoEditingTextAnimatedView, NSMutableArray, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, NSString;

@interface MNPhotoEditingTextAnimatedViewController : UIViewController <MNPhotoEditingTextAnimatedViewDelegate, UIGestureRecognizerDelegate> {

	MNPhotoEditingTextAnimatedLayersView* _layersView;
	MNPhotoEditingTextAnimatedView* _selectedTextLayerView;
	NSMutableArray* _textLayerViews;
	BOOL _isDeleting;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UIRotationGestureRecognizer* _rotateGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	BOOL _showControls;
	id<MNPhotoEditingTextAnimatedViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPhotoEditingTextAnimatedViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showControls;                                                                 //@synthesize showControls=_showControls - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShowControls:(BOOL)arg1 ;
-(id)imageEdits;
-(BOOL)hasAddedText;
-(void)changeStyle;
-(void)photoEditingTextViewDidChange:(id)arg1 ;
-(id)_getTargetTextLayer:(id)arg1 ;
-(void)_deleteButtonPressed;
-(void)addTextView;
-(void)_checkToChangeSelectedTextLayer:(id)arg1 ;
-(void)_setIsDeleting:(BOOL)arg1 ;
-(double)maxScaleForTextLength;
-(id)_textLayerView;
-(id)init;
-(void)setDelegate:(id<MNPhotoEditingTextAnimatedViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPhotoEditingTextAnimatedViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_handleTap:(id)arg1 ;
-(void)_handlePan:(id)arg1 ;
-(BOOL)showControls;
-(void)_handlePinch:(id)arg1 ;
-(void)_handleRotation:(id)arg1 ;
@end

