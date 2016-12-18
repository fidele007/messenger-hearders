/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFAtomManager
@required
-(opaqueCMFormatDescriptionRef)formatDesc;
-(AudioStreamBasicDescription*)asbd;
-(id)audioStreamExtraParameters;
-(FNFFrameMetadata*)currentFrameMetadataForTrack:(long long)arg1;
-(const char*)currentFrameDataForTrack:(long long)arg1;
-(void)advanceFrameForTrack:(long long)arg1;
-(FNFSeekStatus*)seekToPosition:(SCD_Struct_FB25)arg1;
-(SCD_Struct_FB25*)videoTrackDuration;
-(unsigned long long)timescale;
-(void)createNewDataBlockDistributors;
-(BOOL)shouldResetAssetToBeginning;
-(BOOL)containsAudio;
-(BOOL)trackHasMoreFrames:(long long)arg1 isFullyDownloaded:(BOOL)arg2;
-(id)dataBlockDistributorForTrack:(long long)arg1;
-(void)parseAtomForTrack:(long long)arg1;
-(SCD_Struct_FB25*)timeLoadedForOffset:(unsigned long long)arg1 track:(long long)arg2;
-(SCD_Struct_FB25*)nextAbsoluteAudioTime;
-(unsigned long long)offsetForTimeInSeconds:(float)arg1 track:(long long)arg2;
-(SCD_Struct_FB25*)currentVideoPts;
-(BOOL)offsetIsAtLeastLargestOffset:(unsigned long long)arg1 track:(long long)arg2;
-(unsigned long long)currentOffsetForTrack:(long long)arg1;
-(unsigned long long)moovAtomSize;
-(BOOL)parsedHeaders;
-(BOOL)parsedHeaderForTrack:(long long)arg1;
-(void)setDelegate:(id)arg1;
-(SCD_Struct_FB25*)duration;

@end

