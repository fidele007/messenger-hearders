/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASControlNode.h>

@class FBInchWormingLayer, UIColor;

@interface FBInchWormingLoadingIndicator : ASControlNode {

	FBInchWormingLayer* _worm;
	double _trackBorderWidth;
	UIColor* _trackBorderColor;
	double _trackShadowBlurRadius;
	UIColor* _trackShadowColor;

}

@property (assign,nonatomic) double trackBorderWidth;                   //@synthesize trackBorderWidth=_trackBorderWidth - In the implementation block
@property (nonatomic,retain) UIColor * trackBorderColor;                //@synthesize trackBorderColor=_trackBorderColor - In the implementation block
@property (assign,nonatomic) double trackShadowBlurRadius;              //@synthesize trackShadowBlurRadius=_trackShadowBlurRadius - In the implementation block
@property (nonatomic,retain) UIColor * trackShadowColor;                //@synthesize trackShadowColor=_trackShadowColor - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)setTrackShadowBlurRadius:(double)arg1 ;
-(void)setTrackShadowColor:(UIColor *)arg1 ;
-(void)setTrackBorderWidth:(double)arg1 ;
-(void)setTrackBorderColor:(UIColor *)arg1 ;
-(double)trackBorderWidth;
-(UIColor *)trackBorderColor;
-(double)trackShadowBlurRadius;
-(UIColor *)trackShadowColor;
-(void)rev;
-(void)layout;
-(void)stopAnimating;
-(void)startAnimating;
-(void)didLoad;
@end

