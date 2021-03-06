/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBRichStoryBlock.h>

@class NSArray, NSString;

@interface FBRichStoryRelatedArticlesSectionBlock : FBRichStoryBlock {

	unsigned char _visualStyle;
	NSArray* _preloadableImageURLs;
	NSArray* _relatedArticles;
	NSString* _sectionTitle;

}

@property (nonatomic,copy,readonly) NSArray * relatedArticles;                   //@synthesize relatedArticles=_relatedArticles - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionTitle;                     //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,readonly) unsigned char visualStyle;                        //@synthesize visualStyle=_visualStyle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * preloadableImageURLs;              //@synthesize preloadableImageURLs=_preloadableImageURLs - In the implementation block
-(NSArray *)relatedArticles;
-(id)initWithRelatedArticles:(id)arg1 sectionTitle:(id)arg2 visualStyle:(unsigned char)arg3 blockId:(id)arg4 ;
-(NSArray *)preloadableImageURLs;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)visualStyle;
-(NSString *)sectionTitle;
@end

