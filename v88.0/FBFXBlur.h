/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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

