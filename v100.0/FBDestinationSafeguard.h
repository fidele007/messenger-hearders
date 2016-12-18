/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNotificationCenter, FBTimer;

@interface FBDestinationSafeguard : NSObject {

	BOOL _inBackground;
	NSNotificationCenter* _notificationCenter;
	/*^block*/id _safeguardCallback;
	double _timeout;
	FBTimer* _timer;
	BOOL _safeguardFired;

}
-(void)_safeguardFired;
-(BOOL)_safeguardRequested;
-(id)initStartedInBackground:(BOOL)arg1 ;
-(void)startSafeguardWithTimeout:(double)arg1 withSafeguardCallback:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_setupTimer;
@end

