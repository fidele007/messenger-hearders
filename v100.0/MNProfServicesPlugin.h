/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPlugin.h>

@protocol MNPluginServices, MNAuthenticationManager;
@class MNThreadToastCoordinator, MNProfServicesBookingToastProvider, MNProfServicesBookingToastCoordinator;

@interface MNProfServicesPlugin : MNPlugin {

	id<MNPluginServices> _services;
	MNThreadToastCoordinator* _threadToastCoordinator;
	id<MNAuthenticationManager> _authManager;
	MNProfServicesBookingToastProvider* _profServicesToastProvider;
	MNProfServicesBookingToastCoordinator* _toastCoordinator;

}

@property (nonatomic,readonly) MNProfServicesBookingToastProvider * profServicesToastProvider;              //@synthesize profServicesToastProvider=_profServicesToastProvider - In the implementation block
@property (nonatomic,readonly) MNProfServicesBookingToastCoordinator * toastCoordinator;                    //@synthesize toastCoordinator=_toastCoordinator - In the implementation block
-(void)startWithServices:(id)arg1 session:(id)arg2 ;
-(id)initWithThreadToastCoordinator:(id)arg1 authenticationManager:(id)arg2 ;
-(id)navigationPluginService;
-(MNProfServicesBookingToastProvider *)profServicesToastProvider;
-(MNProfServicesBookingToastCoordinator *)toastCoordinator;
-(void)stop;
@end

