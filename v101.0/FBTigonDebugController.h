/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBTigonDebugViewUpdating;
#import <Messenger/Messenger-Structs.h>
@class NSObject, NSCountedSet;

@interface FBTigonDebugController : NSObject {

	unique_ptr<facebook::mobile::xplat::executor::SerialDispatchQueueExecutor, std::__1::default_delete<facebook::mobile::xplat::executor::SerialDispatchQueueExecutor> >* _executor;
	unique_ptr<facebook::mobile::xplat::executor::ObserverToken, std::__1::default_delete<facebook::mobile::xplat::executor::ObserverToken> >* _listenerToken;
	NSObject*<OS_dispatch_queue> _queue;
	id<FBTigonDebugViewUpdating> _viewListener;
	NSCountedSet* _countedSet;

}
-(void)_didAddNetworkRequestWithRequest:(const TigonRequestAdded*)arg1 ;
-(void)dealloc;
-(id)init;
@end

