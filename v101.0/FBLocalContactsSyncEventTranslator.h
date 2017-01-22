/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAddressBookSyncer.h>
#import <Messenger/FBAddressBookSyncLoaderDelegate.h>
#import <Messenger/FBLocalContactsBatchUploaderDelegate.h>
#import <Messenger/FBLocalContactsSyncDifferDelegate.h>

@protocol FBAddressBookSyncer, FBLocalContactsSyncStatusListener;
@class NSString;

@interface FBLocalContactsSyncEventTranslator : NSObject <FBAddressBookSyncer, FBAddressBookSyncLoaderDelegate, FBLocalContactsBatchUploaderDelegate, FBLocalContactsSyncDifferDelegate> {

	id<FBAddressBookSyncer> _addressBookSyncer;
	id<FBLocalContactsSyncStatusListener> _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)noContactsFoundInAddressbook;
-(void)cancelSyncFromAddressBook;
-(void)syncContactsFromAddressbook;
-(void)batchUploadProgressedWithStatus:(id)arg1 ;
-(void)batchUploadComplete;
-(void)batchUploadFailed;
-(void)batchUploadFailedDueToContactImportingBeingLocked;
-(void)foundContactChangesWithNumberOfChanges:(unsigned long long)arg1 ;
-(void)noContactChangesFound;
-(id)initWithAddressBookSyncer:(id)arg1 listener:(id)arg2 ;
@end
