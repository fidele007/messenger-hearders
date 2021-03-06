/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureMessagingRegistrationStateReading.h>
#import <Messenger/MNSecureMessagingRegistrationStateStoreListening.h>

@protocol OS_dispatch_queue;
@class MNSecureMessagingRegistrationState, NSObject, NSString;

@interface MNSecureMessagingRegistrationStateCache : NSObject <MNSecureMessagingRegistrationStateReading, MNSecureMessagingRegistrationStateStoreListening> {

	NSObject*<OS_dispatch_queue> _updateQueue;
	MNSecureMessagingRegistrationState* _currentRegistrationState;

}

@property (copy) MNSecureMessagingRegistrationState * currentRegistrationState;              //@synthesize currentRegistrationState=_currentRegistrationState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUpdateQueue:(id)arg1 ;
-(void)didUpdateRegistrationState:(id)arg1 ;
-(MNSecureMessagingRegistrationState *)currentRegistrationState;
-(void)setCurrentRegistrationState:(MNSecureMessagingRegistrationState *)arg1 ;
@end

