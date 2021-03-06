/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBOpenGLFilter.h>
#import <Messenger/FBOverlayFilter.h>

@class NSArray, FBOpticFlow, FBObjectTracking, UILabel;

@interface FBAMLFilter : FBOpenGLFilter <FBOverlayFilter> {

	NSArray* _emitters;
	NSArray* _particleEmitterConfigs;
	FBPlatformInputs* _inputs;
	FBOpticFlow* _opticFlow;
	FBObjectTracking* _tracker;
	BOOL _opticalFlowEnabled;
	BOOL _regionTrackingEnabled;
	CGSize _cameraFrameSize;
	UILabel* _debugOutputLabel;

}
-(void)setParticleEmitterConfigs:(id)arg1 ;
-(void)setup:(id)arg1 program:(id)arg2 ;
-(void)showDebugOutput:(id)arg1 ;
-(unsigned long long)inputPixelFormat;
-(id)fullVertexShader;
-(id)fullFragmentShader;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 time:(SCD_Struct_FB25)arg4 ;
-(void)processCommand:(id)arg1 ;
-(void)dealloc;
-(void)setParameters:(id)arg1 ;
-(unsigned long long)outputPixelFormat;
@end

