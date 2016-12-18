/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFAssetForPlayer
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) SCD_Struct_FB25 maxBufferTime; 
@property (nonatomic,readonly) SCD_Struct_FB25 minBufferTime; 
@required
-(opaqueCMFormatDescriptionRef)formatDesc;
-(AudioStreamBasicDescription*)asbd;
-(id)audioStreamExtraParameters;
-(void)addErrorToLog:(id)arg1 shouldStopPlayback:(BOOL)arg2;
-(BOOL)trackHasMoreFrames:(long long)arg1;
-(FNFFrameMetadata*)currentFrameMetadataForTrack:(long long)arg1;
-(const char*)currentFrameDataForTrack:(long long)arg1;
-(void)advanceFrameForTrack:(long long)arg1;
-(void)updatePlaybackTime:(SCD_Struct_FB25)arg1;
-(BOOL)shouldPauseForStallingWithNextCheckCallback:(/*^block*/id)arg1;
-(BOOL)shouldRestartAfterStalling;
-(BOOL)shouldBufferVideoAsSoonAsPossible;
-(BOOL)seekToPosition:(SCD_Struct_FB25)arg1;
-(BOOL)resetAssetToBeginningIfNeeded;
-(void)playbackPauseRequested;
-(SCD_Struct_FB25*)timeAfterSeek;
-(id)debugDetails;
-(BOOL)decompressedFramebuffer;
-(SCD_Struct_FB25)maxBufferTime;
-(SCD_Struct_FB25)minBufferTime;
-(BOOL)containsTrack:(long long)arg1;
-(SCD_Struct_FB25*)duration;
-(long long)status;
-(CGAffineTransform*)preferredTransform;
-(void)playbackStarted;

@end

