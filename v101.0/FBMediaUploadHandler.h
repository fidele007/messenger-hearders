/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMediaUploadListener.h>

@protocol OS_dispatch_queue, FBMediaUploadJobFactory, FBNetworkDispatch, FBMediaUploadRuntimeConfigProvider;
@class NSObject, NSMutableDictionary, NSMutableArray, NSMutableSet, FBDiskCache, NSString;

@interface FBMediaUploadHandler : NSObject <FBMediaUploadListener> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _queuePerformer;
	id<FBMediaUploadJobFactory> _uploadJobFactory;
	id<FBNetworkDispatch> _networkDispatcher;
	NSMutableDictionary* _jobsById;
	NSMutableArray* _pendingJobIds;
	NSMutableSet* _inflightJobIds;
	NSMutableArray* _resumableJobIds;
	long long _resumableUploadsMemoryUsageInBytes;
	FBDiskCache* _diskCache;
	NSObject*<OS_dispatch_queue> _diskCacheQueue;
	NSMutableSet* _jobsInSending;
	id<FBMediaUploadRuntimeConfigProvider> _configProvider;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)uploadDidSucceed:(id)arg1 withResponse:(id)arg2 metrics:(id)arg3 ;
-(void)uploadDidFail:(id)arg1 withFailureReason:(unsigned long long)arg2 isResumable:(BOOL)arg3 metrics:(id)arg4 ;
-(void)uploadWasCancelled:(id)arg1 metrics:(id)arg2 ;
-(void)uploadHasProgressed:(id)arg1 withProgressInformation:(FBMediaUploadJobProgressInformation)arg2 ;
-(id)initWithUploadJobFactory:(id)arg1 networkDispatcher:(id)arg2 diskCache:(id)arg3 queue:(id)arg4 ;
-(void)startUploadJobWithContentSource:(id)arg1 config:(id)arg2 listener:(id)arg3 ;
-(void)cancelUploadJob:(id)arg1 ;
-(id)initWithUploadJobFactory:(id)arg1 networkDispatcher:(id)arg2 diskCache:(id)arg3 queue:(id)arg4 configProvider:(id)arg5 ;
-(void)fetchResumableJobForId:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)resumeUploadJob:(id)arg1 listener:(id)arg2 ;
-(BOOL)_canStartMoreJobs;
-(id)_popPendingUpload;
-(void)_startUploadJobWithContentSourceIfNecessary:(id)arg1 config:(id)arg2 listener:(id)arg3 ;
-(void)_startUploadJobWithContentSource:(id)arg1 config:(id)arg2 listener:(id)arg3 ;
-(void)_insertPendingUpload:(id)arg1 ;
-(void)_initiateUploadIfPossible;
-(void)_removePendingJob:(id)arg1 ;
-(void)_readCachedUploadJob:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_uploadHasFinishedForever:(id)arg1 ;
-(void)_uploadHasFinishedResumably:(id)arg1 ;
-(void)_removeCachedUploadJob:(id)arg1 ;
-(void)_insertResumableUpload:(id)arg1 restored:(BOOL)arg2 ;
-(void)_cacheUploadJob:(id)arg1 ;
-(id)_createUploadJobFromData:(id)arg1 withJobId:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end

