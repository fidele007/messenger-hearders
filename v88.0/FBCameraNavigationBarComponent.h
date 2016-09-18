/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKCompositeComponent.h>

@protocol FBCameraGenericEvent;
@interface FBCameraNavigationBarComponent : CKCompositeComponent {

	id<FBCameraGenericEvent> _closeEvent;
	id<FBCameraGenericEvent> _switchCameraEvent;
	id<FBCameraGenericEvent> _flashPickerToggleEvent;
	id<FBCameraGenericEvent> _toggleLightModeEvent;

}
+(id)newWithTitleComponent:(id)arg1 flashPickerButtonState:(long long)arg2 showCreativeToolsButton:(BOOL)arg3 topInset:(double)arg4 angle:(double)arg5 closeEvent:(id)arg6 toggleCreativeToolsAction:(SEL)arg7 flashPickerToggleEvent:(id)arg8 switchCameraEvent:(id)arg9 lowLightModeButtonState:(long long)arg10 toggleLightModeEvent:(id)arg11 ;
-(void)closeButtonDidTap;
-(void)lightModeButtonDidTap;
-(void)cameraSwitchButtonDidTap;
-(void)flashButtonDidtap;
@end

