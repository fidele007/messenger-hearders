/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNComposerDragAnimatorDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol MNComposerDragHandlerDelegate;
@class NSMutableArray, MNComposerDragAnimator, UIPercentDrivenInteractiveTransition, NSDate, UIPanGestureRecognizer, NSString;

@interface MNComposerDragHandler : NSObject <MNComposerDragAnimatorDelegate, UIViewControllerTransitioningDelegate> {

	NSMutableArray* _completionBlocks;
	MNComposerDragAnimator* _dragAnimator;
	UIPercentDrivenInteractiveTransition* _interactiveTransition;
	BOOL _interactiveTransitionActive;
	NSDate* _lastChange;
	UIPanGestureRecognizer* _panGestureRecognizer;
	BOOL _shouldFinishTransition;
	id<MNComposerDragHandlerDelegate> _delegate;

}

@property (nonatomic,readonly) UIPercentDrivenInteractiveTransition * interactiveTransition; 
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNComposerDragHandlerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long dragHandlerType; 
-(void)dragAnimatorWillBeginAnimation:(id)arg1 ;
-(void)dragAnimatorDidBeginAnimation:(id)arg1 ;
-(void)dragAnimator:(id)arg1 willCompleteAnimation:(BOOL)arg2 ;
-(void)dragAnimator:(id)arg1 didCompleteAnimation:(BOOL)arg2 ;
-(void)beginObservingInteractiveTransitionWithPanGestureRecognizer:(id)arg1 ;
-(void)endObservingInteractiveTransition;
-(void)willCommitTransitionInteractive:(BOOL)arg1 ;
-(void)didCompleteTransitionInteractive:(BOOL)arg1 finished:(BOOL)arg2 ;
-(long long)dragHandlerType;
-(id)animatorWithDragStartLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(BOOL)validateInteractiveTransitionGesture:(id)arg1 ;
-(void)_endObservingPanGestureRecognizer;
-(id)_updateDragAnimator;
-(id)_updateInteractiveTransition;
-(void)willCancelTransitionInteractive:(BOOL)arg1 ;
-(id)_cleanupInteractiveTransition;
-(void)didCancelTransitionInteractive:(BOOL)arg1 ;
-(void)didCommitTransitionInteractive:(BOOL)arg1 ;
-(id)_updateAnimatorWithDragStartLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)triggerTransition;
-(double)_updateProgress:(double)arg1 withPanGestureRecognizer:(id)arg2 ;
-(void)_cancelInteractiveTransitionWithProgress:(double)arg1 ;
-(BOOL)_shouldFinishInteractiveTransitionWithProgress:(double)arg1 velocity:(CGPoint)arg2 ;
-(void)_commitInteractiveTransitionWithProgress:(double)arg1 ;
-(void)beginKeyboardAccessoryViewTransition;
-(void)completeKeyboardAccessoryViewTransition;
-(void)cancelKeyboardAccessoryViewTransition;
-(void)willBeginTransitionInteractive:(BOOL)arg1 ;
-(void)didBeginTransitionInteractive:(BOOL)arg1 ;
-(void)willCompleteTransitionInteractive:(BOOL)arg1 finished:(BOOL)arg2 ;
-(id)dragAnimator;
-(void)setDelegate:(id<MNComposerDragHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MNComposerDragHandlerDelegate>)delegate;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)_handlePanGesture:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(UIPercentDrivenInteractiveTransition *)interactiveTransition;
@end
