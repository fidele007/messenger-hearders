/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNBatchedViewModelLoading.h>

@class MNThreadMontageThumbnailFactory, MNThreadImageManager, FBDateFormatter, NSString;

@interface MNMontageListViewModelLoader : NSObject <MNBatchedViewModelLoading> {

	MNThreadMontageThumbnailFactory* _threadMontageThumbnailFactory;
	MNThreadImageManager* _threadImageManager;
	FBDateFormatter* _dateFormatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_loadBatchedViewModelForInboxThreadListWithElements:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadBatchedViewModelForInboxUnitWithElements:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadBatchedViewModelForMessagesViewWithElements:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadViewModelForKey:(id)arg1 batchElements:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithThreadMontageThumbnailFactory:(id)arg1 threadImageManager:(id)arg2 ;
@end

