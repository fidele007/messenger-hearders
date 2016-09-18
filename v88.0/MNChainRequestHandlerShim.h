/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNChainRequestRunning.h>

@protocol MNChainResponsePropagating, MNChainRequestHandling, MNThreadSummaryRequestHandling, MNMessageFetchRequestHandling, MNMessageBatchRequestHandling, MNJointRequestChainHandling, MNThreadListRequestHandling, MNSecureThreadListRequestHandling, MNSecureThreadRequestHandling, MNThreadSummaryRequestPropagating, MNMessageBatchRequestPropagating, MNSecureThreadResponsePropagating, MNThreadListResponsePropagating;
@class NSString;

@interface MNChainRequestHandlerShim : NSObject <MNChainRequestRunning> {

	id<MNChainResponsePropagating> _propagator;
	id<MNChainRequestHandling> _nextHandler;
	unsigned long long _messagingDataHandlerOptions;
	id<MNThreadSummaryRequestHandling> _threadSummaryRequestHandler;
	id<MNMessageFetchRequestHandling> _messageFetchHandler;
	id<MNMessageBatchRequestHandling> _messageBatchHandler;
	id<MNJointRequestChainHandling> _jointHandler;
	id<MNThreadListRequestHandling> _threadListRequestHandler;
	id<MNSecureThreadListRequestHandling> _secureThreadListRequestHandler;
	id<MNSecureThreadRequestHandling> _secureThreadRequestHandler;
	id<MNThreadSummaryRequestPropagating> _threadSummaryResponsePropagator;
	id<MNMessageBatchRequestPropagating> _messageBatchPropagator;
	id<MNSecureThreadResponsePropagating> _secureThreadResponsePropagator;
	id<MNThreadListResponsePropagating> _threadListResponsePropagator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)chainRequestId:(unsigned long long)arg1 failedWithError:(id)arg2 ;
-(void)handleChainRequest:(id)arg1 ;
-(void)configureWithResultPropagator:(id)arg1 ;
-(void)longOperationDidBeginForChainRequestId:(unsigned long long)arg1 sourceIdentifier:(long long)arg2 ;
-(void)chainRequestId:(unsigned long long)arg1 didUpdateResponse:(id)arg2 ;
-(void)chainRequestId:(unsigned long long)arg1 wasHandled:(id)arg2 ;
-(BOOL)_propagateThreadSummaryResponse:(id)arg1 requestId:(unsigned long long)arg2 isComplete:(BOOL)arg3 continueBlock:(/*^block*/id)arg4 ;
-(BOOL)_propagateMessageBatchResponse:(id)arg1 requestId:(unsigned long long)arg2 isComplete:(BOOL)arg3 continueBlock:(/*^block*/id)arg4 ;
-(BOOL)_propagateThreadListResponse:(id)arg1 requestId:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)_propagateSecureThreadResponse:(id)arg1 requestId:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)_propagateMessagingDataFailure:(id)arg1 requestId:(unsigned long long)arg2 continueBlock:(/*^block*/id)arg3 ;
-(BOOL)_propagateThreadListResponseFailure:(id)arg1 requestId:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)_propagateThreadSummaryResponseFailure:(id)arg1 requestId:(unsigned long long)arg2 continueBlock:(/*^block*/id)arg3 ;
-(BOOL)_propagateMessageBatchResponseFailure:(id)arg1 requestId:(unsigned long long)arg2 continueBlock:(/*^block*/id)arg3 ;
-(BOOL)_propagateSecureThreadFailure:(id)arg1 requestId:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)configureWithNextChainHandler:(id)arg1 ;
-(void)configureWithThreadSummaryHandler:(id)arg1 handlerOptions:(unsigned long long)arg2 ;
-(void)configureWithThreadSummaryPropagator:(id)arg1 ;
-(void)configureWithMessageFetchHandler:(id)arg1 handlerOptions:(unsigned long long)arg2 ;
-(void)configureWithMessageBatchHandler:(id)arg1 handlerOptions:(unsigned long long)arg2 ;
-(void)configureWithMessageBatchPropagator:(id)arg1 ;
-(void)configureWithJointHandler:(id)arg1 ;
-(void)configureWithThreadListHandler:(id)arg1 ;
-(void)configureWithSecureThreadListHandler:(id)arg1 ;
-(void)configureWithSecureThreadHandler:(id)arg1 ;
-(void)configureWithSecureThreadResponsePropagator:(id)arg1 ;
-(void)configureWithThreadListResponsePropagator:(id)arg1 ;
@end

