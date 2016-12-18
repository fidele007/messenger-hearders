/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary, NSURL, FNFDashRepresentationProperties, NSString, NSArray;

@interface FNFDashPlaylistData : NSObject {

	NSMutableDictionary* _segmentedInitUrls;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _encodedInitDatas;
	NSURL* _videoSegmentedInitUrl;
	NSURL* _audioSegmentedInitUrl;
	FNFDashRepresentationProperties* _videoProperties;
	FNFDashRepresentationProperties* _audioProperties;
	NSString* _videoEncodedInitData;
	NSString* _audioEndodedInitData;
	BOOL _isParsed;
	BOOL _containsAudioTrack;
	BOOL _usedPrefetchQuality;
	BOOL _expectsFutureUpdates;
	unsigned _availableQualitiesCount;
	int _indexToForceFetchTo;
	int _audioFetchIndex;
	int _videoFetchIndex;
	long long _videoType;
	NSString* _representationId;
	NSString* _qualityLabel;
	NSString* _availableQualities;
	NSString* _audioRepresentationId;
	NSString* _projection;
	NSString* _audioChannelConfiguration;
	NSArray* _timelineEntries;
	NSArray* _fragmentedUrls;
	NSArray* _fragmentedInitializationLengths;
	SCD_Struct_FB25 _playlistDuration;

}

@property (assign,nonatomic) BOOL isParsed;                                        //@synthesize isParsed=_isParsed - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB25 playlistDuration;                     //@synthesize playlistDuration=_playlistDuration - In the implementation block
@property (assign,nonatomic) BOOL containsAudioTrack;                              //@synthesize containsAudioTrack=_containsAudioTrack - In the implementation block
@property (assign,nonatomic) long long videoType;                                  //@synthesize videoType=_videoType - In the implementation block
@property (nonatomic,copy) NSString * representationId;                            //@synthesize representationId=_representationId - In the implementation block
@property (nonatomic,copy) NSString * qualityLabel;                                //@synthesize qualityLabel=_qualityLabel - In the implementation block
@property (nonatomic,copy) NSString * availableQualities;                          //@synthesize availableQualities=_availableQualities - In the implementation block
@property (assign,nonatomic) unsigned availableQualitiesCount;                     //@synthesize availableQualitiesCount=_availableQualitiesCount - In the implementation block
@property (assign,nonatomic) BOOL usedPrefetchQuality;                             //@synthesize usedPrefetchQuality=_usedPrefetchQuality - In the implementation block
@property (nonatomic,copy) NSString * audioRepresentationId;                       //@synthesize audioRepresentationId=_audioRepresentationId - In the implementation block
@property (nonatomic,copy) NSString * projection;                                  //@synthesize projection=_projection - In the implementation block
@property (nonatomic,copy) NSString * audioChannelConfiguration;                   //@synthesize audioChannelConfiguration=_audioChannelConfiguration - In the implementation block
@property (nonatomic,copy) NSArray * timelineEntries;                              //@synthesize timelineEntries=_timelineEntries - In the implementation block
@property (assign,nonatomic) BOOL expectsFutureUpdates;                            //@synthesize expectsFutureUpdates=_expectsFutureUpdates - In the implementation block
@property (assign,nonatomic) int indexToForceFetchTo;                              //@synthesize indexToForceFetchTo=_indexToForceFetchTo - In the implementation block
@property (assign,nonatomic) int audioFetchIndex;                                  //@synthesize audioFetchIndex=_audioFetchIndex - In the implementation block
@property (assign,nonatomic) int videoFetchIndex;                                  //@synthesize videoFetchIndex=_videoFetchIndex - In the implementation block
@property (nonatomic,copy) NSArray * fragmentedUrls;                               //@synthesize fragmentedUrls=_fragmentedUrls - In the implementation block
@property (nonatomic,copy) NSArray * fragmentedInitializationLengths;              //@synthesize fragmentedInitializationLengths=_fragmentedInitializationLengths - In the implementation block
@property (nonatomic,readonly) BOOL isFragmented; 
@property (nonatomic,readonly) BOOL isLive; 
@property (nonatomic,readonly) BOOL isSegmented; 
-(void)setVideoType:(long long)arg1 ;
-(NSString *)representationId;
-(unsigned)availableQualitiesCount;
-(void)setAvailableQualitiesCount:(unsigned)arg1 ;
-(void)setAudioChannelConfiguration:(NSString *)arg1 ;
-(NSString *)projection;
-(NSString *)audioChannelConfiguration;
-(BOOL)isFragmented;
-(BOOL)isParsed;
-(BOOL)expectsFutureUpdates;
-(NSString *)qualityLabel;
-(NSString *)availableQualities;
-(BOOL)usedPrefetchQuality;
-(NSArray *)timelineEntries;
-(SCD_Struct_FB25)playlistDuration;
-(BOOL)containsAudioTrack;
-(unsigned)bitrateForRepresentation:(id)arg1 track:(long long)arg2 ;
-(void)setTimelineEntries:(NSArray *)arg1 ;
-(void)setAudioFetchIndex:(int)arg1 ;
-(void)setVideoFetchIndex:(int)arg1 ;
-(NSArray *)fragmentedUrls;
-(NSArray *)fragmentedInitializationLengths;
-(void)setIndexToForceFetchTo:(int)arg1 ;
-(int)audioFetchIndex;
-(int)videoFetchIndex;
-(int)indexToForceFetchTo;
-(NSString *)audioRepresentationId;
-(void)setIsParsed:(BOOL)arg1 ;
-(void)setPlaylistDuration:(SCD_Struct_FB25)arg1 ;
-(void)addRepresentationProperties:(id)arg1 track:(long long)arg2 ;
-(void)setFragmentedUrls:(NSArray *)arg1 ;
-(void)setFragmentedInitializationLengths:(NSArray *)arg1 ;
-(void)setExpectsFutureUpdates:(BOOL)arg1 ;
-(void)addEncodedInitData:(id)arg1 representation:(id)arg2 track:(long long)arg3 ;
-(void)addSegmentedInitUrl:(id)arg1 representation:(id)arg2 track:(long long)arg3 ;
-(void)setUsedPrefetchQuality:(BOOL)arg1 ;
-(void)setAvailableQualities:(NSString *)arg1 ;
-(void)setQualityLabel:(NSString *)arg1 ;
-(void)setRepresentationId:(NSString *)arg1 ;
-(void)setProjection:(NSString *)arg1 ;
-(void)setContainsAudioTrack:(BOOL)arg1 ;
-(void)setAudioRepresentationId:(NSString *)arg1 ;
-(id)encodedDataInitForRepresentation:(id)arg1 track:(long long)arg2 ;
-(id)segmentedInitUrlForRepresentation:(id)arg1 track:(long long)arg2 ;
-(BOOL)isLive;
-(id)init;
-(BOOL)isSegmented;
-(long long)videoType;
@end

