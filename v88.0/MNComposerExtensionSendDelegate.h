/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNComposerExtensionSendDelegate <NSObject>
@required
-(id)composerExtensionDidBeginSending:(id)arg1;
-(id)composerExtension:(id)arg1 didCommitSendingWithText:(id)arg2 attachment:(id)arg3 attribution:(id)arg4 clientTags:(id)arg5 extensibleMessageData:(id)arg6 sendingContextToken:(id)arg7;
-(void)composerExtensionDidCancelSending:(id)arg1;
-(BOOL)composerExtensionCanSelectContent:(id)arg1;
-(void)composerExtensionWillSelectContent:(id)arg1;
-(void)composerExtension:(id)arg1 didSelectContent:(id)arg2;
-(void)composerExtensionDidSendRequest:(id)arg1;

@end

