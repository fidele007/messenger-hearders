/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBLoomFileLogPermissionSource.h>
#import <Messenger/FBLoomFileManagerDelegate.h>
#import <Messenger/FBLoomUploadManagerDelegate.h>
#import <Messenger/FBLoomNetworkingSource.h>

@protocol FBNetworkDispatch;
@class FBLoomFileManager, FBLoomTraceManager, FBLoomRingBufferWriter, FBLoomRingBufferReader, FBLoomUploadManager, FBLoomConfigurationManager;

@interface FBLoomOrchestrator : NSObject <FBLoomFileLogPermissionSource, FBLoomFileManagerDelegate, FBLoomUploadManagerDelegate, FBLoomNetworkingSource> {

	mutex _mutex;
	BOOL _hasValidUser;
	BOOL _isEmployee;
	id<FBNetworkDispatch> _networkDispatch;
	FBLoomFileManager* _fileManager;
	FBLoomTraceManager* _traceManager;
	FBLoomRingBufferWriter* _ringBufferWriter;
	FBLoomRingBufferReader* _ringBufferReader;
	FBLoomUploadManager* _uploadManager;
	FBLoomConfigurationManager* _configManager;

}
+(id)sharedInstance;
-(void)addTraceProvider:(id)arg1 ;
-(void)userSessionDidUpdateWithValidUser:(BOOL)arg1 isEmployee:(BOOL)arg2 networkDispatcher:(id)arg3 ;
-(void)addNetworkProviderFromSingleton;
-(void)activateAllTracingIfInCTScan;
-(void)addTraceController:(id)arg1 ;
-(void)activateAllTracingPermanently;
-(BOOL)loomFileLogWriterHasPermissionToWriteUserInfoToDisk:(id)arg1 ;
-(void)loomFileManagerDidTrimTraceFiles:(id)arg1 ;
-(void)loomFileLogWriter:(id)arg1 didWriteTraceFileAtPath:(id)arg2 ;
-(void)manager:(id)arg1 withTraceFile:(id)arg2 didSuccessfullyUpload:(id)arg3 ;
-(void)manager:(id)arg1 withTraceFile:(id)arg2 didFail:(id)arg3 ;
-(id)networkDispatchForSender:(id)arg1 ;
-(BOOL)hasPermissionToUploadUserInfoForSender:(id)arg1 ;
-(BOOL)hasPermissionToDownloadUserConfiguration:(id)arg1 ;
-(BOOL)bypassBandwidthThrottlingForSender:(id)arg1 ;
-(void)removeTraceProvider:(id)arg1 ;
-(id)init;
@end

