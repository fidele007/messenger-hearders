/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBVideoAssetExporter.h>

@protocol FBErrorSimulationProtocol;
@class NSURL, NSArray, AVAssetExportSession, AVAsset, NSTimer, NSString;

@interface FBSystemVideoAssetExporter : NSObject <FBVideoAssetExporter> {

	NSURL* _assetURL;
	NSURL* _outputURL;
	NSArray* _presetNames;
	NSArray* _outputFileTypes;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	AVAssetExportSession* _exportSession;
	AVAsset* _asset;
	unsigned long long _presetAndFileTypeIterator;
	NSTimer* _progressTimer;
	id<FBErrorSimulationProtocol> _errorSimulation;
	SCD_Struct_FB26 _timeRange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long estimatedOutputFileLength; 
@property (nonatomic,readonly) SCD_Struct_FB25 outputDuration; 
-(void)exportAsynchronouslyWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelExportWithCompletionBlock:(/*^block*/id)arg1 ;
-(SCD_Struct_FB25)outputDuration;
-(void)_determineBestPresetAndOutputFileType;
-(void)_exportProgressReport:(id)arg1 ;
-(void)_exportWithSession:(id)arg1 presetName:(id)arg2 outputFileType:(id)arg3 retryCount:(unsigned long long)arg4 ;
-(id)initWithAssetURL:(id)arg1 outputURL:(id)arg2 presetNames:(id)arg3 outputFileTypes:(id)arg4 errorSimulation:(id)arg5 timeRange:(SCD_Struct_FB26)arg6 ;
-(void)dealloc;
-(long long)estimatedOutputFileLength;
@end

