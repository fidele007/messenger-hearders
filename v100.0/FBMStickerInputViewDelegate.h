/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMStickerInputViewDelegate <NSObject>
@optional
-(void)stickerInputView:(id)arg1 didBeginSearching:(id)arg2 completion:(/*^block*/id)arg3;
-(void)stickerInputView:(id)arg1 didEndSearching:(id)arg2 completion:(/*^block*/id)arg3;
-(void)stickerInputView:(id)arg1 didTapTabWithTitle:(id)arg2;

@required
-(void)stickerInputView:(id)arg1 didSelectSticker:(id)arg2;
-(void)didSelectStickerStoreWith:(unsigned long long)arg1 sourceView:(id)arg2;

@end

