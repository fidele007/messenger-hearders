/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNForwardSending <NSObject,FBCancelable>
@required
-(id)beginPrepareAttachmentForPreupload:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5;
-(void)beginSendForwardContent:(id)arg1 withPreparedAttachmentInfo:(id)arg2 toRecipients:(id)arg3 extraClientTags:(id)arg4 sendConversionContext:(id)arg5 listener:(id)arg6;

@end

