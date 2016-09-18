/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(FNFSeekStatus*)seekToPosition:(SCD_Struct_FB20)arg1;
-(unsigned long long)timescale;
-(void)createNewDataBlockDistributors;
-(BOOL)containsAudio;
-(SCD_Struct_FB20*)currentVideoPts;
-(void)parseAtomForTrack:(long long)arg1;
-(unsigned long long)moovAtomSize;
-(BOOL)parsedHeaderForTrack:(long long)arg1;
-(BOOL)parsedHeaders;
-(SCD_Struct_FB20*)timeLoadedForOffset:(unsigned long long)arg1 track:(long long)arg2;
-(BOOL)offsetIsAtLeastLargestOffset:(unsigned long long)arg1 track:(long long)arg2;
-(id)dataBlockDistributorForTrack:(long long)arg1;
-(unsigned long long)offsetForTimeInSeconds:(float)arg1 track:(long long)arg2;
-(BOOL)shouldResetAssetToBeginning;
-(BOOL)trackHasMoreFrames:(long long)arg1 isFullyDownloaded:(BOOL)arg2;
-(SCD_Struct_FB20*)nextAbsoluteAudioTime;
-(unsigned long long)currentOffsetForTrack:(long long)arg1;
-(void)setDelegate:(id)arg1;
-(SCD_Struct_FB20*)duration;
-(SCD_Struct_FB20*)videoDuration;

@end
