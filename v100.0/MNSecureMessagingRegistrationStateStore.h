/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureMessagingRegistrationStateStoreListening, OS_dispatch_queue;
@class MNUnprotectedCustomBlobStore, NSObject, MNSecureMessagingRegistrationState;

@interface MNSecureMessagingRegistrationStateStore : NSObject {

	MNUnprotectedCustomBlobStore* _unprotectedCustomBlobStore;
	id<MNSecureMessagingRegistrationStateStoreListening> _listener;
	NSObject*<OS_dispatch_queue> _queue;
	MNSecureMessagingRegistrationState* _currentRegistrationState;

}

@property (copy,readonly) MNSecureMessagingRegistrationState * currentRegistrationState;              //@synthesize currentRegistrationState=_currentRegistrationState - In the implementation block
-(id)readRegistrationState;
-(void)writeRegistrationState:(id)arg1 ;
-(id)initWithUnprotectedCustomBlobStore:(id)arg1 listener:(id)arg2 queue:(id)arg3 ;
-(MNSecureMessagingRegistrationState *)currentRegistrationState;
@end

