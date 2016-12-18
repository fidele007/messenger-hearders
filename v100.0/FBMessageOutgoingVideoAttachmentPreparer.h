/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMessageOutgoingMediaAttachmentPreparing.h>

@protocol MNAuthenticationManager, FBMessageAttachmentServerFbIdQuerier;
@class FBMessageVideoAttachmentContent, FBMessageOutgoingVideoAttachmentPreparationConfiguration, FBMessageOutgoingAttribution, FBMediaAttachmentUploadDecisionConfig, NSString, FBMobileConfigContextManager, FBMediaSegmentStreamHandler, FBMessageAttachmentUploadResultCache, FBMessageVideoAttachmentUploadEventForwarder, FBMessageVideoAttachmentPreparationLogger, FBMessageVideoAttachmentPreparationListenerAnnouncer, NSDictionary;

@interface FBMessageOutgoingVideoAttachmentPreparer : NSObject <FBMessageOutgoingMediaAttachmentPreparing> {

	FBMessageVideoAttachmentContent* _videoAttachmentContent;
	FBMessageOutgoingVideoAttachmentPreparationConfiguration* _preparationConfiguration;
	FBMessageOutgoingAttribution* _outgoingAttribution;
	FBMediaAttachmentUploadDecisionConfig* _videoUploadConfig;
	NSString* _parentMessageOfflineId;
	id<MNAuthenticationManager> _authManager;
	FBMobileConfigContextManager* _mobileConfigContextManager;
	FBMediaSegmentStreamHandler* _streamHandler;
	id<FBMessageAttachmentServerFbIdQuerier> _attachmentServerFbIdQuerier;
	FBMessageAttachmentUploadResultCache* _uploadResultCache;
	/*^block*/id _progressBlock;
	FBMessageVideoAttachmentUploadEventForwarder* _uploadEventForwarder;
	FBMessageVideoAttachmentPreparationLogger* _preparationLogger;
	FBMessageVideoAttachmentPreparationListenerAnnouncer* _preparationAnnouncer;
	NSDictionary* _uploadParameters;
	NSDictionary* _extraLoggingData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_loggingExtras:(id)arg1 ;
-(id)initWithVideoAttachmentContent:(id)arg1 preparationConfiguration:(id)arg2 outgoingAttribution:(id)arg3 extraLoggingData:(id)arg4 videoUploadConfig:(id)arg5 parentMessageOfflineId:(id)arg6 attachmentServerFbIdQuerier:(id)arg7 authManager:(id)arg8 analytics:(id)arg9 mobileConfigContextManager:(id)arg10 streamHandler:(id)arg11 videoUploadListener:(id)arg12 videoExportListener:(id)arg13 uploadParameters:(id)arg14 progressBlock:(/*^block*/id)arg15 ;
-(NSString *)description;
-(id)startWithCompletion:(/*^block*/id)arg1 ;
@end

