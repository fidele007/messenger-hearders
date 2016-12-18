/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/AVAsynchronousKeyValueLoading.h>
#import <Messenger/FNFAVAsset.h>
#import <Messenger/FNFAVPlayerItem.h>
#import <Messenger/FNFAssetForPlayer.h>
#import <Messenger/FNFInfoForLoopableAsset.h>

@protocol OS_dispatch_queue;
@class NSArray, AVAudioMix, NSURL, NSError, NSObject, AVAsset, AVAssetReader, AVAssetReaderOutput, AVAssetReaderTrackOutput, NSString;

@interface FNFLocalMp4Asset : NSObject <AVAsynchronousKeyValueLoading, FNFAVAsset, FNFAVPlayerItem, FNFAssetForPlayer, FNFInfoForLoopableAsset> {

	/*^block*/id _assetLoadedHandler;
	NSURL* _localURL;
	SCD_Struct_FB25 _duration;
	SCD_Struct_FB25 _playbackTime;
	SCD_Struct_FB25 _startingPlaybackTime;
	opaqueCMFormatDescriptionRef _formatDesc;
	AudioStreamBasicDescription _asbd;
	NSArray* _loadedTimeRanges;
	unsigned _timescale;
	unsigned _audioTimescale;
	BOOL _hasFailed;
	BOOL _parsedHeader;
	NSError* _loadingError;
	BOOL _async;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	AVAsset* _videoAsset;
	AVAssetReader* _videoAssetReader;
	AVAssetReaderOutput* _videoAssetReaderTrackOutput;
	opaqueCMSampleBufferRef _videoSampleBuffer;
	CGSize _mediaSize;
	CGAffineTransform _preferredTransform;
	AVAssetReader* _audioAssetReader;
	AVAssetReaderTrackOutput* _audioAssetReaderTrackOutput;
	opaqueCMSampleBufferRef _audioSampleBuffer;
	OpaqueCMBlockBufferRef _audioBlockBuffer;
	int _numberOfPackets;
	const AudioStreamPacketDescription* _inPacketDescriptions;
	AudioBuffer* _audioBuffer;
	int _currentAudioBufferIndex;
	float _fps;
	BOOL _isOutputDecompressed;
	BOOL _videoBufferEnded;
	CGSize _containerDimensions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,copy,readonly) NSArray * loadedTimeRanges; 
@property (nonatomic,copy) AVAudioMix * audioMix; 
@property (nonatomic,readonly) SCD_Struct_FB25 maxBufferTime; 
@property (nonatomic,readonly) SCD_Struct_FB25 minBufferTime; 
-(id)initWithLocalURL:(id)arg1 decompressedOutput:(BOOL)arg2 containerDimensions:(CGSize)arg3 ;
-(opaqueCMFormatDescriptionRef)formatDesc;
-(AudioStreamBasicDescription)asbd;
-(id)audioStreamExtraParameters;
-(void)addErrorToLog:(id)arg1 shouldStopPlayback:(BOOL)arg2 ;
-(BOOL)trackHasMoreFrames:(long long)arg1 ;
-(FNFFrameMetadata)currentFrameMetadataForTrack:(long long)arg1 ;
-(const char*)currentFrameDataForTrack:(long long)arg1 ;
-(void)advanceFrameForTrack:(long long)arg1 ;
-(void)updatePlaybackTime:(SCD_Struct_FB25)arg1 ;
-(BOOL)shouldPauseForStallingWithNextCheckCallback:(/*^block*/id)arg1 ;
-(BOOL)shouldRestartAfterStalling;
-(BOOL)shouldBufferVideoAsSoonAsPossible;
-(BOOL)seekToPosition:(SCD_Struct_FB25)arg1 ;
-(BOOL)resetAssetToBeginningIfNeeded;
-(void)playbackPauseRequested;
-(SCD_Struct_FB25)timeAfterSeek;
-(id)debugDetails;
-(BOOL)decompressedFramebuffer;
-(SCD_Struct_FB25)maxBufferTime;
-(SCD_Struct_FB25)minBufferTime;
-(void)requestTimeLoadedUpdate;
-(BOOL)containsTrack:(long long)arg1 ;
-(id)initWithLocalURL:(id)arg1 async:(BOOL)arg2 decompressedOutput:(BOOL)arg3 containerDimensions:(CGSize)arg4 ;
-(void)_releaseAudioBufferIfNeeded;
-(BOOL)createVideoReader:(SCD_Struct_FB25)arg1 ;
-(BOOL)createAudioReader:(SCD_Struct_FB25)arg1 ;
-(void)_startWithAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)is30MSFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)_getAudioPacketDescriptions;
-(SCD_Struct_FB25)videoTrackDuration;
-(id)URLIfExists;
-(unsigned)timescale;
-(unsigned)audioTimescale;
-(int)_currentAudioBufferIndex;
-(void)printASBD:(AudioStreamBasicDescription)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(SCD_Struct_FB25)duration;
-(id)asset;
-(long long)status;
-(void)cancelLoading;
-(AVAudioMix *)audioMix;
-(void)addOutput:(id)arg1 ;
-(NSArray *)loadedTimeRanges;
-(CGAffineTransform)preferredTransform;
-(void)setAudioMix:(AVAudioMix *)arg1 ;
-(id)resourceLoader;
-(id)accessLog;
-(SCD_Struct_FB25)currentTime;
-(id)tracksWithMediaType:(id)arg1 ;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isPlaybackLikelyToKeepUp;
-(BOOL)isPlaybackBufferFull;
-(void)playbackStarted;
@end

