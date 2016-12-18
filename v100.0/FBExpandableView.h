/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/POPAnimationDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBExpandableViewDelegate;
@class UIGestureRecognizer, UIView, POPSpringAnimation, NSString;

@interface FBExpandableView : UIView <POPAnimationDelegate, UIGestureRecognizerDelegate> {

	UIGestureRecognizer* _panGestureRecognizer;
	UIView* _contentView;
	UIView* _backgroundFadeOverlayView;
	CGRect _panGestureBeganFrame;
	POPSpringAnimation* _expandAnimation;
	id<FBExpandableViewDelegate> _delegate;
	unsigned long long _state;

}

@property (assign,nonatomic,__weak) id<FBExpandableViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pop_animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)collapse;
-(double)_contentViewHeight;
-(double)_expansionProgress;
-(id)_contentViewHeightProperty;
-(void)_collapseWithInitialVelocity:(double)arg1 ;
-(void)_expandWithInitialVelocity:(double)arg1 ;
-(void)_willExpand;
-(void)_animateContentViewHeightTo:(double)arg1 withVelocity:(double)arg2 ;
-(void)_willCollapse;
-(void)_panDidStart;
-(void)_panDidMoveToYTranslationInView:(double)arg1 ;
-(void)_panDidEndWithYVelocity:(double)arg1 ;
-(void)_setContentViewHeight:(double)arg1 ;
-(double)_expansionProgressForHeight:(double)arg1 ;
-(void)_didCollapse;
-(void)_didExpand;
-(void)setDelegate:(id<FBExpandableViewDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<FBExpandableViewDelegate>)delegate;
-(unsigned long long)state;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_handlePanGesture:(id)arg1 ;
-(id)initWithContentView:(id)arg1 ;
-(void)expand;
-(void)_updateProgress;
@end

