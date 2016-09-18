/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCommentComposerMediaController.h>
#import <Messenger/FBCommentComposerCameraViewControllerDelegate.h>

@class UIViewController, NSString;

@interface FBCommentComposerCameraCapturer : FBCommentComposerMediaController <FBCommentComposerCameraViewControllerDelegate> {

	UIViewController* _cameraController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setViewControllerBlock:(/*^block*/id)arg1 ;
-(void)presentMediaPicker:(id)arg1 ;
-(void)dismissCameraController;
-(void)cameraCapturerDidTakeMedia:(id)arg1 ;
-(void)cameraCapturerDidCancel;
@end

