/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASControlNode.h>

@class FBAccessibilityContext, FBFullBleedTextNode, FBRelatedArticleMetrics, FBMultiresolutionImageNode;

@interface FBRelatedArticleNode : ASControlNode {

	FBAccessibilityContext* _accessibilityContext;
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
-(id)initWithHeadline:(id)arg1 attribution:(id)arg2 coverImageURL:(id)arg3 metrics:(id)arg4 layoutDirection:(long long)arg5 accessibilityContext:(id)arg6 session:(id)arg7 ;
-(id)initWithHeadline:(id)arg1 kicker:(id)arg2 isSponsored:(BOOL)arg3 coverImageURL:(id)arg4 metrics:(id)arg5 layoutDirection:(long long)arg6 accessibilityContext:(id)arg7 session:(id)arg8 ;
-(FBMultiresolutionImageNode *)coverImageNode;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layout;
-(BOOL)_hasAttribution;
@end

