/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBSimpleDownloaderProtocol.h>

@protocol FBNetworkDispatch, FBDiskCacheProtocol, FBSimpleDownloaderPerfLogger, OS_dispatch_queue;
@class NSFileManager, FBSimpleDownloaderConfig, NSMutableDictionary, NSObject, NSString;

@interface FBSimpleDownloader : NSObject <FBNetworkerRequestDelegate, FBSimpleDownloaderProtocol> {

	NSFileManager* _fileManager;
	id<FBNetworkDispatch> _networkDispatcher;
	id<FBDiskCacheProtocol> _diskCache;
	FBSimpleDownloaderConfig* _config;
	id<FBSimpleDownloaderPerfLogger> _logger;
	NSMutableDictionary* _inFlightFetches;
	NSObject*<OS_dispatch_queue> _serializationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didUpdateDownloadProgress:(double)arg2 complete:(BOOL)arg3 ;
-(id)initWithSession:(id)arg1 config:(id)arg2 logger:(id)arg3 ;
-(id)fetchWithRemoteURL:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)fetchWithRemoteURL:(id)arg1 callbackQueue:(id)arg2 progressBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)cancelFetchWithHandle:(id)arg1 ;
-(id)initWithNetworkDispatcher:(id)arg1 diskCache:(id)arg2 fileManager:(id)arg3 config:(id)arg4 logger:(id)arg5 ;
-(void)_informClientForFetch:(id)arg1 diskCacheURL:(id)arg2 ;
-(void)_startSimpleDownloadForFetch:(id)arg1 ;
-(void)_fetchFileURLFromDiskCacheForRemoteURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_informClientAboutFailureForFetch:(id)arg1 ;
-(void)_handleDownloadedFileForFetch:(id)arg1 data:(id)arg2 ;
-(void)fetchFileURLFromDiskCacheForRemoteURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithNetworkDispatcher:(id)arg1 diskCache:(id)arg2 config:(id)arg3 logger:(id)arg4 ;
-(void)dealloc;
@end
