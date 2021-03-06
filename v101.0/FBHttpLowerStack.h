/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBHttpLowerStack : NSObject {

	shared_ptr<facebook::mobile::xplat::executor::DispatchQueueExecutor>* _asyncWorker;
	unique_ptr<facebook::mobile::xplat::executor::DispatchQueueExecutor, std::__1::default_delete<facebook::mobile::xplat::executor::DispatchQueueExecutor> >* _announcementExecutor;
	unique_ptr<(anonymous namespace)::LowerStaticStack, std::__1::default_delete<(anonymous namespace)::LowerStaticStack> >* _lowerStaticStack;
	shared_ptr<(anonymous namespace)::LowerSwappableStack>* _lowerSwappableStack;
	BackgroundlessControl* _backgroundlessControl;
	mutex _swapLock;

}
-(unique_ptr<facebook::mobile::xplat::executor::ObserverToken, std::__1::default_delete<facebook::mobile::xplat::executor::ObserverToken> >*)addObserver:(const shared_ptr<facebook::tigon::TigonObserver>Ref)arg1 withExecutor:(Executor*)arg2 ;
-(void)activeScenePathDidChangeTo:(id)arg1 ;
-(void)enableWhitelistTags:(id)arg1 ;
-(void)updateTigonPriorityResolverConfig:(const TigonPriorityResolverPolicyConfig*)arg1 ;
-(id)initWithConfiguration:(id)arg1 dispatchQueue:(id)arg2 announcementQueue:(id)arg3 backgroundlessControl:(BackgroundlessControl*)arg4 ;
-(unique_ptr<facebook::mobile::xplat::executor::ObserverToken, std::__1::default_delete<facebook::mobile::xplat::executor::ObserverToken> >*)addDebugObserver:(const shared_ptr<facebook::tigon::TigonDebugObserver>Ref)arg1 withExecutor:(Executor*)arg2 ;
-(void)transferRequestsToBackground;
-(unique_ptr<facebook::mobile::xplat::executor::ObserverToken, std::__1::default_delete<facebook::mobile::xplat::executor::ObserverToken> >*)addDebugObserver:(const shared_ptr<facebook::tigon::TigonDebugObserver>Ref)arg1 ;
-(unique_ptr<facebook::mobile::xplat::executor::ObserverToken, std::__1::default_delete<facebook::mobile::xplat::executor::ObserverToken> >*)addObserver:(const shared_ptr<facebook::tigon::TigonObserver>Ref)arg1 ;
-(TigonService*)service;
-(void)enterBackground;
-(void)enterForeground;
-(void)cancelAllRequests;
-(void)kick;
-(void)configure:(id)arg1 ;
@end

