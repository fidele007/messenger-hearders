/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWebImageDownloader.h>

@protocol MNDefaultProfileImageFactory, OS_dispatch_queue;
@class FBImageDownloader, MNCDNProfileImageDownloader, MNBatchProfileImageFetcher, MNCDNProfileImageSizeConfiguration, NSObject, MNWebCDNProfileImageCache, MNWebCDNProfileImageSpecifier, NSString;

@interface MNWebCDNProfileImageDownloader : NSObject <FBWebImageDownloader> {

	FBImageDownloader* _imageDownloader;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	MNBatchProfileImageFetcher* _batchProfileImageFetcher;
	MNCDNProfileImageSizeConfiguration* _profileImageSizeConfiguration;
	id<MNDefaultProfileImageFactory> _defaultProfileImageFactory;
	NSObject*<OS_dispatch_queue> _executionQueue;
	MNWebCDNProfileImageCache* _cache;
	mutex _stateVariablesLock;
	MNWebCDNProfileImageSpecifier* _specifier;
	/*^block*/id _operationCancellationBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadWithSpecifier:(id)arg1 scenePath:(id)arg2 analyticsTags:(id)arg3 queue:(id)arg4 downloadBlock:(/*^block*/id)arg5 ;
-(id)initWithProfileImageCache:(id)arg1 imageDownloader:(id)arg2 profileImageDownloader:(id)arg3 batchProfileImageFetcher:(id)arg4 profileImageSizeConfiguration:(id)arg5 defaultProfileImageFactory:(id)arg6 executionQueue:(id)arg7 ;
-(BOOL)_clearStateIfIsNotCancelledForSpecifier:(id)arg1 ;
-(void)_executeDownloadWithSpecifier:(id)arg1 scenePath:(id)arg2 analyticsTags:(id)arg3 queue:(id)arg4 downloadBlock:(/*^block*/id)arg5 ;
-(void)_cancelThreadUnsafe;
-(void)_downloadFromCustomURL:(id)arg1 specifier:(id)arg2 scenePath:(id)arg3 analyticsTags:(id)arg4 callbackQueue:(id)arg5 downloadBlock:(/*^block*/id)arg6 ;
-(void)_downloadFromCDNUsingGroupId:(id)arg1 specifier:(id)arg2 scenePath:(id)arg3 analyticsTags:(id)arg4 callbackQueue:(id)arg5 downloadBlock:(/*^block*/id)arg6 ;
-(void)_downloadFromCDNUsingProfileImageIdentifiers:(id)arg1 specifier:(id)arg2 scenePath:(id)arg3 analyticsTags:(id)arg4 callbackQueue:(id)arg5 downloadBlock:(/*^block*/id)arg6 ;
-(void)_processResults:(id)arg1 specifier:(id)arg2 callbackQueue:(id)arg3 downloadBlock:(/*^block*/id)arg4 ;
-(void)_setOperationCancellationBlockWithCancelledStateCheck:(/*^block*/id)arg1 specifier:(id)arg2 callbackQueue:(id)arg3 downloadBlock:(/*^block*/id)arg4 ;
-(void)_clearStateThreadUnsafe;
-(void)cancel;
@end

