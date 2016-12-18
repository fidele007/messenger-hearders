/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@protocol FBCameraGenericEvent;
@class CKImageComponent;

@interface FBProfileUnifiedCameraToggleButtonComponent : CKCompositeComponent {

	id<FBCameraGenericEvent> _captureStateChangedToPhotoEvent;
	id<FBCameraGenericEvent> _captureStateChangedToVideoEvent;
	unsigned long long _captureState;
	CKImageComponent* _circleComponent;

}
+(id)newWithCameraMode:(long long)arg1 captureState:(unsigned long long)arg2 angle:(double)arg3 captureStateChangedToPhotoEvent:(id)arg4 captureStateChangedToVideoEvent:(id)arg5 toolbox:(id)arg6 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(void)didTapCameraPhotoButton;
-(void)didTapCameraVideoButton;
-(void)didTapToggleButton;
@end

