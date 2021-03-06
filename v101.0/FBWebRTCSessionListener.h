/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebRTCSessionListener <NSObject>
@required
-(void)callStarted:(id)arg1;
-(void)callChangedFromState:(id)arg1 toState:(id)arg2;
-(void)callConnectionStatusChangedFromConnectionStatus:(id)arg1 toConnectionStatus:(id)arg2 forCall:(id)arg3;
-(void)callEnded:(id)arg1 reason:(unsigned long long)arg2 subreason:(id)arg3 remoteEnded:(BOOL)arg4 callSummary:(id)arg5;
-(void)callAbortedWithFailedDeviceRequest:(unsigned long long)arg1;
-(void)callTransitionAborted:(id)arg1 withFailedDeviceRequest:(unsigned long long)arg2;
-(void)callUpdatedParticipantsFromState:(id)arg1 toState:(id)arg2;
-(void)callUpdatedLoudestParticipant:(id)arg1;
-(void)callUpdatedPeerUsersInfoFromState:(id)arg1 toState:(id)arg2;

@end

