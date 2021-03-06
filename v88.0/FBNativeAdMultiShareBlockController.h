/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBAnnotatedBlockController.h>
#import <Messenger/FBNativeAdShareContentNodeDelegate.h>
#import <Messenger/FBNativeAdMultiShareContentNodeDelegate.h>

@protocol FBQueriedDocumentNativeAdBaseObjectFieldsProtocol;
@class FBMemModelObject, NSArray, NSMutableDictionary, FBNativeAdMultiShareContentNode, FBNativeArticleNativeAdIntentHandler, NSString;

@interface FBNativeAdMultiShareBlockController : FBAnnotatedBlockController <FBNativeAdShareContentNodeDelegate, FBNativeAdMultiShareContentNodeDelegate> {

	FBMemModelObject*<FBQueriedDocumentNativeAdBaseObjectFieldsProtocol> _multiShareAdObject;
	NSArray* _shareBlocks;
	NSMutableDictionary* _shareContentNodes;
	FBNativeAdMultiShareContentNode* _multiShareContentNode;
	FBNativeArticleNativeAdIntentHandler* _intentHandler;
	NSString* _articleID;
	NSMutableDictionary* _perfAnalyticsInfo;
	double _adContentLoadingStartTime;
	BOOL _adContentLoaded;
	BOOL _needsToFirePerfEvent;
	BOOL _needsToLogImpressionForFirstChildShare;
	mutex _asyncMutex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)blockControllerClassesForAnnotationRegistry;
+(id)annotationDictionaryForBlock:(id)arg1 presentationAttributes:(id)arg2 displayContext:(id)arg3 ;
+(id)blockRenderableLayoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(id)_childShareBlocksFromStoryBlock:(id)arg1 multiShareAdObject:(id)arg2 ;
+(id)_multiShareLayoutForDisplayContext:(id)arg1 ;
+(id)_perfAnalyticsInfoForPresentationAttributes:(id)arg1 ;
+(double)_adContentLoadingStartTimeForPresentationAttributes:(id)arg1 ;
+(BOOL)_needsToLogImpressionForPresentationAttributes:(id)arg1 ;
+(BOOL)_shouldEnableSponsoredHeaderForPresentationAttributes:(id)arg1 ;
-(void)handleIntent:(id)arg1 ;
-(id)initWithBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
-(void)didReceiveFocusWithInteraction:(unsigned long long)arg1 ;
-(void)didGainInteractiveFocus;
-(void)didLoseInteractiveFocus;
-(id)blockRenderable;
-(BOOL)blockCanRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(id)_childShareBlockFromChildShareNode:(id)arg1 ;
-(void)_handleTapOnAdContentActionWithChildAdObject:(id)arg1 ;
-(void)setAdContentLoaded:(BOOL)arg1 ;
-(BOOL)isAdContentLoaded;
-(void)nativeAdMultiShareContentNode:(id)arg1 didTapChildShareNode:(id)arg2 ;
-(void)nativeAdMultiShareContentNode:(id)arg1 didFeatureShareElement:(id)arg2 ;
-(void)nativeAdContentNode:(id)arg1 contentImageNode:(id)arg2 didLoadImage:(id)arg3 ;
-(void)nativeAdContentNode:(id)arg1 didTapActionButton:(id)arg2 ;
-(BOOL)needsToFirePerfEvent;
-(void)setNeedsToFirePerfEvent:(BOOL)arg1 ;
-(void)_cleanupNativeAdPerfAnalyticValues;
-(void)_logNativeAdPerfAnalytics;
@end

