/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadContextViewDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNAuthenticationManager, MNAvatarImageDecorating, MNAlertControllerPresenting, MNThreadContextCellControllerDelegate;
@class MNThreadContextView, UICollectionView, MNThreadViewModel, MNProfileImageViewController, MNThreadImageManager, MNImageCreator, FBUserSession, MNAddMessengerContactController, MNUserSettings, NSString;

@interface MNThreadContextCellController : NSObject <MNThreadContextViewDelegate, FBClassProvidable, MNThreadViewModelConfigurable> {

	MNThreadContextView* _threadContextView;
	UICollectionView* _collectionView;
	MNThreadViewModel* _threadViewModel;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;
	id<MNAuthenticationManager> _authManager;
	MNImageCreator* _groupImageCreator;
	FBUserSession* _userSession;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNAddMessengerContactController* _addMessengerContactController;
	MNUserSettings* _userSettings;
	id<MNAlertControllerPresenting> _alertControllerPresenter;
	id<MNThreadContextCellControllerDelegate> _delegate;

}

@property (nonatomic,readonly) MNThreadViewModel * threadViewModel;                                  //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNThreadContextCellControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_logEvent:(id)arg1 ;
-(MNThreadViewModel *)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)_addAsMessengerContact;
-(void)awakeWithCollectionView:(id)arg1 ;
-(id)layoutElements;
-(id)cellWithIndexPath:(id)arg1 inCollectionView:(id)arg2 withDelegate:(id)arg3 ;
-(id)initWithProfileImageViewController:(id)arg1 threadImageManager:(id)arg2 authManager:(id)arg3 userSession:(id)arg4 avatarImageDecoration:(id)arg5 addMessengerContactController:(id)arg6 userSettings:(id)arg7 alertControllerPresenter:(id)arg8 ;
-(void)_updateThreadContextViewWithViewModel:(id)arg1 ;
-(void)_showAddContactConfirmationAlertWithButton:(id)arg1 ;
-(void)_updateProfileImageView;
-(void)_updateContactStatusView;
-(void)_didTapCancelAddContactConfirmation;
-(void)_didTapAcceptAddContactConfirmation;
-(void)_saveDidAcceptAddContactAlert;
-(void)threadContextViewDidTapView:(id)arg1 ;
-(void)threadContextView:(id)arg1 didTapAddContactButton:(id)arg2 ;
-(void)setDelegate:(id<MNThreadContextCellControllerDelegate>)arg1 ;
-(id<MNThreadContextCellControllerDelegate>)delegate;
@end

