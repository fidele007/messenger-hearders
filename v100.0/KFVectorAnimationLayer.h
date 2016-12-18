/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@class NSMutableArray, NSString;

@interface KFVectorAnimationLayer : CAShapeLayer {

	CGPoint _scaleToCanvas;
	CGPoint _scaleToLayer;
	NSMutableArray* _animations;
	BOOL _hasHiddenAnimation;
	unsigned long long _frameRate;
	unsigned long long _frameCount;
	NSString* _formatVersion;

}

@property (assign,nonatomic) unsigned long long frameRate;               //@synthesize frameRate=_frameRate - In the implementation block
@property (assign,nonatomic) unsigned long long frameCount;              //@synthesize frameCount=_frameCount - In the implementation block
@property (nonatomic,copy) NSString * formatVersion;                     //@synthesize formatVersion=_formatVersion - In the implementation block
-(void)_applyStrokeWidthAnimation:(id)arg1 ;
-(void)_applyScaleAnimation:(id)arg1 ;
-(void)_applyRotationAnimation:(id)arg1 ;
-(void)_applyPositionAnimation:(id)arg1 ;
-(void)_applyAnchorPointAnimation:(id)arg1 ;
-(void)_applyXPositionAnimation:(id)arg1 ;
-(void)_applyYPositionAnimation:(id)arg1 ;
-(void)_applyOpacityAnimation:(id)arg1 ;
-(void)_applyStrokeColorAnimation:(id)arg1 ;
-(void)_applyFillColorAnimation:(id)arg1 ;
-(void)_applyHiddenAnimation:(id)arg1 ;
-(void)setLifespanFromFrame:(unsigned long long)arg1 toFrom:(unsigned long long)arg2 ;
-(void)setAnimations:(id)arg1 scaleToCanvas:(CGPoint)arg2 scaleToLayer:(CGPoint)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setFrameCount:(unsigned long long)arg1 ;
-(unsigned long long)frameCount;
-(void)resetAnimations;
-(NSString *)formatVersion;
-(unsigned long long)frameRate;
-(void)setFrameRate:(unsigned long long)arg1 ;
-(void)setFormatVersion:(NSString *)arg1 ;
@end

