/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBComposerPhotoOverlayAttachmentGestureHandler <NSObject>
@property (assign,nonatomic,__weak) id<FBComposerPhotoOverlayAttachmentGestureHandlerDelegate> delegate; 
@required
-(void)handlePinchGesture:(id)arg1;
-(id)initWithPhotoOverlayView:(id)arg1 gestureHandlerDelegate:(id)arg2;
-(void)handleRotationGesture:(id)arg1;
-(void)handleDoubleTapGesture:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<FBComposerPhotoOverlayAttachmentGestureHandlerDelegate>)delegate;
-(void)handlePanGesture:(id)arg1;

@end
