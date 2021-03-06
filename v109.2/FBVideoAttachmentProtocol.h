/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString, NSDictionary, FBVideoAsset, FBVideoAssetEdits;


@protocol FBVideoAttachmentProtocol <FBMediaAttachmentProtocol,NSCoding>
@property (nonatomic,retain) NSURL * videoURL; 
@property (nonatomic,copy,readonly) NSString * presetName; 
@property (nonatomic,copy,readonly) NSString * outputFileType; 
@property (nonatomic,readonly) long long estimatedOutputFileLength; 
@property (nonatomic,readonly) SCD_Struct_FB43 duration; 
@property (nonatomic,readonly) double bitrateKbps; 
@property (nonatomic,readonly) BOOL requiresProcessing; 
@property (assign,nonatomic) long long frameOffsetInMillisecond; 
@property (nonatomic,copy) NSDictionary * extraUploadParameters; 
@property (nonatomic,copy,readonly) NSString * dataSourceID; 
@property (assign,nonatomic) unsigned long long indexHint; 
@property (nonatomic,readonly) FBVideoAsset * videoAsset; 
@property (nonatomic,readonly) FBMediaUploadQualityPolicy qualityPolicy; 
@property (nonatomic,readonly) BOOL isAnimatedGIF; 
@property (assign,nonatomic) BOOL notifyWhenProcessed; 
@property (nonatomic,copy,readonly) FBVideoAssetEdits * edits; 
@required
-(void)exportVideoDataWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 baseURL:(id)arg3 videoExportConfig:(id)arg4 errorSimulation:(id)arg5;
-(void)removeTemporaryExportFile;
-(void)cancelExportVideoDataWithCompletionBlock:(/*^block*/id)arg1;
-(BOOL)requiresProcessing;
-(long long)frameOffsetInMillisecond;
-(void)setFrameOffsetInMillisecond:(long long)arg1;
-(NSDictionary *)extraUploadParameters;
-(void)setExtraUploadParameters:(id)arg1;
-(void)setIndexHint:(unsigned long long)arg1;
-(BOOL)isAnimatedGIF;
-(BOOL)notifyWhenProcessed;
-(void)setNotifyWhenProcessed:(BOOL)arg1;
-(FBMediaUploadQualityPolicy)qualityPolicy;
-(FBVideoAssetEdits *)edits;
-(void)exportVideoDataWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 baseURL:(id)arg3 videoExportConfig:(id)arg4 errorSimulation:(id)arg5 timeRange:(SCD_Struct_FB44)arg6;
-(unsigned long long)indexHint;
-(SCD_Struct_FB43)duration;
-(NSString *)outputFileType;
-(NSString *)presetName;
-(FBVideoAsset *)videoAsset;
-(NSURL *)videoURL;
-(void)setVideoURL:(id)arg1;
-(double)bitrateKbps;
-(long long)estimatedOutputFileLength;
-(NSString *)dataSourceID;

@end

