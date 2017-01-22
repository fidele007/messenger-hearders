/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLiveVideoBroadcastStatusPollQueueDelegate.h>
#import <Messenger/FBReachabilityListener.h>

@class FBUserSession, NSMutableDictionary, FBLiveVideoBroadcastStatusPollQueue, FBCache, NSHashTable, NSString;

@interface FBLiveVideoBroadcastStatusUpdateManager : NSObject <FBLiveVideoBroadcastStatusPollQueueDelegate, FBReachabilityListener> {

	FBUserSession* _session;
	NSMutableDictionary* _items;
	FBLiveVideoBroadcastStatusPollQueue* _pollQueue;
	BOOL _enableDebugInfo;
	FBCache* _debugInfoVideoStatusEvents;
	NSHashTable* _transitionedVideos;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)broadcastStatusPollQueue:(id)arg1 didReceiveBroadcastStatus:(id)arg2 forVideoID:(id)arg3 ;
-(void)_subscribeToReachability;
-(void)_subscribeToLifecycleNotifications;
-(void)_unsubscribeFromReachability;
-(void)_unsubscribeFromLifecycleNotifications;
-(id)_subscribeVideoID:(id)arg1 ;
-(void)_addVideoStatusDebugEvent:(id)arg1 forVideoID:(id)arg2 loggingSource:(id)arg3 ;
-(void)_processBroadcastStatus:(id)arg1 forVideoID:(id)arg2 loggingSource:(id)arg3 ;
-(void)_pollAllVideos;
-(void)_applicationDidEnterForeground;
-(id)initWithSession:(id)arg1 enableDebugInfo:(BOOL)arg2 ;
-(void)registerVideoID:(id)arg1 broadcastStatus:(id)arg2 updateCallback:(/*^block*/id)arg3 ;
-(void)unregisterVideoID:(id)arg1 ;
-(id)lastBroadcastStatusForVideoID:(id)arg1 ;
-(id)_buildDebugInfo;
-(void)dealloc;
@end
