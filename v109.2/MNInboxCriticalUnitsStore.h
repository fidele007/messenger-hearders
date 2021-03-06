/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNInboxUnitUpdateListening.h>

@protocol OS_dispatch_queue;
@class MNNonDiscardingBlobStore, MNInboxUnitsStore, NSObject, FBValueObjectPair, NSString;

@interface MNInboxCriticalUnitsStore : NSObject <MNInboxUnitUpdateListening> {

	MNNonDiscardingBlobStore* _blobStore;
	MNInboxUnitsStore* _inboxUnitStore;
	NSObject*<OS_dispatch_queue> _queue;
	FBValueObjectPair* _memoryCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)inboxUnitsDidUpdate:(id)arg1 isFreshData:(BOOL)arg2 ;
-(void)loadCriticalUnitsWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didRestoreInboxUnits:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_unitIdsAboveRecent;
-(id)_appendRecentAndMoreThreads:(id)arg1 ;
-(id)_filterCriticalUnits:(id)arg1 ;
-(id)initWithBlobStore:(id)arg1 inboxUnitsStore:(id)arg2 queue:(id)arg3 ;
-(void)_writeToDisk;
@end

