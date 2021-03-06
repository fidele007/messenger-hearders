/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/AVAsynchronousKeyValueLoading.h>
#import <Messenger/FNFAVAsset.h>
#import <Messenger/FNFAVPlayerItem.h>
#import <Messenger/FNFAssetForPlayer.h>

@protocol AVAsynchronousKeyValueLoadingFNFAVAssetFNFAVPlayerItemFNFAssetForPlayerFNFInfoForLoopableAsset;
@class NSArray, FBKVOController, NSObject, NSString, AVAudioMix;

@interface FNFLoopingAsset : NSObject <AVAsynchronousKeyValueLoading, FNFAVAsset, FNFAVPlayerItem, FNFAssetForPlayer> {

	SCD_Struct_FB43 _playbackTime;
	SCD_Struct_FB43 _duration;
	NSArray* _loadedTimeRanges;
	BOOL _usingBackup;
	FBKVOController* _observation;
	int _loopCount;
	int _pauseReason;
	BOOL _embedFrameInfo;
	int _currentLoopCount;
	NSObject*<AVAsynchronousKeyValueLoading>*<FNFAVAsset>*<FNFAVPlayerItem>*<FNFAssetForPlayer>*<FNFInfoForLoopableAsset> _originalAsset;
	NSObject*<AVAsynchronousKeyValueLoading>*<FNFAVAsset>*<FNFAVPlayerItem>*<FNFAssetForPlayer>*<FNFInfoForLoopableAsset> _backupAsset;
	SCD_Struct_FB43 _videoRealDuration;

}

@property (nonatomic,retain) NSObject*<AVAsynchronousKeyValueLoading>*<FNFAVAsset>*<FNFAVPlayerItem>*<FNFAssetForPlayer>*<FNFInfoForLoopableAsset> originalAsset;              //@synthesize originalAsset=_originalAsset - In the implementation block
@property (nonatomic,retain) NSObject*<AVAsynchronousKeyValueLoading>*<FNFAVAsset>*<FNFAVPlayerItem>*<FNFAssetForPlayer>*<FNFInfoForLoopableAsset> backupAsset;                //@synthesize backupAsset=_backupAsset - In the implementation block
@property (nonatomic,readonly) int currentLoopCount;                                                                                                                           //@synthesize currentLoopCount=_currentLoopCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB43 videoRealDuration;                                                                                                              //@synthesize videoRealDuration=_videoRealDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,copy,readonly) NSArray * loadedTimeRanges; 
@property (nonatomic,copy) AVAudioMix * audioMix; 
@property (assign,nonatomic) BOOL embedFrameInfo; 
@property (nonatomic,readonly) SCD_Struct_FB43 maxBufferTime; 
@property (nonatomic,readonly) SCD_Struct_FB43 minBufferTime; 
@property (nonatomic,readonly) int pauseReason; 
-(id)initWithAssetBlock:(/*^block*/id)arg1 loopCount:(int)arg2 ;
-(id)debugDetails;
-(BOOL)embedFrameInfo;
-(void)setEmbedFrameInfo:(BOOL)arg1 ;
-(int)pauseReason;
-(void)requestErrorNotificationIfNeeded;
-(void)requestTimeLoadedUpdate;
-(void)_loadedTimeRangeChanged:(id)arg1 ;
-(void)setBackupAsset:(NSObject*<AVAsynchronousKeyValueLoading>*<FNFAVAsset>*<FNFAVPlayerItem>*<FNFAssetForPlayer>*<FNFInfoForLoopableAsset>)arg1 ;
-(NSObject*<AVAsynchronousKeyValueLoading>*<FNFAVAsset>*<FNFAVPlayerItem>*<FNFAssetForPlayer>*<FNFInfoForLoopableAsset>)backupAsset;
-(void)afterLoadingOriginalAsset:(/*^block*/id)arg1 keys:(id)arg2 ;
-(id)_activeAsset;
-(void)_loopAssetIfLastFrameForTrack:(long long)arg1 ;
-(FNFFrameMetadata)_calculateOffset:(FNFFrameMetadata)arg1 ;
-(id)initWithAssetBlock:(/*^block*/id)arg1 ;
-(id)orignalAsset;
-(BOOL)usingBackUp;
-(int)currentLoopCount;
-(SCD_Struct_FB43)videoRealDuration;
-(void)playbackPauseRequested:(int)arg1 ;
-(BOOL)resetAssetToBeginningIfNeeded;
-(SCD_Struct_FB43)timeAfterSeek;
-(BOOL)shouldBufferVideoAsSoonAsPossible;
-(BOOL)seekToPosition:(SCD_Struct_FB43)arg1 ;
-(void)updatePlaybackTime:(SCD_Struct_FB43)arg1 ;
-(BOOL)shouldRestartAfterStalling;
-(BOOL)shouldPauseForStallingWithNextCheckCallback:(/*^block*/id)arg1 stallReason:(int)arg2 ;
-(SCD_Struct_FB43)minBufferTime;
-(FNFFrameMetadata)currentFrameMetadataForTrack:(long long)arg1 ;
-(void)advanceFrameForTrack:(long long)arg1 ;
-(BOOL)trackHasMoreFrames:(long long)arg1 ;
-(const char*)currentFrameDataForTrack:(long long)arg1 ;
-(SCD_Struct_FB43)maxBufferTime;
-(AudioStreamBasicDescription)asbd;
-(opaqueCMFormatDescriptionRef)formatDesc;
-(id)mpdAccessibilityDescription;
-(BOOL)containsTrack:(long long)arg1 ;
-(id)audioStreamExtraParameters;
-(BOOL)decompressedFramebuffer;
-(void)addErrorToLog:(id)arg1 shouldStopPlayback:(BOOL)arg2 ;
-(void)dealloc;
-(SCD_Struct_FB43)duration;
-(SCD_Struct_FB43)currentTime;
-(id)asset;
-(CGSize)naturalSize;
-(long long)status;
-(NSArray *)loadedTimeRanges;
-(void)setOriginalAsset:(NSObject*<AVAsynchronousKeyValueLoading>*<FNFAVAsset>*<FNFAVPlayerItem>*<FNFAssetForPlayer>*<FNFInfoForLoopableAsset>)arg1 ;
-(NSObject*<AVAsynchronousKeyValueLoading>*<FNFAVAsset>*<FNFAVPlayerItem>*<FNFAssetForPlayer>*<FNFInfoForLoopableAsset>)originalAsset;
-(id)resourceLoader;
-(id)accessLog;
-(SCD_Struct_FB43)videoDuration;
-(void)setAudioMix:(AVAudioMix *)arg1 ;
-(id)tracksWithMediaType:(id)arg1 ;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isPlaybackLikelyToKeepUp;
-(BOOL)isPlaybackBufferFull;
-(void)playbackStarted;
-(void)addOutput:(id)arg1 ;
-(CGAffineTransform)preferredTransform;
-(AVAudioMix *)audioMix;
-(void)cancelLoading;
@end

