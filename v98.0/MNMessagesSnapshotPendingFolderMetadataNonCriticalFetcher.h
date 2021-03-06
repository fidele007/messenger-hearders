/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBMMessagesSnapshotNonCriticalNetworkFetching.h>

@protocol FBMMessagesSnapshotNetworkFetchingDelegate;
@class MNThreadListMetadataFetcher, MNPendingRequestsStore, NSString;

@interface MNMessagesSnapshotPendingFolderMetadataNonCriticalFetcher : NSObject <FBClassProvidable, FBMMessagesSnapshotNonCriticalNetworkFetching> {

	MNThreadListMetadataFetcher* _otherListMetaDataFetcher;
	MNPendingRequestsStore* _pendingRequestsStore;
	id<FBMMessagesSnapshotNetworkFetchingDelegate> _delegate;
	BOOL _hasBeenRun;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithOtherThreadListMetaDataFetcher:(id)arg1 pendingRequestsStore:(id)arg2 ;
-(void)_didFetchMetadataWithUnreadThreadsNumber:(unsigned long long)arg1 totalThreadsNumber:(unsigned long long)arg2 mailboxSnippet:(id)arg3 ;
-(void)_couldNotFetchThreadListMetaDataWithError:(id)arg1 ;
-(void)performNetworkFetchWithDelegate:(id)arg1 ;
-(void)cancel;
@end

