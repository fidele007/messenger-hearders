/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFooterCellHeightCalculator;
#import <Messenger/Messenger-Structs.h>
@class PAInterfaceGuide;

@interface FBNativeArticleFooterMetrics : NSObject {

	PAInterfaceGuide* _interfaceGuide;
	id<FBFooterCellHeightCalculator> _cellMetrics;

}

@property (nonatomic,readonly) id<FBFooterCellHeightCalculator> cellMetrics;              //@synthesize cellMetrics=_cellMetrics - In the implementation block
-(FBTextMetrics*)titleTextMetrics;
-(CGSize)nodeSizeWithConstrainedSize:(CGSize)arg1 titleTextSize:(CGSize)arg2 numberOfCells:(long long)arg3 ;
-(id<FBFooterCellHeightCalculator>)cellMetrics;
-(id)initWithInterfaceGuide:(id)arg1 cellMetrics:(id)arg2 ;
-(CGSize)cellSizeWithConstrainedSize:(CGSize)arg1 ;
-(double)titleVerticalMargin;
-(double)titleToTableViewSpacing;
-(double)horizontalMargin;
-(double)titleTextOffset;
-(id)nodeBackgroundColor;
-(double)titleTextBaselineOffsetForConstraintSize:(CGSize)arg1 ;
@end
