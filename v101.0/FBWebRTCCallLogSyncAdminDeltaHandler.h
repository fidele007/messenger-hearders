/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
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
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleDeltaWithCallerFbid:(id)arg1 calleeFbid:(id)arg2 startTime:(id)arg3 duration:(double)arg4 hasAnswered:(BOOL)arg5 isVideoCall:(BOOL)arg6 ;
-(void)handleDeltaVoiceMailCallerFbid:(id)arg1 voiceMailFile:(id)arg2 voiceMailUrl:(id)arg3 voiceMailDuration:(double)arg4 ;
-(id)initWithCallLog:(id)arg1 experimentManager:(id)arg2 session:(id)arg3 ;
@end

