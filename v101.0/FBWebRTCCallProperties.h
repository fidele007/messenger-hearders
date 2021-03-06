/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebRTCMediaInterface;
@class NSMutableDictionary, FBWebRTCCallModel, NSUUID, NSArray, NSDictionary, NSString, FBWebRTCMediaState, NSNumber, FBWebRTCConferenceParticipantInfo;

@interface FBWebRTCCallProperties : NSObject {

	NSMutableDictionary* _peerUsersInfo;
	NSMutableDictionary* _analyticsExtra;
	unsigned long long _maxUsersInCall;
	BOOL _isOutboundCall;
	BOOL _isDirectVideoCall;
	BOOL _isUsingMultiwayProtocol;
	BOOL _isGroupConferenceCall;
	BOOL _isVideoCallAnsweredAsAudioCall;
	BOOL _isScheduledCall;
	BOOL _isSpeakerPhone;
	BOOL _isVideoEscalationRequired;
	BOOL _hasEverReceivedVideoOn;
	BOOL _hasVideoEscalationStarted;
	BOOL _hasVideoEscalationSucceeded;
	BOOL _localVideoSupported;
	BOOL _remoteVideoSupported;
	BOOL _hasConnected;
	BOOL _hasAlerted;
	BOOL _hasReceivedVideo;
	BOOL _hasSentVideo;
	BOOL _hasStartedAccept;
	BOOL _isDominantSpeakerPinned;
	BOOL _isEndToEndEncrypted;
	FBWebRTCCallModel* _callModel;
	long long _callId;
	NSUUID* _uuid;
	NSArray* _peerUserIds;
	NSDictionary* _participantStates;
	unsigned long long _callState;
	NSString* _callTrigger;
	NSString* _conferenceName;
	NSString* _customCallType;
	FBWebRTCMediaState* _localMedia;
	FBWebRTCMediaState* _remoteMedia;
	unsigned long long _currentCamera;
	NSNumber* _startTimestamp;
	NSNumber* _endTimestamp;
	NSString* _remoteVideoCname;
	NSNumber* _remoteVideoSource;
	NSString* _dominantSpeakerUserId;
	NSString* _pinnedSpeakerUserId;
	id<FBWebRTCMediaInterface> _mediaInterface;

}

