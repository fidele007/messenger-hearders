/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSThread.h>

@class NSLock, NSRunLoop;

@interface FNFRenderingThread : NSThread {

	NSLock* _runLoopStopLock;
	NSRunLoop* _runLoop;
	double _priority;

}

@property (nonatomic,readonly) NSRunLoop * runLoop;              //@synthesize runLoop=_runLoop - In the implementation block
@property (assign,nonatomic) double priority;                    //@synthesize priority=_priority - In the implementation block
+(id)renderingThreadAllowingAppInactivePlayback:(BOOL)arg1 ;
-(void)addDisplayLink:(id)arg1 ;
-(id)initAllowingAppInactivePlayback:(BOOL)arg1 ;
-(void)_addDisplayLinkInternal:(id)arg1 ;
-(NSRunLoop *)runLoop;
-(void)dealloc;
-(double)priority;
-(void)setPriority:(double)arg1 ;
-(void)main;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
@end

