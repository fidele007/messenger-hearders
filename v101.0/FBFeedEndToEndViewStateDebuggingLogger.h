/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface FBFeedEndToEndViewStateDebuggingLogger : NSObject {

	BOOL _applicationActive;
	BOOL _viewAppeared;
	unsigned long long _state;
	NSObject*<OS_dispatch_source> _timer;

}
+(id)loggerWithUserSession:(id)arg1 feedType:(long long)arg2 ;
-(void)feedViewStateDidUpdate:(unsigned long long)arg1 ;
-(id)init;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)_timerFired;
-(void)_cancelTimer;
-(void)viewDidAppear;
-(void)viewDidDisappear;
-(void)_updateTimer;
@end

