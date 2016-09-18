/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
#import <Messenger/FNFLiveAVPlayerAsset.h>

@protocol OS_dispatch_queue;
@class FNFDashDataLoader, FNFDashAtomManager, FNFBufferSizeDecider, NSError, NSObject, NSString, NSArray, AVAudioMix;

@interface FNFDashAsset : NSObject <AVAsynchronousKeyValueLoading, FNFAVAsset, FNFAVPlayerItem, FNFAssetForPlayer, FNFInfoForLoopableAsset, FNFDataLoaderDelegate, FNFAtomManagerDelegate, FNFTimeLoadedDelegate, FNFLiveAVPlayerAsset> {

	/*^block*/id _assetLoadedHandler;
	FNFDashDataLoader* _dataLoader;
	FNFDashAtomManager* _atomManager;
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
@property (nonatomic,readonly) SCD_Struct_FB20 maxBufferTime; 
@property (nonatomic,readonly) SCD_Struct_FB20 minBufferTime; 
-(opaqueCMFormatDescriptionRef)formatDesc;
-(AudioStreamBasicDescription)asbd;
-(id)audioStreamExtraParameters;
-(BOOL)containsTrack:(long long)arg1 ;
-(void)addErrorToLog:(id)arg1 shouldStopPlayback:(BOOL)arg2 ;
-(BOOL)trackHasMoreFrames:(long long)arg1 ;
-(FNFFrameMetadata)currentFrameMetadataForTrack:(long long)arg1 ;
-(const char*)currentFrameDataForTrack:(long long)arg1 ;
-(void)advanceFrameForTrack:(long long)arg1 ;
-(void)updatePlaybackTime:(SCD_Struct_FB20)arg1 ;
-(BOOL)shouldPauseForStallingWithNextCheckCallback:(/*^block*/id)arg1 ;
-(BOOL)shouldRestartAfterStalling;
-(BOOL)shouldBufferVideoAsSoonAsPossible;
-(BOOL)seekToPosition:(SCD_Struct_FB20)arg1 ;
-(void)resetAssetToBeginningIfNeeded;
-(void)playbackPauseRequested;
-(SCD_Struct_FB20)timeAfterSeek;
-(id)debugDetails;
-(BOOL)decompressedFramebuffer;
-(SCD_Struct_FB20)maxBufferTime;
-(SCD_Struct_FB20)minBufferTime;
-(id)representationId;
-(void)requestTimeLoadedUpdate;
-(double)nextLiveAudioTimestamp;
-(id)audioChannelConfiguration;
-(unsigned long long)timescale;
-(id)initWithAtomManager:(id)arg1 dataLoader:(id)arg2 fetchBufferSizeInSeconds:(double)arg3 unstallBufferSizeInSeconds:(double)arg4 stallBufferSizeInSeconds:(double)arg5 firstFetchSizeInSeconds:(double)arg6 fetchBufferMultiplier:(double)arg7 unstallBufferMultiplier:(double)arg8 shouldShowBroadcastInterrupt:(BOOL)arg9 ;
-(void)_potentiallyStartRequest;
-(BOOL)_fullyDownloaded;
-(void)_seekDataLoaderToTime:(SCD_Struct_FB20)arg1 offset:(unsigned long long)arg2 shouldUpdateOffset:(BOOL)arg3 track:(long long)arg4 ;
-(void)_sendDryNotificationIfApplicable;
-(void)_sendUndryNotificationIfApplicable;
-(void)_updateTimeLoaded;
-(void)_potentiallyStartRequestForTrack:(long long)arg1 ;
-(BOOL)_fullyDownloaded:(long long)arg1 ;
-(void)willChangeValue;
-(void)didChangeValue;
-(void)resetDataForSeekBack;
-(void)parsingDidFailWithError:(id)arg1 ;
-(void)_handleWarning:(id)arg1 ;
-(id)dataBlockDistributorForTrack:(long long)arg1 ;
-(unsigned long long)currentOffsetForTrack:(long long)arg1 ;
-(void)loadingDidFailWithError:(id)arg1 ;
-(void)dataWasReceivedForTrack:(long long)arg1 andIsComplete:(BOOL)arg2 ;
-(void)_forTestingMakeSynchronous;
-(void)dealloc;
-(NSString *)description;
-(SCD_Struct_FB20)duration;
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
-(SCD_Struct_FB20)currentTime;
-(SCD_Struct_FB20)videoDuration;
-(id)tracksWithMediaType:(id)arg1 ;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isPlaybackLikelyToKeepUp;
-(BOOL)isPlaybackBufferFull;
-(void)playbackStarted;
-(id)dispatchQueue;
-(void)reportWarning:(id)arg1 ;
@end
