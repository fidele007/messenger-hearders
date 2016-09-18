/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL, UIImage, NSError;

@interface FBLivePhotoAssetCoordination : NSObject {

	NSObject*<OS_dispatch_queue> _serializationQueue;
	NSURL* _localImageURL;
	UIImage* _livePhotoPlaceholderImage;
	NSURL* _localVideoURL;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _completionBlock;
	BOOL _isCancelled;

}

@property (nonatomic,readonly) BOOL isCancelled;              //@synthesize isCancelled=_isCancelled - In the implementation block
-(void)_callCompletionBlockIfAssetCoordinationComplete;
-(void)imageRetrievalDidCompleteWithLocalImageURL:(id)arg1 livePhotoPlaceholderImage:(id)arg2 ;
-(void)videoRetrievalDidCompleteWithLocalVideoURL:(id)arg1 ;
-(void)registerCompletionBlock:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)cancel;
-(id)init;
-(BOOL)isCancelled;
-(id)uniqueIdentifier;
@end

