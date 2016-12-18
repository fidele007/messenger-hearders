/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBProvider, FBCancelable, OS_dispatch_queue, MNForwardAttachmentSendCoordinatorDelegate;
@class MNBroadcastMessageSender, MNBroadcastMessageRequestHandler, FBMessagePreparedAttachment, NSString, MNMessageForwardSendController, NSArray, MNForwardContent, MNMessageSendConversionContext, NSObject;

@interface MNForwardAttachmentSendCoordinator : NSObject {

	id<FBProvider> _forwardSenderProvider;
	MNBroadcastMessageSender* _forwardSender;
	id<FBCancelable> _preuploadJob;
	MNBroadcastMessageRequestHandler* _requestHandler;
	FBMessagePreparedAttachment* _preparedAttachment;
	NSString* _offlineThreadingId;
	MNMessageForwardSendController* _sendController;
	NSArray* _lastRecipientInfos;
	MNForwardContent* _lastForwardContent;
	MNMessageSendConversionContext* _lastSendConversionContext;
	BOOL _shouldSendOnUploadCompletion;
	BOOL _shouldPreuploadAttachment;
	NSObject*<OS_dispatch_queue> _queue;
	long long _preuploadState;
	id<MNForwardAttachmentSendCoordinatorDelegate> _delegate;

}

@property (nonatomic,readonly) long long preuploadState;                                                  //@synthesize preuploadState=_preuploadState - In the implementation block
@property (assign,nonatomic,__weak) id<MNForwardAttachmentSendCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_resetPendingPreuploadState;
-(void)_finishPreuploadWithSuccess:(id)arg1 ;
-(void)_finishPreuploadWithError;
-(void)_sendForwardContentIfNecessary;
-(void)forwardContent:(id)arg1 toRecipientInfos:(id)arg2 sendConversionContext:(id)arg3 ;
-(id)initWithSession:(id)arg1 forwardSenderProvider:(id)arg2 sendController:(id)arg3 queue:(id)arg4 ;
-(void)beginAttachmentPreupload:(id)arg1 ;
-(void)cancelAttachmentPreupload;
-(long long)preuploadState;
-(void)forwardContent:(id)arg1 toGroupOfContacts:(id)arg2 sendConversionContext:(id)arg3 ;
-(void)setDelegate:(id<MNForwardAttachmentSendCoordinatorDelegate>)arg1 ;
-(id<MNForwardAttachmentSendCoordinatorDelegate>)delegate;
@end
