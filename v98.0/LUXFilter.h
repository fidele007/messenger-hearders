/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGLFilter.h>

@interface LUXFilter : FBGLFilter {

	int uniformLuxSaturationMultiplier;
	int uniformLuxNumHistogramBuckets;

}
-(id)prepareDerivedContext:(id)arg1 withFilterer:(id)arg2 ;
-(id)shaderFunctionIncludes;
-(void)activateWithFilterer:(id)arg1 derivedContext:(id)arg2 ;
-(void)drawWithContext:(id)arg1 ;
-(id)prepareInputsWithImageData:(unsigned*)arg1 width:(long long)arg2 height:(long long)arg3 derivedContext:(id)arg4 ;
-(id)getHSVFromColorAtIndex:(long long)arg1 inImageData:(unsigned*)arg2 ;
-(double)calculateHueVarianceForImage:(unsigned*)arg1 width:(long long)arg2 height:(long long)arg3 ;
-(id)init;
@end
