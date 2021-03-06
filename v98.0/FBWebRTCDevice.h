/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCNetworkAvailabilityDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBWebRTCHandler;
@class FBWebRTCDeviceListenerAnnouncer, FBWebRTCNetworkAvailability, FBExperimentManager, NSString;

@interface FBWebRTCDevice : NSObject <FBWebRTCNetworkAvailabilityDelegate, FBViewerContextClassProvidable> {

	FBWebRTCDeviceListenerAnnouncer* _listenerAnnouncer;
	BOOL _canMakeCall;
	BOOL _voipCallInProgress;
	id<FBWebRTCHandler> _webrtcHandler;
	FBWebRTCNetworkAvailability* _networkAvailability;
	FBExperimentManager* _experimentManager;

}

@property (nonatomic,retain) id<FBWebRTCHandler> webrtcHandler;                              //@synthesize webrtcHandler=_webrtcHandler - In the implementation block
@property (nonatomic,retain) FBWebRTCNetworkAvailability * networkAvailability;              //@synthesize networkAvailability=_networkAvailability - In the implementation block
@property (nonatomic,retain) FBExperimentManager * experimentManager;                        //@synthesize experimentManager=_experimentManager - In the implementation block
@property (assign,nonatomic) BOOL voipCallInProgress;                                        //@synthesize voipCallInProgress=_voipCallInProgress - In the implementation block
@property (nonatomic,readonly) id<FBWebRTCCapabilities> callCapabilities; 
@property (nonatomic,readonly) BOOL canMakeOutboundCall; 
@property (nonatomic,readonly) BOOL cameraInUse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)callForbiddenReasonTitleForUserName:(id)arg1 callAbortReasonId:(id)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBExperimentManager *)experimentManager;
-(id<FBWebRTCCapabilities>)callCapabilities;
-(BOOL)canMakeOutboundCall;
-(BOOL)voipCallInProgress;
-(BOOL)cameraInUse;
-(void)voipCallDidStart;
-(void)voipCallDidEnd;
-(void)cameraCaptureDidStart;
-(void)cameraCaptureDidStop;
-(id)callForbiddenReasonId;
-(id)callForbiddenReason;
-(id)callForbiddenReasonTitleForUserName:(id)arg1 ;
-(void)setExperimentManager:(FBExperimentManager *)arg1 ;
-(void)_updateCanMakeCall;
-(id)initWithWebRTCHandler:(id)arg1 networkAvailability:(id)arg2 experimentManager:(id)arg3 ;
-(void)setVoipCallInProgress:(BOOL)arg1 ;
-(void)networkAvailabilityChanged:(id)arg1 ;
-(id<FBWebRTCHandler>)webrtcHandler;
-(void)setWebrtcHandler:(id<FBWebRTCHandler>)arg1 ;
-(void)dealloc;
-(FBWebRTCNetworkAvailability *)networkAvailability;
-(void)setNetworkAvailability:(FBWebRTCNetworkAvailability *)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

