/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCHandlerListener.h>
#import <Messenger/FBAutoUpdaterAutomaticRestartBehavior.h>
#import <FBSharedFramework/FBClassProvidable.h>

@protocol FBWebRTCHandler;
@class FBAutoUpdaterAutomaticRestartBehaviorListeningAnnouncer, NSString;

@interface MNRTCCallRestartBehavior : NSObject <FBWebRTCHandlerListener, FBAutoUpdaterAutomaticRestartBehavior, FBClassProvidable> {

	id<FBWebRTCHandler> _handler;
	FBAutoUpdaterAutomaticRestartBehaviorListeningAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRTCHandler:(id)arg1 ;
-(BOOL)autoUpdaterShouldAutomaticallyRestart;
-(void)webRTCHandlerDidBeginCall;
-(void)webRTCHandlerDidEndCall;
-(void)webRTCHandlerDidStartCameraCapture;
-(void)webRTCHandlerDidEndCameraCapture;
-(void)addRestartBehaviorListener:(id)arg1 ;
-(void)removeRestartBehaviorListener:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

