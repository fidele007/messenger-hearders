/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(void)composerExtension:(id)arg1 didSelectLightweightActionType:(id)arg2;

@end

