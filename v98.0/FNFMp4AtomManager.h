/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FNFAtomManager.h>

@protocol FNFAtomManagerDelegate;
@class FNFDataBlockDistributor, NSDictionary;

@interface FNFMp4AtomManager : NSObject <FNFAtomManager> {

	id<FNFAtomManagerDelegate> _delegate;
	FNFDataBlockDistributor* _dataBlockDistributor;
	FNFMP4MoovAtomCompressed* _moovAtom;
	FNFMp4FrameMetadataCompressor* _frames[2];
	unsigned long long _moovAtomSize;
	BOOL _moovAtomParsed;
	BOOL _parsedHeader;
	SCD_Struct_FB25 _duration;
	opaqueCMFormatDescriptionRef _formatDesc;
	AudioStreamBasicDescription _asbd;
	NSDictionary* _audioStreamExtraParameters;
	int _trackId[2];
	unsigned _timescale[2];

}
-(opaqueCMFormatDescriptionRef)formatDesc;
-(AudioStreamBasicDescription)asbd;
-(id)audioStreamExtraParameters;
-(FNFFrameMetadata)currentFrameMetadataForTrack:(long long)arg1 ;
-(const char*)currentFrameDataForTrack:(long long)arg1 ;
-(void)advanceFrameForTrack:(long long)arg1 ;
-(FNFSeekStatus)seekToPosition:(SCD_Struct_FB25)arg1 ;
-(SCD_Struct_FB25)videoTrackDuration;
-(unsigned long long)timescale;
-(void)createNewDataBlockDistributors;
-(BOOL)shouldResetAssetToBeginning;
-(BOOL)containsAudio;
-(BOOL)trackHasMoreFrames:(long long)arg1 isFullyDownloaded:(BOOL)arg2 ;
-(id)dataBlockDistributorForTrack:(long long)arg1 ;
-(void)parseAtomForTrack:(long long)arg1 ;
-(SCD_Struct_FB25)nextAbsoluteAudioTime;
-(SCD_Struct_FB25)timeLoadedForOffset:(unsigned long long)arg1 track:(long long)arg2 ;
-(unsigned long long)offsetForTimeInSeconds:(float)arg1 track:(long long)arg2 ;
-(void)_resetDataForSeekBack;
-(SCD_Struct_FB25)currentVideoPts;
-(BOOL)offsetIsAtLeastLargestOffset:(unsigned long long)arg1 track:(long long)arg2 ;
-(unsigned long long)currentOffsetForTrack:(long long)arg1 ;
-(id)initWithMoovAtomSize:(unsigned long long)arg1 ;
-(unsigned long long)moovAtomSize;
-(BOOL)parsedHeaders;
-(BOOL)parsedHeaderForTrack:(long long)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(SCD_Struct_FB25)duration;
@end

