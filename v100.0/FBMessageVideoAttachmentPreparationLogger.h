/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMessageVideoAttachmentPreparationListener.h>
#import <Messenger/FBMessageAttachmentPreparationLoggingExtras.h>

@class FBAnalytics, FBReachabilityAnnouncer, NSMutableDictionary, NSString;

@interface FBMessageVideoAttachmentPreparationLogger : NSObject <FBMessageVideoAttachmentPreparationListener, FBMessageAttachmentPreparationLoggingExtras> {

	FBAnalytics* _analytics;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	unsigned long long _startTime;
	NSMutableDictionary* _loggingExtras;
	NSString* _failedStage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_willBeginUploadWithContentSize:(unsigned long long)arg1 isResumed:(BOOL)arg2 ;
-(void)_markCompletionWithStatus:(id)arg1 ;
-(void)_markUploadFinishWithMetrics:(id)arg1 ;
-(void)willComputeHash;
-(void)didComputeHash:(id)arg1 ;
-(void)willQueryFbId;
-(void)didQueryFbId:(id)arg1 ;
-(void)willResumeWithContentSource:(id)arg1 contentSize:(unsigned long long)arg2 ;
-(void)willUploadWithContentSource:(id)arg1 contentSize:(unsigned long long)arg2 ;
-(void)didProgressUploadTo:(float)arg1 ;
-(void)didFailToUploadWithError:(id)arg1 metrics:(id)arg2 ;
-(void)didCompleteUploadWithFbId:(id)arg1 metrics:(id)arg2 ;
-(void)didCancelUploadWithMetrics:(id)arg1 ;
-(void)didPrepare;
-(void)didFailToPrepareWithError:(id)arg1 ;
-(void)didCancelPreparation;
-(id)loggingExtras;
-(id)initWithAnalytics:(id)arg1 initialLoggingData:(id)arg2 ;
-(void)willPrepareVideoContent:(id)arg1 forMessageOfflineId:(id)arg2 ;
-(void)willExport;
-(void)didExportData:(id)arg1 toLocalURL:(id)arg2 ;
-(void)didFailToExportWithError:(id)arg1 ;
-(void)didEstimateFileSize:(long long)arg1 ;
-(void)didProgressExportTo:(float)arg1 ;
@end

