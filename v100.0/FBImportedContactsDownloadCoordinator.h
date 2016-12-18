/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(void)localContactsSyncStarted;
-(void)foundLocalContactChangesWithNumberOfChanges:(unsigned long long)arg1 ;
-(void)foundNoLocalContactChanges;
-(void)localContactsSyncProgressedWithStatus:(id)arg1 ;
-(void)localContactsSyncCompleted;
-(void)localContactsSyncFailed;
-(void)localContactsSyncFailedDueToContactImportingBeingLocked;
-(void)didFetchSyncPersons:(id)arg1 ;
-(void)syncPersonsFetchFailed;
-(id)initWithSyncPersonsFetcher:(id)arg1 listener:(id)arg2 cancellationListener:(id)arg3 ;
@end

