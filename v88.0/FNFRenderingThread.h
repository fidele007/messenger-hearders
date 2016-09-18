/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
+(id)renderingThread;
-(void)_addDisplayLinkInternal:(id)arg1 ;
-(void)addDisplayLink:(id)arg1 ;
-(NSRunLoop *)runLoop;
-(void)dealloc;
-(id)init;
-(double)priority;
-(void)setPriority:(double)arg1 ;
-(void)main;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
@end

