/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBBackgroundDeallocatedObject.h>
#import <Messenger/FBPublisherNodeDelegate.h>
#import <Messenger/FBNativeArticleEngagementActionControllerDelegate.h>
#import <Messenger/FBRichStoryBlockController.h>

@class FBUserSession, NSString, FBMemPage, FBPublisherNodeMetrics, FBPublisherNode, FBRichStoryBlockDisplayContext, FBNativeArticlePageLikeController, FBNABlockAnalyticsLogger;

@interface FBPublisherBlockController : FBBackgroundDeallocatedObject <FBPublisherNodeDelegate, FBNativeArticleEngagementActionControllerDelegate, FBRichStoryBlockController> {

	FBUserSession* _session;
	NSString* _urlString;
	CGSize _logoSize;
	FBMemPage* _page;
	FBPublisherNodeMetrics* _metrics;
	FBPublisherNode* _publisherNode;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBNativeArticlePageLikeController* _likeController;
	FBNABlockAnalyticsLogger* _analyticsLogger;

}

@property (nonatomic,readonly) FBNABlockAnalyticsLogger * analyticsLogger;              //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(id)_metricsForStoryBlock:(id)arg1 displayContext:(id)arg2 ;
-(FBNABlockAnalyticsLogger *)analyticsLogger;
-(id)richStoryRenderable;
-(void)engagementActionControllerDidChangeButtonSelectionState:(id)arg1 ;
-(void)_preheatAssets;
-(id)initWithStoryBlock:(id)arg1 session:(id)arg2 metrics:(id)arg3 displayContext:(id)arg4 ;
-(void)publisherBlockNode:(id)arg1 didTapLogoImage:(id)arg2 ;
@end

