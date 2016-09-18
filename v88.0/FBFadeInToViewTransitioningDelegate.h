/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDisplayableMediaTransitioningDelegate.h>

@class UIView, NSString;

@interface FBFadeInToViewTransitioningDelegate : NSObject <FBDisplayableMediaTransitioningDelegate> {

	UIView* _viewToFadeIn;
	UIView* _viewToHide;

}

@property (assign,nonatomic,__weak) UIView * viewToFadeIn;              //@synthesize viewToFadeIn=_viewToFadeIn - In the implementation block
@property (assign,nonatomic,__weak) UIView * viewToHide;                //@synthesize viewToHide=_viewToHide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewToFadeIn:(UIView *)arg1 ;
-(void)setViewToHide:(UIView *)arg1 ;
-(UIView *)viewToFadeIn;
-(UIView *)viewToHide;
-(void)transitionManager:(id)arg1 animateInsideAnimationBlockWithContainerView:(id)arg2 ;
-(void)transitionManager:(id)arg1 didEndTransitionWithContainerView:(id)arg2 ;
-(void)transitionManager:(id)arg1 interactiveDismissalDidUpdateWithProgress:(double)arg2 containerView:(id)arg3 ;
-(void)transitionManager:(id)arg1 willStartTransitionWithContainerView:(id)arg2 ;
-(BOOL)transitionManagerShouldShowPresentedViewDuringTransition:(id)arg1 ;
-(BOOL)transitionManagerShouldAddMediaViewOnTop:(id)arg1 ;
@end

