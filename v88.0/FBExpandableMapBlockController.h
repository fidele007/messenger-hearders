/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBExpandableBlockController.h>
#import <Messenger/FBExpandableMapNodeDelegate.h>

@class FBExpandableMapNode, NSArray, NSString;

@interface FBExpandableMapBlockController : FBExpandableBlockController <FBExpandableMapNodeDelegate> {

	FBExpandableMapNode* _expandableMapNode;
	BOOL _mapNodeHasFinishedRendering;
	NSArray* _tourCameras;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)collapsedBlockRenderableLayoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
-(void)didEnterPreloadViewport;
-(void)_beginTour;
-(BOOL)_canBeginTour;
-(void)expandableMapNode:(id)arg1 didFinishRenderingMapView:(id)arg2 ;
-(BOOL)expandableMapNodeAllowedUserInteraction:(id)arg1 ;
-(void)expandableMapNode:(id)arg1 didFinishMovingToTourCamera:(id)arg2 ;
-(void)expandableMapNodeDidDisplaySnapshot:(id)arg1 ;
-(void)willCollapseWithAnimationConfiguration:(SCD_Struct_FB94)arg1 ;
-(void)didExpand;
-(void)didBeginExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(void)didReceiveFocusWithInteraction:(unsigned long long)arg1 ;
-(void)didLoseFocusWithInteraction:(unsigned long long)arg1 ;
-(id)blockRenderable;
-(BOOL)blockCanRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
@end

