/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAuthenticationManager, FBMessageAttachmentServerFbIdQuerier, MNPhotoUploadListener, MNVideoUploadListener, FBVideoAttachmentExportListener, FBMessageAudioAttachmentPreparationListener;
@class FBMediaUploadHandler, FBMediaSegmentStreamHandler, FBAnalytics, FBMobileConfigContextManager, MNImageRequester, MNMessagingRegionHeaderHelper, FBMediaAttachmentUploadDecisionConfig;

@interface FBMessageOutgoingAttachmentPreparerFactory : NSObject {

	id<MNAuthenticationManager> _authManager;
	FBMediaUploadHandler* _uploadHandler;
	FBMediaSegmentStreamHandler* _streamHandler;
	FBAnalytics* _analytics;
	FBMobileConfigContextManager* _mobileConfigContextManager;
	MNImageRequester* _imageRequester;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	id<FBMessageAttachmentServerFbIdQuerier> _attachmentServerFbIdQuerier;
	FBMediaAttachmentUploadDecisionConfig* _photoUploadConfig;
	FBMediaAttachmentUploadDecisionConfig* _videoUploadConfig;
	id<MNPhotoUploadListener> _photoUploadListener;
	id<MNVideoUploadListener> _videoUploadListener;
	id<FBVideoAttachmentExportListener> _videoExportListener;
	id<FBMessageAudioAttachmentPreparationListener> _audioAttachmentPreparationListener;

}
-(id)initWithAuthManager:(id)arg1 analytics:(id)arg2 attachmentServerFbIdQuerier:(id)arg3 imageRequester:(id)arg4 messagingRegionHeaderHelper:(id)arg5 mobileConfigContextManager:(id)arg6 photoUploadConfig:(id)arg7 photoUploadListener:(id)arg8 uploadHandler:(id)arg9 streamHandler:(id)arg10 audioAttachmentPreparationListener:(id)arg11 videoUploadConfig:(id)arg12 videoUploadListener:(id)arg13 videoExportListener:(id)arg14 ;
-(id)_preparerForPhoto:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 extraLoggingData:(id)arg4 queue:(id)arg5 progressBlock:(/*^block*/id)arg6 ;
-(id)_preparerForVideo:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 extraLoggingData:(id)arg4 queue:(id)arg5 progressBlock:(/*^block*/id)arg6 ;
-(id)_preparerForFile:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 extraLoggingData:(id)arg4 ;
-(id)_preparerForAudio:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 extraLoggingData:(id)arg4 ;
-(id)preparerForSingleContent:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 extraLoggingData:(id)arg4 queue:(id)arg5 progressBlock:(/*^block*/id)arg6 ;
@end

