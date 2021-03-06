/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFXEffect.h>

@interface FBFXPixellateEffect : FBFXEffect {

	FBFXPixellateEffectShader _shader;
	double _blockSize;
	CGSize _imageSize;

}

@property (assign,nonatomic) double blockSize;              //@synthesize blockSize=_blockSize - In the implementation block
@property (assign,nonatomic) CGSize imageSize;              //@synthesize imageSize=_imageSize - In the implementation block
-(BOOL)requiresNoTexturePadding;
-(BOOL)supportsEdgeAntialiasing;
-(void)renderWithRect:(CGRect)arg1 transform:(tmat4x4<float>)arg2 texture:(unsigned)arg3 texCoordExtent:(TexCoordExtent)arg4 alpha:(float)arg5 ;
-(CGSize)imageSize;
-(void)teardown;
-(void)setImageSize:(CGSize)arg1 ;
-(double)blockSize;
-(void)setBlockSize:(double)arg1 ;
@end

