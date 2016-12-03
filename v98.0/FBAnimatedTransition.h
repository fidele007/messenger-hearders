/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnimatedTransition.h>
@class UIGestureRecognizer;


@protocol FBAnimatedTransition <NSObject>
@property (nonatomic,readonly) BOOL allowsInteraction; 
@property (nonatomic,readonly) UIGestureRecognizer * interactiveGestureRecognizer; 
@property (assign,nonatomic,__weak) id<FBAnimatedTransitionDelegate> delegate; 
@required
-(void)presentWithTransitionContext:(id)arg1 animated:(BOOL)arg2;
-(void)dismissWithTransitionContext:(id)arg1 animated:(BOOL)arg2;
-(void)cancelWithTransitionContext:(id)arg1 animated:(BOOL)arg2;
-(BOOL)allowsInteraction;
-(UIGestureRecognizer *)interactiveGestureRecognizer;
-(void)setDelegate:(id)arg1;
-(id<FBAnimatedTransitionDelegate>)delegate;

@end


@protocol FBAnimatedTransitionDelegate;
@class UIGestureRecognizer, NSString;

@interface FBAnimatedTransition : NSObject <FBAnimatedTransition> {

	BOOL allowsInteraction;
	UIGestureRecognizer* interactiveGestureRecognizer;
	id<FBAnimatedTransitionDelegate> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL allowsInteraction; 
@property (nonatomic,readonly) UIGestureRecognizer * interactiveGestureRecognizer; 
@property (assign,nonatomic,__weak) id<FBAnimatedTransitionDelegate> delegate; 
-(void)presentWithTransitionContext:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissWithTransitionContext:(id)arg1 animated:(BOOL)arg2 ;
-(void)cancelWithTransitionContext:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)allowsInteraction;
-(UIGestureRecognizer *)interactiveGestureRecognizer;
-(void)setDelegate:(id<FBAnimatedTransitionDelegate>)arg1 ;
-(id<FBAnimatedTransitionDelegate>)delegate;
@end
