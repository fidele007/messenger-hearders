/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageFetchRequestListening.h>
#import <Messenger/MNMessageBatchRequestListening.h>
#import <Messenger/MNMessageStoreRequestHandling.h>

@protocol OS_dispatch_queue, MNMessageRequestRunning;
@class NSObject, MNAsyncOperationTracker, MNMessageBatchRequestListenerFactory, MNMessageFetchRequestListenerFactory, NSString;

@interface MNMessageStoreRequestCoordinator : NSObject <MNMessageFetchRequestListening, MNMessageBatchRequestListening, MNMessageStoreRequestHandling> {

	NSObject*<OS_dispatch_queue> _queue;
	id<MNMessageRequestRunning> _requestRunner;
	MNAsyncOperationTracker* _asyncOperationTracker;
	MNMessageBatchRequestListenerFactory* _batchListenerFactory;
	MNMessageFetchRequestListenerFactory* _listenerFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)handleMessageBatchRequest:(id)arg1 ;
-(unsigned long long)handleMessageFetchRequest:(id)arg1 ;
-(unsigned long long)handleMessageRangeRequest:(id)arg1 ;
-(id)initWithRequestRunner:(id)arg1 listenerFactory:(id)arg2 batchListenerFactory:(id)arg3 queue:(id)arg4 ;
-(void)messageBatchRequest:(unsigned long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)messageBatchRequest:(unsigned long long)arg1 didFailWithError:(id)arg2 ;
-(void)messageBatchRequest:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)messageFetchRequest:(unsigned long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)messageFetchRequest:(unsigned long long)arg1 didFailWithError:(id)arg2 ;
-(void)messageFetchRequest:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)cancelRequest:(unsigned long long)arg1 ;
@end
