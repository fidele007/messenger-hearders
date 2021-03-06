/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureMessagingSingleDeviceCryptoEngine <NSObject>
@required
-(BOOL)isAllCryptoStateAvailable;
-(id)encryptMessage:(id)arg1 to:(id)arg2 withState:(id)arg3;
-(id)decryptMessageBlob:(id)arg1 from:(id)arg2 withState:(id)arg3 isPreKeyMessage:(BOOL)arg4;
-(id)processPreKeyLookupResult:(id)arg1 cryptoState:(id)arg2 from:(id)arg3;

@end

