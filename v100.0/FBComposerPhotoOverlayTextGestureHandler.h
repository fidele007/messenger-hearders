/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBComposerPhotoOverlayAttachmentGestureHandler.h>

@protocol FBComposerPhotoOverlayAttachmentGestureHandlerDelegate;
@class FBComposerPhotoOverlayView, FBComposerPhotoOverlayGestureHandlerHelpers, NSString;

@interface FBComposerPhotoOverlayTextGestureHandler : NSObject <FBComposerPhotoOverlayAttachmentGestureHandler> {

	CGAffineTransform _beginningTransform;
	double _lastRotation;
	FBComposerPhotoOverlayView* _photoOverlayView;
	FBComposerPhotoOverlayGestureHandlerHelpers* _gestureHandlerHelper;
	CGPoint _firstPoint;
	CGPoint _secondPoint;
	BOOL _enableSnap;
	id<FBComposerPhotoOverlayAttachmentGestureHandlerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBComposerPhotoOverlayAttachmentGestureHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)handlePinchGesture:(id)arg1 ;
-(void)_handlePinchGestureEnded:(id)arg1 ;
-(void)_snapTitleIfNeededOnScale:(double)arg1 touchEnded:(BOOL)arg2 ;
-(id)initWithPhotoOverlayView:(id)arg1 gestureHandlerDelegate:(id)arg2 ;
-(void)handleRotationGesture:(id)arg1 ;
-(void)handleDoubleTapGesture:(id)arg1 ;
-(void)setDelegate:(id<FBComposerPhotoOverlayAttachmentGestureHandlerDelegate>)arg1 ;
-(id<FBComposerPhotoOverlayAttachmentGestureHandlerDelegate>)delegate;
-(void)handlePanGesture:(id)arg1 ;
@end
