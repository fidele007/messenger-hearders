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
#import <Messenger/FNFDataLoaderDelegate.h>
#import <Messenger/FNFAtomManagerDelegate.h>
#import <Messenger/FNFTimeLoadedDelegate.h>

@protocol FNFDataLoader, FNFAtomManager, OS_dispatch_queue;
@class FNFBufferSizeDecider, NSError, NSObject, NSString, NSArray, AVAudioMix;

@interface FNFMp4Asset : NSObject <AVAsynchronousKeyValueLoading, FNFAVAsset, FNFAVPlayerItem, FNFAssetForPlayer, FNFInfoForLoopableAsset, FNFDataLoaderDelegate, FNFAtomManagerDelegate, FNFTimeLoadedDelegate> {

	/*^block*/id _assetLoadedHandler;
	id<FNFDataLoader> _dataLoader;
	id<FNFAtomManager> _atomManager;
	FNFBufferSizeDecider* _bufferSizeDecider;
	/*^block*/id _playerCheckForStallCallback;
	BOOL _hasFailed;
	BOOL _isStalled;
	NSError* _loadingError;
	BOOL _shouldShowBroadcasterInterruptedMessage;
	BOOL _sentStreamDryNotification;
	BOOL _assetLoaded;
	BOOL _waitingOnLoad;
	int _warningCount;
	BOOL _async;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

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
-(id)initWithURL:(id)arg1 moovAtomSize:(unsigned long long)arg2 bitrate:(unsigned long long)arg3 ;
-(id)initWithURL:(id)arg1 moovAtomSize:(unsigned long long)arg2 bitrate:(unsigned long long)arg3 fetchBufferSizeInSeconds:(double)arg4 unstallBufferSizeInSeconds:(double)arg5 stallBufferSizeInSeconds:(double)arg6 firstFetchSizeInSeconds:(double)arg7 fetchBufferMultiplier:(double)arg8 unstallBufferMultiplier:(double)arg9 ;
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
-(SCD_Struct_FB25)videoTrackDuration;
-(unsigned long long)timescale;
-(void)_potentiallyStartRequest;
-(BOOL)_fullyDownloaded;
-(void)_seekDataLoaderToTime:(SCD_Struct_FB25)arg1 offset:(unsigned long long)arg2 shouldUpdateOffset:(BOOL)arg3 track:(long long)arg4 ;
-(id)dataBlockDistributorForTrack:(long long)arg1 ;
-(void)_handleWarning:(id)arg1 ;
-(void)_potentiallyStartRequestForTrack:(long long)arg1 ;
-(BOOL)_fullyDownloaded:(long long)arg1 ;
-(void)resetDataForSeekBack;
-(void)parsingDidFailWithError:(id)arg1 ;
-(void)loadingDidFailWithError:(id)arg1 ;
-(void)dataWasReceivedForTrack:(long long)arg1 andIsComplete:(BOOL)arg2 ;
-(void)willChangeValue;
-(void)didChangeValue;
-(unsigned long long)currentOffsetForTrack:(long long)arg1 ;
-(void)_forTestingMakeSynchronous;
-(id)initWithURL:(id)arg1 moovAtomSize:(unsigned long long)arg2 bitrate:(unsigned long long)arg3 fetchBufferSizeInSeconds:(double)arg4 unstallBufferSizeInSeconds:(double)arg5 stallBufferSizeInSeconds:(double)arg6 firstFetchSizeInSeconds:(double)arg7 fetchBufferMultiplier:(double)arg8 unstallBufferMultiplier:(double)arg9 async:(BOOL)arg10 ;
-(void)_updateTimeLoaded;
-(id)initWithAtomManager:(id)arg1 dataLoader:(id)arg2 fetchBufferSizeInSeconds:(double)arg3 unstallBufferSizeInSeconds:(double)arg4 stallBufferSizeInSeconds:(double)arg5 firstFetchSizeInSeconds:(double)arg6 fetchBufferMultiplier:(double)arg7 unstallBufferMultiplier:(double)arg8 shouldShowBroadcastInterrupt:(BOOL)arg9 ;
-(void)dealloc;
-(NSString *)description;
-(SCD_Struct_FB25)duration;
-(id)asset;
-(long long)status;
-(void)cancelLoading;
-(AVAudioMix *)audioMix;
-(void)_handleError:(id)arg1 ;
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
-(id)dispatchQueue;
-(void)reportWarning:(id)arg1 ;
@end

