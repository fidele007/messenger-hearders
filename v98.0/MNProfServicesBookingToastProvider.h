/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadToastProvider.h>

@protocol MNAuthenticationManager;
@class MNThreadToastProviderListenerAnnouncer, MNProfServicesBookingToastCoordinator, FBUserSession, MNToastThreadContext, MNBookingRequestsViewerContext, NSString;

@interface MNProfServicesBookingToastProvider : NSObject <MNThreadToastProvider> {

	MNThreadToastProviderListenerAnnouncer* _announcer;
	MNProfServicesBookingToastCoordinator* _toastCoordinator;
	id<MNAuthenticationManager> _authManager;
	FBUserSession* _session;
	MNToastThreadContext* _threadContext;
	MNBookingRequestsViewerContext* _bookingViewerContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)toastProviderIdentifier;
-(BOOL)isEligibleForThreadContext:(id)arg1 ;
-(id)toastForThreadContext:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 toastCoordinator:(id)arg2 authenticationManager:(id)arg3 ;
-(void)_configBookingViewerContextWithToastContext:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

