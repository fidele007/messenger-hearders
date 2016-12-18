/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBOpenGLFilter.h>

@class FBImageFilter;

@interface FBImageRotationFilter : FBOpenGLFilter {

	FBImageFilter* _rotateFilter;
	long long _rotationAction;

}

@property (assign,nonatomic) long long rotationAction;              //@synthesize rotationAction=_rotationAction - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 time:(SCD_Struct_FB25)arg3 ;
-(void)setRotationAction:(long long)arg1 ;
-(long long)rotationAction;
-(id)init;
-(void)setParameters:(id)arg1 ;
-(unsigned long long)outputPixelFormat;
@end

