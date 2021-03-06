/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBComposerLogger, FBComposerPublisherData, NSMutableDictionary, FBStateMachine;

@interface FBMediaUploadItemLogger : NSObject {

	FBComposerLogger* _composerLogger;
	FBComposerPublisherData* _publisherData;
	NSMutableDictionary* _extra;
	FBStateMachine* _stateMachine;
	double _uploadProcessStartTime;
	double _uploadTransferStartTime;

}
-(void)logEvent:(id)arg1 extra:(id)arg2 ;
-(void)logEventWithCommonExtra:(id)arg1 extra:(id)arg2 ;
-(id)initWithComposerLogger:(id)arg1 publisherData:(id)arg2 ;
-(void)logProcessStart;
-(void)logEvent:(id)arg1 status:(id)arg2 error:(id)arg3 info:(id)arg4 ;
-(id)extraProcessFailureFromError:(id)arg1 ;
-(void)_logProcessCancel;
-(void)logUploadStart;
-(void)logUploadPause;
-(void)logProcessSuccess;
-(void)logTransferDequeue;
-(void)logTransferStart:(id)arg1 ;
-(void)logTransferSuccess;
-(void)logUploadSuccess:(id)arg1 ;
-(void)logCancel;
-(void)logFailure:(id)arg1 status:(id)arg2 extra:(id)arg3 ;
-(void)logUploadResume;
-(void)_logTransferCancel;
-(void)_logProcessFailureWithError:(id)arg1 ;
-(void)_logTransferFailure:(id)arg1 withError:(id)arg2 ;
-(void)logFetchPersistedResultStart;
-(void)logFetchPersistedResultComplete:(BOOL)arg1 ;
-(void)logImageProcessStart;
-(void)logImageProcessSuccess;
-(void)logImageProcessFailure;
-(void)logImageLoadingStart;
-(void)logImageLoadingSuccess;
-(void)logImageLoadingFailure;
-(void)reset;
-(void)addEntriesFromDictionary:(id)arg1 ;
@end

