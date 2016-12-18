/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary, GLProgram;

@interface MQDrawQuad : NSObject {

	unsigned vertexBufferObject;
	unsigned indexBufferObject;
	unsigned positionIndex;
	unsigned textureCoordinateIndex;
	NSMutableDictionary* _uniformsFloat;
	NSMutableDictionary* _uniformsInt;
	NSMutableDictionary* _uniformsFloat2;
	NSMutableDictionary* _uniformsFloat3;
	NSMutableDictionary* _uniformsFloat4;
	NSMutableDictionary* _uniformsMatrix4;
	GLProgram* _program;

}

@property (readonly) GLProgram * program;              //@synthesize program=_program - In the implementation block
-(id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2 ;
-(void)setUniforms;
-(void)setUniformWithId:(int)arg1 float:(float)arg2 ;
-(void)setUniformWithId:(int)arg1 int:(int)arg2 ;
-(void)setUniformWithId:(int)arg1 x:(float)arg2 y:(float)arg3 ;
-(void)setUniformWithId:(int)arg1 vector3:(SCNVector3)arg2 ;
-(void)setUniformWithId:(int)arg1 vector4:(SCNVector4)arg2 ;
-(void)setUniformWithId:(int)arg1 matrix:(SCNMatrix4)arg2 ;
-(void)dealloc;
-(id)init;
-(void)draw;
-(GLProgram *)program;
@end

