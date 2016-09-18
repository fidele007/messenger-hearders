/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNInboxFetcherDelegate.h>
#import <Messenger/MNInboxFetcherDataSource.h>
#import <Messenger/MNInboxOmnistoreFetcherDelegate.h>
#import <Messenger/MNInboxUnitsStoreDelegate.h>

@protocol OS_dispatch_queue;
@class FBUserSession, FBOmnistore, MNNonDiscardingBlobStore, NSObject, MNInboxFetcher, MNInboxOmnistoreFetcher, FBDelayer, MNInboxUnitsMetadataStore, MNInboxUnitsStore, NSString;

@interface MNInboxService : NSObject <MNInboxFetcherDelegate, MNInboxFetcherDataSource, MNInboxOmnistoreFetcherDelegate, MNInboxUnitsStoreDelegate> {

	FBUserSession* _session;
	FBOmnistore* _omnistore;
	MNNonDiscardingBlobStore* _blobStore;
	NSObject*<OS_dispatch_queue> _queue;
	MNInboxFetcher* _inboxFetcher;
	MNInboxOmnistoreFetcher* _inboxOmnistoreFetcher;
	FBDelayer* _inboxInitialFetchDelayer;
	MNInboxUnitsMetadataStore* _inboxUnitsMetadataStore;
	MNInboxUnitsStore* _inboxUnitsStore;

}

@property (nonatomic,readonly) MNInboxUnitsMetadataStore * inboxUnitsMetadataStore;              //@synthesize inboxUnitsMetadataStore=_inboxUnitsMetadataStore - In the implementation block
@property (nonatomic,readonly) MNInboxUnitsStore * inboxUnitsStore;                              //@synthesize inboxUnitsStore=_inboxUnitsStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchWithFetchConfig:(id)arg1 ;
-(void)hideInboxUnitWithId:(id)arg1 unitLoggingData:(id)arg2 ;
-(void)clickInboxItemWithId:(id)arg1 inUnitWithId:(id)arg2 clickTarget:(id)arg3 itemLoggingData:(id)arg4 ;
-(void)hideInboxItemWithId:(id)arg1 inUnitWithId:(id)arg2 itemLoggingData:(id)arg3 ;
-(id)initWithSession:(id)arg1 omnistore:(id)arg2 blobStore:(id)arg3 ;
-(MNInboxUnitsStore *)inboxUnitsStore;
-(void)inboxOmnistoreFetcher:(id)arg1 didFetchUnits:(id)arg2 ;
-(void)_performInboxMutationWithItemId:(id)arg1 inUnitWithId:(id)arg2 actionType:(id)arg3 clickTarget:(id)arg4 itemLoggingData:(id)arg5 ;
-(void)_performInboxMutationWithUnitId:(id)arg1 unitLoggingData:(id)arg2 ;
-(void)_inboxUnitsConnectionDidChange:(id)arg1 ;
-(void)_inboxUnitsConnectionDidChangeOnMainThread:(id)arg1 ;
-(void)inboxFetcher:(id)arg1 didFetchUnitsConnection:(id)arg2 ;
-(id)allInboxUnitsForInboxFetcher:(id)arg1 ;
-(void)inboxUnitsStoreDidRestoreInboxUnits:(id)arg1 ;
-(void)hidePYMMWithUserId:(id)arg1 ;
-(MNInboxUnitsMetadataStore *)inboxUnitsMetadataStore;
@end

