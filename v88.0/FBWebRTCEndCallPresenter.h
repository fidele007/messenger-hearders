/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMUserName;

@interface FBWebRTCEndCallPresenter : NSObject {

	int _reason;
	FBMUserName* _peerName;
	BOOL _remoteEnded;
	BOOL _hasConnected;
	BOOL _voicemailStarted;
	unsigned long long _reachabilityState;

}
-(id)localizedCallEndedMessage;
-(id)localizedNoAnswerMessage;
-(id)localizedCallInterruptedMessage;
-(id)localizedRecordingVoicemailMessage;
-(id)localizedNotFriendsOrConnectedMessage;
-(id)localizedCannotReceiveCallsMessage;
-(id)localizedNotReachableMessage;
-(id)localizedCallFailedMessage;
-(id)localizedCallDroppedMessage;
-(id)localizedDeviceBusyMessage;
-(id)localizedInAnotherCallMessage;
-(id)localizedSwitchToWiFiMessage;
-(BOOL)shouldShowAlert;
-(BOOL)shouldOfferRedial;
-(BOOL)shouldOfferUnansweredResponse;
-(id)initWithReason:(int)arg1 peerName:(id)arg2 remoteEnded:(BOOL)arg3 hasConnected:(BOOL)arg4 voicemailStarted:(BOOL)arg5 reachability:(unsigned long long)arg6 ;
-(id)endCallMessage;
-(id)endCallAlertMessage;
-(id)endCallAlertTitle;
-(double)endCallDisplayInterval;
-(BOOL)isDropped;
-(id)localizedRedialPromptMessage;
@end

