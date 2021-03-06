/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLocalContactsSyncStatusListener.h>
#import <Messenger/FBSyncPersonsFetchDelegate.h>
#import <Messenger/FBContactImportPermissionListener.h>

@protocol FBImportedContactsDownloadCancellationListener, FBImportedContactsSyncListener, FBSyncPersonsFetcher;
@class NSMutableArray, FBLocalContactsSyncStatus, NSString;

@interface FBImportedContactsDownloadCoordinator : NSObject <FBLocalContactsSyncStatusListener, FBSyncPersonsFetchDelegate, FBContactImportPermissionListener> {

	unsigned long long _contactImportSyncState;
	id<FBImportedContactsDownloadCancellationListener> _cancellationListener;
	id<FBImportedContactsSyncListener> _listener;
	NSMutableArray* _localContactsSyncStatusesAwaitingFetch;
	FBLocalContactsSyncStatus* _inflightLocalContactsSyncStatus;
	id<FBSyncPersonsFetcher> _syncPersonsFetcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactImportingAllowed;
-(void)contactImportingDisallowed;
-(void)handleLocalContactsSyncProgressWithStatus:(id)arg1 ;
-(void)syncingFailed;
-(id)initWithSyncPersonsFetcher:(id)arg1 listener:(id)arg2 cancellationListener:(id)arg3 ;
-(void)didFetchSyncPersons:(id)arg1 ;
-(void)syncPersonsFetchFailed;
-(void)localContactsSyncFailedDueToContactImportingBeingLocked;
-(void)localContactsSyncStarted;
-(void)foundLocalContactChangesWithNumberOfChanges:(unsigned long long)arg1 ;
-(void)foundNoLocalContactChanges;
-(void)localContactsSyncProgressedWithStatus:(id)arg1 ;
-(void)localContactsSyncCompleted;
-(void)localContactsSyncFailed;
@end

