/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBWebRTCVoicemailExperimentContext : FBExperimentContext {

	BOOL _new_voicemail;
	BOOL _is_videomail_enabled;

}

@property (nonatomic,readonly) BOOL new_voicemail;                     //@synthesize new_voicemail=_new_voicemail - In the implementation block
@property (nonatomic,readonly) BOOL is_videomail_enabled;              //@synthesize is_videomail_enabled=_is_videomail_enabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)new_voicemail;
-(BOOL)is_videomail_enabled;
@end

