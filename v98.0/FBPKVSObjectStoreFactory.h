/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBUserSession;

@interface FBPKVSObjectStoreFactory : NSObject {

	FBUserSession* _session;
	unordered_map<FBDiskStoreIdentifier, FBPKVSObjectStore *, std::__1::hash<FBDiskStoreIdentifier>, std::__1::equal_to<FBDiskStoreIdentifier>, std::__1::allocator<std::__1::pair<const FBDiskStoreIdentifier, FBPKVSObjectStore *> > >* _stores;
	mutex _lock;

}
-(id)objectStoreForPKVSIdentifier:(unsigned)arg1 ;
-(id)objectStoreForDiskCacheIdentifier:(unsigned)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
