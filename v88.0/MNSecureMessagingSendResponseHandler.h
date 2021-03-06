/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureMessagingSendHandlingDelegate.h>

@protocol MNSecureMessageSendListening, MNSecureMessagingRegistrationStateUpdating, OS_dispatch_queue;
@class MNSecureMessagingStore, MNSecureThreadUpdater, MNSecureMessagingRemoteIdentityValidator, NSObject;

@interface MNSecureMessagingSendResponseHandler : NSObject <MNSecureMessagingSendHandlingDelegate> {

	MNSecureMessagingStore* _store;
	MNSecureThreadUpdater* _threadUpdater;
	id<MNSecureMessageSendListening> _sendListener;
	id<MNSecureMessagingRegistrationStateUpdating> _deviceStatusUpdater;
	MNSecureMessagingRemoteIdentityValidator* _identityValidator;
	NSObject*<OS_dispatch_queue> _queue;

}
-(BOOL)processSendResult:(id)arg1 withServerTimestamp:(unsigned long long)arg2 forPacketWithId:(id)arg3 ;
-(void)_handleSuccessForPackeId:(id)arg1 serverTimestamp:(unsigned long long)arg2 serverSignature:(id)arg3 ;
-(void)_handleSenderNotPrimaryForPacketId:(id)arg1 ;
-(void)_handleRecipientWithId:(id)arg1 notPrimaryWithNewIdentityKey:(id)arg2 packetId:(id)arg3 serverTimestamp:(unsigned long long)arg4 ;
-(void)_handleUnknownError:(unsigned)arg1 forPacketId:(id)arg2 ;
-(id)initWithStore:(id)arg1 threadUpdater:(id)arg2 sendListener:(id)arg3 deviceStatusUpdater:(id)arg4 identityValidator:(id)arg5 queue:(id)arg6 ;
@end

