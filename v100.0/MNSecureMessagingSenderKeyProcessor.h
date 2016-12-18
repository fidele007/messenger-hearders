/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureMessagingSingleDeviceCryptoEngine, MNSecureMessagingSingleDeviceCryptoStateStoring, MNSecureMessagingMultiDeviceCryptoEngine, OS_dispatch_queue;
@class MNSecureMessagingParticipantListUpdateProcessor, MNSecureMessagingAddress, NSObject;

@interface MNSecureMessagingSenderKeyProcessor : NSObject {

	id<MNSecureMessagingSingleDeviceCryptoEngine> _cryptoEngine;
	id<MNSecureMessagingSingleDeviceCryptoStateStoring> _singleDeviceStateStore;
	id<MNSecureMessagingMultiDeviceCryptoEngine> _multiDeviceCryptoEngine;
	MNSecureMessagingParticipantListUpdateProcessor* _participantListProcessor;
	MNSecureMessagingAddress* _localAddress;
	NSObject*<OS_dispatch_queue> _queue;

}
-(BOOL)processSenderKeyDistributionPacket:(id)arg1 ;
-(BOOL)_processPayload:(id)arg1 from:(id)arg2 forThreadWithKey:(id)arg3 timestamp:(unsigned long long)arg4 ;
-(BOOL)_processSenderKey:(id)arg1 from:(id)arg2 forThreadWithKey:(id)arg3 timestamp:(unsigned long long)arg4 ;
-(id)initWithSingleDeviceCryptoEngine:(id)arg1 singleDeviceStateStore:(id)arg2 multiDeviceCryptoEngine:(id)arg3 participantListProcessor:(id)arg4 localAddress:(id)arg5 queue:(id)arg6 ;
@end

