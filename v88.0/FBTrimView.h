/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBTrimViewDelegate;
@class UIView, UIImage, FBVideoEditingConfiguration, FBTrimViewGestureRecognizer, NSString;

@interface FBTrimView : UIView <UIGestureRecognizerDelegate> {

	double _handlesTouchOffsetX;
	UIView* _trimHandles;
	UIImage* _trimImage;
	UIView* _leftOverlayPatternView;
	UIView* _rightOverlayPatternView;
	FBVideoEditingConfiguration* _editingConfiguration;
	BOOL _didLongPress;
	FBTrimViewGestureRecognizer* _trimRecognizer;
	id<FBTrimViewDelegate> _delegate;
	double _minTrimmerLength;
	double _maxTrimmerLength;
	unsigned long long _draggingMode;
	CGPoint _trimRange;
	UIEdgeInsets _contentDragInsets;

}

@property (assign,nonatomic,__weak) id<FBTrimViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double minTrimmerLength;                             //@synthesize minTrimmerLength=_minTrimmerLength - In the implementation block
@property (assign,nonatomic) double maxTrimmerLength;                             //@synthesize maxTrimmerLength=_maxTrimmerLength - In the implementation block
@property (nonatomic,readonly) unsigned long long draggingMode;                   //@synthesize draggingMode=_draggingMode - In the implementation block
@property (getter=isDragging,nonatomic,readonly) BOOL dragging; 
@property (assign,nonatomic) CGPoint trimRange;                                   //@synthesize trimRange=_trimRange - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentDragInsets;                      //@synthesize contentDragInsets=_contentDragInsets - In the implementation block
@property (nonatomic,readonly) double trimRelativeCenterX; 
@property (nonatomic,readonly) double trimLeftHandleX; 
@property (nonatomic,readonly) double trimRightHandleX; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)trimRange;
-(void)_handleGestureRecognizerUpdate:(id)arg1 ;
-(CGRect)_askDelegateForContentBounds;
-(id)trimHandles;
-(id)leftPattern;
-(id)rightPattern;
-(id)resizableImageWithCenterInsets:(id)arg1 ;
-(id)trimImage;
-(CGPoint)trimRangeForContentRect:(CGRect)arg1 byKeepingLeftHandle:(BOOL)arg2 rightHandle:(BOOL)arg3 ;
-(void)_setTrimRange:(CGPoint)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_beginTracking:(id)arg1 ;
-(void)_continueTracking:(id)arg1 ;
-(void)_endHandleTracking;
-(void)_checkIfLongPress:(id)arg1 ;
-(CGPoint)_handlePointForDraggingMode:(unsigned long long)arg1 layout:(BOOL)arg2 ;
-(BOOL)_isTouchOverTrimHandles:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withEditingConfiguration:(id)arg2 ;
-(void)contentRectDidChange;
-(void)updateTrimRangeByKeepingLeftHandle:(BOOL)arg1 rightHandle:(BOOL)arg2 ;
-(CGPoint)handlePointForDraggingMode:(unsigned long long)arg1 ;
-(void)setTrimRange:(CGPoint)arg1 ;
-(double)trimRelativeCenterX;
-(double)trimLeftHandleX;
-(double)trimRightHandleX;
-(double)minTrimmerLength;
-(void)setMinTrimmerLength:(double)arg1 ;
-(double)maxTrimmerLength;
-(void)setMaxTrimmerLength:(double)arg1 ;
-(unsigned long long)draggingMode;
-(UIEdgeInsets)contentDragInsets;
-(void)setContentDragInsets:(UIEdgeInsets)arg1 ;
-(void)setDelegate:(id<FBTrimViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)isDragging;
-(id<FBTrimViewDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
@end
