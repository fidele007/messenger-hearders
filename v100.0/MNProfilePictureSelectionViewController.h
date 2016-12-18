/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNProfilePictureSelectionViewDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Messenger/MNProfilePicturePreviewViewControllerDelegate.h>

@protocol MNProfilePhotoUploading, MNProfilePictureSelectionViewControllerDelegate;
@class MNProfilePicturePreviewViewController, MNProfilePictureSelectionView, UIImagePickerController, UINavigationController, MNCameraCaptureViewController, FBCaptureManager, FBUserSession, NSString;

@interface MNProfilePictureSelectionViewController : UIViewController <MNProfilePictureSelectionViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, MNProfilePicturePreviewViewControllerDelegate> {

	MNProfilePicturePreviewViewController* _profilePictureCaptureViewController;
	MNProfilePictureSelectionView* _profilePictureChooserView;
	UIImagePickerController* _mediaPickerController;
	UINavigationController* _pickerNavigationController;
	MNCameraCaptureViewController* _cameraCaptureViewController;
	FBCaptureManager* _captureManager;
	FBUserSession* _session;
	id<MNProfilePhotoUploading> _profilePhotoUploader;
	BOOL _navigationBarHidden;
	NSString* _analyticsModule;
	id<MNProfilePictureSelectionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNProfilePictureSelectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profilePicturePreviewViewControllerDidCaptureImage:(id)arg1 ;
-(void)_logEvent:(id)arg1 ;
-(void)_initProfilePictureCaptureViewControllerIfNeeded;
-(void)_initMediaPickerViewControllerIfNeeded;
-(void)profilePictureSelectionViewDidTapTakePhoto:(id)arg1 ;
-(void)profilePictureSelectionViewDidTapGallery:(id)arg1 ;
-(void)profilePictureSelectionViewDidTapNotNow:(id)arg1 ;
-(id)initWithCaptureManager:(id)arg1 session:(id)arg2 profilePhotoUploader:(id)arg3 analyticsModule:(id)arg4 ;
-(void)setDelegate:(id<MNProfilePictureSelectionViewControllerDelegate>)arg1 ;
-(id<MNProfilePictureSelectionViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
@end

