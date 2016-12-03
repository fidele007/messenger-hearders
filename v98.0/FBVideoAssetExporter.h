/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoAssetExporter <NSObject>
@property (nonatomic,readonly) long long estimatedOutputFileLength; 
@property (nonatomic,readonly) SCD_Struct_FB25 outputDuration; 
@optional
-(void)exportAsynchronouslyWithProgress:(/*^block*/id)arg1 segmentCompletion:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;

@required
-(void)exportAsynchronouslyWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelExportWithCompletionBlock:(/*^block*/id)arg1;
-(SCD_Struct_FB25)outputDuration;
-(long long)estimatedOutputFileLength;

@end
