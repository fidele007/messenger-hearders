/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBChunkedVideoUploadItem.h>
#import <Messenger/FBMediaUploadListener.h>
#import <Messenger/FBAudioCopyrighValidatorDelegate.h>

@class FBSegmentedVideoUploadItemState, FBVideoUploadCache, FBUserSession, FBMediaSimpleUploadHandler, NSMutableDictionary, FBAudioCopyrightValidator, NSString;

@interface FBSegmentedVideoUploadItem : FBChunkedVideoUploadItem <FBMediaUploadListener, FBAudioCopyrighValidatorDelegate> {

	int _maxNumberOfVideoSegments;
	int _maxVideoSegmentDurationInSeconds;
	FBSegmentedVideoUploadItemState* _uploadState;
	double _transcodingProgress;
	double _uploadProgress;
	BOOL _shouldRecoverState;
	FBVideoUploadCache* _stateCache;
	/*^block*/id _cleanupForRawExportBlock;
	FBUserSession* _session;
	FBMediaSimpleUploadHandler* _uploadHandler;
	BOOL _useResumableUpload;
	NSMutableDictionary* _ruploadJobs;
	FBAudioCopyrightValidator* _audioCopyrightValidator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2 ;
-(void)uploadDidSucceed:(id)arg1 withResponse:(id)arg2 metrics:(id)arg3 ;
-(void)uploadDidFail:(id)arg1 withFailureReason:(unsigned long long)arg2 isResumable:(BOOL)arg3 metrics:(id)arg4 ;
-(void)uploadWasCancelled:(id)arg1 metrics:(id)arg2 ;
-(void)uploadHasProgressed:(id)arg1 withProgressInformation:(FBMediaUploadJobProgressInformation)arg2 ;
-(unsigned long long)uploadQuality;
-(int)mediaUploadItemType;
-(void)stateAwareStart;
-(BOOL)isUploadInProcess;
-(void)continueUploadRequest;
-(void)processMediaItemWithUploadSettings:(SCD_Struct_FB80)arg1 completion:(/*^block*/id)arg2 ;
-(void)cleanupWithCallback:(/*^block*/id)arg1 ;
-(NSRange)nextChunkRangeFromStartOffset:(unsigned long long)arg1 endOffset:(unsigned long long)arg2 ;
-(void)checkpointUploadState;
-(double)totalProgressForRequestProgress:(double)arg1 ;
-(id)apiParametersWithProcessedContext:(id)arg1 ;
-(BOOL)hasUploadInProgress;
-(BOOL)sendNextUploadRequest;
-(id)startTransferWithParameters:(id)arg1 ;
-(id)initWithVideoAttachment:(id)arg1 persistentKeyValueStore:(id)arg2 publisherData:(id)arg3 logger:(id)arg4 networkDispatcher:(id)arg5 maxNumberOfVideoSegments:(int)arg6 maxVideoSegmentDurationInSeconds:(int)arg7 shouldUploadVideoWithoutPublishing:(BOOL)arg8 useServerSideSettings:(BOOL)arg9 shouldRecoverState:(BOOL)arg10 shouldForceUsingNativeEncoder:(BOOL)arg11 shouldForceRawFileUpload:(BOOL)arg12 stateCache:(id)arg13 userSession:(id)arg14 ;
-(float)videoProcessProgressPercent;
-(void)_resetUploadRequestStateForAllPartitions;
-(void)exportRawVideoAndContinue;
-(void)encodeVideoAndContinueWithSettings:(SCD_Struct_FB80)arg1 ;
-(void)_restartMediaItemProcessingWithDefaultUploadSettings;
-(void)onExportSegmentComplete:(id)arg1 ;
-(void)reportTranscodingProgress;
-(void)onExportSuccess;
-(void)reportProcessError:(id)arg1 ;
-(void)exportRawCompositionVideoAndContinue:(id)arg1 ;
-(void)startValidatingAndFingerprinting;
-(void)_encodeUsingTranscoderWithProgressBlock:(/*^block*/id)arg1 segmentCompletionBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 outputURL:(id)arg4 settings:(SCD_Struct_FB80)arg5 ;
-(id)_findNextUploadPartition;
-(BOOL)_continueUploadRequestViaRUpload:(id)arg1 ;
-(id)_fileDataForPartition:(id)arg1 range:(NSRange)arg2 ;
-(id)_maxRetryCountForRUploads;
-(BOOL)_allSegmentUploadCompleted;
-(NSRange)_makeChunkRange:(unsigned long long)arg1 endOffset:(unsigned long long)arg2 ;
-(void)populateNextChunkForSegment:(id)arg1 segment:(id)arg2 ;
-(id)_partitionForRUploadJobID:(id)arg1 ;
-(void)copyrightValidationDidFailForAssetURL:(id)arg1 error:(id)arg2 ;
-(void)copyrightValidationDidFindMatchForAssetURL:(id)arg1 withCopyrightResult:(id)arg2 ;
-(void)cancel;
-(void)_start;
-(void)start;
-(void)cleanup;
@end
