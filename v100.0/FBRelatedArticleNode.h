/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASControlNode.h>

@class FBFullBleedTextNode, FBRelatedArticleMetrics, FBMultiresolutionImageNode;

@interface FBRelatedArticleNode : ASControlNode {

	CGSize _coverImageSize;
	FBFullBleedTextNode* _headlineNode;
	FBFullBleedTextNode* _attributionNode;
	FBRelatedArticleMetrics* _metrics;
	long long _layoutDirection;
	FBMultiresolutionImageNode* _coverImageNode;

}

@property (nonatomic,readonly) FBMultiresolutionImageNode * coverImageNode;              //@synthesize coverImageNode=_coverImageNode - In the implementation block
+(CGSize)sizeWithMetrics:(id)arg1 constrainedSize:(CGSize)arg2 ;
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id)initWithHeadline:(id)arg1 attribution:(id)arg2 coverImageURL:(id)arg3 metrics:(id)arg4 layoutDirection:(long long)arg5 session:(id)arg6 ;
-(id)initWithHeadline:(id)arg1 kicker:(id)arg2 isSponsored:(BOOL)arg3 coverImageURL:(id)arg4 metrics:(id)arg5 layoutDirection:(long long)arg6 session:(id)arg7 ;
-(FBMultiresolutionImageNode *)coverImageNode;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layout;
-(BOOL)_hasAttribution;
@end

