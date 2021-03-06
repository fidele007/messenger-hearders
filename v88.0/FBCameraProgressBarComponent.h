/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKCompositeComponent.h>

@protocol FBCameraCaptureEvent;
@interface FBCameraProgressBarComponent : CKCompositeComponent {

	double _maxDuration;
	id<FBCameraCaptureEvent> _captureEvent;
	SEL _overridingAction;

}
+(id)newWithMaxDuration:(double)arg1 captureEvent:(id)arg2 overridingAction:(SEL)arg3 progressTintColor:(id)arg4 trackTintColor:(id)arg5 heightMultiplier:(double)arg6 ;
+(id)initialState;
@end

