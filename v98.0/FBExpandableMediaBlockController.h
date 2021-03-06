/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBExpandableBlockController.h>
#import <Messenger/FBInteractiveMediaNodeControllerDelegate.h>
#import <Messenger/FBOrientationStateDelegate.h>

@class ASDisplayNode, FBScrollIndicatorNode, FBInteractiveMediaNodeController, FBMediaKeyFrame, FBMediaAnimator, NSSet, NSString;

@interface FBExpandableMediaBlockController : FBExpandableBlockController <FBInteractiveMediaNodeControllerDelegate, FBOrientationStateDelegate> {

	ASDisplayNode* _mediaNode;
	FBScrollIndicatorNode* _scrollIndicatorNode;
	BOOL _scrollIndicatorVisible;
	FBInteractiveMediaNodeController* _interactiveMediaController;
	BOOL _requiresAspectFitToggle;
	BOOL _allowPanningToInterruptKenTurns;
	BOOL _mediaOccupiesMajorityOfViewport;
	CGSize _mediaSize;
	double _minimumAspectRatio;
	long long _restingContentMode;
	CGPoint _transitionMediaAnchorPoint;

}

@property (nonatomic,readonly) FBMediaKeyFrame * currentKeyFrame; 
@property (nonatomic,readonly) FBMediaAnimator * animator; 
@property (nonatomic,copy,readonly) NSSet * allAnnotationsForCurrentOrientation; 
@property (nonatomic,readonly) BOOL canExpand; 
@property (nonatomic,readonly) CGSize mediaSize;                                              //@synthesize mediaSize=_mediaSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)collapsedBlockRenderableLayoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(id)blockControllerClassesForAnnotationRegistry;
+(CGSize)mediaSizeForBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(double)_minimumAspectRatioForPresentationAttributes:(id)arg1 ;
+(long long)_contentModeForPresentationAttributes:(id)arg1 constrainedBySize:(CGSize)arg2 ;
+(BOOL)_allowPanningForPresentationAttributes:(id)arg1 ;
+(BOOL)_isBlockCloseToFullscreenAspectRatio:(id)arg1 orIsTaller:(BOOL)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(id)annotationDictionaryForExpandableBlock:(id)arg1 presentationAttributes:(id)arg2 displayContext:(id)arg3 ;
-(void)willReceiveFocusWithInteraction:(unsigned long long)arg1 ;
-(void)didReceiveFocusWithInteraction:(unsigned long long)arg1 ;
-(void)didLoseFocusWithInteraction:(unsigned long long)arg1 ;
-(void)didGainInteractiveFocus;
-(void)didLoseInteractiveFocus;
-(void)willBeginScrollingWithInteraction:(unsigned long long)arg1 ;
-(CGPoint)contentAnchorPoint;
-(id)renderableForOverlayAnnotation:(id)arg1 withKey:(id)arg2 annotationController:(id)arg3 ;
-(void)requireGestureRecognizerToFailBeforeZooming:(id)arg1 ;
-(void)willExpandWithAnimationConfiguration:(SCD_Struct_FB40)arg1 ;
-(void)willCollapseWithAnimationConfiguration:(SCD_Struct_FB40)arg1 ;
-(id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
-(id)blockRenderable;
-(BOOL)blockCanRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(void)didUpdateForExpansionProgress:(double)arg1 ;
-(BOOL)wantsRotation;
-(void)orientationState:(id)arg1 willBeginRotationToOrientation:(long long)arg2 fromOrientation:(long long)arg3 animationConfig:(SCD_Struct_FB40)arg4 ;
-(BOOL)orientationState:(id)arg1 shouldBlockChangeToInterfaceOrientation:(long long)arg2 ;
-(CGSize)mediaSize;
-(id)interactiveMediaNodeController;
-(void)didBeginExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(void)_setScrollIndicatorAlpha:(double)arg1 ;
-(long long)_restingInteractionMode;
-(long long)_expandedInteractionMode;
-(void)configureInteractionMediaNodeController:(id)arg1 ;
-(void)_setScrollIndicatorVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(FBMediaKeyFrame *)currentKeyFrame;
-(BOOL)_shouldApplyMinimumAspectRatio;
-(BOOL)_isMediaCloseToBlockAspectRatio;
-(NSSet *)allAnnotationsForCurrentOrientation;
-(BOOL)aspectFitTogglingEnabled;
-(BOOL)canExpand;
-(long long)_initialInteractionMode;
-(void)interactiveMediaController:(id)arg1 willAnimateToKeyFrame:(id)arg2 interactionMode:(long long)arg3 previousInteractionMode:(long long)arg4 withAnimation:(SCD_Struct_FB40)arg5 ;
-(BOOL)interactiveMediaController:(id)arg1 shouldEnableInteractionForMode:(long long)arg2 ;
-(void)interactiveMediaControllerWasTapped:(id)arg1 ;
-(void)interactiveMediaController:(id)arg1 didRenderInteractionMode:(long long)arg2 ;
-(void)interactiveMediaController:(id)arg1 updatedViewportPercentageVisible:(double)arg2 percentagePanned:(double)arg3 focusPoint:(CGPoint)arg4 ;
-(id)interactiveMediaController:(id)arg1 keyFrameForInteractionMode:(long long)arg2 default:(id)arg3 ;
-(CGSize)interactiveMediaController:(id)arg1 visibleSizeForInteractionMode:(long long)arg2 ;
-(void)didUpdateExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(FBMediaAnimator *)animator;
@end

