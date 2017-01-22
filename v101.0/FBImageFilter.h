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

@class NSString;

@interface FBImageFilter : FBOpenGLFilter <NSCopying, FBFilterCropping> {

	BOOL _needsConfigure;
	GLKMatrix4 _croppingContentTransform;
	GLKMatrix4 _croppingTextureTransform;
	BOOL _flip;
	double _strength;
	NSString* _fullFragmentShader;
	NSString* _fullVertexShader;
	GLKMatrix4 _contentTransform;
	GLKMatrix4 _textureTransform;

}

@property (assign,nonatomic) BOOL flip;                                 //@synthesize flip=_flip - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 contentTransform;              //@synthesize contentTransform=_contentTransform - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 textureTransform;              //@synthesize textureTransform=_textureTransform - In the implementation block
@property (assign,nonatomic) double strength;                           //@synthesize strength=_strength - In the implementation block
@property (nonatomic,copy) NSString * fullFragmentShader;               //@synthesize fullFragmentShader=_fullFragmentShader - In the implementation block
@property (nonatomic,copy) NSString * fullVertexShader;                 //@synthesize fullVertexShader=_fullVertexShader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identityFragmentShader;
+(id)basicVertexShader;
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
-(id)generateFullFragmentShader;
-(id)fragmentShaderPrecision;
-(void)setFlip:(BOOL)arg1 ;
-(void)setCroppingContentTransform:(_GLKMatrix4)arg1 ;
-(void)setCroppingTextureTransform:(_GLKMatrix4)arg1 ;
-(void)setFullVertexShader:(NSString *)arg1 ;
-(id)generateFullVertexShader;
-(void)addContentTransform:(_GLKMatrix4)arg1 ;
-(void)addTextureTransform:(_GLKMatrix4)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)flip;
-(void)setParameters:(id)arg1 ;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(unsigned long long)outputPixelFormat;
-(id)vertexShader;
-(id)fragmentShader;
@end
