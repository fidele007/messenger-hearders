/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBReachabilityListener.h>
#import <FBSharedFramework/MNServiceControllable.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol MNAuthenticationManager, FBCancelable;
@class FBMForegroundJobScheduler, FBMobileConfigContextManager, FBWebRTCHandlerImpl, MNMessageSendSchedulerListeningAnnouncer, MNScoutAdapter, MNScoutMessageSendListener, MNScoutThreadMessageSubscribingListener, MNThreadMessageSubscribingAnnouncer, MNUserSettings, NSMutableArray, NSString;

@interface MNScoutService : NSObject <FBReachabilityListener, MNServiceControllable, FBViewerContextClassProvidable> {

	BOOL _connnectedToWifi;
	BOOL _isForegrounded;
	unsigned long long _dailyTaskJobBlockId;
	FBMForegroundJobScheduler* _foregroundJobScheduler;
	FBMobileConfigContextManager* _mobileConfigContextManager;
	FBWebRTCHandlerImpl* _webRTCHandlerImpl;
	id<MNAuthenticationManager> _authManager;
	MNMessageSendSchedulerListeningAnnouncer* _sendSchedulerAnnouncer;
	MNScoutAdapter* _scoutAdapter;
	MNScoutMessageSendListener* _messageSendListener;
	MNScoutThreadMessageSubscribingListener* _threadMessageSubscribingListener;
	MNThreadMessageSubscribingAnnouncer* _threadMessageSubscribingAnnouncer;
	MNUserSettings* _userSettings;
	id<FBCancelable> _continuation;
	NSMutableArray* _sources;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_queryLogSources:(BOOL)arg1 ;
-(void)handleIdle;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)stop;
-(void)registerProvider:(id)arg1 ;
-(void)start:(id)arg1 ;
-(void)didBackground;
-(void)willForeground;
@end

