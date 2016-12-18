/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadMarkRunning.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNAuthenticationManager;
@class FBMMQTTSender, FBMMQTTConnectStateTrackerService, NSString;

@interface FBMMQTTMarkingAdapter : NSObject <MNThreadMarkRunning, FBViewerContextClassProvidable> {

	FBMMQTTSender* _mqttSender;
	id<MNAuthenticationManager> _authenticationManager;
	FBMMQTTConnectStateTrackerService* _mqttConnectionStateTrackerService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithMQTTSender:(id)arg1 authenticationManager:(id)arg2 mqttConnectionStateTrackerService:(id)arg3 ;
-(void)markThreadWithThreadKey:(id)arg1 action:(id)arg2 listener:(id)arg3 ;
@end