@property (nonatomic,readonly) FBWebRTCCallModel * callModel;                                                  //@synthesize callModel=_callModel - In the implementation block
@property (assign,nonatomic) long long callId;                                                                 //@synthesize callId=_callId - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                                                                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSArray * peerUserIds;                                                              //@synthesize peerUserIds=_peerUserIds - In the implementation block
@property (nonatomic,copy) NSDictionary * participantStates;                                                   //@synthesize participantStates=_participantStates - In the implementation block
@property (nonatomic,readonly) FBWebRTCConferenceParticipantInfo * selectedConferenceParticipant; 
@property (assign,nonatomic) unsigned long long callState;                                                     //@synthesize callState=_callState - In the implementation block
@property (nonatomic,copy) NSString * callTrigger;                                                             //@synthesize callTrigger=_callTrigger - In the implementation block
@property (assign,nonatomic) BOOL isOutboundCall;                                                              //@synthesize isOutboundCall=_isOutboundCall - In the implementation block
@property (assign,nonatomic) BOOL isDirectVideoCall;                                                           //@synthesize isDirectVideoCall=_isDirectVideoCall - In the implementation block
@property (assign,nonatomic) BOOL isUsingMultiwayProtocol;                                                     //@synthesize isUsingMultiwayProtocol=_isUsingMultiwayProtocol - In the implementation block
@property (assign,nonatomic) BOOL isGroupConferenceCall;                                                       //@synthesize isGroupConferenceCall=_isGroupConferenceCall - In the implementation block
@property (nonatomic,copy) NSString * conferenceName;                                                          //@synthesize conferenceName=_conferenceName - In the implementation block
@property (assign,nonatomic) BOOL isVideoCallAnsweredAsAudioCall;                                              //@synthesize isVideoCallAnsweredAsAudioCall=_isVideoCallAnsweredAsAudioCall - In the implementation block
@property (nonatomic,copy) NSString * customCallType;                                                          //@synthesize customCallType=_customCallType - In the implementation block
@property (assign,nonatomic) BOOL isScheduledCall;                                                             //@synthesize isScheduledCall=_isScheduledCall - In the implementation block
@property (nonatomic,copy) FBWebRTCMediaState * localMedia;                                                    //@synthesize localMedia=_localMedia - In the implementation block
@property (nonatomic,copy) FBWebRTCMediaState * remoteMedia;                                                   //@synthesize remoteMedia=_remoteMedia - In the implementation block
@property (assign,nonatomic) BOOL isSpeakerPhone;                                                              //@synthesize isSpeakerPhone=_isSpeakerPhone - In the implementation block
@property (assign,nonatomic) unsigned long long currentCamera;                                                 //@synthesize currentCamera=_currentCamera - In the implementation block
@property (assign,nonatomic) BOOL isVideoEscalationRequired;                                                   //@synthesize isVideoEscalationRequired=_isVideoEscalationRequired - In the implementation block
@property (assign,nonatomic) BOOL hasEverReceivedVideoOn;                                                      //@synthesize hasEverReceivedVideoOn=_hasEverReceivedVideoOn - In the implementation block
@property (assign,nonatomic) BOOL hasVideoEscalationStarted;                                                   //@synthesize hasVideoEscalationStarted=_hasVideoEscalationStarted - In the implementation block
@property (assign,nonatomic) BOOL hasVideoEscalationSucceeded;                                                 //@synthesize hasVideoEscalationSucceeded=_hasVideoEscalationSucceeded - In the implementation block
@property (assign,nonatomic) BOOL localVideoSupported;                                                         //@synthesize localVideoSupported=_localVideoSupported - In the implementation block
@property (assign,nonatomic) BOOL remoteVideoSupported;                                                        //@synthesize remoteVideoSupported=_remoteVideoSupported - In the implementation block
@property (assign,nonatomic) BOOL hasConnected;                                                                //@synthesize hasConnected=_hasConnected - In the implementation block
@property (assign,nonatomic) BOOL hasAlerted;                                                                  //@synthesize hasAlerted=_hasAlerted - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedVideo;                                                            //@synthesize hasReceivedVideo=_hasReceivedVideo - In the implementation block
@property (assign,nonatomic) BOOL hasSentVideo;                                                                //@synthesize hasSentVideo=_hasSentVideo - In the implementation block
@property (assign,nonatomic) BOOL hasStartedAccept;                                                            //@synthesize hasStartedAccept=_hasStartedAccept - In the implementation block
@property (nonatomic,copy) NSNumber * startTimestamp;                                                          //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (nonatomic,copy) NSNumber * endTimestamp;                                                            //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (nonatomic,copy) NSString * remoteVideoCname;                                                        //@synthesize remoteVideoCname=_remoteVideoCname - In the implementation block
@property (nonatomic,copy) NSNumber * remoteVideoSource;                                                       //@synthesize remoteVideoSource=_remoteVideoSource - In the implementation block
@property (assign,nonatomic) BOOL isDominantSpeakerPinned;                                                     //@synthesize isDominantSpeakerPinned=_isDominantSpeakerPinned - In the implementation block
@property (nonatomic,copy) NSString * dominantSpeakerUserId;                                                   //@synthesize dominantSpeakerUserId=_dominantSpeakerUserId - In the implementation block
@property (nonatomic,copy) NSString * pinnedSpeakerUserId;                                                     //@synthesize pinnedSpeakerUserId=_pinnedSpeakerUserId - In the implementation block
@property (nonatomic,retain) id<FBWebRTCMediaInterface> mediaInterface;                                        //@synthesize mediaInterface=_mediaInterface - In the implementation block
@property (assign,nonatomic) BOOL isEndToEndEncrypted;                                                         //@synthesize isEndToEndEncrypted=_isEndToEndEncrypted - In the implementation block
-(id<FBWebRTCMediaInterface>)mediaInterface;
-(BOOL)isOutboundCall;
-(BOOL)isDirectVideoCall;
-(NSArray *)peerUserIds;
-(NSString *)callTrigger;
-(void)setCallTrigger:(NSString *)arg1 ;
-(void)setIsOutboundCall:(BOOL)arg1 ;
-(FBWebRTCMediaState *)localMedia;
-(FBWebRTCMediaState *)remoteMedia;
-(BOOL)isSpeakerPhone;
-(NSString *)conferenceName;
-(BOOL)hasSentVideo;
-(BOOL)hasReceivedVideo;
-(BOOL)isUsingMultiwayProtocol;
-(NSDictionary *)participantStates;
-(BOOL)isScheduledCall;
-(id)analyticsExtra;
-(BOOL)isVideoEscalationRequired;
-(id)peerUsersInfo;
-(BOOL)isDominantSpeakerPinned;
-(BOOL)isEndToEndEncrypted;
-(BOOL)isVideoCallAnsweredAsAudioCall;
-(NSNumber *)endTimestamp;
-(void)setEndTimestamp:(NSNumber *)arg1 ;
-(void)setIsDirectVideoCall:(BOOL)arg1 ;
-(void)setLocalMedia:(FBWebRTCMediaState *)arg1 ;
-(void)setPeerUserIds:(NSArray *)arg1 ;
-(void)setLocalVideoSupported:(BOOL)arg1 ;
-(void)addAnalyticsExtraValues:(id)arg1 ;
-(void)setIsUsingMultiwayProtocol:(BOOL)arg1 ;
-(void)setIsGroupConferenceCall:(BOOL)arg1 ;
-(void)setConferenceName:(NSString *)arg1 ;
-(void)setCustomCallType:(NSString *)arg1 ;
-(void)setIsVideoEscalationRequired:(BOOL)arg1 ;
-(id)updateCallModel;
-(void)setRemoteVideoSupported:(BOOL)arg1 ;
-(void)setAnalyticsExtraValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasStartedAccept;
-(void)setHasStartedAccept:(BOOL)arg1 ;
-(BOOL)hasEverReceivedVideoOn;
-(NSNumber *)remoteVideoSource;
-(NSString *)customCallType;
-(BOOL)isGroupConferenceCall;
-(BOOL)hasVideoEscalationStarted;
-(BOOL)hasVideoEscalationSucceeded;
-(BOOL)localVideoSupported;
-(void)setIsScheduledCall:(BOOL)arg1 ;
-(void)setParticipantStates:(NSDictionary *)arg1 ;
-(void)setIsVideoCallAnsweredAsAudioCall:(BOOL)arg1 ;
-(void)setRemoteMedia:(FBWebRTCMediaState *)arg1 ;
-(void)setRemoteVideoSource:(NSNumber *)arg1 ;
-(void)setRemoteVideoCname:(NSString *)arg1 ;
-(void)setPinnedSpeakerUserId:(NSString *)arg1 ;
-(void)setIsDominantSpeakerPinned:(BOOL)arg1 ;
-(void)setDominantSpeakerUserId:(NSString *)arg1 ;
-(NSString *)pinnedSpeakerUserId;
-(NSString *)dominantSpeakerUserId;
-(void)setPeerUserInfo:(id)arg1 forPeerId:(id)arg2 ;
-(BOOL)remoteVideoSupported;
-(void)setHasEverReceivedVideoOn:(BOOL)arg1 ;
-(NSString *)remoteVideoCname;
-(id)initWithCallId:(long long)arg1 ;
-(void)setMediaInterface:(id<FBWebRTCMediaInterface>)arg1 ;
-(void)setHasSentVideo:(BOOL)arg1 ;
-(void)setHasReceivedVideo:(BOOL)arg1 ;
-(void)setHasVideoEscalationStarted:(BOOL)arg1 ;
-(void)setHasVideoEscalationSucceeded:(BOOL)arg1 ;
-(void)setIsEndToEndEncrypted:(BOOL)arg1 ;
-(void)setIsSpeakerPhone:(BOOL)arg1 ;
-(FBWebRTCConferenceParticipantInfo *)selectedConferenceParticipant;
-(id)_createCallModel;
-(void)setCallState:(unsigned long long)arg1 ;
-(NSUUID *)uuid;
-(unsigned long long)callState;
-(FBWebRTCCallModel *)callModel;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setHasConnected:(BOOL)arg1 ;
-(BOOL)hasConnected;
-(void)setStartTimestamp:(NSNumber *)arg1 ;
-(NSNumber *)startTimestamp;
-(void)setCallId:(long long)arg1 ;
-(long long)callId;
-(void)setCurrentCamera:(unsigned long long)arg1 ;
-(unsigned long long)currentCamera;
-(void)setHasAlerted:(BOOL)arg1 ;
-(BOOL)hasAlerted;
@end

