/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMinibarToastViewDelegate.h>
#import <Messenger/MNProfilePictureSelectionViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNModalPresentation, FBProvider;
@class FBUserSession, FBCaptureManager, FBMLoggedInUserInfoManager, FBMLoggedInUserFetcher, MNMinibarToastView, FBToast, MNProfilePictureSelectionViewController, FBToastPresenter, NSString;

@interface MNUploadProfilePictureToastController : NSObject <MNMinibarToastViewDelegate, MNProfilePictureSelectionViewControllerDelegate, FBClassProvidable> {

	FBUserSession* _session;
	id<MNModalPresentation> _modalPresenter;
	FBCaptureManager* _captureManager;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	FBMLoggedInUserFetcher* _loggedInUserFetcher;
	BOOL _shouldDisplayToast;
	MNMinibarToastView* _toastView;
	FBToast* _toast;
	MNProfilePictureSelectionViewController* _presentedProfilePictureSelectionViewController;
	id<FBProvider> _profilePhotoUploaderProvider;
	FBToastPresenter* _toastPresenter;

}

@property (assign,nonatomic,__weak) FBToastPresenter * toastPresenter;              //@synthesize toastPresenter=_toastPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)profilePictureSelectionViewControllerDidTapNotNow:(id)arg1 ;
-(void)profilePictureSelectionViewControllerDidSelectProfilePicture:(id)arg1 ;
-(void)_dismissProfilePictureSelectionViewController;
-(void)setToastPresenter:(FBToastPresenter *)arg1 ;
-(FBToastPresenter *)toastPresenter;
-(id)initWithSession:(id)arg1 modalPresenter:(id)arg2 captureManager:(id)arg3 loggedInUserInfoManager:(id)arg4 loggedInUserFetcher:(id)arg5 profilePhotoUploaderProvider:(id)arg6 ;
-(void)_initializeToastIfNeeded;
-(void)_launchProfilePictureSelectionFlow;
-(void)_fetchLoggedInUserAndDismissProfilePictureSelectionFlow;
-(BOOL)_isProfilePictureSelectionCurrentlyPresented;
-(void)minibarToastViewDidPressButton:(id)arg1 ;
-(void)showToastIfNecessaryAnimated:(BOOL)arg1 ;
-(void)dismissToastAnimated:(BOOL)arg1 ;
@end

