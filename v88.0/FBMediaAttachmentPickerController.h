/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <Messenger/FBMediaPickerViewControllerDelegate.h>
#import <Messenger/FBMediaAttachmentPickerPhotoPreviewViewControllerDelegate.h>

@protocol FBMediaAttachmentPickerControllerDelegate;
@class FBUserSession, FBMediaPickerViewController, UIImagePickerController, FBMediaAttachmentPickerControllerConfiguration, NSArray, NSString;

@interface FBMediaAttachmentPickerController : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, FBMediaPickerViewControllerDelegate, FBMediaAttachmentPickerPhotoPreviewViewControllerDelegate> {

	FBUserSession* _session;
	id<FBMediaAttachmentPickerControllerDelegate> _delegate;
	FBMediaPickerViewController* _multiMediaPicker;
	UIImagePickerController* _defaultImagePicker;
	FBMediaAttachmentPickerControllerConfiguration* _configuration;
	NSArray* _selectedMediaAttachments;

}

@property (nonatomic,retain) FBMediaPickerViewController * multiMediaPicker;                              //@synthesize multiMediaPicker=_multiMediaPicker - In the implementation block
@property (nonatomic,retain) UIImagePickerController * defaultImagePicker;                                //@synthesize defaultImagePicker=_defaultImagePicker - In the implementation block
@property (nonatomic,retain) FBMediaAttachmentPickerControllerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSArray * selectedMediaAttachments;                                            //@synthesize selectedMediaAttachments=_selectedMediaAttachments - In the implementation block
@property (assign,nonatomic,__weak) id<FBMediaAttachmentPickerControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldPresentInPopoverWithSourceType:(long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 ;
-(id)presentableViewControllerWithWithSourceType:(long long)arg1 selectedMediaAttachments:(id)arg2 highlightMediaAttachment:(id)arg3 selectionCapability:(long long)arg4 navigationType:(unsigned long long)arg5 ;
-(BOOL)shouldPresentableViewControllerBeWrappedInNavigationController:(id)arg1 ;
-(void)mediaPickerPermissionDenied:(id)arg1 ;
-(void)mediaPicker:(id)arg1 didSelectMediaAssetAttachments:(id)arg2 fromSource:(long long)arg3 currentPhotoAssetShown:(id)arg4 ;
-(FBMediaPickerViewController *)multiMediaPicker;
-(void)setSelectedMediaAttachments:(NSArray *)arg1 ;
-(BOOL)allowMultiMediaPicker;
-(UIImagePickerController *)defaultImagePicker;
-(void)_imagePickerController:(id)arg1 infoForImage:(id)arg2 ;
-(void)_imagePickerController:(id)arg1 infoForVideo:(id)arg2 ;
-(void)_selectedMediaAttachment:(id)arg1 ;
-(void)mediaAttachmentPickerPhotoPreviewViewControllerDidCancel:(id)arg1 ;
-(void)mediaAttachmentPickerPhotoPreviewViewController:(id)arg1 didApproveImageAttachment:(id)arg2 ;
-(id)presentableViewController;
-(void)willPresentViewController;
-(void)logPublishedMediaAttachmentInformation;
-(void)setMultiMediaPicker:(FBMediaPickerViewController *)arg1 ;
-(void)setDefaultImagePicker:(UIImagePickerController *)arg1 ;
-(NSArray *)selectedMediaAttachments;
-(void)setDelegate:(id<FBMediaAttachmentPickerControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMediaAttachmentPickerControllerDelegate>)delegate;
-(void)setConfiguration:(FBMediaAttachmentPickerControllerConfiguration *)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(FBMediaAttachmentPickerControllerConfiguration *)configuration;
-(void)mediaPickerDidCancel:(id)arg1 ;
@end

