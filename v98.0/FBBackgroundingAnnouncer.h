/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNotificationCenter, FBBackgroundingListenerAnnouncer;

@interface FBBackgroundingAnnouncer : NSObject {

	NSNotificationCenter* _notificationCenter;
	FBBackgroundingListenerAnnouncer* _underlyingAnnouncer;

}
-(void)_didEnterForeground;
-(void)_didEnterBackground;
-(id)initWithNotificationCenter:(id)arg1 foregroundingNotificationName:(id)arg2 backgroundingNotificationName:(id)arg3 ;
-(void)dealloc;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

