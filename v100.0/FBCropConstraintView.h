/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBCropConstraintViewDelegate;
@class UIButton, NSDictionary;

@interface FBCropConstraintView : UIView {

	int _cropConstraintViewStyle;
	unsigned long long _mediaPickerStyle;
	BOOL _userManipulable;
	BOOL _shouldDrawInnerGrid;
	BOOL _cropRotateButtonHidden;
	int _currentBoundarySection;
	UIButton* _cropRotateButton;
	id<FBCropConstraintViewDelegate> _delegate;
	NSDictionary* _viewDict;
	CGRect _constraintFrame;

}

@property (nonatomic,copy,readonly) NSDictionary * viewDict;                                //@synthesize viewDict=_viewDict - In the implementation block
@property (assign,nonatomic) BOOL userManipulable;                                          //@synthesize userManipulable=_userManipulable - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawInnerGrid;                                      //@synthesize shouldDrawInnerGrid=_shouldDrawInnerGrid - In the implementation block
@property (assign,nonatomic) int currentBoundarySection;                                    //@synthesize currentBoundarySection=_currentBoundarySection - In the implementation block
@property (assign,nonatomic) CGRect constraintFrame;                                        //@synthesize constraintFrame=_constraintFrame - In the implementation block
@property (nonatomic,readonly) CGRect maxConstraintFrame; 
@property (nonatomic,retain) UIButton * cropRotateButton;                                   //@synthesize cropRotateButton=_cropRotateButton - In the implementation block
@property (assign,nonatomic) BOOL cropRotateButtonHidden;                                   //@synthesize cropRotateButtonHidden=_cropRotateButtonHidden - In the implementation block
@property (assign,nonatomic,__weak) id<FBCropConstraintViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setShouldDrawInnerGrid:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 mediaPickerStyle:(unsigned long long)arg2 ;
-(CGRect)constraintFrame;
-(void)setConstraintFrame:(CGRect)arg1 ;
-(void)setConstraintsVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(int)boundarySectionForPoint:(CGPoint)arg1 ;
-(void)setCurrentBoundarySection:(int)arg1 ;
-(BOOL)isPointInsideConstraintFrame:(CGPoint)arg1 ;
-(int)currentBoundarySection;
-(CGPoint)translateConstraints:(CGPoint)arg1 withSection:(int)arg2 withImageView:(id)arg3 aspectRatioLock:(BOOL)arg4 snapToEdge:(BOOL)arg5 snapToSquare:(BOOL)arg6 ;
-(void)moveConstraints:(CGPoint)arg1 withImageView:(id)arg2 ;
-(id)getCurrentCropPointsInImageCoordinates:(id)arg1 ;
-(id)cropViewKeys;
-(id)cornerViewKeys;
-(id)sideViewKeys;
-(void)didTapCropRotateButton:(id)arg1 ;
-(void)layoutCropAndCornerViews;
-(id)initWithFrame:(CGRect)arg1 cropConstraintViewStyle:(int)arg2 mediaPickerStyle:(unsigned long long)arg3 ;
-(UIButton *)cropRotateButton;
-(CGRect)_frameForRotateButton;
-(NSDictionary *)viewDict;
-(id)constraintsViews;
-(BOOL)checkPoint:(CGPoint)arg1 withSize:(CGSize)arg2 ;
-(CGPoint)snapPointToEdgeIfNecessary:(CGPoint)arg1 fromPoint:(CGPoint)arg2 withSize:(CGSize)arg3 aspectRatioLock:(BOOL)arg4 ;
-(CGPoint)snapBorderToEdgeWithRatioLockIfNecessary:(CGPoint)arg1 fromPoint:(CGPoint)arg2 withSize:(CGSize)arg3 withSection:(int)arg4 ;
-(CGPoint)translateConstraintsLocked:(CGPoint)arg1 withSection:(int)arg2 withImageView:(id)arg3 snapToEdge:(BOOL)arg4 ;
-(BOOL)checkSnapToSquareWithPoint:(CGPoint*)arg1 section:(int)arg2 size:(CGSize)arg3 FromRect:(CGRect)arg4 ;
-(void)setUserManipulable:(BOOL)arg1 ;
-(void)setCropRotateButtonHidden:(BOOL)arg1 ;
-(BOOL)checkForLegalViewPlacement:(id)arg1 ;
-(CGRect)maxConstraintFrame;
-(BOOL)userManipulable;
-(BOOL)shouldDrawInnerGrid;
-(void)setCropRotateButton:(UIButton *)arg1 ;
-(BOOL)cropRotateButtonHidden;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBCropConstraintViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBCropConstraintViewDelegate>)delegate;
-(CGRect)rectForSection:(int)arg1 ;
-(id)maskColor;
@end

