/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNAddressBookContactSyncQuerying, OS_dispatch_queue;
@class MNCDNProfileImageDownloader, MNAsyncOperationTracker, NSMutableArray, NSObject, NSString;

@interface MNBatchProfileImageFetcher : NSObject <FBClassProvidable> {

	mutex _allDownloadArrayMutex;
	MNCDNProfileImageDownloader* _cdnProfileImageDownloader;
	id<MNAddressBookContactSyncQuerying> _addressBookContactSyncQuerier;
	MNAsyncOperationTracker* _asyncOperationTracker;
	NSMutableArray* _allDownloads;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithCdnProfileImageDownloader:(id)arg1 addressBookContactSyncQuerier:(id)arg2 queue:(id)arg3 ;
-(id)fetchImagesWithRequest:(id)arg1 scenePath:(id)arg2 priority:(long long)arg3 callbackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_addDownloadToAllDownloads:(unsigned long long)arg1 ;
-(void)_performNotifyForRequestId:(unsigned long long)arg1 profileImageResults:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_removeDownloadFromAllDownloads:(unsigned long long)arg1 ;
-(id)_allDownloads;
-(void)cancelRequest:(id)arg1 ;
-(void)cancelAllRequests;
@end
