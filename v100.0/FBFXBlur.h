/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBFXBlur : NSObject {

	PingPongFilter* _filter;
	SaturationShader _saturationShader;
	BoxBlur1DShader _blurShader;
	PositionTexCoordQuad _quad;

}
-(void)gaussianBlurInput:(/*^block*/id)arg1 adjustSaturation:(double)arg2 blendWithColor:(FBFXPremultipliedColor)arg3 output:(/*^block*/id)arg4 ;
-(void)gaussianBlurInput:(/*^block*/id)arg1 numberOfPasses:(unsigned long long)arg2 adjustSaturation:(double)arg3 blendWithColor:(FBFXPremultipliedColor)arg4 output:(/*^block*/id)arg5 ;
-(id)initWithTargetSize:(CGSize)arg1 glContext:(id)arg2 ;
-(void)gaussianBlurImage:(id)arg1 numberOfPasses:(unsigned long long)arg2 adjustSaturation:(double)arg3 blendWithColor:(FBFXPremultipliedColor)arg4 output:(/*^block*/id)arg5 ;
-(void)motionBlurInput:(/*^block*/id)arg1 angle:(double)arg2 amount:(double)arg3 output:(/*^block*/id)arg4 ;
-(void)dealloc;
@end
