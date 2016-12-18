/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBMediaProcessor;
#import <Messenger/Messenger-Structs.h>
@class NSObject, AVAssetWriterInputPixelBufferAdaptor, AVAssetWriter, AVAssetReader, AVAssetWriterInput, AVAssetReaderOutput;

@interface FBVideoSegmentedEncoder : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	SCD_Struct_FB25 _segmentDuration;
	AVAssetWriterInputPixelBufferAdaptor* _adaptor;
	BOOL _cancelled;
	AVAssetWriter* _writer;
	AVAssetReader* _reader;
	AVAssetWriterInput* _assetInput;
	AVAssetReaderOutput* _assetOutput;
	id<FBMediaProcessor> _mediaProcessor;

}

@property (nonatomic,readonly) AVAssetWriter * writer;                           //@synthesize writer=_writer - In the implementation block
@property (nonatomic,readonly) AVAssetReader * reader;                           //@synthesize reader=_reader - In the implementation block
@property (nonatomic,readonly) AVAssetWriterInput * assetInput;                  //@synthesize assetInput=_assetInput - In the implementation block
@property (nonatomic,readonly) AVAssetReaderOutput * assetOutput;                //@synthesize assetOutput=_assetOutput - In the implementation block
@property (nonatomic,readonly) id<FBMediaProcessor> mediaProcessor;              //@synthesize mediaProcessor=_mediaProcessor - In the implementation block
-(void)startEncodingWithFinishCallback:(/*^block*/id)arg1 progressCallback:(/*^block*/id)arg2 ;
-(AVAssetWriterInput *)assetInput;
-(AVAssetReaderOutput *)assetOutput;
-(id<FBMediaProcessor>)mediaProcessor;
-(void)cancelEncoding;
-(id)initWithAssetWriter:(id)arg1 assetReader:(id)arg2 assetInput:(id)arg3 pixelAdaptor:(id)arg4 assetOutput:(id)arg5 mediaProcessor:(id)arg6 segmentDuration:(SCD_Struct_FB25)arg7 queue:(id)arg8 ;
-(AVAssetReader *)reader;
-(AVAssetWriter *)writer;
@end
