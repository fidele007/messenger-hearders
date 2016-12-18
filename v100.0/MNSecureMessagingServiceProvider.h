/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureThreadServiceControlling, MNSecureMessageSending, MNSecureImageRequesting, MNSecureMessagingBadgeCounting, MNSecureMessagingDeviceInformation, MNSecureMessagingRegisteredDeviceStatusUpdateRunning, MNSecureMessagingCapabilityManualOverriding, MNSecureMessagingServiceManipulating, MNEndToEndEncrypting;
@interface MNSecureMessagingServiceProvider : NSObject {

	id<MNSecureThreadServiceControlling> _secureThreadService;
	id<MNSecureMessageSending> _secureMessageSender;
	id<MNSecureImageRequesting> _secureImageRequester;
	id<MNSecureMessagingBadgeCounting> _secureBadgeCounter;
	id<MNSecureMessagingDeviceInformation> _secureDeviceInformation;
	id<MNSecureMessagingRegisteredDeviceStatusUpdateRunning> _secureDeviceStatusUpdateRunner;
	id<MNSecureMessagingCapabilityManualOverriding> _capabilityOverrider;
	id<MNSecureMessagingServiceManipulating> _serviceManipulator;
	id<MNEndToEndEncrypting> _endToEndEncrypter;

}
-(id)initForEmptyService;
-(id)serviceManipulator;
-(id)secureDeviceInformation;
-(id)secureBadgeCounter;
-(id)secureThreadService;
-(id)secureMessageSender;
-(id)secureDeviceStatusUpdateRunner;
-(id)initForSecureServiceWithOmnistore:(id)arg1 userSession:(id)arg2 versionedFileHandler:(id)arg3 authManager:(id)arg4 badgeCountService:(id)arg5 localNotificationController:(id)arg6 backgroundAnnouncer:(id)arg7 analytics:(id)arg8 ephemeralMessageSystemController:(id)arg9 globalMuteStatusReader:(id)arg10 mobileConfigManager:(id)arg11 currentUserIsIsMinor:(BOOL)arg12 clock:(id)arg13 migrationRunner:(id)arg14 appGroup:(id)arg15 queue:(id)arg16 ;
-(id)secureImageRequester;
-(id)secureCapabilityManualOverrider;
-(id)endToEndEncrypter;
@end
