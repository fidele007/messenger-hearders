/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNDefaultAttachmentCellElementController.h>
#import <Messenger/MNContactShareCardViewControllerDelegate.h>
#import <Messenger/MNContactShareViewDelegate.h>

@protocol FBIntentHandler, MNAvatarImageDecorating, MNModalPresentation, MNContactShareCardHandler;
@class MNContactShareAttachmentView, MNThreadImageManager, MNProfileImageViewController, FBMobileConfigContextManager, FBWebRTCCallStarter, FBMUser, MNAddMessengerContactController, MNUserStore, NSString;

@interface MNContactShareAttachmentCellElementController : MNDefaultAttachmentCellElementController <MNContactShareCardViewControllerDelegate, MNContactShareViewDelegate> {

	id<FBIntentHandler> _intentHandler;
	MNContactShareAttachmentView* _contactShareView;
	MNThreadImageManager* _threadImageManager;
	MNProfileImageViewController* _profileImageViewController;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	id<MNModalPresentation> _modalPresenter;
	FBMobileConfigContextManager* _configManager;
	FBWebRTCCallStarter* _callStarter;
	FBMUser* _user;
	MNAddMessengerContactController* _addMessengerContactController;
	id<MNContactShareCardHandler> _contactShareCardHandler;
	MNUserStore* _userStore;
	unsigned long long _userRequestId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)awakeWithView:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(void)willAppearWithViewModel:(id)arg1 threadKey:(id)arg2 inContainerView:(id)arg3 ;
-(void)didDisappearInContainerView:(id)arg1 ;
-(void)_setUpUser:(id)arg1 ;
-(void)_sendMessageThroughURL:(id)arg1 ;
-(void)_dismissContactCard:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_callUserWithCallTrigger:(id)arg1 isVideoCall:(BOOL)arg2 ;
-(void)_updateContactAttachmentViewModel:(id)arg1 ;
-(void)contactShareCardViewControllerDidPressClose:(id)arg1 ;
-(void)contactShareCardViewControllerDidPressMessage:(id)arg1 ;
-(void)contactShareCardViewControllerDidPressAudio:(id)arg1 ;
-(void)contactShareCardViewControllerDidPressVideo:(id)arg1 ;
-(void)contactShareCardViewControllerDidPressAddContact:(id)arg1 ;
-(void)contactShareCardViewControllerDidSelectCreateGroup:(id)arg1 ;
-(void)contactShareCardViewControllerDidSelectViewFacebookProfile:(id)arg1 ;
-(void)contactShareCardViewControllerDidSelectCreateSecretChat:(id)arg1 ;
-(void)contactShareCardViewControllerDidSelectBlock:(id)arg1 ;
-(void)contactShareAttachmentViewDidSelectContactShare:(id)arg1 ;
-(void)contactShareAttachmentViewDidSelectActionButtonWithView:(id)arg1 ;
-(id)initWithContactShareHandler:(id)arg1 threadImageManager:(id)arg2 profileImageViewController:(id)arg3 avatarImageDecoration:(id)arg4 modalPresenter:(id)arg5 configManager:(id)arg6 callStarter:(id)arg7 addMessengerContactController:(id)arg8 contactShareCardHandler:(id)arg9 userStore:(id)arg10 ;
@end

