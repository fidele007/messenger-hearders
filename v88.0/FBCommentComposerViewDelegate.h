/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCommentComposerViewDelegate <NSObject>
@optional
-(void)commentComposerView:(id)arg1 didPasteImage:(id)arg2;
-(void)commentComposerViewDidDismissCommentComposer:(id)arg1;
-(void)commentComposerView:(id)arg1 presentFullScreenWithStickerTray:(id)arg2 completion:(/*^block*/id)arg3;
-(void)commentComposerView:(id)arg1 dismissFullScreenStickerTrayWithCompletion:(/*^block*/id)arg2 animationBlock:(/*^block*/id)arg3;
-(void)commentComposerView:(id)arg1 didSelectStickerWithFBID:(id)arg2;
-(void)commentComposerView:(id)arg1 didSelectStickerStoreWithFBID:(unsigned long long)arg2 fromView:(id)arg3;
-(void)commentComposerViewNeedsResize:(id)arg1;
-(void)commentComposerViewDidTapAttachPhotoButton:(id)arg1;
-(void)commentComposerViewDidTapTakeMediaButton:(id)arg1;
-(void)commentComposerViewDidTapStickerComposerButton:(id)arg1;
-(void)commentComposerViewDidTapPrivateCommentComposerButton:(id)arg1;
-(void)commentComposerViewDidTapSendButton:(id)arg1;
-(BOOL)commentComposerCanSelectMentions:(id)arg1;
-(void)commentComposerView:(id)arg1 didPressKey:(long long)arg2;

@end

