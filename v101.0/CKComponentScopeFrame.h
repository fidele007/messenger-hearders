/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class CKComponentScopeHandle;

@interface CKComponentScopeFrame : NSObject {

	unordered_map<_CKStateScopeKey, CKComponentScopeFrame *, std::__1::hash<_CKStateScopeKey>, std::__1::equal_to<_CKStateScopeKey>, std::__1::allocator<std::__1::pair<const _CKStateScopeKey, CKComponentScopeFrame *> > >* _children;
	CKComponentScopeHandle* _handle;

}

@property (nonatomic,readonly) CKComponentScopeHandle * handle;              //@synthesize handle=_handle - In the implementation block
+(CKComponentScopeFramePair)childPairForPair:(const CKComponentScopeFramePair*)arg1 newRoot:(id)arg2 componentClass:(Class)arg3 identifier:(id)arg4 initialStateCreator:(/*^block*/id)arg5 stateUpdates:(const unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > >*)arg6 ;
-(CKComponentScopeHandle *)handle;
-(id)initWithHandle:(id)arg1 ;
@end

