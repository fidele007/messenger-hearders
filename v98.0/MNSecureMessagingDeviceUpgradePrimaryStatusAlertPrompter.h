/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureMessagingDeviceInformation, FBKeyValueDataStore, OS_dispatch_queue;
@class MNSecureMessagingDeviceStatusOverrideAlertHandler, FBAnalytics, MNSecureMessagingCapabilityStore, NSObject;

@interface MNSecureMessagingDeviceUpgradePrimaryStatusAlertPrompter : NSObject {

	MNSecureMessagingDeviceStatusOverrideAlertHandler* _alertHandler;
	id<MNSecureMessagingDeviceInformation> _secureDeviceInfoDelegate;
	id<FBKeyValueDataStore> _diskStore;
	FBAnalytics* _analytics;
	MNSecureMessagingCapabilityStore* _capabilityStore;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _hasSavedFlagToDiskInThisSession;
	BOOL _userSentMessageFromThisDevice;

}
-(void)userDidSendMessageFromThisDevice;
-(void)userDidEnterInboxThreadList;
-(id)initWithOverrideAlertHandler:(id)arg1 secureDeviceInfoDelegate:(id)arg2 capabilityStore:(id)arg3 diskStore:(id)arg4 analytics:(id)arg5 queue:(id)arg6 ;
-(void)_showPrompt;
-(void)_saveFlagToDisk;
-(void)_logResponseToAnalytics:(BOOL)arg1 ;
@end
