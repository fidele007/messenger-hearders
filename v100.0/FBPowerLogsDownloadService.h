/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, FBPowerLogsDownloadServiceDelegate;
@class NSObject;

@interface FBPowerLogsDownloadService : NSObject {

	NSObject*<OS_dispatch_source> _src;
	id<FBPowerLogsDownloadServiceDelegate> _delegate;
	unsigned long long _retryCount;

}

@property (assign,nonatomic) unsigned long long retryCount;                                       //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic,__weak) id<FBPowerLogsDownloadServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startPowerLogDownload;
-(void)_prepareLogDirectory;
-(id)_loadPowerLogs;
-(id)powerLogDownloadSync;
-(id)_extractGZIPFile:(id)arg1 ;
-(void)setDelegate:(id<FBPowerLogsDownloadServiceDelegate>)arg1 ;
-(id<FBPowerLogsDownloadServiceDelegate>)delegate;
-(unsigned long long)retryCount;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(id)_logPath;
@end

