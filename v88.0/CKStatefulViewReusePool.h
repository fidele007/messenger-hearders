/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface CKStatefulViewReusePool : NSObject {

	unordered_map<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem, PoolKeyHasher, std::__1::equal_to<std::__1::pair<__unsafe_unretained Class, id> >, std::__1::allocator<std::__1::pair<const std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem> > >* _pool;

}
+(id)sharedPool;
-(id)dequeueStatefulViewForControllerClass:(Class)arg1 preferredSuperview:(id)arg2 context:(id)arg3 ;
-(void)enqueueStatefulView:(id)arg1 forControllerClass:(Class)arg2 context:(id)arg3 ;
@end

