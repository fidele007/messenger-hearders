/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageLiveLocationOutgoingListener.h>
#import <Messenger/MNMessageLiveLocationIncomingListener.h>

@class MNMessageLiveLocationAnalyticsLogger, NSString;

@interface MNMessageLiveLocationUpdaterEventsLogHandler : NSObject <MNMessageLiveLocationOutgoingListener, MNMessageLiveLocationIncomingListener> {

	MNMessageLiveLocationAnalyticsLogger* _analyticsLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startedSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 expirationTime:(id)arg3 ;
-(void)resumedSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 messageLiveLocationId:(id)arg3 expirationTime:(id)arg4 ;
-(void)stoppedSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 messageLiveLocationId:(id)arg3 source:(long long)arg4 ;
-(void)startedSendingLocationUpdatesForPendingThreadWithOfflineThreadingId:(id)arg1 expirationTime:(id)arg2 ;
-(void)stoppedSendingLocationUpdatesForPendingThreadWithOfflineThreadingId:(id)arg1 source:(long long)arg2 ;
-(void)messageLiveLocationDidReceiveUpdateForThreadKey:(id)arg1 liveLocation:(id)arg2 ;
-(void)messageLiveLocationDidBecomeStaleForThreadKey:(id)arg1 messageLiveLocationId:(id)arg2 offlineThreadingId:(id)arg3 ;
-(id)init;
@end

