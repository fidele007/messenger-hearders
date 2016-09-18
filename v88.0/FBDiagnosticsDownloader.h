/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDiagnosticsPowerLogsDownloadServiceDelegate.h>

@protocol FBDiagnosticsDownloaderDelegate;
@class FBDiagnosticsPowerLogsDownloadService, NSString;

@interface FBDiagnosticsDownloader : NSObject <FBDiagnosticsPowerLogsDownloadServiceDelegate> {

	FBDiagnosticsPowerLogsDownloadService* _downloadService;
	id<FBDiagnosticsDownloaderDelegate> _delegate;
	unsigned long long _requestedInterval;

}

@property (assign,nonatomic) unsigned long long requestedInterval;                             //@synthesize requestedInterval=_requestedInterval - In the implementation block
@property (assign,nonatomic,__weak) id<FBDiagnosticsDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)powerLogDownloadService:(id)arg1 didFinishWithSQLLogFiles:(id)arg2 ;
-(void)powerLogDownloadService:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setRequestedInterval:(unsigned long long)arg1 ;
-(void)_collectAndLogUnsentDiagnosticsDataFromSqlLogFiles:(id)arg1 ;
-(void)_collectAndReturnDiagnosticsDataFromSqlLogFiles:(id)arg1 ;
-(void)_collectDataFromSqlLogFiles:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(unsigned long long)requestedInterval;
-(void)downloadDiagnosticsWithInterval:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBDiagnosticsDownloaderDelegate>)arg1 ;
-(id<FBDiagnosticsDownloaderDelegate>)delegate;
@end
