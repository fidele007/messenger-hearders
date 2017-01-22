/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EAGLContext, NSMutableSet, NSDictionary, NSMutableArray;

@interface IGGLProgram : NSObject {

	EAGLContext* _context;
	NSMutableSet* _dirtyUniforms;
	unsigned _program;
	NSDictionary* _attributes;
	NSDictionary* _uniforms;
	NSMutableArray* _deallocBlocks;

}

@property (nonatomic,retain) NSMutableArray * deallocBlocks;                //@synthesize deallocBlocks=_deallocBlocks - In the implementation block
@property (nonatomic,readonly) unsigned program;                            //@synthesize program=_program - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * uniforms;                //@synthesize uniforms=_uniforms - In the implementation block
-(id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2 ;
-(void)setValue:(id)arg1 forUniformName:(id)arg2 ;
-(void)flushUniforms;
-(id)initWithContext:(id)arg1 vertexShader:(id)arg2 fragmentShader:(id)arg3 ;
-(id)parseUniforms;
-(id)parseAttributes;
-(void)setTexture:(id)arg1 forUniformName:(id)arg2 ;
-(NSMutableArray *)deallocBlocks;
-(void)addGLDeallocBlock:(/*^block*/id)arg1 ;
-(int)uniformLocationForName:(id)arg1 ;
-(int)attributeLocationForName:(id)arg1 ;
-(void)setDeallocBlocks:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)use;
-(NSDictionary *)attributes;
-(void)validate;
-(NSDictionary *)uniforms;
-(unsigned)program;
@end
