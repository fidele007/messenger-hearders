/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBOpenGLFilter.h>

@class NSString;

@interface FBCPUFilter : FBOpenGLFilter {

	NSString* _fullVertexShader;
	NSString* _fullFragmentShader;
	/*^block*/id _createTransformedBufferBlock;

}
-(unsigned long long)inputPixelFormat;
-(id)fullVertexShader;
-(id)fullFragmentShader;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)initWithCreateTransformedBufferBlock:(/*^block*/id)arg1 ;
-(BOOL)isIdentityFilter;
-(id)generateFullVertexShader;
-(id)generateFullFragmentShader;
-(id)init;
-(unsigned long long)outputPixelFormat;
-(id)vertexShader;
-(id)fragmentShader;
@end

