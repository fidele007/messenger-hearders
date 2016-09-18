/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserSessionObserving.h>
#import <Messenger/MNViewModelSubscriptionService.h>

@protocol MNViewModelSubscriptionServiceProviding, OS_dispatch_queue, MNViewModelSubscribing, MNUserSessionObserving;
@class MNUserSessionObservingCenter, NSObject, MNAsyncOperationTracker, NSString;

@interface MNViewModelSubscriptionServiceHandler : NSObject <MNUserSessionObserving, MNViewModelSubscriptionService> {

	id<MNViewModelSubscriptionServiceProviding> _provider;
	MNUserSessionObservingCenter* _userSessionObservingCenter;
	NSObject*<OS_dispatch_queue> _invocationQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	id<MNViewModelSubscribing> _subscriberCoordinator;
	id<MNUserSessionObserving> _dispatchedSelfUserSessionObserver;
	MNAsyncOperationTracker* _tracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)startSubscription:(id)arg1 ;
-(void)cancelSubscription:(id)arg1 ;
-(void)willEndUserSession;
-(void)didEndUserSession;
-(id)initWithSubscriptionProvider:(id)arg1 userSessionObservingCenter:(id)arg2 queue:(id)arg3 ;
-(BOOL)_isStarted;
-(void)_cancelAllSubscriptions;
-(void)_invokeBlockOnInvocationQueue:(/*^block*/id)arg1 ;
-(void)stop;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
@end

