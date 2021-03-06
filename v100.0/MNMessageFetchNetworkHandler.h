/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageFetchRequestHandling.h>
#import <Messenger/MNMessageBatchRequestHandling.h>

@protocol MNMessageFetchNetworkRequestRunning, OS_dispatch_queue;
@class FBNetworkActivityManager, NSObject, NSString;

@interface MNMessageFetchNetworkHandler : NSObject <MNMessageFetchRequestHandling, MNMessageBatchRequestHandling> {

	id<MNMessageFetchNetworkRequestRunning> _runner;
	FBNetworkActivityManager* _networkActivityManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleSuccessfulNetworkResponseMessageSet:(id)arg1 forRequest:(id)arg2 forwardBlock:(/*^block*/id)arg3 responseBlock:(/*^block*/id)arg4 ;
-(void)_handleErrorFromNetworkFetch:(id)arg1 forRequest:(id)arg2 forwardBlock:(/*^block*/id)arg3 ;
-(void)_handleSuccessfulBatchResponse:(id)arg1 threadQueryToErrorMap:(id)arg2 forBatchRequest:(id)arg3 forwardBlock:(/*^block*/id)arg4 responseBlock:(/*^block*/id)arg5 ;
-(void)_handleErrorFromNetworkFetch:(id)arg1 forBatchRequest:(id)arg2 forwardBlock:(/*^block*/id)arg3 ;
-(void)handleMessageFetchRequest:(id)arg1 longOperationDidBeginBlock:(/*^block*/id)arg2 forwardBlock:(/*^block*/id)arg3 responseBlock:(/*^block*/id)arg4 ;
-(void)handleMessageBatchRequest:(id)arg1 longOperationDidBeginBlock:(/*^block*/id)arg2 forwardBlock:(/*^block*/id)arg3 responseBlock:(/*^block*/id)arg4 ;
-(id)initWithNetworkMessageFetchRequestRunner:(id)arg1 networkActivityManager:(id)arg2 queue:(id)arg3 ;
@end

