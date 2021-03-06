/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMMessageSendLatency, NSString;

@interface FBMMessageLatencyBuilder : NSObject {

	FBMMessageSendLatency* _sendLatency;
	double _rawDrReceivedTime;
	double _drHandledTime;
	double _createdTime;
	NSString* _mqttSessionId;

}
+(id)messageLatency;
+(id)messageLatencyFromExistingMessageLatency:(id)arg1 ;
-(id)withSendLatency:(id)arg1 ;
-(id)withRawDrReceivedTime:(double)arg1 ;
-(id)withDrHandledTime:(double)arg1 ;
-(id)withCreatedTime:(double)arg1 ;
-(id)withMqttSessionId:(id)arg1 ;
-(id)build;
@end

