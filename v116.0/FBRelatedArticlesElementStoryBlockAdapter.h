/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDocumentElementStoryBlockAdapter.h>

@protocol FBNativeArticleRelatedArticlesElementFragment;
@class FBRichStoryRelatedArticlesSectionBlock;

@interface FBRelatedArticlesElementStoryBlockAdapter : FBDocumentElementStoryBlockAdapter {

	FBRichStoryRelatedArticlesSectionBlock* _storyBlock;
	id<FBNativeArticleRelatedArticlesElementFragment> _relatedArticleElementFragment;

}

@property (nonatomic,readonly) id<FBNativeArticleRelatedArticlesElementFragment> relatedArticleElementFragment;              //@synthesize relatedArticleElementFragment=_relatedArticleElementFragment - In the implementation block
@property (nonatomic,readonly) FBRichStoryRelatedArticlesSectionBlock * storyBlock;                                          //@synthesize storyBlock=_storyBlock - In the implementation block
+(BOOL)canAdaptDataModel:(id)arg1 ;
+(id)adapterWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(FBRichStoryRelatedArticlesSectionBlock *)storyBlock;
-(id)initWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(id<FBNativeArticleRelatedArticlesElementFragment>)relatedArticleElementFragment;
-(id)viewModel;
@end

