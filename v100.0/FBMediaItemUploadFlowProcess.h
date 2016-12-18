/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaItemUploadFlowProcessDelegate;
#import <Messenger/Messenger-Structs.h>
@class FBPersistentKeyValueStore, FBVideoAsset, FBVideoAssetEdits, FBVideoSegmentedTranscoder, NSString, NSMutableArray, FBMediaItemUploadFlowLogger;

@interface FBMediaItemUploadFlowProcess : NSObject {

	FBPersistentKeyValueStore* _pkvStore;
	FBVideoAsset* _asset;
	FBVideoAssetEdits* _edits;
	FBVideoSegmentedTranscoder* _transcoder;
	id<FBMediaItemUploadFlowProcessDelegate> _delegate;
	NSString* _outputKeyBase;
	unsigned long long _endOffsetLastTranscodedSegment;
	NSMutableArray* _outputKeys;
	unsigned long long _numSegmentsTranscoded;
	unsigned long long _numSegmentsMovedToPKVStore;
	BOOL _transcodingFinished;
	BOOL _didDisableRawUploadForAsset;
	BOOL _flowFinished;
	FBMediaItemUploadFlowLogger* _logger;
	unsigned long long _segmentationSizeMB;

}
-(id)initWithAsset:(id)arg1 edits:(id)arg2 pkvStore:(id)arg3 delegate:(id)arg4 logger:(id)arg5 segmentationSizeMB:(unsigned long long)arg6 ;
-(void)startProcessing:(SCD_Struct_FB318)arg1 ;
-(unsigned long long)estimatedTranscodedFileSize;
-(void)_exportRawCompositionVideo;
-(void)_exportRaw;
-(void)_startTranscoding:(SCD_Struct_FB318)arg1 ;
-(void)_restartProcessingWithHD;
-(void)_didFinishExportingRawSegment:(id)arg1 asset:(id)arg2 ;
-(void)_didFinishTranscodeFlowForAllSegments;
-(void)_didFailProcessFlow:(id)arg1 shouldAttemptRawUpload:(BOOL)arg2 ;
-(void)_didFinishTranscodingSegment:(id)arg1 ;
-(void)_transcodeCompletionCallback:(id)arg1 ;
-(void)_didFinishTranscodingAllSegments;
-(void)_didFinishMovingSegmentToPKVStore:(id)arg1 ;
-(void)cancel;
-(void)cleanup;
-(BOOL)isFinished;
-(void)_didCancel;
@end

