/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadPhotoViewNodeControllerDelegate <NSObject>
@required
-(id)threadPhotoViewNodeController:(id)arg1 maskForPhotoViewModel:(id)arg2;
-(CGRect*)threadPhotoViewNodeController:(id)arg1 closeFrameForPhotoViewNode:(id)arg2;
-(id)threadPhotoViewNodeController:(id)arg1 hostViewForPhotoViewNode:(id)arg2;
-(id)threadPhotoViewNodeController:(id)arg1 messageForPhotoViewModel:(id)arg2;
-(id)threadPhotoViewNodeController:(id)arg1 photoViewForPhotoViewModel:(id)arg2;
-(void)threadPhotoViewNodeController:(id)arg1 willMoveToPhotoViewNode:(id)arg2;
-(void)threadPhotoViewNodeControllerModalPresentationStateDidChange:(id)arg1;
-(void)threadPhotoViewNodeController:(id)arg1 didCommitSendingWithAttachment:(id)arg2;
-(BOOL)threadPhotoViewNodeController:(id)arg1 switchToAlbumViewWithPhotoViewNode:(id)arg2;
-(void)threadPhotoViewNodeController:(id)arg1 willShowPhotoControls:(BOOL)arg2;
-(id)threadPhotoViewNodeControllerThreadName:(id)arg1;

@end
