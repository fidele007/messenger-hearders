/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNotificationCenter, FBBackgroundingListenerAnnouncer;

@interface FBBackgroundingAnnouncer : NSObject {

	NSNotificationCenter* _notificationCenter;
	FBBackgroundingListenerAnnouncer* _underlyingAnnouncer;

}
-(void)_didEnterForeground;
-(id)initWithNotificationCenter:(id)arg1 foregroundingNotificationName:(id)arg2 backgroundingNotificationName:(id)arg3 ;
-(void)_didEnterBackground;
-(void)dealloc;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

