/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBOpenGLFilter.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <Messenger/FBFilterCropping.h>

@class FBOpenGLProgram, NSString;

@interface FBBGRAtoYUVConverterFilter : FBOpenGLFilter <NSCopying, FBFilterCropping> {

	BOOL _flip;
	BOOL _needsConfigure;
	FBOpenGLProgram* _uvProgram;
	GLKMatrix4 _croppingContentTransform;
	GLKMatrix4 _croppingTextureTransform;
	NSString* _fullFragmentShader;
	NSString* _fullVertexShader;
	GLKMatrix4 _contentTransform;
	GLKMatrix4 _textureTransform;

}

@property (assign,nonatomic) _GLKMatrix4 contentTransform;              //@synthesize contentTransform=_contentTransform - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 textureTransform;              //@synthesize textureTransform=_textureTransform - In the implementation block
@property (nonatomic,copy) NSString * fullFragmentShader;               //@synthesize fullFragmentShader=_fullFragmentShader - In the implementation block
@property (nonatomic,copy) NSString * fullVertexShader;                 //@synthesize fullVertexShader=_fullVertexShader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(unsigned long long)inputPixelFormat;
-(NSString *)fullVertexShader;
-(NSString *)fullFragmentShader;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 time:(SCD_Struct_FB33)arg4 ;
-(void)configureProgram:(id)arg1 ;
-(_GLKMatrix4)contentTransform;
-(_GLKMatrix4)textureTransform;
-(void)setFullFragmentShader:(NSString *)arg1 ;
-(void)setFlip:(BOOL)arg1 ;
-(void)setCroppingContentTransform:(_GLKMatrix4)arg1 ;
-(void)setCroppingTextureTransform:(_GLKMatrix4)arg1 ;
-(id)fullFragmentShaderUV;
-(void)_render:(id)arg1 to:(id)arg2 program:(id)arg3 framebuffer:(unsigned)arg4 framebufferSize:(CGSize)arg5 ;
-(void)setFullVertexShader:(NSString *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)flip;
-(unsigned long long)outputPixelFormat;
@end
