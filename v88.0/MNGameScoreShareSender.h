/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMediaUploadListener.h>
#import <Messenger/MNForwardSending.h>

@protocol MNForwardSenderListening;
@class NSString, FBUserSession, FBGraphQLMutationHandle, UIImage, FBMediaUploadHandler, NSArray;

@interface MNGameScoreShareSender : NSObject <FBMediaUploadListener, MNForwardSending> {

	NSString* _gameID;
	FBUserSession* _session;
	FBGraphQLMutationHandle* _mutationHandler;
	long long _gameScore;
	UIImage* _scoreImage;
	FBMediaUploadHandler* _mediaUploadHandler;
	NSString* _currentUploadJobID;
	NSArray* _savedRecipientInfos;
	id<MNForwardSenderListening> _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginSendForwardContent:(id)arg1 withPreparedAttachmentInfo:(id)arg2 toRecipients:(id)arg3 sendConversionContext:(id)arg4 listener:(id)arg5 ;
-(id)beginPrepareAttachmentForPreupload:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)uploadDidSucceed:(id)arg1 withResponse:(id)arg2 metrics:(id)arg3 ;
-(void)uploadDidFail:(id)arg1 withFailureReason:(unsigned long long)arg2 isResumable:(BOOL)arg3 metrics:(id)arg4 ;
-(void)uploadWasCancelled:(id)arg1 metrics:(id)arg2 ;
-(void)uploadHasProgressed:(id)arg1 withProgressInformation:(FBMediaUploadJobProgressInformation)arg2 ;
-(void)_startUploadJobWithContentSource:(id)arg1 config:(id)arg2 ;
-(void)_cancelUploadJobIfNeeded;
-(id)_threadKeySetFromRecipientInfos:(id)arg1 ;
-(void)_didSuccessFinishGameScoreShareMutation;
-(void)_didFailFinishGameScoreShareWithError:(id)arg1 ;
-(id)initWithGameID:(id)arg1 gameScore:(long long)arg2 scoreImage:(id)arg3 session:(id)arg4 mediaUploadHandler:(id)arg5 ;
-(void)cancel;
@end
