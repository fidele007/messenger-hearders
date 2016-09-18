/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>
#import <Messenger/FBRotatable.h>

@protocol FBRichStoryFrameSetter;
@class NSDictionary, FBAnnotationOverlayNode, ASDisplayNode, FBAnnotationUnderlayNode, NSString;

@interface FBAnnotatedCompositeNode : ASDisplayNode <FBRotatable> {

	NSDictionary* _adjacentAnnotationNodes;
	FBAnnotationOverlayNode* _overlayNode;
	ASDisplayNode* _overlayClippingNode;
	ASDisplayNode* _underlayDarkeningNode;
	FBAnnotationUnderlayNode* _underlayNode;
	id<FBRichStoryFrameSetter> _frameSetter;
	double _underlayVisibilityPercentage;

}

@property (nonatomic,retain) id<FBRichStoryFrameSetter> frameSetter;               //@synthesize frameSetter=_frameSetter - In the implementation block
@property (nonatomic,readonly) FBAnnotationOverlayNode * overlayNode;              //@synthesize overlayNode=_overlayNode - In the implementation block
@property (assign,nonatomic) double underlayVisibilityPercentage;                  //@synthesize underlayVisibilityPercentage=_underlayVisibilityPercentage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double currentRotation; 
+(id)overlayLayoutAttributesForFramesetter:(id)arg1 ;
+(id)_filterAnnotationNodes:(id)arg1 backedByAnnotations:(id)arg2 byAdjacent:(inout id*)arg3 orOverlaid:(inout id*)arg4 ;
-(void)_staticInitialize;
-(double)currentRotation;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id)initWithAnnotations:(id)arg1 overlayAnnotationNodes:(id)arg2 blockNode:(id)arg3 underlayNode:(id)arg4 displayContext:(id)arg5 ;
-(void)setFrameSetter:(id<FBRichStoryFrameSetter>)arg1 ;
-(FBAnnotationOverlayNode *)overlayNode;
-(void)applyOrientationRotation:(double)arg1 withProgress:(double)arg2 ;
-(void)setVisibleOverlayAnnotations:(id)arg1 withAnimation:(SCD_Struct_FB94)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBlockOverlayEnabled:(BOOL)arg1 ;
-(double)underlayVisibilityPercentage;
-(void)setUnderlayVisibilityPercentage:(double)arg1 ;
-(id)_blockNodeLayoutAttributes;
-(id)_overlayLayoutAttributes;
-(id<FBRichStoryFrameSetter>)frameSetter;
-(BOOL)_shouldLayoutOverlay;
-(void)_addAdjacentAnnotationNodes;
-(void)_addUnderlayNode;
-(void)setOverlayClippingNodeBackgroundColor:(id)arg1 ;
-(void)layout;
-(void)didLoad;
@end

