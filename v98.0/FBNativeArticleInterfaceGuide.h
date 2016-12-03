/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/PAInterfaceGuide.h>

@class FBRichStoryStyleSheet;

@interface FBNativeArticleInterfaceGuide : PAInterfaceGuide {

	FBRichStoryStyleSheet* _styleSheet;

}
-(FBTextMetrics*)generateKickerTextMetrics;
-(FBTextMetrics*)generateTitleTextMetrics;
-(FBTextMetrics*)generateSubtitleTextMetrics;
-(FBTextMetrics*)generateMetadataTextMetrics;
-(FBTextMetrics*)generatePullQuoteTextMetrics;
-(FBTextMetrics*)generatePullQuoteAttributionTextMetrics;
-(FBTextMetrics*)generateBlockQuoteTextMetrics;
-(FBTextMetrics*)generateCodeBlockTextMetrics;
-(FBTextMetrics*)generateFooterTextMetrics;
-(FBTextMetrics*)generateRelatedArticlesTitleTextMetrics;
-(FBTextMetrics*)generateBodyTextMetrics;
-(FBTextMetrics*)generateLinkTextMetrics;
-(FBTextMetrics*)generateH1TextMetrics;
-(FBTextMetrics*)generateH2TextMetrics;
-(id)initWithStyleSheet:(id)arg1 size:(CGSize)arg2 ;
-(FBTextMetrics*)unorderedListTextMetrics;
@end
