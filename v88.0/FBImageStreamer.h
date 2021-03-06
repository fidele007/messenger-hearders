/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBInvalidating.h>
#import <Messenger/FBImageDownloadLogger.h>
#import <Messenger/FBStreamingImageResponseHandlerDelegate.h>
#import <Messenger/FBImageDownloaderRequestManagerDelegate.h>
#import <Messenger/FBImageStreamingService.h>

@protocol FBImageDownloaderCache;
@class FBImageDownloaderRequestManager, NSString;

@interface FBImageStreamer : NSObject <FBInvalidating, FBImageDownloadLogger, FBStreamingImageResponseHandlerDelegate, FBImageDownloaderRequestManagerDelegate, FBImageStreamingService> {

	id<FBImageDownloaderCache> _imageCache;
	FBImageDownloaderRequestManager* _requestManager;
	BOOL _withLastImageFlagFix;
	FBStreamingFlagsManager* _desiredImageFlagsForUrls;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(id)streamImageWithURL:(id)arg1 desiredImageFlag:(unsigned long long)arg2 imageFlagsToBeNotified:(unsigned long long)arg3 scenePath:(id)arg4 priority:(long long)arg5 analyticsTags:(id)arg6 options:(unsigned long long)arg7 queue:(id)arg8 streamingBlock:(/*^block*/id)arg9 ;
-(void)cancelStreamingForToken:(id)arg1 ;
-(/*^block*/id)_createResponseHandlerFactoryBlockForURL:(id)arg1 withPartialData:(id)arg2 ;
-(BOOL)_handleStreamingCachedImage:(id)arg1 withDownloadResult:(unsigned long long)arg2 forDownload:(id)arg3 ;
-(id)_responseHandlerForRequest:(id)arg1 response:(id)arg2 URL:(id)arg3 partialData:(id)arg4 ;
-(void)logFinishWithType:(unsigned long long)arg1 ;
-(void)imageDownloadAdded:(id)arg1 ;
-(void)allImageDownloadsRemovedForURL:(id)arg1 ;
-(void)clearAllImageCache:(/*^block*/id)arg1 ;
-(id)initWithNetworker:(id)arg1 imageCache:(id)arg2 configuration:(id)arg3 scenePathAnnouncer:(id)arg4 withLastImageFlagFix:(BOOL)arg5 ;
-(unsigned long long)maxDesiredFlagForURL:(id)arg1 ;
-(void)reachedMaxDesiredFlagForURL:(id)arg1 result:(id)arg2 isLastFlag:(BOOL)arg3 ;
-(void)invalidate;
-(BOOL)isValid;
@end

