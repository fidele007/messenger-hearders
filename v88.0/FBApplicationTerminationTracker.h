/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBCrashCounter, FBExceptionHandler, FBAppDefaults;

@interface FBApplicationTerminationTracker : NSObject {

	double _minStartupDuration;
	FBCrashCounter* _crashCounter;
	FBExceptionHandler* _exceptionHandler;
	FBAppDefaults* _appDefaults;

}
-(void)_didEnterBackground;
-(void)_willEnterForeground;
-(id)initWithMinStartupDuration:(double)arg1 exceptionHandler:(id)arg2 appDefaults:(id)arg3 ;
-(void)_willTerminate;
-(id)initWithMinStartupDuration:(double)arg1 exceptionHandler:(id)arg2 ;
-(void)startupBegan;
-(void)startupCompleted;
-(void)dealloc;
-(void)_setApplicationState:(int)arg1 ;
@end

