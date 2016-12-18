/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBWebrtcAutomationStartRPCRequest, FBWebrtcAutomationEndRPCRequest, FBWebrtcAutomationStartCallRequest, FBWebrtcAutomationEndCallRequest, FBWebrtcAutomationAcceptCallRequest, FBWebrtcAutomationToggleSpeakerPhoneRequest, FBWebrtcAutomationVolumeUpRequest, FBWebrtcAutomationVolumeDownRequest, FBWebrtcAutomationEnableVideoRequest, FBWebrtcAutomationDisableVideoRequest, FBWebrtcAutomationHardwareOptionsRequest, FBWebrtcAutomationRecordAudioRequest, FBWebrtcAutomationRecordVideoRequest, FBWebrtcAutomationRecordRawVideoRequest, FBWebrtcAutomationRecordSelfVideoRequest, FBWebrtcAutomationRecordSelfRawVideoRequest, FBWebrtcAutomationLoadSelfRawVideoRequest, FBWebrtcAutomationLoopVideoPlaybackRequest, NSString;

@interface FBWebrtcAutomationRequestPayload : NSObject <TBase, NSCoding> {

	int __requestType;
	int __requestId;
	FBWebrtcAutomationStartRPCRequest* __startRPCRequest;
	FBWebrtcAutomationEndRPCRequest* __endRPCRequest;
	FBWebrtcAutomationStartCallRequest* __startCallRequest;
	FBWebrtcAutomationEndCallRequest* __endCallRequest;
	FBWebrtcAutomationAcceptCallRequest* __acceptCallRequest;
	FBWebrtcAutomationToggleSpeakerPhoneRequest* __toggleSpeakerphoneRequest;
	FBWebrtcAutomationVolumeUpRequest* __volumeUpRequest;
	FBWebrtcAutomationVolumeDownRequest* __volumeDownRequest;
	FBWebrtcAutomationEnableVideoRequest* __enableVideoRequest;
	FBWebrtcAutomationDisableVideoRequest* __disableVideoRequest;
	FBWebrtcAutomationHardwareOptionsRequest* __hardwareOptionsRequest;
	FBWebrtcAutomationRecordAudioRequest* __recordAudioRequest;
	FBWebrtcAutomationRecordVideoRequest* __recordVideoRequest;
	FBWebrtcAutomationRecordRawVideoRequest* __recordRawVideoRequest;
	FBWebrtcAutomationRecordSelfVideoRequest* __recordSelfVideoRequest;
	FBWebrtcAutomationRecordSelfRawVideoRequest* __recordSelfRawVideoRequest;
	FBWebrtcAutomationLoadSelfRawVideoRequest* __loadSelfRawVideoRequest;
	FBWebrtcAutomationLoopVideoPlaybackRequest* __loopVideoPlaybackRequest;
	BOOL __requestType_isset;
	BOOL __requestId_isset;
	BOOL __startRPCRequest_isset;
	BOOL __endRPCRequest_isset;
	BOOL __startCallRequest_isset;
	BOOL __endCallRequest_isset;
	BOOL __acceptCallRequest_isset;
	BOOL __toggleSpeakerphoneRequest_isset;
	BOOL __volumeUpRequest_isset;
	BOOL __volumeDownRequest_isset;
	BOOL __enableVideoRequest_isset;
	BOOL __disableVideoRequest_isset;
	BOOL __hardwareOptionsRequest_isset;
	BOOL __recordAudioRequest_isset;
	BOOL __recordVideoRequest_isset;
	BOOL __recordRawVideoRequest_isset;
	BOOL __recordSelfVideoRequest_isset;
	BOOL __recordSelfRawVideoRequest_isset;
	BOOL __loadSelfRawVideoRequest_isset;
	BOOL __loopVideoPlaybackRequest_isset;

}

