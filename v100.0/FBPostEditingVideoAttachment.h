/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPostEditingMediaAttachment.h>
#import <Messenger/FBVideoAttachmentProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSDictionary, FBVideoAsset, FBVideoAssetEdits, FBAssetMetadata, UIImage, NSDate, NSArray;

@interface FBPostEditingVideoAttachment : FBPostEditingMediaAttachment <FBVideoAttachmentProtocol, NSCopying> {

	NSURL* _url;
	FBAssetMetadata* _metadata;
	BOOL _notifyWhenProcessed;
	NSURL* _videoURL;
	long long _frameOffsetInMillisecond;
	NSDictionary* _extraUploadParameters;
	unsigned long long _indexHint;
	FBVideoAsset* _videoAsset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIImage * thumbnailImage; 
@property (assign,nonatomic) BOOL allowEditing; 
@property (assign,nonatomic) BOOL allowRemoval; 
@property (nonatomic,copy,readonly) NSString * assetID; 
@property (nonatomic,readonly) FBAssetMetadata * metadata; 
@property (nonatomic,copy) NSString * caption; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,copy) NSArray * mentions; 
@property (nonatomic,readonly) BOOL requiresUpload; 
@property (nonatomic,readonly) BOOL selectedFromMultiPicker; 
@property (nonatomic,copy,readonly) NSString * existingFBID; 
@property (nonatomic,readonly) BOOL isLivePhoto; 
@property (nonatomic,copy,readonly) NSString * nameOfServerAssetIDFieldOverridingFileURL; 
@property (nonatomic,retain) UIImage * displayImage; 
@property (nonatomic,retain) NSURL * videoURL;                                                         //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * presetName; 
@property (nonatomic,copy,readonly) NSString * outputFileType; 
@property (nonatomic,readonly) long long estimatedOutputFileLength; 
@property (nonatomic,readonly) SCD_Struct_FB25 duration; 
@property (nonatomic,readonly) double bitrateKbps; 
@property (nonatomic,readonly) BOOL requiresProcessing; 
@property (assign,nonatomic) long long frameOffsetInMillisecond;                                       //@synthesize frameOffsetInMillisecond=_frameOffsetInMillisecond - In the implementation block
@property (nonatomic,copy) NSDictionary * extraUploadParameters;                                       //@synthesize extraUploadParameters=_extraUploadParameters - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataSourceID; 
@property (assign,nonatomic) unsigned long long indexHint;                                             //@synthesize indexHint=_indexHint - In the implementation block
@property (nonatomic,readonly) FBVideoAsset * videoAsset;                                              //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,readonly) FBMediaUploadQualityPolicy qualityPolicy; 
@property (nonatomic,readonly) BOOL isAnimatedGIF; 
@property (assign,nonatomic) BOOL notifyWhenProcessed;                                                 //@synthesize notifyWhenProcessed=_notifyWhenProcessed - In the implementation block
@property (nonatomic,copy,readonly) FBVideoAssetEdits * edits; 
+(id)propertiesToSkipForCoding;
-(void)exportVideoDataWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 baseURL:(id)arg3 videoExportConfig:(id)arg4 errorSimulation:(id)arg5 ;
-(void)exportVideoDataWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 baseURL:(id)arg3 videoExportConfig:(id)arg4 errorSimulation:(id)arg5 timeRange:(SCD_Struct_FB26)arg6 ;
-(void)removeTemporaryExportFile;
-(void)cancelExportVideoDataWithCompletionBlock:(/*^block*/id)arg1 ;
-(double)bitrateKbps;
-(BOOL)requiresProcessing;
-(long long)frameOffsetInMillisecond;
-(void)setFrameOffsetInMillisecond:(long long)arg1 ;
-(NSDictionary *)extraUploadParameters;
-(void)setExtraUploadParameters:(NSDictionary *)arg1 ;
-(unsigned long long)indexHint;
-(void)setIndexHint:(unsigned long long)arg1 ;
-(FBMediaUploadQualityPolicy)qualityPolicy;
-(BOOL)isAnimatedGIF;
-(BOOL)notifyWhenProcessed;
-(void)setNotifyWhenProcessed:(BOOL)arg1 ;
-(FBVideoAssetEdits *)edits;
-(NSString *)nameOfServerAssetIDFieldOverridingFileURL;
-(id)_video;
-(id)initWithVideo:(id)arg1 mentions:(id)arg2 isAnimatedGIF:(BOOL)arg3 ;
-(unsigned long long)attachmentType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_FB25)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)dataSourceID;
-(NSString *)outputFileType;
-(long long)estimatedOutputFileLength;
-(NSString *)presetName;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSURL *)videoURL;
-(FBVideoAsset *)videoAsset;
@end

