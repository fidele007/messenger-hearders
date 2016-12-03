/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBStickerResourceManager, OS_dispatch_queue, FBStickerResourceInvalidatorDelegate;
@class FBMStickerManager, FBStickerLastUpdatedInfoFetcher, FBStickerUpdateStore, NSObject;

@interface FBStickerResourceInvalidator : NSObject {

	FBMStickerManager* _stickerManager;
	id<FBStickerResourceManager> _stickerResourceManager;
	FBStickerLastUpdatedInfoFetcher* _updateInfoFetcher;
	FBStickerUpdateStore* _updateStore;
	NSObject*<OS_dispatch_queue> _queue;
	id<FBStickerResourceInvalidatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBStickerResourceInvalidatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)invalidateStickerResources;
-(id)initWithUpdateStore:(id)arg1 updateInfoFetcher:(id)arg2 stickerManager:(id)arg3 stickerResourceManager:(id)arg4 ;
-(void)_invalidateStickerResourcesSince:(id)arg1 ;
-(void)_requestListOfResourcesOnDisk;
-(void)_fetchUpdatedPacksSince:(id)arg1 ;
-(void)_invalidateUnownedStickerResources:(id)arg1 ;
-(void)_invalidationDidFailWithError:(id)arg1 ;
-(id)_unownedResourcesFromItemsOnDisk:(id)arg1 ;
-(void)_invalidationDidFinish;
-(void)_deleteStickerResources:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invalidateStickerPacks:(id)arg1 ;
-(void)setDelegate:(id<FBStickerResourceInvalidatorDelegate>)arg1 ;
-(id<FBStickerResourceInvalidatorDelegate>)delegate;
@end
