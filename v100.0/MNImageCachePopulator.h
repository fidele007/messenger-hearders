/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPhotoUploadListener.h>
#import <Messenger/MNVideoUploadListener.h>

@protocol OS_dispatch_queue;
@class MNImageCache, MNImageRequester, MNImageUploadCandidateStore, NSObject, NSString;

@interface MNImageCachePopulator : NSObject <MNPhotoUploadListener, MNVideoUploadListener> {

	MNImageCache* _imageCache;
	MNImageRequester* _imageRequester;
	MNImageUploadCandidateStore* _imageUploadCandidateStore;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImageCache:(id)arg1 imageRequester:(id)arg2 imageUploadCandidateStore:(id)arg3 ;
-(void)willBeginVideoUploadWithInfo:(id)arg1 ;
-(void)videoInfo:(id)arg1 didProgressUploadTo:(double)arg2 ;
-(void)videoInfo:(id)arg1 didCompleteUploadWithFbId:(id)arg2 metrics:(id)arg3 ;
-(void)videoInfo:(id)arg1 didFailToUploadWithError:(id)arg2 metrics:(id)arg3 ;
-(void)videoInfo:(id)arg1 didCancelUploadWithMetrics:(id)arg2 ;
-(void)videoInfo:(id)arg1 didDedupeWithFbId:(id)arg2 ;
-(void)willBeginPhotoUploadWithInfo:(id)arg1 ;
-(void)photoUploadInfo:(id)arg1 didProgressTo:(double)arg2 ;
-(void)photoUploadInfo:(id)arg1 didCompleteWithFbId:(id)arg2 metrics:(id)arg3 ;
-(void)photoUploadInfo:(id)arg1 didFailWithError:(id)arg2 metrics:(id)arg3 ;
-(void)photoUploadInfo:(id)arg1 didCancelWithMetrics:(id)arg2 ;
-(void)photoUploadInfo:(id)arg1 didDedupeWithFbId:(id)arg2 ;
-(void)_populateImageCacheWithInfo:(id)arg1 fbId:(id)arg2 ;
-(void)_populatePreviewImageCacheWithInfo:(id)arg1 fbId:(id)arg2 ;
-(void)_performStorageWithfetchedImage:(id)arg1 fbId:(id)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_didUploadVideoWithInfo:(id)arg1 andFbId:(id)arg2 ;
@end

