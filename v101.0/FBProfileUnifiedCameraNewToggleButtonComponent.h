/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKCompositeComponent.h>

@protocol FBCameraGenericEvent;
@interface FBProfileUnifiedCameraNewToggleButtonComponent : CKCompositeComponent {

	id<FBCameraGenericEvent> _captureStateChangedToPhotoEvent;
	id<FBCameraGenericEvent> _captureStateChangedToVideoEvent;
	unsigned long long _captureState;

}
+(id)newWithCameraMode:(long long)arg1 captureState:(unsigned long long)arg2 angle:(double)arg3 captureStateChangedToPhotoEvent:(id)arg4 captureStateChangedToVideoEvent:(id)arg5 toolbox:(id)arg6 ;
-(void)didTapCameraPhotoButton;
-(void)didTapCameraVideoButton;
-(void)didTapToggleButton;
@end
