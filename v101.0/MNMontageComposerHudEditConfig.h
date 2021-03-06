/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MNMontageComposerHudEditConfig : FBValueObject <NSCopying> {

	BOOL _editControlsVisible;
	BOOL _artEligible;
	BOOL _saveVisible;
	BOOL _textColorSliderVisible;
	BOOL _changeColorButtonVisible;
	BOOL _textPlaceholderVisible;
	long long _muteButtonState;
	UIColor* _textColorSliderColor;
	long long _trashIconState;
	long long _editMode;

}

@property (nonatomic,readonly) BOOL editControlsVisible;                         //@synthesize editControlsVisible=_editControlsVisible - In the implementation block
@property (nonatomic,readonly) BOOL artEligible;                                 //@synthesize artEligible=_artEligible - In the implementation block
@property (nonatomic,readonly) BOOL saveVisible;                                 //@synthesize saveVisible=_saveVisible - In the implementation block
@property (nonatomic,readonly) long long muteButtonState;                        //@synthesize muteButtonState=_muteButtonState - In the implementation block
@property (nonatomic,readonly) BOOL textColorSliderVisible;                      //@synthesize textColorSliderVisible=_textColorSliderVisible - In the implementation block
@property (nonatomic,copy,readonly) UIColor * textColorSliderColor;              //@synthesize textColorSliderColor=_textColorSliderColor - In the implementation block
@property (nonatomic,readonly) BOOL changeColorButtonVisible;                    //@synthesize changeColorButtonVisible=_changeColorButtonVisible - In the implementation block
@property (nonatomic,readonly) BOOL textPlaceholderVisible;                      //@synthesize textPlaceholderVisible=_textPlaceholderVisible - In the implementation block
@property (nonatomic,readonly) long long trashIconState;                         //@synthesize trashIconState=_trashIconState - In the implementation block
@property (nonatomic,readonly) long long editMode;                               //@synthesize editMode=_editMode - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithEditControlsVisible:(BOOL)arg1 artEligible:(BOOL)arg2 saveVisible:(BOOL)arg3 muteButtonState:(long long)arg4 textColorSliderVisible:(BOOL)arg5 textColorSliderColor:(id)arg6 changeColorButtonVisible:(BOOL)arg7 textPlaceholderVisible:(BOOL)arg8 trashIconState:(long long)arg9 editMode:(long long)arg10 ;
-(BOOL)artEligible;
-(BOOL)changeColorButtonVisible;
-(BOOL)saveVisible;
-(long long)muteButtonState;
-(BOOL)editControlsVisible;
-(long long)trashIconState;
-(BOOL)textPlaceholderVisible;
-(BOOL)textColorSliderVisible;
-(UIColor *)textColorSliderColor;
-(long long)editMode;
@end

