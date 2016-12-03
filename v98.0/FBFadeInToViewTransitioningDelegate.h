/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(void)transitionManager:(id)arg1 willStartTransitionWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(BOOL)transitionManagerShouldAddMediaViewOnTop:(id)arg1 ;
-(void)transitionManager:(id)arg1 animateInsideAnimationBlockWithWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(void)transitionManager:(id)arg1 interactiveDismissalDidUpdateWithProgress:(double)arg2 mediaViewOrLayer:(id)arg3 containerView:(id)arg4 ;
-(BOOL)transitionManagerShouldShowPresentedViewDuringTransition:(id)arg1 ;
-(void)transitionManager:(id)arg1 didEndTransitionWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(UIView *)viewToFadeIn;
-(UIView *)viewToHide;
@end