@property (assign,setter=setRequestType:,getter=requestType,nonatomic) int requestType; 
@property (assign,setter=setRequestId:,getter=requestId,nonatomic) int requestId; 
@property (setter=setStartRPCRequest:,getter=startRPCRequest,nonatomic,retain) FBWebrtcAutomationStartRPCRequest * startRPCRequest; 
@property (setter=setEndRPCRequest:,getter=endRPCRequest,nonatomic,retain) FBWebrtcAutomationEndRPCRequest * endRPCRequest; 
@property (setter=setStartCallRequest:,getter=startCallRequest,nonatomic,retain) FBWebrtcAutomationStartCallRequest * startCallRequest; 
@property (setter=setEndCallRequest:,getter=endCallRequest,nonatomic,retain) FBWebrtcAutomationEndCallRequest * endCallRequest; 
@property (setter=setAcceptCallRequest:,getter=acceptCallRequest,nonatomic,retain) FBWebrtcAutomationAcceptCallRequest * acceptCallRequest; 
@property (setter=setToggleSpeakerphoneRequest:,getter=toggleSpeakerphoneRequest,nonatomic,retain) FBWebrtcAutomationToggleSpeakerPhoneRequest * toggleSpeakerphoneRequest; 
@property (setter=setVolumeUpRequest:,getter=volumeUpRequest,nonatomic,retain) FBWebrtcAutomationVolumeUpRequest * volumeUpRequest; 
@property (setter=setVolumeDownRequest:,getter=volumeDownRequest,nonatomic,retain) FBWebrtcAutomationVolumeDownRequest * volumeDownRequest; 
@property (setter=setEnableVideoRequest:,getter=enableVideoRequest,nonatomic,retain) FBWebrtcAutomationEnableVideoRequest * enableVideoRequest; 
@property (setter=setDisableVideoRequest:,getter=disableVideoRequest,nonatomic,retain) FBWebrtcAutomationDisableVideoRequest * disableVideoRequest; 
@property (setter=setHardwareOptionsRequest:,getter=hardwareOptionsRequest,nonatomic,retain) FBWebrtcAutomationHardwareOptionsRequest * hardwareOptionsRequest; 
@property (setter=setRecordAudioRequest:,getter=recordAudioRequest,nonatomic,retain) FBWebrtcAutomationRecordAudioRequest * recordAudioRequest; 
@property (setter=setRecordVideoRequest:,getter=recordVideoRequest,nonatomic,retain) FBWebrtcAutomationRecordVideoRequest * recordVideoRequest; 
@property (setter=setRecordRawVideoRequest:,getter=recordRawVideoRequest,nonatomic,retain) FBWebrtcAutomationRecordRawVideoRequest * recordRawVideoRequest; 
@property (setter=setRecordSelfVideoRequest:,getter=recordSelfVideoRequest,nonatomic,retain) FBWebrtcAutomationRecordSelfVideoRequest * recordSelfVideoRequest; 
@property (setter=setRecordSelfRawVideoRequest:,getter=recordSelfRawVideoRequest,nonatomic,retain) FBWebrtcAutomationRecordSelfRawVideoRequest * recordSelfRawVideoRequest; 
@property (setter=setLoadSelfRawVideoRequest:,getter=loadSelfRawVideoRequest,nonatomic,retain) FBWebrtcAutomationLoadSelfRawVideoRequest * loadSelfRawVideoRequest; 
@property (setter=setLoopVideoPlaybackRequest:,getter=loopVideoPlaybackRequest,nonatomic,retain) FBWebrtcAutomationLoopVideoPlaybackRequest * loopVideoPlaybackRequest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setStartRPCRequest:(FBWebrtcAutomationStartRPCRequest *)arg1 ;
-(void)setEndRPCRequest:(FBWebrtcAutomationEndRPCRequest *)arg1 ;
-(void)setStartCallRequest:(FBWebrtcAutomationStartCallRequest *)arg1 ;
-(void)setEndCallRequest:(FBWebrtcAutomationEndCallRequest *)arg1 ;
-(void)setAcceptCallRequest:(FBWebrtcAutomationAcceptCallRequest *)arg1 ;
-(void)setToggleSpeakerphoneRequest:(FBWebrtcAutomationToggleSpeakerPhoneRequest *)arg1 ;
-(void)setVolumeUpRequest:(FBWebrtcAutomationVolumeUpRequest *)arg1 ;
-(void)setVolumeDownRequest:(FBWebrtcAutomationVolumeDownRequest *)arg1 ;
-(void)setEnableVideoRequest:(FBWebrtcAutomationEnableVideoRequest *)arg1 ;
-(void)setDisableVideoRequest:(FBWebrtcAutomationDisableVideoRequest *)arg1 ;
-(void)setHardwareOptionsRequest:(FBWebrtcAutomationHardwareOptionsRequest *)arg1 ;
-(void)setRecordAudioRequest:(FBWebrtcAutomationRecordAudioRequest *)arg1 ;
-(void)setRecordVideoRequest:(FBWebrtcAutomationRecordVideoRequest *)arg1 ;
-(void)setRecordRawVideoRequest:(FBWebrtcAutomationRecordRawVideoRequest *)arg1 ;
-(void)setRecordSelfVideoRequest:(FBWebrtcAutomationRecordSelfVideoRequest *)arg1 ;
-(void)setRecordSelfRawVideoRequest:(FBWebrtcAutomationRecordSelfRawVideoRequest *)arg1 ;
-(void)setLoadSelfRawVideoRequest:(FBWebrtcAutomationLoadSelfRawVideoRequest *)arg1 ;
-(void)setLoopVideoPlaybackRequest:(FBWebrtcAutomationLoopVideoPlaybackRequest *)arg1 ;
-(id)initWithRequestType:(int)arg1 requestId:(int)arg2 startRPCRequest:(id)arg3 endRPCRequest:(id)arg4 startCallRequest:(id)arg5 endCallRequest:(id)arg6 acceptCallRequest:(id)arg7 toggleSpeakerphoneRequest:(id)arg8 volumeUpRequest:(id)arg9 volumeDownRequest:(id)arg10 enableVideoRequest:(id)arg11 disableVideoRequest:(id)arg12 hardwareOptionsRequest:(id)arg13 recordAudioRequest:(id)arg14 recordVideoRequest:(id)arg15 recordRawVideoRequest:(id)arg16 recordSelfVideoRequest:(id)arg17 recordSelfRawVideoRequest:(id)arg18 loadSelfRawVideoRequest:(id)arg19 loopVideoPlaybackRequest:(id)arg20 ;
-(BOOL)requestTypeIsSet;
-(void)unsetRequestType;
-(BOOL)requestIdIsSet;
-(void)unsetRequestId;
-(FBWebrtcAutomationStartRPCRequest *)startRPCRequest;
-(BOOL)startRPCRequestIsSet;
-(void)unsetStartRPCRequest;
-(FBWebrtcAutomationEndRPCRequest *)endRPCRequest;
-(BOOL)endRPCRequestIsSet;
-(void)unsetEndRPCRequest;
-(FBWebrtcAutomationStartCallRequest *)startCallRequest;
-(BOOL)startCallRequestIsSet;
-(void)unsetStartCallRequest;
-(FBWebrtcAutomationEndCallRequest *)endCallRequest;
-(BOOL)endCallRequestIsSet;
-(void)unsetEndCallRequest;
-(FBWebrtcAutomationAcceptCallRequest *)acceptCallRequest;
-(BOOL)acceptCallRequestIsSet;
-(void)unsetAcceptCallRequest;
-(FBWebrtcAutomationToggleSpeakerPhoneRequest *)toggleSpeakerphoneRequest;
-(BOOL)toggleSpeakerphoneRequestIsSet;
-(void)unsetToggleSpeakerphoneRequest;
-(FBWebrtcAutomationVolumeUpRequest *)volumeUpRequest;
-(BOOL)volumeUpRequestIsSet;
-(void)unsetVolumeUpRequest;
-(FBWebrtcAutomationVolumeDownRequest *)volumeDownRequest;
-(BOOL)volumeDownRequestIsSet;
-(void)unsetVolumeDownRequest;
-(FBWebrtcAutomationEnableVideoRequest *)enableVideoRequest;
-(BOOL)enableVideoRequestIsSet;
-(void)unsetEnableVideoRequest;
-(FBWebrtcAutomationDisableVideoRequest *)disableVideoRequest;
-(BOOL)disableVideoRequestIsSet;
-(void)unsetDisableVideoRequest;
-(FBWebrtcAutomationHardwareOptionsRequest *)hardwareOptionsRequest;
-(BOOL)hardwareOptionsRequestIsSet;
-(void)unsetHardwareOptionsRequest;
-(FBWebrtcAutomationRecordAudioRequest *)recordAudioRequest;
-(BOOL)recordAudioRequestIsSet;
-(void)unsetRecordAudioRequest;
-(FBWebrtcAutomationRecordVideoRequest *)recordVideoRequest;
-(BOOL)recordVideoRequestIsSet;
-(void)unsetRecordVideoRequest;
-(FBWebrtcAutomationRecordRawVideoRequest *)recordRawVideoRequest;
-(BOOL)recordRawVideoRequestIsSet;
-(void)unsetRecordRawVideoRequest;
-(FBWebrtcAutomationRecordSelfVideoRequest *)recordSelfVideoRequest;
-(BOOL)recordSelfVideoRequestIsSet;
-(void)unsetRecordSelfVideoRequest;
-(FBWebrtcAutomationRecordSelfRawVideoRequest *)recordSelfRawVideoRequest;
-(BOOL)recordSelfRawVideoRequestIsSet;
-(void)unsetRecordSelfRawVideoRequest;
-(FBWebrtcAutomationLoadSelfRawVideoRequest *)loadSelfRawVideoRequest;
-(BOOL)loadSelfRawVideoRequestIsSet;
-(void)unsetLoadSelfRawVideoRequest;
-(FBWebrtcAutomationLoopVideoPlaybackRequest *)loopVideoPlaybackRequest;
-(BOOL)loopVideoPlaybackRequestIsSet;
-(void)unsetLoopVideoPlaybackRequest;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)setRequestType:(int)arg1 ;
-(int)requestId;
-(void)setRequestId:(int)arg1 ;
-(int)requestType;
-(void)write:(id)arg1 ;
@end

