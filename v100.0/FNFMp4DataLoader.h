/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FNFDataLoader.h>

@protocol FNFDataLoaderDelegate, OS_dispatch_queue;
@class FNFAssetResourceLoader, FNFDataBlockDistributor, NSObject, FNFAssetResourceLoadingRequest, NSURL;

@interface FNFMp4DataLoader : NSObject <FNFDataLoader> {

	id<FNFDataLoaderDelegate> _delegate;
	FNFAssetResourceLoader* _resourceLoader;
	FNFDataBlockDistributor* _dataBlockDistributor;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	FNFAssetResourceLoadingRequest* _currentResourceLoaderRequest;
	unsigned long long _requestOffset;
	unsigned long long _receiveOffset;
	BOOL _fullyLoaded;
	unsigned long long _bitrate;
	NSURL* _url;
	unsigned long long _fileSize;
	BOOL _async;

}
-(void)_dataCallback:(id)arg1 offset:(unsigned long long)arg2 dataRequest:(id)arg3 ;
-(void)_dataFinished:(id)arg1 dataRequest:(id)arg2 contentInfo:(id)arg3 loadingRequest:(id)arg4 ;
-(id)initWithUrl:(id)arg1 bitrate:(unsigned long long)arg2 dataBlockDistributor:(id)arg3 dispatchQueue:(id)arg4 async:(BOOL)arg5 ;
-(void)fetchFirstRequestForSeconds:(unsigned)arg1 initializationAtomSize:(unsigned long long)arg2 track:(long long)arg3 ;
-(BOOL)isFullyDownloaded:(long long)arg1 ;
-(void)resetWithNewVideoDataBlockDistributor:(id)arg1 audioDataBlockDistributor:(id)arg2 ;
-(unsigned long long)currentReceiveOffsetForTrack:(long long)arg1 ;
-(BOOL)fetchInProgressForTrack:(long long)arg1 ;
-(void)fetchToOffset:(unsigned long long)arg1 forTrack:(long long)arg2 ;
-(void)seekForwardToOffset:(unsigned long long)arg1 forTrack:(long long)arg2 ;
-(void)_fetchStartingAtOffset:(unsigned long long)arg1 length:(unsigned long long)arg2 forTrack:(long long)arg3 ;
-(unsigned long long)currentRequestOffsetForTrack:(long long)arg1 ;
-(void)_forTestingOverrideResourceLoader:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)cancelRequests;
-(id)resourceLoader;
@end

