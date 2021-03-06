/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNCancelableBubbleViewDelegate.h>

@protocol MNCancelableBubbleViewControllerDelegate;
@class MNCancelableBubbleView;

@interface MNCancelableBubbleViewController : UIViewController <MNCancelableBubbleViewDelegate> {

	MNCancelableBubbleView* _cancelableBubbleView;
	CGRect _permissibleScreenFrame;
	CGPoint _startingOrigin;
	CGPoint _startingBubbleViewCenter;
	CGPoint _startingCancelViewCenter;
	CGRect _attractedCancelViewFrame;
	BOOL _canceling;
	id<MNCancelableBubbleViewControllerDelegate> _delegate;
	unsigned long long _cancelPosition;
	UIEdgeInsets _viewInsets;

}

@property (assign,nonatomic,__weak) id<MNCancelableBubbleViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets viewInsets;                                                   //@synthesize viewInsets=_viewInsets - In the implementation block
@property (assign,getter=isCanceling,nonatomic) BOOL canceling;                                         //@synthesize canceling=_canceling - In the implementation block
@property (nonatomic,readonly) unsigned long long cancelPosition;                                       //@synthesize cancelPosition=_cancelPosition - In the implementation block
-(void)setCanceling:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateOrigin:(CGPoint)arg1 ;
-(BOOL)isCanceling;
-(unsigned long long)cancelPosition;
-(void)setViewInsets:(UIEdgeInsets)arg1 ;
-(void)showBubbleView:(id)arg1 origin:(CGPoint)arg2 ;
-(void)setCanceling:(BOOL)arg1 ;
-(void)cancelableBubbleViewDidFinishEntrance:(id)arg1 ;
-(CGRect)_viewFrameWithInsets;
-(CGRect)_constrainedDraggingFrameForBubbleFrame:(CGRect)arg1 ;
-(void)_updateStartingCancelPostionForBubbleFrame:(CGRect)arg1 ;
-(CGPoint)_calculateNewCancelViewCenterFromBubbleCenter:(CGPoint)arg1 ;
-(CGPoint)_cancelFrameEntranceStartingOffset;
-(BOOL)_isBubbleBeyondCancelCenter:(CGPoint)arg1 bubbleCenter:(CGPoint)arg2 ;
-(UIEdgeInsets)viewInsets;
-(BOOL)_forceLandscapeCancelPosition;
-(CGRect)_getCancelFrameWithPosition:(unsigned long long)arg1 bubbleFrame:(CGRect)arg2 ;
-(void)setDelegate:(id<MNCancelableBubbleViewControllerDelegate>)arg1 ;
-(id<MNCancelableBubbleViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(void)loadView;
@end

