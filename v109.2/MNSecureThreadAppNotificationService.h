/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/MNSecureThreadMessageReceivedListening.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>
#import <FBSharedFramework/MNServiceControllable.h>

@protocol MNInAppNotificationManaging, MNSecureThreadServiceControlling, MNAuthenticationManager, MNSecureThreadMessageReceivedListening;
@class FBLazyCreator, NSString;

@interface MNSecureThreadAppNotificationService : NSObject <MNSecureThreadMessageReceivedListening, FBViewerContextClassProvidable, MNServiceControllable> {

	id<MNInAppNotificationManaging> _notificationManger;
	id<MNSecureThreadServiceControlling> _secureMessageService;
	id<MNAuthenticationManager> _authManager;
	id<MNSecureThreadMessageReceivedListening> _dispatchedMessageReceivedListeningSelf;
	FBLazyCreator* _threadStatusManagerCreator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNotificationManager:(id)arg1 secureMessageService:(id)arg2 authManager:(id)arg3 threadStatusManagerCreator:(id)arg4 ;
-(void)didReceiveSecureMessage:(id)arg1 onSecureThread:(id)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleIdle;
-(void)stop;
-(void)start:(id)arg1 ;
@end

