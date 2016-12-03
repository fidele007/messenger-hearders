/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNMediaTrayViewControllerDelegate.h>
#import <Messenger/MNMediaPickerPresentationListener.h>

@protocol MNMediaTrayDataSource, MNModalPresentation, MNAlertControllerPresenting, MNPhotosDataRequesting, MNMediaTrayWrapperViewControllerDelegate;
@class MNMediaTrayViewController, FBUserSession, FBMobileConfigContextManager, MNImageUploadCandidateStore, MNLocalAssetAccessibilityLabelGenerator, NSString, UIColor;

@interface MNMediaTrayWrapperViewController : FBContainerViewController <MNMediaTrayViewControllerDelegate, MNMediaPickerPresentationListener> {

	MNMediaTrayViewController* _mediaTrayViewController;
	id<MNMediaTrayDataSource> _mediaTrayDataSource;
	id<MNModalPresentation> _navigationCoordinator;
	id<MNAlertControllerPresenting> _alertControllerPresenter;
	FBUserSession* _userSession;
	FBMobileConfigContextManager* _mobileConfigManager;
	MNImageUploadCandidateStore* _imageUploadCandidateStore;
	MNLocalAssetAccessibilityLabelGenerator* _assetAccessibilityLabelGenerator;
	id<MNPhotosDataRequesting> _photoDataRequester;
	NSString* _applicationName;
	BOOL _editingEnabledForPhoto;
	BOOL _editingEnabledForVideo;
	BOOL _photoOnly;
	BOOL _viewDidLoad;
	id<MNMediaTrayWrapperViewControllerDelegate> _delegate;
	UIColor* _tintColor;

}

@property (assign,nonatomic,__weak) id<MNMediaTrayWrapperViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                       //@synthesize tintColor=_tintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollToBeginningAnimated:(BOOL)arg1 ;
-(void)_addViewControllerAsChild:(id)arg1 ;
-(void)didPresentPhotoPicker;
-(void)didDismissPhotoPickerWithAttachmentsSelected:(BOOL)arg1 ;
-(id)initWithNavigationCoordinator:(id)arg1 alertControllerPresenter:(id)arg2 userSession:(id)arg3 mobileConfigManager:(id)arg4 imageUploadCandidateStore:(id)arg5 assetAccessibilityLabelGenerator:(id)arg6 applicationName:(id)arg7 editingEnabledForPhoto:(BOOL)arg8 editingEnabledForVideo:(BOOL)arg9 isPhotoOnly:(BOOL)arg10 photoDataRequester:(id)arg11 ;
-(void)loadSelectedAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)deselectSelectedAssets;
-(void)_deselectSelectedAssetsInMediaTray;
-(void)_initMediaTrayViewControllerIfNeeded;
-(void)mediaTrayViewControllerDidSelectPhotoPicker:(id)arg1 ;
-(void)mediaTrayViewControllerDidSelectSendAssets:(id)arg1 ;
-(void)mediaTrayViewControllerDidSelectEditPhoto:(id)arg1 image:(id)arg2 identifier:(id)arg3 ;
-(void)mediaTrayViewControllerDidSelectEditVideo:(id)arg1 fbVideoAsset:(id)arg2 urlAsset:(id)arg3 thumbnail:(id)arg4 identifier:(id)arg5 ;
-(void)setDelegate:(id<MNMediaTrayWrapperViewControllerDelegate>)arg1 ;
-(id<MNMediaTrayWrapperViewControllerDelegate>)delegate;
-(void)reset;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
@end
