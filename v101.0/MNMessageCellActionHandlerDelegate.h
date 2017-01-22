/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageCellActionHandlerDelegate <NSObject>
@required
-(void)messageActionHandler:(id)arg1 didSelectOpenPhotoView:(id)arg2;
-(void)messageActionHandler:(id)arg1 mayOpenAttachmentNode:(id)arg2 messageCell:(id)arg3;
-(void)messageActionHandler:(id)arg1 willOpenAttachmentNode:(id)arg2 messageCell:(id)arg3;
-(void)messageActionHandler:(id)arg1 didOpenAttachmentNode:(id)arg2 messageCell:(id)arg3;
-(void)messageActionHandler:(id)arg1 mayCloseAttachmentNode:(id)arg2 messageCell:(id)arg3;
-(void)messageActionHandler:(id)arg1 willCloseAttachmentNode:(id)arg2 messageCell:(id)arg3;
-(void)messageActionHandler:(id)arg1 didCloseAttachmentNode:(id)arg2 messageCell:(id)arg3;
-(void)messageActionHandler:(id)arg1 didDetectAddress:(id)arg2;
-(void)messageActionHandler:(id)arg1 didDetectDateForMessageCell:(id)arg2;
-(void)messageActionHandler:(id)arg1 didSelectMessage:(id)arg2;
-(void)messageActionHandler:(id)arg1 didSelectRetrySendMessage:(id)arg2;
-(void)messageActionHandler:(id)arg1 didCancelSendingMessage:(id)arg2;
-(void)messageActionHandler:(id)arg1 didSelectViewPackForSticker:(id)arg2;
-(void)messageActionHandler:(id)arg1 didResizeContentView:(id)arg2;
-(BOOL)messageActionHandlerIsCellPrefetchingEnabled:(id)arg1;
-(void)messageActionHandler:(id)arg1 accessibilityMessageCellDidBecomeFocused:(id)arg2;
-(void)messageActionHandler:(id)arg1 accessibilityMessageCellDidLoseFocus:(id)arg2;
-(void)messageActionHandler:(id)arg1 didUpdateViewState:(long long)arg2 messageKey:(id)arg3;
-(void)messageActionHandler:(id)arg1 didSelectSetGroupPhotoButtonInAdminMessageCell:(id)arg2;
-(void)messageActionHandler:(id)arg1 didSelectEditNicknameForParticipantId:(id)arg2;
-(void)messageActionHandler:(id)arg1 didSelectShowComposerExtensionIdentifier:(id)arg2;
-(void)messageActionHandler:(id)arg1 didSelectGreeting:(id)arg2;
-(void)messageActionHandler:(id)arg1 didSelectDeleteMessage:(id)arg2;

@end
