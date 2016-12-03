/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBAnalyticsLoggingPolicy;

@interface FBAnalyticsLogFileHelper : NSObject {

	NSString* _userFBID;
	NSString* _samplingConfigVersion;
	NSString* _samplingConfigChecksum;
	FBAnalyticsLoggingPolicy* _loggingPolicy;
	NSString* _channelDescription;
	NSString* _tempOutputDirectory;

}
+(void)updateAppVersion:(id)arg1 ;
-(void)updateUserFBID:(id)arg1 ;
-(id)initWithUserFBID:(id)arg1 loggingPolicy:(id)arg2 channelDescription:(id)arg3 ;
-(id)combineMultiBatches:(id)arg1 startIndex:(unsigned long long)arg2 path:(id)arg3 maxEventCount:(unsigned long long)arg4 maxBatchFileSize:(unsigned long long)arg5 ;
-(id)_createTemporaryDirectory:(id)arg1 ;
-(BOOL)_closeCurMultiBatch:(id)arg1 ;
-(BOOL)_combineFileIntoCurMultiBatch:(id*)arg1 fileName:(id)arg2 eventCount:(unsigned long long)arg3 directoryPath:(id)arg4 ;
@end
