/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
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
-(void)writeRegistrationState:(id)arg1 ;
-(id)initWithUnprotectedCustomBlobStore:(id)arg1 listener:(id)arg2 queue:(id)arg3 ;
-(id)readRegistrationState;
-(MNSecureMessagingRegistrationState *)currentRegistrationState;
@end

