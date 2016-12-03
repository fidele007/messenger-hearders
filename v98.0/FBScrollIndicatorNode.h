/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>

@class ASDisplayNode, UIColor;

@interface FBScrollIndicatorNode : ASDisplayNode {

	double _percentageVisible;
	double _percentagePanned;
	double _indicatorWhiteValue;
	double _minIndicatorWidth;
	double _maxIndicatorAlpha;
	BOOL _indicatorVisible;
	ASDisplayNode* _indicator;
	double _indicatorAlpha;
	UIColor* _indicatorColor;

}

@property (assign,nonatomic) double percentageVisible;              //@synthesize percentageVisible=_percentageVisible - In the implementation block
@property (assign,nonatomic) double percentagePanned;               //@synthesize percentagePanned=_percentagePanned - In the implementation block
@property (assign,nonatomic) double indicatorAlpha;                 //@synthesize indicatorAlpha=_indicatorAlpha - In the implementation block
@property (nonatomic,retain) UIColor * indicatorColor;              //@synthesize indicatorColor=_indicatorColor - In the implementation block
-(void)_staticInitialize;
-(void)setIndicatorColor:(UIColor *)arg1 ;
-(void)setIndicatorAlpha:(double)arg1 ;
-(void)setPercentagePanned:(double)arg1 ;
-(void)setPercentageVisible:(double)arg1 ;
-(double)percentageVisible;
-(double)percentagePanned;
-(CGRect)_indicatorFrameForFrame:(CGRect)arg1 ;
-(double)indicatorAlpha;
-(UIColor *)indicatorColor;
-(id)init;
-(void)layout;
@end
