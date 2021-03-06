/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
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

