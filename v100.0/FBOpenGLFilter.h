/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFilter.h>

@class FBGLContext, NSBundle;

@interface FBOpenGLFilter : FBFilter {

	FBGLContext* _context;
	NSBundle* _assetBundle;

}

@property (nonatomic,retain) NSBundle * assetBundle;              //@synthesize assetBundle=_assetBundle - In the implementation block
-(unsigned long long)inputPixelFormat;
-(id)fullVertexShader;
-(id)fullFragmentShader;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 time:(SCD_Struct_FB25)arg4 ;
-(void)render:(id)arg1 to:(id)arg2 time:(SCD_Struct_FB25)arg3 ;
-(id)shaderConstsForSplineSamplers;
-(id)textureFromPath:(id)arg1 ;
-(id)textureWithContentsOfData:(id)arg1 ;
-(id)programForContext:(id)arg1 ;
-(NSBundle *)assetBundle;
-(void)setAssetBundle:(NSBundle *)arg1 ;
-(id)init;
-(unsigned long long)outputPixelFormat;
-(id)textureNamed:(id)arg1 ;
-(id)samplers;
@end

