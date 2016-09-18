/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphMessageSendHandlerTracking.h>

@protocol OS_dispatch_queue, FBGraphMessageSendRequestRunnerDelegate, FBGraphMessageSendRequestBatchingDelegate, MNAuthenticationManager;
@class NSObject, FBReachabilityAnnouncer, FBUserSession, FBAnalytics, NSMapTable, NSString;

@interface FBGraphMessageSendRequestRunner : NSObject <FBGraphMessageSendHandlerTracking> {

	NSObject*<OS_dispatch_queue> _queue;
	id<FBGraphMessageSendRequestRunnerDelegate> _runnerDelegate;
	id<FBGraphMessageSendRequestBatchingDelegate> _batchingDelegate;
	FBReachabilityAnnouncer* _reachabilityAnnoucer;
	FBUserSession* _session;
	id<MNAuthenticationManager> _authManager;
	FBAnalytics* _analytics;
	NSMapTable* _outstandingRequestsToLoggerMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithQueue:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 authManager:(id)arg2 analytics:(id)arg3 reachabilityAnnouncer:(id)arg4 runnerDelegate:(id)arg5 batchingDelegate:(id)arg6 ;
-(id)sendMessage:(id)arg1 listener:(id)arg2 ;
-(id)_sendMessage:(id)arg1 logger:(id)arg2 listener:(id)arg3 ;
-(void)stopTrackingRequest:(id)arg1 ;
-(void)stop;
@end
