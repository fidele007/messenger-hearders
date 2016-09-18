/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAutoupdaterBackgroundDownloaderDelegate.h>
#import <Messenger/FBAutoupdaterUnarchiverDelegate.h>

@protocol FBAutoupdaterUpdateDriverDelegate, FBAutoupdaterCleaner, FBAutoupdaterDownloader, FBAutoupdaterUnarchiver, FBAutoupdaterDeltaUpdateApplier, FBAutoupdaterPreparer, FBAutoupdaterVerifier, FBAutoupdaterInstaller;
@class NSArray, NSDateFormatter, NSOperationQueue, NSString, NSFileManager, NSMutableArray, FBAutoupdaterUpdate, FBAutoupdaterHost, NSProgress;

@interface FBAutoupdaterUpdateDriver : NSObject <FBAutoupdaterBackgroundDownloaderDelegate, FBAutoupdaterUnarchiverDelegate> {

	NSArray* _cachedUpdates;
	NSDateFormatter* _dateFormatter;
	NSOperationQueue* _delegateQueue;
	NSString* _downloadPath;
	NSString* _extractPath;
	NSFileManager* _fileManager;
	NSMutableArray* _processQueue;
	FBAutoupdaterUpdate* _updateBeingProcessed;
	BOOL _autoRemoveUnappliedUpdates;
	BOOL _applyUpdatesAfterInstall;
	id<FBAutoupdaterUpdateDriverDelegate> _delegate;
	id<FBAutoupdaterCleaner> _cleaner;
	id<FBAutoupdaterDownloader> _downloader;
	id<FBAutoupdaterUnarchiver> _unarchiver;
	id<FBAutoupdaterDeltaUpdateApplier> _deltaApplier;
	id<FBAutoupdaterPreparer> _preparer;
	id<FBAutoupdaterVerifier> _verifier;
	id<FBAutoupdaterInstaller> _installer;
	FBAutoupdaterHost* _host;
	NSProgress* _progress;
	NSProgress* _currentOperationProgress;

}

