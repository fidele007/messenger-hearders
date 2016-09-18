/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMQTTPresenceSubscriptionListener;
@class NSNotificationCenter;

@interface MNMQTTPresenceSubscriptionMonitor : NSObject {

	NSNotificationCenter* _notificationCenter;
	long long _applicationState;
	long long _mqttState;
	id<MNMQTTPresenceSubscriptionListener> _listener;

}

@property (assign,nonatomic,__weak) id<MNMQTTPresenceSubscriptionListener> listener;              //@synthesize listener=_listener - In the implementation block
-(id)initWithApplication:(id)arg1 notificationCenter:(id)arg2 ;
-(void)_onApplicationBackground;
-(void)_beginMonitoringNotifications;
-(void)_onMQTTConnectionStatusChange:(id)arg1 ;
-(void)_onApplicationActive;
-(void)_checkStatusAndNotifyListenerAfterMutation:(/*^block*/id)arg1 ;
-(BOOL)isSubscribedToPresenceUpdates;
-(void)dealloc;
-(id<MNMQTTPresenceSubscriptionListener>)listener;
-(void)setListener:(id<MNMQTTPresenceSubscriptionListener>)arg1 ;
@end

