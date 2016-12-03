/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureMessagingCryptoEngine <NSObject>
@required
-(BOOL)isAllCryptoStateAvailable;
-(id)encryptMessage:(id)arg1 withState:(id)arg2 persistStateBlock:(/*^block*/id)arg3;
-(id)decryptPreKeyMessageBlob:(id)arg1 withState:(id)arg2 senderId:(id)arg3 deviceId:(id)arg4 persistStateAndPayloadBlock:(/*^block*/id)arg5;
-(id)processPreKeyLookupResult:(id)arg1 senderId:(id)arg2 deviceId:(id)arg3 persistStateBlock:(/*^block*/id)arg4;
-(id)decryptMessageBlob:(id)arg1 withState:(id)arg2 persistStateAndPayloadBlock:(/*^block*/id)arg3;

@end
