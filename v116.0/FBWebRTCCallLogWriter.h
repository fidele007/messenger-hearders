/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBWebRTCRecentCallLog;

@interface FBWebRTCCallLogWriter : NSObject {

	FBWebRTCRecentCallLog* _log;

}
-(void)_addCallToLog:(id)arg1 ;
-(id)initWithRecentCallLog:(id)arg1 ;
-(void)logCallCompleteWithPeerUserId:(id)arg1 startTime:(id)arg2 duration:(double)arg3 hasAnswered:(BOOL)arg4 direction:(unsigned long long)arg5 callType:(unsigned long long)arg6 callAcknowledged:(BOOL)arg7 ;
-(void)logCallUpdateWithVoiceMail:(id)arg1 voiceMailFile:(id)arg2 voiceMailUrl:(id)arg3 voiceMailDuration:(double)arg4 ;
-(void)logConferenceCallCompleteWithGroupFbId:(id)arg1 startTime:(id)arg2 duration:(double)arg3 hasAnswered:(BOOL)arg4 direction:(unsigned long long)arg5 callType:(unsigned long long)arg6 callAcknowledged:(BOOL)arg7 ;
@end

