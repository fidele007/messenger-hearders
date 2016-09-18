/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadListRequestHandling.h>

@protocol MNLegacyThreadRestoring, MNThreadListFetchedDiskStateAffirming, OS_dispatch_queue;
@class FBMessagingStore, MNThreadListContinuityTracker, NSObject, NSString;

@interface MNThreadListRequestDiskHandler : NSObject <MNThreadListRequestHandling> {

	FBMessagingStore* _diskStore;
	id<MNLegacyThreadRestoring> _threadRestorer;
	id<MNThreadListFetchedDiskStateAffirming> _threadListFetchedAffirmer;
	MNThreadListContinuityTracker* _threadListContinuityTracker;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_storeFinishedRequestForThreadListRequest:(id)arg1 threadLoadResults:(id)arg2 olderThreadExistOnDisk:(BOOL)arg3 error:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_updateAppWithRestoredResults:(id)arg1 threadListType:(long long)arg2 ;
-(void)handleThreadListRequest:(id)arg1 longOperationDidBeginBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithDiskStore:(id)arg1 threadListFetchedAffirmer:(id)arg2 threadListContinuityTracker:(id)arg3 threadRestorer:(id)arg4 queue:(id)arg5 ;
@end
