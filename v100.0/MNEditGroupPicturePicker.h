/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBClassInjectable.h>
#import <Messenger/ThreadImagePickerDelegate.h>
#import <UIKit/UIDocumentPickerDelegate.h>

@protocol MNEditGroupPicturePickerDelegate;
@class MNEditGroupPicturePickerInjector, UIViewController, NSString, UIAlertController, NSArray, ThreadImagePicker;

@interface MNEditGroupPicturePicker : NSObject <FBClassInjectable, ThreadImagePickerDelegate, UIDocumentPickerDelegate> {

	MNEditGroupPicturePickerInjector* _injector;
	UIViewController* _viewControllerToPresent;
	id<MNEditGroupPicturePickerDelegate> _delegate;
	NSString* _analyticsModule;
	UIAlertController* _alertController;
	NSArray* _actionSheetButtons;
	ThreadImagePicker* _threadImagePicker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIAlertController * alertController;                               //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,copy) NSArray * actionSheetButtons;                                        //@synthesize actionSheetButtons=_actionSheetButtons - In the implementation block
@property (nonatomic,retain) ThreadImagePicker * threadImagePicker;                             //@synthesize threadImagePicker=_threadImagePicker - In the implementation block
@property (assign,nonatomic,__weak) id<MNEditGroupPicturePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * analyticsModule;                                          //@synthesize analyticsModule=_analyticsModule - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(NSString *)analyticsModule;
-(void)_logEvent:(id)arg1 ;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(void)showFromBarButtonItem:(id)arg1 withRect:(CGRect)arg2 inView:(id)arg3 showRemove:(BOOL)arg4 ;
-(void)_removePicture;
-(void)_tappedActionAtIndex:(long long)arg1 ;
-(void)setActionSheetButtons:(NSArray *)arg1 ;
-(void)setThreadImagePicker:(ThreadImagePicker *)arg1 ;
-(id)_imagePickerViewController;
-(void)_pickerDidPickImage:(id)arg1 ;
-(void)_didSelectImagePickerWithSourceType:(long long)arg1 ;
-(void)_showFailedToInitializeImageError;
-(void)didPickThreadImage:(id)arg1 picker:(id)arg2 ;
-(void)threadImagePickerControllerDidCancel:(id)arg1 ;
-(NSArray *)actionSheetButtons;
-(ThreadImagePicker *)threadImagePicker;
-(void)setDelegate:(id<MNEditGroupPicturePickerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNEditGroupPicturePickerDelegate>)delegate;
-(void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2 ;
-(void)dismiss;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(void)_cancel;
-(void)_pickerDidCancel;
@end

