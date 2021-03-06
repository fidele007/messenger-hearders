/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSpotlightUserIndexing.h>

@protocol OS_dispatch_queue;
@class CSSearchableIndex, NSObject, MNSpotlightIndexingListenerAnnouncer, NSOperationQueue, NSMutableArray, FBTimeThrottler, NSString;

@interface MNSpotlightUserIndexer : NSObject <MNSpotlightUserIndexing> {

	CSSearchableIndex* _searchableIndex;
	BOOL _isStarted;
	NSObject*<OS_dispatch_queue> _queue;
	MNSpotlightIndexingListenerAnnouncer* _announcer;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _imagedSearchableItems;
	FBTimeThrottler* _timeThrottler;
	BOOL _currentlyIndexingImages;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)indexSearchableItems:(id)arg1 ;
-(void)deleteIndexForUserIds:(id)arg1 ;
-(void)deleteIdentifiers:(id)arg1 ;
-(void)clearIndexWithCompletion:(/*^block*/id)arg1 ;
-(void)addSpotlightIndexingListener:(id)arg1 ;
-(void)removeSpotlightIndexingListener:(id)arg1 ;
-(id)initWithSearchableIndex:(id)arg1 queue:(id)arg2 ;
-(void)_indexImagedSearchableItems;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)_didReceiveMemoryWarning;
@end

