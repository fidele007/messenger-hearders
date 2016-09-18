/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPhotoSwipingViewDelegate.h>

@protocol FBPhotoSwipingControllerDelegate;
@class NSMutableDictionary, FBPhotoSwipingView, FBImageFilterLogger, FBImageProcessingConcurrentPipe, FBUserSession, FBPhotoSwipingNuxController, NSString;

@interface FBPhotoSwipingController : NSObject <FBPhotoSwipingViewDelegate> {

	NSMutableDictionary* _assetIDsToCPUFiltererWrappers;
	FBPhotoSwipingView* _view;
	FBImageFilterLogger* _filterLogger;
	FBImageProcessingConcurrentPipe* _sharedUniversalPipe;
	FBUserSession* _session;
	BOOL _swipeableFilterReminderNUXEnabled;
	FBPhotoSwipingNuxController* _instructionalSwipingNuxController;
	id<FBPhotoSwipingControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPhotoSwipingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_checkIfSwipableFilterReminderNuxEnabled;
-(void)_commitEditsForPhotoSwipingView:(id)arg1 ;
-(void)_setCPUFilterer:(id)arg1 forAssetID:(id)arg2 view:(id)arg3 isThumbnail:(BOOL)arg4 ;
-(id)_getOrCreateCPUFiltererWrapperForAssetID:(id)arg1 ;
-(id)_cpuFiltererForAssetID:(id)arg1 isThumbnail:(BOOL*)arg2 ;
-(id)_cancelableFilterRequestsForAssetID:(id)arg1 ;
-(void)_setLoadedDisplayImageSynchronously:(BOOL)arg1 forAssetID:(id)arg2 ;
-(void)_saveAutoEnhancedImageAndClearFiltererForAssetID:(id)arg1 image:(id)arg2 filterName:(id)arg3 ;
-(void)_removeCancelableFilterRequest:(id)arg1 forAssetID:(id)arg2 ;
-(BOOL)_loadedDisplayImageSynchronouslyForAssetID:(id)arg1 ;
-(void)_addCancelableFilterRequest:(id)arg1 forAssetID:(id)arg2 ;
-(void)commitPendingEdits;
-(unsigned long long)numberOfPagesInPhotoSwipingView:(id)arg1 ;
-(void)photoSwipingView:(id)arg1 photoAtIndex:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)photoSwipingView:(id)arg1 didSwipeToIndex:(unsigned long long)arg2 automatically:(BOOL)arg3 ;
-(unsigned long long)photoSwipingView:(id)arg1 indexForPhoto:(id)arg2 ;
-(BOOL)shouldShowInstructionalNUXForSwipingView:(id)arg1 ;
-(BOOL)shouldShowReminderNUXForSwipingView:(id)arg1 ;
-(void)didEndShowingInstructionalNuxForPhotoSwipingView:(id)arg1 ;
-(id)initWithFilterLogger:(id)arg1 session:(id)arg2 ;
-(void)createCPUFiltererWithPreFilterImage:(id)arg1 forPhoto:(id)arg2 ;
-(void)setCPUFilterer:(id)arg1 forAssetID:(id)arg2 view:(id)arg3 ;
-(void)clearCPUFiltererAndCancelPendingFilterRequestsForAllViewsForAssetID:(id)arg1 ;
-(void)clearCPUFiltererAndCancelPendingFilterRequestsForAssetID:(id)arg1 view:(id)arg2 ;
-(id)_cpuFiltererForAssetID:(id)arg1 ;
-(void)_setFiltererCompletionBlock:(/*^block*/id)arg1 forAssetID:(id)arg2 ;
-(id)_autoEnhancedImageForAssetID:(id)arg1 ;
-(void)setDelegate:(id<FBPhotoSwipingControllerDelegate>)arg1 ;
-(id<FBPhotoSwipingControllerDelegate>)delegate;
-(unsigned long long)_numberOfPages;
@end

