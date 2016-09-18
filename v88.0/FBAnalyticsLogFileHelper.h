/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
