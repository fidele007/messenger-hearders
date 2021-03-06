/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMQTTTopicHandling.h>

@class FBAnalytics, FBUserSession, MNMQTTPresenceUpdateListeningAnnouncer, NSString;

@interface MNMQTTPersonSyncEventHandler : NSObject <FBViewerContextClassProvidable, MNMQTTTopicHandling> {

	FBAnalytics* _analytics;
	FBUserSession* _session;
	MNMQTTPresenceUpdateListeningAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)topicListener;
-(id)initWithAnalytics:(id)arg1 session:(id)arg2 updateAnnouncer:(id)arg3 ;
-(id)_thriftGenericPresenceListener;
-(void)didReceivePresenceEventWithThriftPayload:(id)arg1 isSpecificPresence:(BOOL)arg2 ;
@end

