/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class FBSmartStrokeLayer, FBTrackLayer, UIBezierPath, UIColor;

@interface FBInchWormingLayer : CALayer {

	FBSmartStrokeLayer* _movingLayer;
	FBTrackLayer* _trackLayer;
	BOOL _animating;
	UIBezierPath* _path;
	double _wormWidth;
	UIColor* _wormColor;

}

@property (nonatomic,retain) UIBezierPath * path;                            //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) double wormWidth;                               //@synthesize wormWidth=_wormWidth - In the implementation block
@property (nonatomic,retain) UIColor * wormColor;                            //@synthesize wormColor=_wormColor - In the implementation block
@property (assign,nonatomic) double trackBorderWidth; 
@property (nonatomic,retain) UIColor * trackColor; 
@property (nonatomic,retain) UIColor * trackBorderColor; 
@property (nonatomic,retain) UIColor * trackShadowColor; 
@property (assign,nonatomic) double trackShadowBlurRadius; 
@property (assign,getter=isAnimating,nonatomic) BOOL animating;              //@synthesize animating=_animating - In the implementation block
-(UIColor *)trackColor;
-(void)setTrackShadowBlurRadius:(double)arg1 ;
-(void)setTrackShadowColor:(UIColor *)arg1 ;
-(void)setTrackBorderWidth:(double)arg1 ;
-(void)setTrackBorderColor:(UIColor *)arg1 ;
-(double)wormWidth;
-(void)stopAnimating:(/*^block*/id)arg1 ;
-(double)trackBorderWidth;
-(UIColor *)trackBorderColor;
-(double)trackShadowBlurRadius;
-(UIColor *)trackShadowColor;
-(void)setWormWidth:(double)arg1 ;
-(UIColor *)wormColor;
-(void)setWormColor:(UIColor *)arg1 ;
-(void)setTrackColor:(UIColor *)arg1 ;
-(id)_continuousMotionAnimationForProperty:(id)arg1 ;
-(void)_continuouslyInchPropertyForward:(id)arg1 repeatDelay:(double)arg2 ;
-(void)_startInching;
-(void)rev;
-(id)init;
-(UIBezierPath *)path;
-(BOOL)isAnimating;
-(void)startAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setPath:(UIBezierPath *)arg1 ;
-(void)layoutSublayers;
@end

