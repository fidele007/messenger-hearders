/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMontageBroadcastSenderAttachmentGenerationListener <NSObject>
@required
-(void)montageBroadcastSenderAttachmentGenerationDidBegin:(id)arg1;
-(void)montageBroadcastSenderAttachmentGeneration:(id)arg1 didGeneratePreviewImage:(id)arg2;
-(void)montageBroadcastSenderAttachmentGeneration:(id)arg1 didGenerateOutgoingAttachment:(id)arg2;
-(void)montageBroadcastSenderAttachmentGeneration:(id)arg1 didFailWithError:(id)arg2;
-(void)montageBroadcastSenderAttachmentGenerationDidCancel:(id)arg1;
-(void)montageBroadcastSenderAttachmentGeneration:(id)arg1 willSendToMontage:(BOOL)arg2;

@end

