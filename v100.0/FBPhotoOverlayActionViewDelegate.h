/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPhotoOverlayActionViewDelegate <NSObject>
@optional
-(void)overlayActionViewCaptionHeaderTap:(id)arg1;
-(void)overlayActionView:(id)arg1 didTapWithResult:(id)arg2;
-(void)overlayActionView:(id)arg1 captionExpansion:(BOOL)arg2;

@required
-(void)overlayActionViewDidTapLike:(id)arg1;
-(void)overlayActionViewDidTapShare:(id)arg1;
-(void)overlayActionViewDidTapComment:(id)arg1;
-(void)overlayActionViewDidTapUFICounts:(id)arg1;
-(void)overlayActionViewDidTapMoreButton:(id)arg1;
-(void)overlayActionViewDidTapDoneButton:(id)arg1;

@end

