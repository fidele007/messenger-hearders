/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNDefaultAttachmentCellElementController.h>
#import <Messenger/MNRoomShareAttachmentViewDelegate.h>

@protocol FBIntentHandler, MNAvatarImageDecorating;
@class MNProfileImageViewController, FBUserSession, NSString;

@interface MNRoomShareAttachmentCellElementController : MNDefaultAttachmentCellElementController <MNRoomShareAttachmentViewDelegate> {

	id<FBIntentHandler> _intentHandler;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNProfileImageViewController* _profileImageViewController;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)awakeWithView:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(void)willAppearWithViewModel:(id)arg1 threadKey:(id)arg2 inContainerView:(id)arg3 ;
-(void)didDisappearInContainerView:(id)arg1 ;
-(void)shareAttachmentViewDidSelectViewRoom:(id)arg1 withJoinableLink:(id)arg2 ;
-(id)initWithIntentHandler:(id)arg1 profileImageViewController:(id)arg2 avatarImageDecoration:(id)arg3 session:(id)arg4 ;
@end
