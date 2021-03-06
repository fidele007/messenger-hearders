/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBWebRTCSelfVideoOverlayViewDelegate;
@class UIView, UITapGestureRecognizer, UIPanGestureRecognizer, POPSpringAnimation, FBWebRTCSelfViewSize;

@interface FBWebRTCSelfVideoOverlayView : UIView {

	BOOL _ongoingInteraction;
	UIView* _selfView;
	CGPoint _initialDragPosition;
	UITapGestureRecognizer* _tapRecognizer;
	UIPanGestureRecognizer* _moveSelfViewRecognizer;
	POPSpringAnimation* _moveToAnchorAnimation;
	id<FBWebRTCSelfVideoOverlayViewDelegate> _delegate;
	unsigned long long _selfViewAnchor;
	double _topLeftInset;
	FBWebRTCSelfViewSize* _selfViewSize;
	UIView* _selfVideoView;
	double _selfVideoAspectRatio;
	UIEdgeInsets _selfViewInsets;

}

@property (assign,nonatomic,__weak) id<FBWebRTCSelfVideoOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long selfViewAnchor;                                     //@synthesize selfViewAnchor=_selfViewAnchor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets selfViewInsets;                                           //@synthesize selfViewInsets=_selfViewInsets - In the implementation block
@property (assign,nonatomic) double topLeftInset;                                                   //@synthesize topLeftInset=_topLeftInset - In the implementation block
@property (nonatomic,copy) FBWebRTCSelfViewSize * selfViewSize;                                     //@synthesize selfViewSize=_selfViewSize - In the implementation block
@property (nonatomic,retain) UIView * selfVideoView;                                                //@synthesize selfVideoView=_selfVideoView - In the implementation block
@property (assign,nonatomic) double selfVideoAspectRatio;                                           //@synthesize selfVideoAspectRatio=_selfVideoAspectRatio - In the implementation block
-(void)_moveSelfView:(id)arg1 ;
-(void)_tapSelfView;
-(void)_cancelExistingAnimation;
-(CGPoint)_positionOfAnchor:(unsigned long long)arg1 ;
-(void)_notifyDelegateOfEvent:(long long)arg1 ;
-(unsigned long long)_closestAnchorToPoint:(CGPoint)arg1 ;
-(void)setSelfViewAnchor:(unsigned long long)arg1 ;
-(unsigned long long)selfViewAnchor;
-(UIEdgeInsets)selfViewInsets;
-(double)topLeftInset;
-(double)selfVideoAspectRatio;
-(void)setSelfVideoView:(UIView *)arg1 ;
-(UIView *)selfVideoView;
-(void)setSelfVideoAspectRatio:(double)arg1 ;
-(FBWebRTCSelfViewSize *)selfViewSize;
-(void)setTopLeftInset:(double)arg1 ;
-(void)setSelfViewSize:(FBWebRTCSelfViewSize *)arg1 ;
-(void)setSelfViewInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBWebRTCSelfVideoOverlayViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<FBWebRTCSelfVideoOverlayViewDelegate>)delegate;
@end

