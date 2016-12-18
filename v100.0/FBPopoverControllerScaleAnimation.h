/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPopoverAnimationProvider.h>

@class POPSpringAnimation, NSString;

@interface FBPopoverControllerScaleAnimation : NSObject <FBPopoverAnimationProvider> {

	POPSpringAnimation* _scaleAnimation;
	POPSpringAnimation* _stretchAnimation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopAnimatingPopover:(id)arg1 ;
-(void)animatePresentationWithView:(id)arg1 arrowDirection:(unsigned long long)arg2 dimmingLevelAdjustmentBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)animateDismissalWithView:(id)arg1 arrowDirection:(unsigned long long)arg2 dimmingLevelAdjustmentBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)performInitialPopoverConfigurationWithView:(id)arg1 ;
-(void)animateInteractiveDismissalOfPopover:(id)arg1 arrowDirection:(unsigned long long)arg2 dimmingLevelAdjustmentBlock:(/*^block*/id)arg3 progress:(double)arg4 ;
-(void)resetPopoverAppearance:(id)arg1 arrowDirection:(unsigned long long)arg2 dimmingLevelAdjustmentBlock:(/*^block*/id)arg3 velocity:(CGPoint)arg4 ;
-(id)init;
@end

