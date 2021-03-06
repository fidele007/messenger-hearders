/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/MNServiceControllable.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol FBProvider, FBPresenceUpdateListener;
@class MNPresenceSubscriptionService, NSString;

@interface MNPresenceSubscriptionAdapter : NSObject <MNServiceControllable, FBViewerContextClassProvidable> {

	id<FBProvider> _presenceSubscriptionServiceProvider;
	MNPresenceSubscriptionService* _presenceSubscriptionService;
	id<FBProvider> _threadLastActivityTrackerProvider;
	id<FBProvider> _typingLastActivityTrackerProvider;
	id<FBProvider> _userProviderProvider;
	id<FBProvider> _presenceUpdaterProvider;
	id<FBProvider> _presenceUpdateListenerProvider;
	id<FBPresenceUpdateListener> _presenceUpdateListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPresenceSubscriptionServiceProvider:(id)arg1 threadLastActivityTrackerProvider:(id)arg2 threadTypingActivityTrackerProvider:(id)arg3 userProviderProvider:(id)arg4 presenceUpdaterProvider:(id)arg5 ;
-(void)handleIdle;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
@end

