/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDiagnosticsDownloaderDelegate.h>

@protocol OS_dispatch_queue, FBDiagnosticsManagerDelegate;
@class NSObject, FBDiagnosticsDownloader, NSString;

@interface FBDiagnosticsManager : NSObject <FBDiagnosticsDownloaderDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	FBDiagnosticsDownloader* _downloader;
	BOOL _isUploadingPowerLogs;
	id<FBDiagnosticsManagerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL isUploadingPowerLogs;                                     //@synthesize isUploadingPowerLogs=_isUploadingPowerLogs - In the implementation block
@property (assign,nonatomic,__weak) id<FBDiagnosticsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)_logAsynchronously;
-(void)setIsUploadingPowerLogs:(BOOL)arg1 ;
-(void)downloader:(id)arg1 didDownloadDiagnostics:(id)arg2 ;
-(void)downloaderDidFailToDownloadDiagnostics:(id)arg1 ;
-(void)logDevicePowerLogs;
-(BOOL)isUploadingPowerLogs;
-(void)setDelegate:(id<FBDiagnosticsManagerDelegate>)arg1 ;
-(id)init;
-(id<FBDiagnosticsManagerDelegate>)delegate;
@end

