/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <QuartzCore/CALayer.h>
#import <Messenger/CALayerDelegate.h>
#import <Messenger/CAAnimationDelegate.h>
#import <Messenger/FBShimmering.h>

@class CALayer, FBShimmeringMaskLayer, NSString;

@interface FBShimmeringLayer : CALayer <CALayerDelegate, CAAnimationDelegate, FBShimmering> {

	CALayer* _contentLayer;
	FBShimmeringMaskLayer* _maskLayer;
	BOOL _shimmering;
	double _shimmeringPauseDuration;
	double _shimmeringAnimationOpacity;
	double _shimmeringOpacity;
	double _shimmeringSpeed;
	double _shimmeringHighlightLength;
	long long _shimmeringDirection;
	double _shimmeringFadeTime;
	double _shimmeringBeginFadeDuration;
	double _shimmeringEndFadeDuration;
	double _shimmeringBeginTime;

}

@property (nonatomic,retain) FBShimmeringMaskLayer * maskLayer;                                                                                  //@synthesize maskLayer=_maskLayer - In the implementation block
@property (nonatomic,retain) CALayer * contentLayer;                                                                                             //@synthesize contentLayer=_contentLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isShimmering,nonatomic) BOOL shimmering;                                                                                //@synthesize shimmering=_shimmering - In the implementation block
@property (assign,nonatomic) double shimmeringPauseDuration;                                                                                     //@synthesize shimmeringPauseDuration=_shimmeringPauseDuration - In the implementation block
@property (assign,nonatomic) double shimmeringAnimationOpacity;                                                                                  //@synthesize shimmeringAnimationOpacity=_shimmeringAnimationOpacity - In the implementation block
@property (assign,nonatomic) double shimmeringOpacity;                                                                                           //@synthesize shimmeringOpacity=_shimmeringOpacity - In the implementation block
@property (assign,nonatomic) double shimmeringSpeed;                                                                                             //@synthesize shimmeringSpeed=_shimmeringSpeed - In the implementation block
@property (assign,nonatomic) double shimmeringHighlightLength;                                                                                   //@synthesize shimmeringHighlightLength=_shimmeringHighlightLength - In the implementation block
@property (assign,setter=setShimmeringHighlightLength:,getter=shimmeringHighlightLength,nonatomic) double shimmeringHighlightWidth; 
@property (assign,nonatomic) long long shimmeringDirection;                                                                                      //@synthesize shimmeringDirection=_shimmeringDirection - In the implementation block
@property (assign,nonatomic) double shimmeringBeginFadeDuration;                                                                                 //@synthesize shimmeringBeginFadeDuration=_shimmeringBeginFadeDuration - In the implementation block
@property (assign,nonatomic) double shimmeringEndFadeDuration;                                                                                   //@synthesize shimmeringEndFadeDuration=_shimmeringEndFadeDuration - In the implementation block
@property (nonatomic,readonly) double shimmeringFadeTime;                                                                                        //@synthesize shimmeringFadeTime=_shimmeringFadeTime - In the implementation block
@property (assign,nonatomic) double shimmeringBeginTime;                                                                                         //@synthesize shimmeringBeginTime=_shimmeringBeginTime - In the implementation block
-(void)setShimmeringPauseDuration:(double)arg1 ;
-(void)setShimmeringSpeed:(double)arg1 ;
-(void)setShimmeringOpacity:(double)arg1 ;
-(void)setShimmeringAnimationOpacity:(double)arg1 ;
-(void)setShimmeringHighlightLength:(double)arg1 ;
-(void)setShimmeringEndFadeDuration:(double)arg1 ;
-(void)setShimmering:(BOOL)arg1 ;
-(BOOL)isShimmering;
-(void)_updateShimmering;
-(void)_updateMaskColors;
-(void)_updateMaskLayout;
-(void)_createMaskIfNeeded;
-(void)_clearMask;
-(double)shimmeringPauseDuration;
-(double)shimmeringAnimationOpacity;
-(double)shimmeringOpacity;
-(double)shimmeringSpeed;
-(double)shimmeringHighlightLength;
-(long long)shimmeringDirection;
-(void)setShimmeringDirection:(long long)arg1 ;
-(double)shimmeringBeginFadeDuration;
-(void)setShimmeringBeginFadeDuration:(double)arg1 ;
-(double)shimmeringEndFadeDuration;
-(double)shimmeringFadeTime;
-(double)shimmeringBeginTime;
-(void)setShimmeringBeginTime:(double)arg1 ;
-(void)setContentLayer:(CALayer *)arg1 ;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)layoutSublayers;
-(CALayer *)contentLayer;
-(FBShimmeringMaskLayer *)maskLayer;
-(void)setMaskLayer:(FBShimmeringMaskLayer *)arg1 ;
@end

