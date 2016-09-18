/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBOpenGLFilter.h>

@class FBOpenGLFilter;

@interface FBSplitFilter : FBOpenGLFilter {

	double _dividerXPercentage;
	FBOpenGLFilter* _leftFilter;
	FBOpenGLFilter* _rightFilter;
	int _inputPixelFormat;
	GLKMatrix4 _contentTransform;
	GLKMatrix4 _textureTransform;

}

@property (nonatomic,retain) FBOpenGLFilter * leftFilter;               //@synthesize leftFilter=_leftFilter - In the implementation block
@property (nonatomic,retain) FBOpenGLFilter * rightFilter;              //@synthesize rightFilter=_rightFilter - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 contentTransform;              //@synthesize contentTransform=_contentTransform - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 textureTransform;              //@synthesize textureTransform=_textureTransform - In the implementation block
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(void)render:(id)arg1 to:(id)arg2 ;
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(void)processCommand:(id)arg1 ;
-(_GLKMatrix4)textureTransform;
-(_GLKMatrix4)contentTransform;
-(int)inputPixelFormat;
-(void)setInputPixelFormat:(int)arg1 ;
-(FBOpenGLFilter *)leftFilter;
-(void)setLeftFilter:(FBOpenGLFilter *)arg1 ;
-(FBOpenGLFilter *)rightFilter;
-(void)setRightFilter:(FBOpenGLFilter *)arg1 ;
-(id)initWithLeftFilter:(id)arg1 rightFilter:(id)arg2 dividerXPercentage:(double)arg3 ;
@end
