/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKCompositeComponent.h>

@protocol FBCameraCaptureEvent;
@interface FBCameraTapAndLongPressCaptureButtonComponent : CKCompositeComponent {

	id<FBCameraCaptureEvent> _captureEvent;

}
+(id)newWithAppearanceProvider:(id)arg1 captureEvent:(id)arg2 captureState:(unsigned long long)arg3 enabled:(BOOL)arg4 ;
-(void)didLongPressCaptureButton:(id)arg1 longPressState:(id)arg2 ;
-(void)didTapCaptureButton;
@end

