/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
