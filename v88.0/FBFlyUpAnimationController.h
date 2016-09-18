/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol FBFlyUpAnimationControllerDelegate;
@class NSString;

@interface FBFlyUpAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _isPresenting;
	BOOL _fadeOnDismissal;
	id<FBFlyUpAnimationControllerDelegate> _delegate;
	unsigned long long _dismissalDirection;
	CGSize _contentSize;

}

@property (assign,nonatomic,__weak) id<FBFlyUpAnimationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isPresenting;                                                   //@synthesize isPresenting=_isPresenting - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                  //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) BOOL fadeOnDismissal;                                                //@synthesize fadeOnDismissal=_fadeOnDismissal - In the implementation block
@property (assign,nonatomic) unsigned long long dismissalDirection;                               //@synthesize dismissalDirection=_dismissalDirection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_animatePresentingTransition:(id)arg1 ;
-(void)_animateDismissingTransition:(id)arg1 ;
-(void)_animateOverlay:(id)arg1 toDimmingPercent:(double)arg2 ;
-(void)_animateContentView:(id)arg1 toPositionY:(double)arg2 springs:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_animateContentView:(id)arg1 toRotation:(double)arg2 ;
-(void)setIsPresenting:(BOOL)arg1 ;
-(BOOL)fadeOnDismissal;
-(void)setFadeOnDismissal:(BOOL)arg1 ;
-(unsigned long long)dismissalDirection;
-(void)setDismissalDirection:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBFlyUpAnimationControllerDelegate>)arg1 ;
-(id<FBFlyUpAnimationControllerDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(BOOL)isPresenting;
@end