@property (nonatomic,retain) id<FBAutoupdaterCleaner> cleaner;                                   //@synthesize cleaner=_cleaner - In the implementation block
@property (nonatomic,retain) id<FBAutoupdaterDownloader> downloader;                             //@synthesize downloader=_downloader - In the implementation block
@property (nonatomic,retain) id<FBAutoupdaterUnarchiver> unarchiver;                             //@synthesize unarchiver=_unarchiver - In the implementation block
@property (nonatomic,retain) id<FBAutoupdaterDeltaUpdateApplier> deltaApplier;                   //@synthesize deltaApplier=_deltaApplier - In the implementation block
@property (nonatomic,retain) id<FBAutoupdaterPreparer> preparer;                                 //@synthesize preparer=_preparer - In the implementation block
@property (nonatomic,retain) id<FBAutoupdaterVerifier> verifier;                                 //@synthesize verifier=_verifier - In the implementation block
@property (nonatomic,retain) id<FBAutoupdaterInstaller> installer;                               //@synthesize installer=_installer - In the implementation block
@property (nonatomic,retain) FBAutoupdaterHost * host;                                           //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) FBAutoupdaterUpdate * updateBeingProcessed;                         //@synthesize updateBeingProcessed=_updateBeingProcessed - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSProgress * currentOperationProgress;                              //@synthesize currentOperationProgress=_currentOperationProgress - In the implementation block
@property (assign,nonatomic,__weak) id<FBAutoupdaterUpdateDriverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL autoRemoveUnappliedUpdates;                                    //@synthesize autoRemoveUnappliedUpdates=_autoRemoveUnappliedUpdates - In the implementation block
@property (assign,nonatomic) BOOL applyUpdatesAfterInstall;                                      //@synthesize applyUpdatesAfterInstall=_applyUpdatesAfterInstall - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBAutoupdaterInstaller>)installer;
-(void)processUpdate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 host:(id)arg3 cleaner:(id)arg4 downloader:(id)arg5 unarchiver:(id)arg6 deltaApplier:(id)arg7 preparer:(id)arg8 verifier:(id)arg9 installer:(id)arg10 ;
-(void)cancelUpdate;
-(void)removeAllInactiveUpdatesAndResetActiveUpdate;
-(id<FBAutoupdaterCleaner>)cleaner;
-(void)setCleaner:(id<FBAutoupdaterCleaner>)arg1 ;
-(void)setInstaller:(id<FBAutoupdaterInstaller>)arg1 ;
-(void)autoupdaterDownloader:(id)arg1 update:(id)arg2 didFail:(id)arg3 ;
-(void)autoupdaterDownloader:(id)arg1 didStartUpdate:(id)arg2 expectedLength:(long long)arg3 ;
-(void)autoupdaterDownloader:(id)arg1 update:(id)arg2 didMakeProgress:(id)arg3 ;
-(void)autoupdaterDownloader:(id)arg1 didFinishUpdate:(id)arg2 ;
-(void)autoupdaterBackgroundDownloader:(id)arg1 didFinishEventsForIdentifier:(id)arg2 ;
-(id)_sessionIdentifier;
-(BOOL)_createPathIfNeeded:(id)arg1 error:(id*)arg2 ;
-(void)_enqueueUpdateForProcessing:(id)arg1 ;
-(BOOL)_shouldProcessUpdate:(id)arg1 ;
-(void)_failUpdate:(id)arg1 withMessage:(id)arg2 ;
-(void)_downloadUpdate:(id)arg1 ;
-(void)_finishUpdate:(id)arg1 ;
-(void)_unapplyAppliedUpdate;
-(void)_failUpdate:(id)arg1 error:(id)arg2 ;
-(id)_generateTemporaryPath:(id)arg1 ;
-(void)_updateProgress:(id)arg1 forStage:(int)arg2 ;
-(id)_generateDownloadPath;
-(id)_generateExtractPath;
-(BOOL)_runDeltaApplierForUpdate:(id)arg1 ;
-(BOOL)_runVerifierForUpdate:(id)arg1 ;
-(BOOL)_runPreparerForUpdate:(id)arg1 ;
-(void)_runInstallerForUpdate:(id)arg1 ;
-(id)_generateAppliedDeltaUpdatePath;
-(void)_completeUpdateProcessing:(id)arg1 ;
-(BOOL)applyUpdate:(id)arg1 error:(id*)arg2 ;
-(void)_processNextUpdateFromQueue;
-(BOOL)_unexpectedUpdate:(id)arg1 ;
-(void)_unarchiveUpdate:(id)arg1 ;
-(void)_processUnarchivedUpdate:(id)arg1 ;
-(id<FBAutoupdaterUnarchiver>)unarchiver;
-(void)setUnarchiver:(id<FBAutoupdaterUnarchiver>)arg1 ;
-(id<FBAutoupdaterDeltaUpdateApplier>)deltaApplier;
-(void)setDeltaApplier:(id<FBAutoupdaterDeltaUpdateApplier>)arg1 ;
-(void)setPreparer:(id<FBAutoupdaterPreparer>)arg1 ;
-(id<FBAutoupdaterVerifier>)verifier;
-(void)setVerifier:(id<FBAutoupdaterVerifier>)arg1 ;
-(FBAutoupdaterUpdate *)updateBeingProcessed;
-(void)setUpdateBeingProcessed:(FBAutoupdaterUpdate *)arg1 ;
-(NSProgress *)currentOperationProgress;
-(void)setCurrentOperationProgress:(NSProgress *)arg1 ;
-(BOOL)autoRemoveUnappliedUpdates;
-(void)setAutoRemoveUnappliedUpdates:(BOOL)arg1 ;
-(BOOL)applyUpdatesAfterInstall;
-(void)setApplyUpdatesAfterInstall:(BOOL)arg1 ;
-(void)autoupdaterUnarchiver:(id)arg1 didStartUpdate:(id)arg2 ;
-(void)autoupdaterUnarchiver:(id)arg1 didFinishUpdate:(id)arg2 ;
-(BOOL)autoupdaterUnarchiver:(id)arg1 update:(id)arg2 shouldUnarchiveFile:(id)arg3 toPath:(id)arg4 crc32:(unsigned long long)arg5 ;
-(void)autoupdaterUnarchiver:(id)arg1 update:(id)arg2 didMakeProgress:(id)arg3 ;
-(void)autoupdaterUnarchiver:(id)arg1 update:(id)arg2 didFail:(id)arg3 ;
-(void)setDelegate:(id<FBAutoupdaterUpdateDriverDelegate>)arg1 ;
-(id<FBAutoupdaterUpdateDriverDelegate>)delegate;
-(void)setProgress:(NSProgress *)arg1 ;
-(FBAutoupdaterHost *)host;
-(NSProgress *)progress;
-(void)setHost:(FBAutoupdaterHost *)arg1 ;
-(id<FBAutoupdaterPreparer>)preparer;
-(id<FBAutoupdaterDownloader>)downloader;
-(void)setDownloader:(id<FBAutoupdaterDownloader>)arg1 ;
@end

