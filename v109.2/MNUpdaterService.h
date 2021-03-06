/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUpgradeNotificationToastControllerListener.h>
#import <FBSharedFramework/MNServiceControllable.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol FBAutoUpdaterHandlerDelegate;
@class FBUpdater, FBUpdateHandler, UIApplication, FBAutoUpdaterTimeDelayRestartBehavior, MNRTCCallRestartBehavior, NSString;

@interface MNUpdaterService : NSObject <MNUpgradeNotificationToastControllerListener, MNServiceControllable, FBViewerContextClassProvidable> {

	FBUpdater* _updater;
	FBUpdateHandler* _updateHandler;
	id<FBAutoUpdaterHandlerDelegate> _autoupdaterDelegate;
	UIApplication* _application;
	FBAutoUpdaterTimeDelayRestartBehavior* _delayRestartBehavior;
	MNRTCCallRestartBehavior* _rtcRestartBehavior;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUpdater:(id)arg1 updateHandler:(id)arg2 autoupdaterDelegate:(id)arg3 rtcRestartBehavior:(id)arg4 application:(id)arg5 ;
-(id)_restartBehavior;
-(void)toastControllerDidPresentUpgradeAvailableToast:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleIdle;
-(void)stop;
-(void)start:(id)arg1 ;
@end

