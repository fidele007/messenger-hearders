/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBMediaPickerAppearance : NSObject {

	unsigned long long _pickerStyle;
	BOOL _cameraShowToggleOnBottomBar;
	BOOL _topBottomBarTranslucent;

}

@property (nonatomic,readonly) BOOL cameraShowTopBar; 
@property (nonatomic,readonly) BOOL cameraShowBackButtonOnBottomBar; 
@property (nonatomic,readonly) BOOL cameraShowToggleOnBottomBar;                  //@synthesize cameraShowToggleOnBottomBar=_cameraShowToggleOnBottomBar - In the implementation block
@property (nonatomic,readonly) BOOL cameraBottomBarToggleOnTheRight; 
@property (nonatomic,readonly) BOOL topBottomBarTranslucent;                      //@synthesize topBottomBarTranslucent=_topBottomBarTranslucent - In the implementation block
-(BOOL)cameraShowTopBar;
-(id)initWithPickerStyle:(unsigned long long)arg1 ;
-(BOOL)cameraShowBackButtonOnBottomBar;
-(BOOL)cameraBottomBarToggleOnTheRight;
-(BOOL)cameraShowToggleOnBottomBar;
-(BOOL)topBottomBarTranslucent;
@end

