/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageLiveLocationOutgoingListener <NSObject>
@required
-(void)startedSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 expirationTime:(id)arg3;
-(void)resumedSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 messageLiveLocationId:(id)arg3 expirationTime:(id)arg4;
-(void)stoppedSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 messageLiveLocationId:(id)arg3 source:(long long)arg4;
-(void)startedSendingLocationUpdatesForPendingThreadWithOfflineThreadingId:(id)arg1 expirationTime:(id)arg2;
-(void)stoppedSendingLocationUpdatesForPendingThreadWithOfflineThreadingId:(id)arg1 source:(long long)arg2;

@end
