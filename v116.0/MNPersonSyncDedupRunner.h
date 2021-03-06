/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAddressBookContactDedupRunning.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol MNAddressBookContactSyncQuerying;
@class FBSyncStore, NSOperationQueue, FBUserSession, NSString;

@interface MNPersonSyncDedupRunner : NSObject <MNAddressBookContactDedupRunning, FBViewerContextClassProvidable> {

	FBSyncStore* _syncStore;
	id<MNAddressBookContactSyncQuerying> _addressBookContactSyncQuerier;
	NSOperationQueue* _operationQueue;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSyncStore:(id)arg1 addressBookContactSyncQuerier:(id)arg2 session:(id)arg3 ;
-(void)_dedupAddressBookContactStoreWithSyncPeople:(id)arg1 identifierToNormalizedPhoneNumberMap:(id)arg2 ;
-(void)dedupAddressBookContacts:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

