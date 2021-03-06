/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLConnectionPersistenceWriter.h>
#import <Messenger/FBGraphQLConnectionPersistenceIdleDetectorListener.h>

@protocol OS_dispatch_source;
@class FBGraphQLConnectionPersistenceCoordinatorConfiguration, FBGraphQLConnectionStorePersistentPageLoader, NSString, NSObject, FBGraphQLConnectionStoreChunk, FBGraphQLConnectionStorePersistenceCoordinatorListenerAnnouncer, FBGraphQLConnectionStore, FBGraphQLConnectionPersistenceBehavior;

@interface FBGraphQLConnectionStorePersistenceCoordinator : NSObject <FBGraphQLConnectionPersistenceWriter, FBGraphQLConnectionPersistenceIdleDetectorListener> {

	FBGraphQLConnectionPersistenceCoordinatorConfiguration* _configuration;
	BOOL _isLinkedWithStore;
	BOOL _hasLoadedRemainingEdges;
	FBGraphQLConnectionStorePersistentPageLoader* _persistentPageLoader;
	NSString* _diskCacheKey;
	unsigned long long _persistenceEdgeCountLimit;
	NSObject*<OS_dispatch_source> _coalescenceTimer;
	FBGraphQLConnectionStoreChunk* _pendingChunk;
	/*^block*/id _restoredEdgeFilter;
	long long _persistenceStrategy;
	FBGraphQLConnectionStorePersistenceCoordinatorListenerAnnouncer* _announcer;
	FBGraphQLConnectionStore* _store;
	FBGraphQLConnectionPersistenceBehavior* _behavior;

}

@property (nonatomic,readonly) FBGraphQLConnectionPersistenceBehavior * behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)linkWithAndInitializeStateForStore:(id)arg1 ;
-(void)persistenceBehaviorShouldPersistPage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)immediatelyPersistPendingStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchPageType:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)graphQLConnectionPersistenceIdleDetectorDidDetectIdleState:(id)arg1 ;
-(FBGraphQLConnectionPersistenceBehavior *)behavior;
-(id)initWithConfiguration:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

