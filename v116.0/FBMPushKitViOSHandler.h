/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextClassProvidable.h>
#import <Messenger/FBPushKitPushHandler.h>

@class FBMAPNSPushHandler, OrcaPushRegistrar, FBAnalytics, MNMessageLocalNotificationZeroPayloadWakeupPushListeningAnnouncer, NSString;

@interface FBMPushKitViOSHandler : NSObject <FBViewerContextClassProvidable, FBPushKitPushHandler> {

	FBMAPNSPushHandler* _apnsPushHandler;
	OrcaPushRegistrar* _pushRegistrar;
	FBAnalytics* _analytics;
	MNMessageLocalNotificationZeroPayloadWakeupPushListeningAnnouncer* _zeroPayloadWakeupAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_announceAndLogZeroPayloadWakeupIfNeededForPayload:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handle:(id)arg1 ;
@end

