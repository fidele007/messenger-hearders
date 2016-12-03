/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactImportInitiator.h>
#import <Messenger/MNContactsSyncLockDelegate.h>
#import <Messenger/MNAddressBookAccessRequestListener.h>

@protocol FBAddressBookAccessRequester, MNContactsSyncLock, MNContactImportInitiationListener;
@class NSString;

@interface MNAddressBookContactImportInitiationCoordinator : NSObject <MNContactImportInitiator, MNContactsSyncLockDelegate, MNAddressBookAccessRequestListener> {

	id<FBAddressBookAccessRequester> _addressBookAccessRequester;
	id<MNContactsSyncLock> _contactsSyncLock;
	id<MNContactImportInitiationListener> _listener;
	unsigned long long _initiationState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initiateContactImporting;
-(void)accessToAddressBookDenied;
-(void)accessToAddressBookGranted;
-(void)contactImportingLocked;
-(void)contactImportingUnlocked;
-(void)failedToLockContactImporting;
-(void)failedToUnlockContactImporting;
-(void)lockingContactImporting;
-(void)unlockingContactImporting;
-(id)initWithAddressBookAccessRequester:(id)arg1 contactsSyncLock:(id)arg2 listener:(id)arg3 ;
@end
