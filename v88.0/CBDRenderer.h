/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class CBDEye;

@interface CBDRenderer : NSObject {

	MagnetSensor* _magnetSensor;
	HeadTracker* _headTracker;
	HeadTransform* _headTransform;
	HeadMountedDisplay* _headMountedDisplay;
	Eye* _monocularEye;
	Eye* _leftEye;
	Eye* _rightEye;
	DistortionRenderer* _distortionRenderer;
	float _distortionCorrectionScale;
	float _zNear;
	float _zFar;
	BOOL _projectionChanged;
	BOOL _frameParamentersReady;
	/*function pointer*/void* _errorHandler;
	/*^block*/id _triggerPressedHandler;
	BOOL _paused;
	CBDEye* _leftEyeWrapper;
	CBDEye* _rightEyeWrapper;

}

@property (nonatomic,retain) CBDEye * leftEyeWrapper;                                //@synthesize leftEyeWrapper=_leftEyeWrapper - In the implementation block
@property (nonatomic,retain) CBDEye * rightEyeWrapper;                               //@synthesize rightEyeWrapper=_rightEyeWrapper - In the implementation block
@property (assign,nonatomic) BOOL vignetteEnabled; 
@property (assign,nonatomic) BOOL chromaticAberrationCorrectionEnabled; 
@property (assign,nonatomic) BOOL restoreGLStateEnabled; 
@property (assign,nonatomic) BOOL neckModelEnabled; 
@property (assign,nonatomic) BOOL paused;                                            //@synthesize paused=_paused - In the implementation block
-(void)setCardboardParameters:(id)arg1 ;
-(void)beforeDrawFrameWithBlock:(/*^block*/id)arg1 ;
-(void)afterDrawFrame;
-(void)setLeftEyeWrapper:(CBDEye *)arg1 ;
-(void)setRightEyeWrapper:(CBDEye *)arg1 ;
-(void)triggerPressed:(id)arg1 ;
-(void)calculateFrameParametersWithHeadTransform:(HeadTransform*)arg1 leftEye:(Eye*)arg2 rightEye:(Eye*)arg3 monocularEye:(Eye*)arg4 ;
-(void)drawFrameWithHeadTransform:(HeadTransform*)arg1 leftEye:(Eye*)arg2 rightEye:(Eye*)arg3 renderer:(/*^block*/id)arg4 ;
-(void)finishFrameWithViewPort:(Viewport*)arg1 ;
-(void)updateFovsWithLeftEyeFov:(FieldOfView*)arg1 rightEyeFov:(FieldOfView*)arg2 ;
-(float)virtualEyeToScreenDistance;
-(BOOL)vignetteEnabled;
-(void)setVignetteEnabled:(BOOL)arg1 ;
-(BOOL)chromaticAberrationCorrectionEnabled;
-(void)setChromaticAberrationCorrectionEnabled:(BOOL)arg1 ;
-(BOOL)restoreGLStateEnabled;
-(void)setRestoreGLStateEnabled:(BOOL)arg1 ;
-(BOOL)neckModelEnabled;
-(void)setNeckModelEnabled:(BOOL)arg1 ;
-(void)setTriggerPressedHandler:(/*^block*/id)arg1 ;
-(CBDEye *)leftEyeWrapper;
-(CBDEye *)rightEyeWrapper;
-(void)dealloc;
-(id)init;
-(void)update;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)paused;
-(void)setErrorHandler:(/*function pointer*/void*)arg1 ;
-(void)orientationDidChange:(id)arg1 ;
@end

