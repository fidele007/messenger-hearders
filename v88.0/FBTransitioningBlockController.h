/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTransitioningBlockController <FBContentAwareBlockController>
@optional
+(id)presentationAttributesToPrecompute;
-(void)didFinishTransitionToPresentationAttributes:(id)arg1 withResultingLayout:(id)arg2;
-(void)didBeginTransitionToPresentationAttributes:(id)arg1 withGestureAtPoint:(CGPoint)arg2 originLayout:(id)arg3 destinationLayout:(id)arg4;
-(void)willFinishTransitionToPresentationAttributes:(id)arg1 animationConfiguration:(SCD_Struct_FB94)arg2;
-(void)didUpdateTransitionToPresentationAttributes:(id)arg1 withProgress:(double)arg2;
-(void)didUpdateTransitionInteractionWithGestureAtPoint:(CGPoint)arg1;

@required
-(id)eligiblePresentationAttributesFromTransitioningToPresentationAttributes:(id)arg1;

@end

