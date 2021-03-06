/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNBatchedViewModelLoading.h>

@class MNThreadMontageThumbnailFactory, MNThreadImageManager, FBMLoggedInUserInfoManager, FBDateFormatter, FBMobileConfigContextManager, NSString;

@interface MNMontageListViewModelLoader : NSObject <MNBatchedViewModelLoading> {

	MNThreadMontageThumbnailFactory* _threadMontageThumbnailFactory;
	MNThreadImageManager* _threadImageManager;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	FBDateFormatter* _dateFormatter;
	FBMobileConfigContextManager* _mobileConfigContextManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_loadBatchedViewModelForInboxThreadListWithElements:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadBatchedViewModelForInboxUnitWithElements:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadBatchedViewModelForMessagesViewWithElements:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadViewModelForKey:(id)arg1 batchElements:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithThreadMontageThumbnailFactory:(id)arg1 threadImageManager:(id)arg2 loggedInUserInfoManager:(id)arg3 mobileConfigContextManager:(id)arg4 ;
@end

