/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBKeyValueObjectStore.h>

@protocol FBPersistentKeyValueStoreProtocol, OS_dispatch_queue;
@class NSObject, NSMapTable, NSString;

@interface FBPKVSObjectStore : NSObject <FBKeyValueObjectStore> {

	id<FBPersistentKeyValueStoreProtocol> _pkvs;
	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _mostRecentWrites;
	unordered_map<NSString *, std::__1::shared_ptr<int>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>, std::__1::allocator<std::__1::pair<NSString *const, std::__1::shared_ptr<int> > > >* _keySentinel;
	mutex _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchObjectForKey:(id)arg1 queue:(id)arg2 completionCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 ;
-(void)storeObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeItemForKey:(id)arg1 ;
-(void)_fetchObjectForKey:(id)arg1 queue:(id)arg2 completionCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 ;
-(shared_ptr<int>*)_getSentinelPtrForKey:(id)arg1 ;
-(void)_encodeAndStoreObject:(id)arg1 forKey:(id)arg2 oldSentinelValue:(int)arg3 sentinelPtr:(shared_ptr<int>*)arg4 ;
-(void)_storeData:(id)arg1 forKey:(id)arg2 object:(id)arg3 oldSentinelValue:(int)arg4 sentinelPtr:(shared_ptr<int>*)arg5 ;
-(id)initWithPKVS:(id)arg1 ;
-(id)_encodeObject:(id)arg1 ;
@end

