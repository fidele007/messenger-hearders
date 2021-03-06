/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBVideoAssetExporter.h>

@class NSURL, AVAssetExportSession, NSString;

@interface FBLivePhotoVideoExporter : NSObject <FBVideoAssetExporter> {

	NSURL* _assetURL;
	NSURL* _outputBaseURL;
	AVAssetExportSession* _exportSession;
	long long _estimatedOutputFileLength;
	SCD_Struct_FB25 _outputDuration;

}

@property (nonatomic,readonly) long long estimatedOutputFileLength;              //@synthesize estimatedOutputFileLength=_estimatedOutputFileLength - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB25 outputDuration;                   //@synthesize outputDuration=_outputDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)exportAsynchronouslyWithProgress:(/*^block*/id)arg1 segmentCompletion:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)exportAsynchronouslyWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelExportWithCompletionBlock:(/*^block*/id)arg1 ;
-(SCD_Struct_FB25)outputDuration;
-(id)initWithAssetURL:(id)arg1 outputBaseURL:(id)arg2 ;
-(long long)estimatedOutputFileLength;
@end

