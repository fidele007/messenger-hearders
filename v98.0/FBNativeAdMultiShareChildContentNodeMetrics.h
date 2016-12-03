/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBNativeAdShareContentNodeMetrics.h>

@interface FBNativeAdMultiShareChildContentNodeMetrics : FBNativeAdShareContentNodeMetrics

@property (nonatomic,readonly) double childShareNodeSpacing; 
@property (nonatomic,readonly) double childShareNodePercentage; 
@property (nonatomic,readonly) FBTextMetrics* bodyTextRedesignMetrics; 
@property (nonatomic,readonly) double horizontalSpacePadding; 
@property (nonatomic,readonly) double verticalSpacePadding; 
@property (nonatomic,readonly) double ctaButtonSpacePadding; 
@property (nonatomic,readonly) FBTextMetrics* subtitleTextRedesignMetrics; 
-(CGSize)defaultImageSizeWithConstrainedSize:(CGSize)arg1 ;
-(double)horizontalSpacePadding;
-(FBTextMetrics*)subtitleTextRedesignMetrics;
-(FBTextMetrics*)bodyTextRedesignMetrics;
-(double)verticalSpacePadding;
-(double)ctaButtonSpacePadding;
-(double)childShareNodeSpacing;
-(double)childShareNodePercentage;
-(CGSize)calculateNodeSizeWithCallToActionText:(id)arg1 titleText:(id)arg2 subtitleText:(id)arg3 bodyText:(id)arg4 constrainingSize:(CGSize)arg5 ;
-(CGSize)calculateRedesignChildNodeSizeWithSubtitleText:(id)arg1 shareImageURL:(id)arg2 actionButtonText:(id)arg3 constrainedSize:(CGSize)arg4 ;
-(unsigned long long)bodyMaxLineCount;
@end
