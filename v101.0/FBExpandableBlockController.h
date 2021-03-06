/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBAnnotatedBlockController.h>
#import <Messenger/FBExpandabilityHookProtocol.h>
#import <Messenger/FBFullscreenBlockController.h>

@class FBTransitionFrameSetter, NSSet, FBExpandableNode, NSString;

@interface FBExpandableBlockController : FBAnnotatedBlockController <FBExpandabilityHookProtocol, FBFullscreenBlockController> {

	SCD_Struct_FB78 _transitionAnimationConfiguration;
	FBTransitionFrameSetter* _transitionFrameSetter;
	CGPoint _transitionInteractionViewPoint;
	CGPoint _transitionInteractionPercentagePoint;
	unsigned long long _stateBeforeUnderlayReveal;
	NSSet* _expandedOnlyAnnotations;
	NSSet* _collapsedOnlyAnnotations;
	NSSet* _persistentAnnotations;
	NSSet* _landscapeAnnotations;
	BOOL _expandedViaRotation;
	BOOL _hasCentermostFocus;
	unsigned long long _expansionState;
	double _expansionProgress;
	FBExpandableNode* _expandableNode;
	unsigned long long _expansionStyle;

}

@property (assign,nonatomic) unsigned long long expansionState;                //@synthesize expansionState=_expansionState - In the implementation block
@property (assign,nonatomic) double expansionProgress;                         //@synthesize expansionProgress=_expansionProgress - In the implementation block
@property (assign,nonatomic) BOOL expandedViaRotation;                         //@synthesize expandedViaRotation=_expandedViaRotation - In the implementation block
@property (assign,nonatomic) FBExpandableNode * expandableNode;                //@synthesize expandableNode=_expandableNode - In the implementation block
@property (nonatomic,readonly) CGSize collapsedBlockSize; 
@property (nonatomic,readonly) CGSize expandedBlockSize; 
@property (nonatomic,readonly) unsigned long long expansionStyle;              //@synthesize expansionStyle=_expansionStyle - In the implementation block
@property (nonatomic,readonly) double desiredOverlayOpacity; 
@property (nonatomic,readonly) BOOL hasCentermostFocus;                        //@synthesize hasCentermostFocus=_hasCentermostFocus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)presentationAttributesToPrecompute;
+(id)collapsedBlockRenderableLayoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(id)filteredPresentationAttributesFromAttributes:(id)arg1 ;
+(id)overlayLayoutForStoryBlock:(id)arg1 blockLayout:(id)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(id)annotationDictionaryForBlock:(id)arg1 presentationAttributes:(id)arg2 displayContext:(id)arg3 ;
+(CGSize)expandedSizeForPresentationAttributes:(id)arg1 displayContext:(id)arg2 ;
+(BOOL)_annotationMustPersist:(id)arg1 withKey:(id)arg2 ;
+(id)annotationDictionaryForExpandableBlock:(id)arg1 presentationAttributes:(id)arg2 displayContext:(id)arg3 ;
+(id)blockRenderableLayoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
-(void)setExpansionProgress:(double)arg1 ;
-(void)collapse;
-(void)annotationOverlayNode:(id)arg1 tappedGeocodeAnnotation:(id)arg2 ;
-(BOOL)wantsCentermostFocus;
-(void)didGainCentermostFocus;
-(void)didLoseCentermostFocus;
-(CGPoint)contentAnchorPoint;
-(id)eligiblePresentationAttributesFromTransitioningToPresentationAttributes:(id)arg1 ;
-(void)didBeginTransitionToPresentationAttributes:(id)arg1 withGestureAtPoint:(CGPoint)arg2 originLayout:(id)arg3 destinationLayout:(id)arg4 ;
-(void)didUpdateTransitionToPresentationAttributes:(id)arg1 withProgress:(double)arg2 ;
-(void)didUpdateTransitionInteractionWithGestureAtPoint:(CGPoint)arg1 ;
-(void)willFinishTransitionToPresentationAttributes:(id)arg1 animationConfiguration:(SCD_Struct_FB73)arg2 ;
-(void)didFinishTransitionToPresentationAttributes:(id)arg1 withResultingLayout:(id)arg2 ;
-(id)expandedOnlyAnnotations;
-(void)willExpandWithAnimationConfiguration:(SCD_Struct_FB73)arg1 ;
-(unsigned long long)expansionStyle;
-(void)willCollapseWithAnimationConfiguration:(SCD_Struct_FB73)arg1 ;
-(id)collapsedOnlyAnnotations;
-(id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
-(CGSize)expandedBlockSize;
-(unsigned long long)expansionState;
-(CGSize)collapsedBlockSize;
-(BOOL)hasCentermostFocus;
-(void)didGenerateCompositeRenderable;
-(void)annotationUnderlayControllerDidTapClose:(id)arg1 ;
-(BOOL)pinnable;
-(id)persistentOverlayAnnotations;
-(void)setExpandableNode:(FBExpandableNode *)arg1 ;
-(void)didBeginExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(void)didUpdateExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(void)didCollapse;
-(void)didExpand;
-(FBExpandableNode *)expandableNode;
-(void)setExpansionState:(unsigned long long)arg1 ;
-(void)didUpdateForExpansionProgress:(double)arg1 ;
-(void)annotationWillCollapse;
-(void)annotationWillExpand;
-(void)_fireIntentForExpandableBlockState:(id)arg1 ;
-(BOOL)canExpand;
-(void)_scrollExpandedBlockIntoFocus;
-(long long)_interfaceOrientationForDeviceOrientation:(long long)arg1 ;
-(BOOL)_isTargetStateChangeOfExpansion:(unsigned long long)arg1 ;
-(void)_logExpandabilityInteraction;
-(id)landscapeAnnotations;
-(double)desiredOverlayOpacity;
-(double)expansionProgress;
-(BOOL)expandedViaRotation;
-(void)setExpandedViaRotation:(BOOL)arg1 ;
-(unsigned long long)presentationStyle;
-(void)expand;
@end

