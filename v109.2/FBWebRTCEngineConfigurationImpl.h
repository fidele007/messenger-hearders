/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWebRTCEngineConfiguration.h>

@class NSString;

@interface FBWebRTCEngineConfigurationImpl : NSObject <FBWebRTCEngineConfiguration> {

	WebRTCConfigInterface* _configuration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isVideoCallingEnabled; 
@property (nonatomic,readonly) BOOL canRecieveVideoInConferenceCall; 
-(BOOL)isVideoCallingEnabled;
-(BOOL)canRecieveVideoInConferenceCall;
-(id)initWithNativeConfiguration:(WebRTCConfigInterface*)arg1 ;
@end

