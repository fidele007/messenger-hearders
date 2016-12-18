/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNBatchThreadNetworkFetchRunning;
@class MNHandlerThreadSummaryRequest, MNHandlerMessageBatchRequest, NSString;

@interface MNRemotePopulationJobInfo : NSObject {

	unsigned long long _requestId;
	MNHandlerThreadSummaryRequest* _summaryRequest;
	MNHandlerMessageBatchRequest* _messageRequest;
	NSString* _loadingIndicatorKey;
	/*^block*/id _forwardBlock;
	/*^block*/id _threadResponseBlock;
	/*^block*/id _messageResponseBlock;
	id<MNBatchThreadNetworkFetchRunning> _requestRunner;

}

@property (assign,nonatomic) unsigned long long requestId;                                    //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy) MNHandlerThreadSummaryRequest * summaryRequest;                    //@synthesize summaryRequest=_summaryRequest - In the implementation block
@property (nonatomic,copy) MNHandlerMessageBatchRequest * messageRequest;                     //@synthesize messageRequest=_messageRequest - In the implementation block
@property (nonatomic,copy) NSString * loadingIndicatorKey;                                    //@synthesize loadingIndicatorKey=_loadingIndicatorKey - In the implementation block
@property (nonatomic,copy) id forwardBlock;                                                   //@synthesize forwardBlock=_forwardBlock - In the implementation block
@property (nonatomic,copy) id threadResponseBlock;                                            //@synthesize threadResponseBlock=_threadResponseBlock - In the implementation block
@property (nonatomic,copy) id messageResponseBlock;                                           //@synthesize messageResponseBlock=_messageResponseBlock - In the implementation block
@property (nonatomic,retain) id<MNBatchThreadNetworkFetchRunning> requestRunner;              //@synthesize requestRunner=_requestRunner - In the implementation block
-(NSString *)loadingIndicatorKey;
-(void)setLoadingIndicatorKey:(NSString *)arg1 ;
-(MNHandlerThreadSummaryRequest *)summaryRequest;
-(void)setSummaryRequest:(MNHandlerThreadSummaryRequest *)arg1 ;
-(MNHandlerMessageBatchRequest *)messageRequest;
-(void)setMessageRequest:(MNHandlerMessageBatchRequest *)arg1 ;
-(id)forwardBlock;
-(void)setForwardBlock:(id)arg1 ;
-(id)threadResponseBlock;
-(void)setThreadResponseBlock:(id)arg1 ;
-(id)messageResponseBlock;
-(void)setMessageResponseBlock:(id)arg1 ;
-(id<MNBatchThreadNetworkFetchRunning>)requestRunner;
-(void)setRequestRunner:(id<MNBatchThreadNetworkFetchRunning>)arg1 ;
-(unsigned long long)requestId;
-(void)setRequestId:(unsigned long long)arg1 ;
@end

