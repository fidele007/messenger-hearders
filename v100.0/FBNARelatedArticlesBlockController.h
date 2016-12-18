/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBNAComponentHostingBlockController.h>
#import <Messenger/FBFocusableBlockController.h>
#import <Messenger/FBPreloadableBlockController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, ASDisplayNode, FBRichStoryRelatedArticlesSectionBlock, NSArray, NSString;

@interface FBNARelatedArticlesBlockController : FBNAComponentHostingBlockController <FBFocusableBlockController, FBPreloadableBlockController> {

	NSObject*<OS_dispatch_queue> _cancellationQueue;
	NSMutableDictionary* _cancellationTokens;
	ASDisplayNode* _cachedRenderable;
	FBNARelatedArticleMetrics _metrics;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cancellationQueue;                   //@synthesize cancellationQueue=_cancellationQueue - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * cancellationTokens;                    //@synthesize cancellationTokens=_cancellationTokens - In the implementation block
@property (nonatomic,retain) ASDisplayNode * cachedRenderable;                                   //@synthesize cachedRenderable=_cachedRenderable - In the implementation block
@property (nonatomic,readonly) FBNARelatedArticleMetrics metrics;                                //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) FBRichStoryRelatedArticlesSectionBlock * storyBlock; 
@property (nonatomic,copy,readonly) NSArray * relatedArticles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)componentForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 displayContext:(id)arg3 session:(id)arg4 ;
-(NSArray *)relatedArticles;
-(id)richStoryRenderable;
-(void)didReceiveFocusWithInteraction:(unsigned long long)arg1 ;
-(CGRect)contentFrameForFramesetter:(id)arg1 ;
-(void)didEnterPreloadViewport;
-(void)didExitPreloadViewport;
-(id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 displayContext:(id)arg3 session:(id)arg4 ;
-(ASDisplayNode *)cachedRenderable;
-(void)setCachedRenderable:(ASDisplayNode *)arg1 ;
-(NSMutableDictionary *)cancellationTokens;
-(FBNARelatedArticleMetrics)metrics;
-(NSObject*<OS_dispatch_queue>)cancellationQueue;
@end
