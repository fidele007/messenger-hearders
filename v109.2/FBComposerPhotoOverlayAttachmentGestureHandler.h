/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBComposerPhotoOverlayAttachmentGestureHandler <NSObject>
@property (assign,nonatomic,__weak) id<FBComposerPhotoOverlayAttachmentGestureHandlerDelegate> delegate; 
@required
-(void)handlePinchGesture:(id)arg1;
-(void)handleRotationGesture:(id)arg1;
-(void)handleDoubleTapGesture:(id)arg1;
-(id)initWithPhotoOverlayView:(id)arg1 gestureHandlerDelegate:(id)arg2;
-(void)setDelegate:(id)arg1;
-(id<FBComposerPhotoOverlayAttachmentGestureHandlerDelegate>)delegate;
-(void)handlePanGesture:(id)arg1;

@end

