/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMessageOutgoingAttachmentPreparing.h>

@protocol MNAuthenticationManager, FBMessageAttachmentServerFbIdQuerier, MNPhotoUploadListener, MNVideoUploadListener, FBVideoAttachmentExportListener, FBMessageAudioAttachmentPreparationListener;
@class FBMMediaUploadBandwidthTracker, FBMediaUploadHandler, FBMediaSegmentStreamHandler, FBAnalytics, FBMobileConfigContextManager, MNPhotoImageRequester, MNMessagingRegionHeaderHelper, FBMessageOutgoingAttachmentPreparationProgressTracker, FBMediaAttachmentUploadDecisionConfig, FBMessageOutgoingMediaAttachmentOperationQueue, NSString;

@interface FBMessageOutgoingAttachmentPreparer : NSObject <FBMessageOutgoingAttachmentPreparing> {

	id<MNAuthenticationManager> _authManager;
	FBMMediaUploadBandwidthTracker* _uploadBandwidthTracker;
	FBMediaUploadHandler* _uploadHandler;
	FBMediaSegmentStreamHandler* _streamHandler;
	FBAnalytics* _analytics;
	FBMobileConfigContextManager* _mobileConfigContextManager;
	MNPhotoImageRequester* _imageRequester;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	FBMessageOutgoingAttachmentPreparationProgressTracker* _progressTracker;
	id<FBMessageAttachmentServerFbIdQuerier> _attachmentServerFbIdQuerier;
	FBMediaAttachmentUploadDecisionConfig* _photoUploadConfig;
	id<MNPhotoUploadListener> _photoUploadListener;
	FBMediaAttachmentUploadDecisionConfig* _videoUploadConfig;
	BOOL _enableAudioStreamingUpload;
	id<MNVideoUploadListener> _videoUploadListener;
	id<FBVideoAttachmentExportListener> _videoExportListener;
	id<FBMessageAudioAttachmentPreparationListener> _audioAttachmentPreparationListener;
	FBMessageOutgoingMediaAttachmentOperationQueue* _operationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)prepareOutgoingAttachment:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 queue:(id)arg4 progress:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithAuthManager:(id)arg1 analytics:(id)arg2 mobileConfigContextManager:(id)arg3 attachmentServerFbIdQuerier:(id)arg4 audioAttachmentPreparationListener:(id)arg5 imageRequester:(id)arg6 messagingRegionHeaderHelper:(id)arg7 progressTracker:(id)arg8 uploadBandwidthTracker:(id)arg9 uploadHandler:(id)arg10 streamHandler:(id)arg11 photoUploadConfig:(id)arg12 photoUploadListener:(id)arg13 videoUploadConfig:(id)arg14 videoUploadListener:(id)arg15 videoExportListener:(id)arg16 enableAudioStreamingUpload:(BOOL)arg17 ;
-(void)_updateProgress:(double)arg1 forContent:(id)arg2 ;
-(void)_clearProgressForContent:(id)arg1 ;
-(id)_operationsForAudio:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 extraLoggingData:(id)arg4 queue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)_operationsForPhotos:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 extraLoggingData:(id)arg4 queue:(id)arg5 progress:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
-(id)_operationsForVideo:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 extraLoggingData:(id)arg4 queue:(id)arg5 progress:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
-(id)_operationsForFiles:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 extraLoggingData:(id)arg4 queue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)_operationForAudio:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 extraLoggingData:(id)arg4 ;
-(id)_operationForPhoto:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 extraLoggingData:(id)arg4 queue:(id)arg5 progressBlock:(/*^block*/id)arg6 ;
-(id)_operationForVideo:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 extraLoggingData:(id)arg4 queue:(id)arg5 progressBlock:(/*^block*/id)arg6 ;
-(id)_operationForFile:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 extraLoggingData:(id)arg4 ;
@end

