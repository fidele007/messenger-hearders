/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSFileHandle;

@interface FBAnalyticsMultiBatch : NSObject {

	NSString* _userFBID;
	NSString* _appVersion;
	NSString* _samplingConfigVersion;
	NSString* _samplingConfigChecksum;
	NSString* _directoryPath;
	NSString* _channelDescription;
	NSMutableArray* _logFileNames;
	unsigned long long _totalEventCount;
	NSString* _tempOutputDirectory;
	NSString* _outputFileName;
	NSString* _outputFilePath;
	NSFileHandle* _outputFileHandle;

}
-(unsigned long long)numberOfReducedLogFiles;
-(id)outputFileName;
-(id)initWithDirectoryPath:(id)arg1 tempOutputDir:(id)arg2 userFBID:(id)arg3 appVersion:(id)arg4 samplingConfigVersion:(id)arg5 samplingConfigChecksum:(id)arg6 channelDescription:(id)arg7 ;
-(BOOL)combineSingleBatch:(id)arg1 eventCount:(unsigned long long)arg2 ;
-(void)abortCombination;
-(BOOL)finishMultiBatchOutputFile;
-(BOOL)_createTemporaryOutputFile;
-(id)_startMultiBatchString;
-(id)_readDataFromLogFile:(id)arg1 ;
-(id)_setupOutputFileHandle:(id)arg1 ;
-(BOOL)_writeOutputData:(id)arg1 ;
-(BOOL)_openNewOutputFile:(id)arg1 eventCount:(unsigned long long)arg2 ;
-(BOOL)_closeOutputFileHandle;
-(void)_deleteOriginalFiles;
-(void)_deleteOutputFile;
-(unsigned long long)numberOfBatches;
@end

