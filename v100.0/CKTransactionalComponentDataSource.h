/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKComponentStateListener.h>

@protocol OS_dispatch_queue;
@class CKTransactionalComponentDataSourceState, CKTransactionalComponentDataSourceListenerAnnouncer, NSMutableArray, NSThread, NSObject, NSString;

@interface CKTransactionalComponentDataSource : NSObject <CKComponentStateListener> {

	CKTransactionalComponentDataSourceState* _state;
	CKTransactionalComponentDataSourceListenerAnnouncer* _announcer;
	unordered_map<int, std::__1::unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > >, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, std::__1::unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > > > > >* _pendingAsynchronousStateUpdates;
	unordered_map<int, std::__1::unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > >, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, std::__1::unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > > > > >* _pendingSynchronousStateUpdates;
	NSMutableArray* _pendingAsynchronousModifications;
	NSThread* _workThreadOverride;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)componentScopeHandleWithIdentifier:(int)arg1 rootIdentifier:(int)arg2 didReceiveStateUpdate:(/*^block*/id)arg3 mode:(unsigned long long)arg4 ;
-(void)applyChangeset:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)updateConfiguration:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)reloadWithMode:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(void)_enqueueModification:(id)arg1 ;
-(id)_cancelEnqueuedModificationsOfType:(Class)arg1 ;
-(void)_synchronouslyApplyChange:(id)arg1 ;
-(void)_processStateUpdates;
-(void)_startFirstAsynchronousModification;
-(void)_applyModificationPair:(id)arg1 ;
-(id)state;
-(id)initWithConfiguration:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end

