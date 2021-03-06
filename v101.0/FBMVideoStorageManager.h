/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/FBMMessageSendListening.h>
#import <Messenger/MNVideoUploadListener.h>

@protocol OS_dispatch_queue;
@class FBUserSession, NSObject, FBDiskStore, FBPreferences, MNAppMessageAttachmentUtils, FBMMessageSendListeningAnnouncer, NSString;

@interface FBMVideoStorageManager : NSObject <FBViewerContextClassProvidable, FBMMessageSendListening, MNVideoUploadListener> {

	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _queue;
	FBDiskStore* _sessionDiskStore;
	FBPreferences* _preferences;
	MNAppMessageAttachmentUtils* _attachmentUtils;
	FBMMessageSendListeningAnnouncer* _mesageSendAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didEnqueueMessage:(id)arg1 ;
-(void)didPublishMessage:(id)arg1 ;
-(void)didSendMessage:(id)arg1 ;
-(void)didPutMessageBackInQueue:(id)arg1 ;
-(void)didCancelMessage:(id)arg1 ;
-(void)didFailMessage:(id)arg1 error:(id)arg2 ;
-(void)willRetryMessage:(id)arg1 ;
-(void)message:(id)arg1 didUpdateUploadProgress:(double)arg2 ;
-(void)fetchLocalVideoURLForMessage:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)directoryPathForVideoStorage;
-(void)fetchVideoPathForVideoAttachment:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)generateVideoFilePathForVideoAttachment:(id)arg1 ;
-(void)_removeCachedLocalURLForCacheKey:(id)arg1 ;
-(id)_MNNonAssetLibraryCachedFilePathForFilename:(id)arg1 ;
-(void)_fetchVideoPathForCacheKey:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)storeLocalVideoAttachmentURL:(id)arg1 orAssetURL:(id)arg2 forCacheKey:(id)arg3 ;
-(void)_tryCleanUpVideoStickerOfflineCacheForMessage:(id)arg1 ;
-(void)willBeginVideoUploadWithInfo:(id)arg1 ;
-(void)videoInfo:(id)arg1 didProgressUploadTo:(double)arg2 ;
-(void)videoInfo:(id)arg1 didCompleteUploadWithFbId:(id)arg2 metrics:(id)arg3 ;
-(void)videoInfo:(id)arg1 didFailToUploadWithError:(id)arg2 metrics:(id)arg3 ;
-(void)videoInfo:(id)arg1 didCancelUploadWithMetrics:(id)arg2 ;
-(void)videoInfo:(id)arg1 didDedupeWithFbId:(id)arg2 ;
-(id)fetchLocalVideoFilePathForMessageSynchronously:(id)arg1 ignoringAssetLibrary:(BOOL)arg2 ;
-(void)_unstoreLocalPathForCacheKey:(id)arg1 ;
@end

