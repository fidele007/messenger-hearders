/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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

