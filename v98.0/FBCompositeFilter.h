/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBOpenGLFilter.h>
#import <Messenger/FBOverlayFilter.h>

@class NSMutableArray;

@interface FBCompositeFilter : FBOpenGLFilter <FBOverlayFilter> {

	NSMutableArray* _filters;

}
-(void)removeFilterAtIndex:(unsigned long long)arg1 ;
-(void)render:(id)arg1 to:(id)arg2 ;
-(void)sendFilterCommand:(id)arg1 toFilterAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)inputPixelFormat;
-(void)processCommand:(id)arg1 ;
-(void)setFilterContext:(id)arg1 ;
-(void)addFilter:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithFilters:(id)arg1 ;
-(id)init;
-(void)setParameters:(id)arg1 ;
-(unsigned long long)outputPixelFormat;
@end
