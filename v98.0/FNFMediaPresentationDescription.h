/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FNFMediaPresentationDescription : NSObject {

	BOOL _isDynamic;
	BOOL _isFragmented;
	unsigned _durationMS;
	long long _videoType;
	double _publishFrameTimeMS;
	NSArray* _videoTracks;
	NSArray* _audioTracks;

}

@property (nonatomic,readonly) BOOL isDynamic;                          //@synthesize isDynamic=_isDynamic - In the implementation block
@property (nonatomic,readonly) BOOL isFragmented;                       //@synthesize isFragmented=_isFragmented - In the implementation block
@property (nonatomic,readonly) unsigned durationMS;                     //@synthesize durationMS=_durationMS - In the implementation block
@property (nonatomic,readonly) long long videoType;                     //@synthesize videoType=_videoType - In the implementation block
@property (nonatomic,readonly) double publishFrameTimeMS;               //@synthesize publishFrameTimeMS=_publishFrameTimeMS - In the implementation block
@property (nonatomic,copy,readonly) NSArray * videoTracks;              //@synthesize videoTracks=_videoTracks - In the implementation block
@property (nonatomic,copy,readonly) NSArray * audioTracks;              //@synthesize audioTracks=_audioTracks - In the implementation block
+(id)presentationDescriptionWithContentsOfXml:(id)arg1 mpdUrl:(id)arg2 segmentsFromEndToStartForLive:(unsigned)arg3 error:(id*)arg4 ;
+(id)urlFromBase:(id)arg1 suffix:(id)arg2 ;
-(BOOL)isFragmented;
-(double)publishFrameTimeMS;
-(unsigned)durationMS;
-(id)initWithAudioTracks:(id)arg1 videoTracks:(id)arg2 isDynamic:(BOOL)arg3 isFragmented:(BOOL)arg4 durationMS:(unsigned)arg5 videoType:(long long)arg6 publishFrameTime:(unsigned long long)arg7 ;
-(BOOL)isDynamic;
-(NSArray *)audioTracks;
-(NSArray *)videoTracks;
-(long long)videoType;
@end
