/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBDeviceOrientationSensorDelegate.h>

@protocol FBOrientationStateDelegate, FBRotatable;
@class FBDeviceOrientationSensor, FBInterpolatedValue, NSString;

@interface FBOrientationState : NSObject <FBDeviceOrientationSensorDelegate> {

	id<FBOrientationStateDelegate> _delegate;
	id<FBRotatable> _rotatable;
	FBDeviceOrientationSensor* _sensor;
	long long _interfaceOrientation;
	long long _previousInterfaceOrientation;
	long long _lastSupportedDeviceOrientation;
	double _orientationTransitionProgress;
	FBInterpolatedValue* _orientationRotationAngle;
	SCD_Struct_FB99 _preferredAnimationConfiguration;

}

@property (assign,nonatomic,__weak) id<FBOrientationStateDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBRotatable> rotatable;                                         //@synthesize rotatable=_rotatable - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                                           //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB94 preferredAnimationConfiguration;                          //@synthesize preferredAnimationConfiguration=_preferredAnimationConfiguration - In the implementation block
@property (nonatomic,readonly) long long previousInterfaceOrientation;                                 //@synthesize previousInterfaceOrientation=_previousInterfaceOrientation - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientationForCurrentDeviceOrientation; 
@property (nonatomic,readonly) BOOL isAnimatingOrientationRotation; 
@property (nonatomic,readonly) double orientationTransitionProgress;                                   //@synthesize orientationTransitionProgress=_orientationTransitionProgress - In the implementation block
@property (nonatomic,readonly) double currentRotation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)currentRotation;
-(id)initWithDelegate:(id)arg1 rotatable:(id)arg2 refreshImmediately:(BOOL)arg3 currentOrientation:(BOOL)arg4 ;
-(void)setPreferredAnimationConfiguration:(SCD_Struct_FB94)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 animationConfig:(SCD_Struct_FB94)arg2 ;
-(double)rotationForInterfaceOrientation:(long long)arg1 ;
-(long long)_interfaceOrientationForDeviceOrientation:(long long)arg1 ;
-(void)setRotatable:(id<FBRotatable>)arg1 ;
-(void)stopOrientationAnimation;
-(BOOL)isAnimatingOrientationRotation;
-(long long)interfaceOrientationForCurrentDeviceOrientation;
-(double)orientationTransitionProgress;
-(BOOL)_shouldBlockChangeToInterfaceOrientation:(long long)arg1 ;
-(void)_notifyDelegateOfOrientationChange;
-(id<FBRotatable>)rotatable;
-(void)_willBeginRotationToOrientation:(long long)arg1 fromOrientation:(long long)arg2 animationConfig:(SCD_Struct_FB94)arg3 ;
-(id)_orientationTransitionAnimationWithConfig:(SCD_Struct_FB94)arg1 ;
-(void)_didFinishRotationToOrientation:(long long)arg1 fromOrientation:(long long)arg2 ;
-(void)_updateForOrientationTransitionProgress:(double)arg1 ;
-(void)_updateStatusBarOrientation;
-(BOOL)_supportsDeviceOrientation:(long long)arg1 ;
-(void)_updateRotatableForOrientationState:(id)arg1 ;
-(SCD_Struct_FB94)preferredAnimationConfiguration;
-(void)setDelegate:(id<FBOrientationStateDelegate>)arg1 ;
-(void)dealloc;
-(id<FBOrientationStateDelegate>)delegate;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)reset;
-(void)deviceOrientationDidChange:(long long)arg1 ;
-(void)refresh;
-(long long)previousInterfaceOrientation;
@end

