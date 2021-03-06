/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassProvidable.h>
#import <Messenger/FBWebRTCAdminDeltaHandler.h>

@class FBWebRTCCallLogWriter, NSString;

@interface FBWebRTCCallLogSyncAdminDeltaHandler : NSObject <FBClassProvidable, FBWebRTCAdminDeltaHandler> {

	FBWebRTCCallLogWriter* _logWriter;
	NSString* _selfFbid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleDeltaWithCallerFbid:(id)arg1 calleeFbid:(id)arg2 startTime:(id)arg3 duration:(double)arg4 hasAnswered:(BOOL)arg5 isVideoCall:(BOOL)arg6 ;
-(void)handleDeltaVoiceMailCallerFbid:(id)arg1 voiceMailFile:(id)arg2 voiceMailUrl:(id)arg3 voiceMailDuration:(double)arg4 ;
-(id)initWithCallLog:(id)arg1 experimentManager:(id)arg2 session:(id)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

