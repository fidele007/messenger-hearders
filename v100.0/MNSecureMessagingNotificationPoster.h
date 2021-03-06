/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureMessagingBadgeCounterListening.h>
#import <Messenger/MNSecureMessagingRegisteredDeviceStatusChangeListening.h>

@protocol MNGlobalMuteStatusReading, FBClock;
@class MNLocalNotificationController, NSString;

@interface MNSecureMessagingNotificationPoster : NSObject <MNSecureMessagingBadgeCounterListening, MNSecureMessagingRegisteredDeviceStatusChangeListening> {

	MNLocalNotificationController* _localNotificationController;
	id<MNGlobalMuteStatusReading> _globalMuteStatusReader;
	id<FBClock> _clock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registeredDeviceStatusDidChangeTo:(long long)arg1 from:(long long)arg2 ;
-(id)initWithLocalNotificationController:(id)arg1 globalMuteStatusReader:(id)arg2 clock:(id)arg3 ;
-(void)didReceiveMessageForBadgedThread:(id)arg1 ;
@end

