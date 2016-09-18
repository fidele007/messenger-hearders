/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@protocol FBCameraCaptureButtonAppearanceProvider;
@class CKComponent;

@interface FBCameraCaptureButtonComponent : CKCompositeComponent {

	id<FBCameraCaptureButtonAppearanceProvider> _appearanceProvider;
	double _captureButtonAnimationDuration;
	CKComponent* _captureButtonInnerImageComponent;
	CKComponent* _captureButtonOuterImageComponent;
	unsigned long long _captureState;
	BOOL _isSelected;
	SEL _longPressAction;

}
+(id)newWithAppearanceProvider:(id)arg1 enabled:(BOOL)arg2 captureState:(unsigned long long)arg3 longPressAction:(SEL)arg4 selected:(BOOL)arg5 tapAction:(SEL)arg6 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(void)longPressAction:(id)arg1 gestureRecognizer:(id)arg2 ;
@end

