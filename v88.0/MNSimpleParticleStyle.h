/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNParticleStyle.h>

@protocol MNDoubleSupplier;
@class NSArray, NSString;

@interface MNSimpleParticleStyle : NSObject <MNParticleStyle> {

	NSArray* _images;
	BOOL _isVelocityYTerminal;
	id<MNDoubleSupplier> _initialXSupplier;
	id<MNDoubleSupplier> _velocityXSupplier;
	id<MNDoubleSupplier> _velocityYSupplier;
	id<MNDoubleSupplier> _gravitySupplier;
	id<MNDoubleSupplier> _rotationSupplier;
	id<MNDoubleSupplier> _rotationSpeedSupplier;
	id<MNDoubleSupplier> _scaleSupplier;
	id<MNDoubleSupplier> _animationProgressStartSupplier;
	double _animationDuration;
	double _delayUntilNextEvent;

}

@property (nonatomic,retain) id<MNDoubleSupplier> initialXSupplier;                            //@synthesize initialXSupplier=_initialXSupplier - In the implementation block
@property (nonatomic,retain) id<MNDoubleSupplier> velocityXSupplier;                           //@synthesize velocityXSupplier=_velocityXSupplier - In the implementation block
@property (nonatomic,retain) id<MNDoubleSupplier> velocityYSupplier;                           //@synthesize velocityYSupplier=_velocityYSupplier - In the implementation block
@property (assign,nonatomic) BOOL isVelocityYTerminal;                                         //@synthesize isVelocityYTerminal=_isVelocityYTerminal - In the implementation block
@property (nonatomic,retain) id<MNDoubleSupplier> gravitySupplier;                             //@synthesize gravitySupplier=_gravitySupplier - In the implementation block
@property (nonatomic,retain) id<MNDoubleSupplier> rotationSupplier;                            //@synthesize rotationSupplier=_rotationSupplier - In the implementation block
@property (nonatomic,retain) id<MNDoubleSupplier> rotationSpeedSupplier;                       //@synthesize rotationSpeedSupplier=_rotationSpeedSupplier - In the implementation block
@property (nonatomic,retain) id<MNDoubleSupplier> scaleSupplier;                               //@synthesize scaleSupplier=_scaleSupplier - In the implementation block
@property (nonatomic,retain) id<MNDoubleSupplier> animationProgressStartSupplier;              //@synthesize animationProgressStartSupplier=_animationProgressStartSupplier - In the implementation block
@property (assign,nonatomic) double animationDuration;                                         //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) double delayUntilNextEvent;                                       //@synthesize delayUntilNextEvent=_delayUntilNextEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInitialXSupplier:(id<MNDoubleSupplier>)arg1 ;
-(void)setVelocityYSupplier:(id<MNDoubleSupplier>)arg1 ;
-(void)setGravitySupplier:(id<MNDoubleSupplier>)arg1 ;
-(void)setRotationSupplier:(id<MNDoubleSupplier>)arg1 ;
-(void)setScaleSupplier:(id<MNDoubleSupplier>)arg1 ;
-(void)setDelayUntilNextEvent:(double)arg1 ;
-(void)setVelocityXSupplier:(id<MNDoubleSupplier>)arg1 ;
-(void)setAnimationProgressStartSupplier:(id<MNDoubleSupplier>)arg1 ;
-(void)setRotationSpeedSupplier:(id<MNDoubleSupplier>)arg1 ;
-(void)setIsVelocityYTerminal:(BOOL)arg1 ;
-(double)delayUntilNextEvent;
-(id)imageForAnimationProgress:(float)arg1 ;
-(float)generateInitialX;
-(float)generateVelocityX;
-(float)generateVelocityY;
-(BOOL)isVelocityYTerminal;
-(float)generateGravity;
-(float)generateRotation;
-(float)generateRotationSpeed;
-(float)generateScale;
-(float)generateAnimationProgressStart;
-(id<MNDoubleSupplier>)initialXSupplier;
-(id<MNDoubleSupplier>)velocityXSupplier;
-(id<MNDoubleSupplier>)velocityYSupplier;
-(id<MNDoubleSupplier>)gravitySupplier;
-(id<MNDoubleSupplier>)rotationSupplier;
-(id<MNDoubleSupplier>)rotationSpeedSupplier;
-(id<MNDoubleSupplier>)scaleSupplier;
-(id<MNDoubleSupplier>)animationProgressStartSupplier;
-(void)setAnimationDuration:(double)arg1 ;
-(int)width;
-(int)height;
-(double)animationDuration;
-(id)initWithImages:(id)arg1 ;
@end

