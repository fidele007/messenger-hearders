/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(id)initWithInterfaceGuide:(id)arg1 cellMetrics:(id)arg2 ;
-(FBTextMetrics*)titleTextMetrics;
-(CGSize)cellSizeWithConstrainedSize:(CGSize)arg1 ;
-(double)titleVerticalMargin;
-(double)titleToTableViewSpacing;
-(double)horizontalMargin;
-(double)titleTextOffset;
-(id)nodeBackgroundColor;
-(double)titleTextBaselineOffsetForConstraintSize:(CGSize)arg1 ;
-(CGSize)nodeSizeWithConstrainedSize:(CGSize)arg1 titleTextSize:(CGSize)arg2 numberOfCells:(long long)arg3 ;
-(id<FBFooterCellHeightCalculator>)cellMetrics;
@end

