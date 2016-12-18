/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMediaUploadFlowCoordinatorListener.h>
#import <Messenger/FBMediaPublishingManagerProtocol.h>

@protocol FBMediaPublishingManagerDelegate, FBMediaUploadItemManagerProtocol;
@class NSDictionary, FBPublisherManager, NSError, FBComposerLogger, FBTimer, FBUserSession, FBComposerPublisherData, NSString;

@interface FBMediaPublishingManager : NSObject <FBMediaUploadFlowCoordinatorListener, FBMediaPublishingManagerProtocol> {

	FBPublisherManager* _publisherManager;
	double _totalProgress;
	double _flowStartTime;
	double _uploadBatchStartTime;
	double _uploadPublishStartTime;
	BOOL _flowStarted;
	NSError* _flowError;
	BOOL _uploading;
	double _timeForWaitingRetry;
	BOOL _attemptTimeout;
	FBComposerLogger* _logger;
	FBTimer* _stepTimeoutTimer;
	FBTimer* _attemptTimeoutTimer;
	FBTimer* _waitingRetryTimer;
	FBTimer* _canCancelPublishingOfPublisherDataTimer;
	FBUserSession* _userSession;
	BOOL _isStartedState;
	FBComposerPublisherData* _publisherData;
	id<FBMediaPublishingManagerDelegate> _delegate;
	id<FBMediaUploadItemManagerProtocol> _uploadManager;
	unsigned long long _attemptNumber;

}

@property (nonatomic,readonly) long long mediaPublisherPhotoPostType; 
@property (assign,nonatomic) unsigned long long attemptNumber;                                  //@synthesize attemptNumber=_attemptNumber - In the implementation block
@property (assign,nonatomic,__weak) id<FBMediaPublishingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FBMediaUploadItemManagerProtocol> uploadManager;                //@synthesize uploadManager=_uploadManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * uploadQualityByAttachmentID; 
-(void)_logEvent:(id)arg1 ;
-(void)_logEvent:(id)arg1 info:(id)arg2 ;
-(void)completedUploadAllMedia:(id)arg1 ;
-(void)uploadManager:(id)arg1 didStartMediaUploadItem:(id)arg2 ;
-(void)uploadManager:(id)arg1 didFinishMediaUploadItem:(id)arg2 mediaFBID:(id)arg3 ;
-(void)uploadManager:(id)arg1 didUpdateTotalProgress:(double)arg2 ;
-(void)uploadManager:(id)arg1 didUploadMediaItem:(id)arg2 failWithError:(id)arg3 ;
-(void)uploadManager:(id)arg1 didStartTranscodingForMediaItem:(id)arg2 ;
-(void)_startUploadAndPublishMediaAttachments:(BOOL)arg1 ;
-(id<FBMediaUploadItemManagerProtocol>)uploadManager;
-(id)initWithPublisherManager:(id)arg1 logger:(id)arg2 mediaType:(unsigned long long)arg3 session:(id)arg4 ;
-(void)setUploadManager:(id<FBMediaUploadItemManagerProtocol>)arg1 ;
-(void)publishRequestDidStart;
-(void)publishRequestSucceedWithResult:(id)arg1 status:(id)arg2 numberOfRequestsSent:(long long)arg3 ;
-(void)publishRequestFailWithError:(id)arg1 status:(id)arg2 numberOfRequestsSent:(long long)arg3 ;
-(void)publishFlowDidStartWithPublisherData:(id)arg1 ;
-(void)publishFlowDidRetryWithPublisherData:(id)arg1 source:(unsigned long long)arg2 ;
-(void)startPublishAttempt:(BOOL)arg1 ;
-(void)publishFlowDidPauseWithPublisherData:(id)arg1 ;
-(void)publishFlowDidCancelWithPublisherData:(id)arg1 reason:(id)arg2 ;
-(void)publishFlowDidIncompleteWithState:(id)arg1 ;
-(void)publishFlowDidTerminallyFail;
-(NSDictionary *)uploadQualityByAttachmentID;
-(void)publishRequestWillStart:(id)arg1 ;
-(void)_logApplicationBecameActive;
-(void)_logApplicationWillResignActive;
-(void)_logApplicationWillTerminate;
-(void)_logApplicationDidEnterBackground;
-(void)_logApplicationWillEnterForeground;
-(void)_logApplicationDidFinishLaunching;
-(void)_logApplicationDidReceiveMemoryWarning;
-(void)_logApplicationSignificantTimeChange;
-(void)_startAttemptTimeoutTimer;
-(void)_logFlowStart;
-(BOOL)_uploadStepIsDone;
-(void)_logUploadBatchCancel;
-(void)_logFlowGiveupOrCancelWithReason:(id)arg1 ;
-(void)_cancelStepTimeoutTimer;
-(void)_cancelAttemptTimeoutTimer;
-(void)_cancelWaitingRetryTimer;
-(void)_logFlowFatal;
-(unsigned long long)attemptNumber;
-(void)setAttemptNumber:(unsigned long long)arg1 ;
-(void)_logUploadBatchStart;
-(void)_startStepTimeoutTimer;
-(void)_didUploadAllMediaAttachments;
-(void)_publishUploadedMediaAttachmentsAttempt;
-(void)_logPublishRequestStart:(id)arg1 ;
-(void)_logPublishRequestDequeue;
-(void)_logPublishRequestSuccess:(id)arg1 numberOfRequestsSent:(long long)arg2 ;
-(void)publishFlowDidSucceedWithResult:(id)arg1 ;
-(void)_logPublishRequestFailure:(id)arg1 withError:(id)arg2 numberOfRequestsSent:(long long)arg3 ;
-(void)_attemptDidFailWithError:(id)arg1 ;
-(void)_notifyCurrentUploadItem:(id)arg1 ;
-(void)_logUploadBatchFailure;
-(void)_logEvent:(id)arg1 status:(id)arg2 done:(BOOL)arg3 error:(id)arg4 info:(id)arg5 numberOfRequestsSent:(long long)arg6 ;
-(void)_logAttemptFailureWithError:(id)arg1 ;
-(BOOL)_errorIsTransient:(id)arg1 ;
-(BOOL)cancelFreeEnabled;
-(void)_startWaitingRetryTimer;
-(void)_logFlowSuccess;
-(void)_notifyCurrentUploadItemType:(int)arg1 thumbnail:(id)arg2 ;
-(void)_cancelCanCancelPublishingOfPublisherDataTimer;
-(void)_didExceedCanCancelPublishingOfPublisherDataTimeout;
-(double)_durationOfCanCancelPublishingOfPublisherDataTimer:(id)arg1 ;
-(void)_didExceedStepTimeout;
-(void)_didExceedAttemptTimeout;
-(void)_didExceedWaitingRetry;
-(long long)mediaPublisherPhotoPostType;
-(void)_startCanCancelPublishingOfPublisherDataTimer;
-(void)_logUploadBatchSuccess;
-(BOOL)_existExpiredMedia;
-(void)_clearDiscardedUploadedMedia;
-(void)setDelegate:(id<FBMediaPublishingManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMediaPublishingManagerDelegate>)delegate;
@end

