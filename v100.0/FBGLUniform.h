/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSValue;

@interface FBGLUniform : NSObject {

	int _location;
	int _size;
	unsigned _type;
	int _textureUnit;
	NSString* _name;
	NSValue* _value;
	id _texture;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int location;                      //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) int size;                          //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSValue * value;                     //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) id texture;                          //@synthesize texture=_texture - In the implementation block
@property (assign,nonatomic) int textureUnit;                     //@synthesize textureUnit=_textureUnit - In the implementation block
-(int)textureUnit;
-(id)initWithName:(id)arg1 location:(int)arg2 size:(int)arg3 type:(unsigned)arg4 ;
-(void)setTextureUnit:(int)arg1 ;
-(int)size;
-(NSString *)name;
-(void)flush;
-(unsigned)type;
-(NSValue *)value;
-(void)setValue:(NSValue *)arg1 ;
-(int)location;
-(id)texture;
-(void)setTexture:(id)arg1 ;
@end

