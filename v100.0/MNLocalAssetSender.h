/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNForwardSenderListening.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider;
@class FBMThreadMessageSender, MNThreadSendTargetCreator, MNLocalAssetAttachmentPreparer, ZRTariffedUxSentry, NSMutableSet, NSString;

@interface MNLocalAssetSender : NSObject <MNForwardSenderListening, FBClassProvidable> {

	FBMThreadMessageSender* _threadMessageSender;
	MNThreadSendTargetCreator* _threadSendTargetCreator;
	MNLocalAssetAttachmentPreparer* _localAssetAttachmentPreparer;
	ZRTariffedUxSentry* _zeroRatingSentry;
	id<FBProvider> _forwardSenderProvider;
	NSMutableSet* _forwardSenders;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)messageForwardSender:(id)arg1 didEndForwardingMessageToRecipients:(id)arg2 singleRecipientToErrorMap:(id)arg3 batchSendResultInfo:(id)arg4 ;
-(void)messageForwardSender:(id)arg1 willBeginForwardingMessageToRecipients:(id)arg2 ;
-(void)messageForwardSender:(id)arg1 didEndForwardingMessageToRecipient:(id)arg2 remainingRecipientsCount:(unsigned long long)arg3 error:(id)arg4 ;
-(id)initWithThreadMessageSender:(id)arg1 threadSendTargetCreator:(id)arg2 imageUploadCandidateStore:(id)arg3 session:(id)arg4 forwardSenderProvider:(id)arg5 ;
-(void)_sendAttachment:(id)arg1 toThreadTarget:(id)arg2 messageSendConversionContext:(id)arg3 text:(id)arg4 ;
-(void)_sendVideoAssets:(id)arg1 toUsers:(id)arg2 messageSendConversionContext:(id)arg3 text:(id)arg4 attachmentSendingSource:(long long)arg5 ;
-(void)_sendVideoAttachments:(id)arg1 sendTarget:(id)arg2 messageSendConversionContext:(id)arg3 text:(id)arg4 ;
-(void)_forwardOutgoingAttachment:(id)arg1 recipientsInfo:(id)arg2 messageSendConversionContext:(id)arg3 text:(id)arg4 ;
-(void)_broadcastVideoAssets:(id)arg1 recipientsInfo:(id)arg2 messageSendConversionContext:(id)arg3 text:(id)arg4 attachmentSendingSource:(long long)arg5 ;
-(void)sendAssets:(id)arg1 toUsers:(id)arg2 messageSendConversionContext:(id)arg3 text:(id)arg4 attachmentSendingSource:(long long)arg5 ;
-(void)sendAssets:(id)arg1 toExistingGroup:(id)arg2 messageSendConversionContext:(id)arg3 text:(id)arg4 attachmentSendingSource:(long long)arg5 ;
-(void)broadcastAssets:(id)arg1 toContacts:(id)arg2 messageSendConversionContext:(id)arg3 text:(id)arg4 attachmentSendingSource:(long long)arg5 ;
@end

