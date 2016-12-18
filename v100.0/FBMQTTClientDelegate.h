/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMQTTClientDelegate <NSObject>
@required
-(void)mqttClientReconnectNow:(id)arg1;
-(void)mqttClientDidSendPingRequest:(id)arg1;
-(void)mqttClientDidSendSubscribeMessage:(id)arg1;
-(void)mqttClientDidSendUnsubscribeMessage:(id)arg1;
-(void)mqttClient:(id)arg1 didSendMessage:(id)arg2;
-(void)mqttClientDidSentConnect:(id)arg1;
-(void)mqttClient:(id)arg1 didConnectWithPayload:(id)arg2;
-(void)mqttClient:(id)arg1 didReceiveMessage:(id)arg2;
-(void)mqttClient:(id)arg1 didPublishMessage:(id)arg2;
-(void)mqttClientCouldNotConnect:(id)arg1 error:(id)arg2;
-(void)mqttClientDidDisconnect:(id)arg1 error:(id)arg2;
-(void)mqttClient:(id)arg1 couldNotPublishMessage:(id)arg2 error:(id)arg3;
-(void)mqttClient:(id)arg1 didSendConnectWithPayloadSize:(unsigned long long)arg2;
-(void)mqttClientDidSendDisconnect:(id)arg1;
-(void)mqttClientDidReceiveDisconnect:(id)arg1;
-(void)mqttClientDidReceivePingResponse:(id)arg1;
-(void)mqttClientDidSubscribe:(id)arg1;

@end

