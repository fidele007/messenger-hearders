/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBHTMLAdBlockController.h>
#import <Messenger/FBTransitioningBlockController.h>

@class NSString;

@interface FBAdNetworkBridgeBlockController : FBHTMLAdBlockController <FBTransitioningBlockController> {

	BOOL _didFireImpressionEvent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(Class)targetBlockControllerClass;
-(void)_replaceWithNativeAdPresentationWithPlacementID:(id)arg1 ;
-(id)eligiblePresentationAttributesFromTransitioningToPresentationAttributes:(id)arg1 ;
-(void)didLoadLastRequestWithFinishTime:(double)arg1 ;
-(BOOL)htmlEmbedNode:(id)arg1 shouldStartNavigationRequest:(id)arg2 navigationType:(long long)arg3 sourceFrame:(id)arg4 targetFrame:(id)arg5 ;
@end

