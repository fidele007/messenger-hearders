/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CKAsyncLayer : CALayer {

	int _displaySentinel;
	BOOL _needsAsyncDisplayOnly;

}

@property (assign) unsigned long long displayMode; 
+(void)drawInContext:(CGContextRef)arg1 parameters:(id)arg2 ;
+(id)displayQueue;
+(void)drawAsyncLayerInContext:(CGContextRef)arg1 parameters:(id)arg2 ;
+(/*^block*/id)asyncDisplayBlockWithBounds:(CGRect)arg1 contentsScale:(double)arg2 opaque:(BOOL)arg3 backgroundColor:(CGColorRef)arg4 displaySentinel:(int*)arg5 expectedDisplaySentinelValue:(int)arg6 drawingDelegate:(id)arg7 drawParameters:(id)arg8 ;
+(id)defaultValueForKey:(id)arg1 ;
-(void)cancelAsyncDisplay;
-(void)setNeedsAsyncDisplay;
-(id)drawParameters;
-(id)willDisplayAsynchronouslyWithDrawParameters:(id)arg1 ;
-(void)didDisplayAsynchronously:(id)arg1 withDrawParameters:(id)arg2 ;
-(void)setNeedsDisplay;
-(id)name;
-(void)display;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

