/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface FBMinimizedTabBrowserZoomPresentAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	CGRect _initialAnimationFrame;

}

@property (assign,nonatomic) CGRect initialAnimationFrame;              //@synthesize initialAnimationFrame=_initialAnimationFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInitialAnimationFrame:(CGRect)arg1 ;
-(CGPoint)_centerPositionOfRect:(CGRect)arg1 ;
-(CGRect)initialAnimationFrame;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
@end

