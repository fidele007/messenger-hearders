/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNMessageSendConversionContext, MNComposerExtensionTarget, MNTextAndAttachmentForwardContent;

@interface MNMessagesViewThreadConfiguration : FBValueObject <NSCopying> {

	BOOL _autoSendReplyContent;
	BOOL _shouldForceDisableAutoRotation;
	MNMessageSendConversionContext* _messageSendConversionContext;
	MNComposerExtensionTarget* _initialComposerExtensionTarget;
	MNTextAndAttachmentForwardContent* _replyContent;

}

@property (nonatomic,copy,readonly) MNMessageSendConversionContext * messageSendConversionContext;              //@synthesize messageSendConversionContext=_messageSendConversionContext - In the implementation block
@property (nonatomic,copy,readonly) MNComposerExtensionTarget * initialComposerExtensionTarget;                 //@synthesize initialComposerExtensionTarget=_initialComposerExtensionTarget - In the implementation block
@property (nonatomic,copy,readonly) MNTextAndAttachmentForwardContent * replyContent;                           //@synthesize replyContent=_replyContent - In the implementation block
@property (nonatomic,readonly) BOOL autoSendReplyContent;                                                       //@synthesize autoSendReplyContent=_autoSendReplyContent - In the implementation block
@property (nonatomic,readonly) BOOL shouldForceDisableAutoRotation;                                             //@synthesize shouldForceDisableAutoRotation=_shouldForceDisableAutoRotation - In the implementation block
-(MNMessageSendConversionContext *)messageSendConversionContext;
-(MNComposerExtensionTarget *)initialComposerExtensionTarget;
-(MNTextAndAttachmentForwardContent *)replyContent;
-(BOOL)autoSendReplyContent;
-(BOOL)shouldForceDisableAutoRotation;
-(id)initWithMessageSendConversionContext:(id)arg1 initialComposerExtensionTarget:(id)arg2 replyContent:(id)arg3 autoSendReplyContent:(BOOL)arg4 shouldForceDisableAutoRotation:(BOOL)arg5 ;
@end

