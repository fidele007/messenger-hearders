/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMediaSegmentStream.h>
#import <Messenger/FBMediaResumableSegmentStream.h>
#import <Messenger/FBMediaUploadListener.h>

@protocol OS_dispatch_queue, FBNetworkDispatch;
@class NSString, NSObject, FBMediaSegmentStreamConfig, FBMediaUploadHandler, FBMediaSegmentStreamMetricsBuilder, NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface FBMediaSegmentStreamImpl : NSObject <FBMediaSegmentStream, FBMediaResumableSegmentStream, FBMediaUploadListener> {

	NSString* _streamId;
	NSObject*<OS_dispatch_queue> _queue;
	FBMediaSegmentStreamConfig* _config;
	id<FBNetworkDispatch> _networkDispatcher;
	FBMediaUploadHandler* _uploadHandler;
	FBMediaSegmentStreamMetricsBuilder* _metricsBuilder;
	NSMutableSet* _inflightSegmentJobs;
	NSMutableSet* _completedSegmentJobs;
	NSMutableSet* _failedSegmentJobs;
	NSMutableDictionary* _segmentJobs;
	NSMutableDictionary* _completedPercentageOfJobs;
	NSMutableArray* _pendingSegmentJobs;
	/*^block*/id _streamProgressBlock;
	/*^block*/id _streamCompletionBlock;
	/*^block*/id _streamCancelBlock;
	int _segmentStartOffset;
	int _numberOfSegments;
	double _completedPercentage;
	BOOL _completionBlockCalled;
	BOOL _cancelSignalSent;
	BOOL _streamCanceled;
	/*^block*/id _uploadFailureBlock;
	BOOL _isResumed;
	NSString* _token;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)uploadDidSucceed:(id)arg1 withResponse:(id)arg2 metrics:(id)arg3 ;
-(void)uploadDidFail:(id)arg1 withFailureReason:(unsigned long long)arg2 isResumable:(BOOL)arg3 metrics:(id)arg4 ;
-(void)uploadWasCancelled:(id)arg1 metrics:(id)arg2 ;
-(void)uploadHasProgressed:(id)arg1 withProgressInformation:(FBMediaUploadJobProgressInformation)arg2 ;
-(void)uploadSegmentWithContent:(id)arg1 segmentType:(unsigned long long)arg2 ;
-(id)extraLogging;
-(void)_uploadSegment:(id)arg1 ;
-(id)initWithConfig:(id)arg1 networkDispatcher:(id)arg2 queue:(id)arg3 uploadHandler:(id)arg4 streamProgress:(/*^block*/id)arg5 streamCompletion:(/*^block*/id)arg6 streamCancel:(/*^block*/id)arg7 ;
-(id)jobId;
-(void)resumeWithStreamProgress:(/*^block*/id)arg1 streamCompletion:(/*^block*/id)arg2 streamCancel:(/*^block*/id)arg3 ;
-(id)initWithDetail:(id)arg1 networkDispatcher:(id)arg2 queue:(id)arg3 uploadHandler:(id)arg4 ;
-(id)cacheableDetail;
-(void)_streamStarted:(id)arg1 ;
-(void)_streamFailedWithErrorCode:(long long)arg1 underlyingError:(id)arg2 underlyingErrorResumable:(BOOL)arg3 underlyingErrorInfo:(id)arg4 ;
-(double)_getNormalizedCompletedPercentage;
-(int)_getSegmentStartOffset;
-(void)_incrementSegmentStartOffset:(int)arg1 ;
-(void)_enquePending:(id)arg1 ;
-(void)_fetchResumableSegmentUploadJob:(id)arg1 config:(id)arg2 ;
-(void)_addInflight:(id)arg1 dataLength:(id)arg2 ;
-(void)_startOrResumeSegmentUploadJob:(id)arg1 config:(id)arg2 resumableJob:(id)arg3 ;
-(void)_cancelAll:(BOOL)arg1 ;
-(void)_streamCompleted:(id)arg1 ;
-(void)_streamCanceled;
-(void)_cancelStream;
-(void)_end;
-(void)cancel;
-(void)start;
@end

