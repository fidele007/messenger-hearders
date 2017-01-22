/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComposerAwesomeTextConfig : FBValueObject <NSCopying> {

	BOOL _enabled;
	BOOL _stickyStylesEnabled;
	BOOL _composerPickerAutoOpen;
	unsigned long long _stylesCharLimit;
	unsigned long long _maxNewlines;
	NSString* _styles;
	double _fontSize;
	double _lineHeightMultiplier;
	double _composerMinHeightAspectRatio;
	double _verticalPadding;
	double _horizontalPadding;
	double _pickerAnimationDurationMs;

}

@property (nonatomic,readonly) BOOL enabled;                                     //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) unsigned long long stylesCharLimit;               //@synthesize stylesCharLimit=_stylesCharLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long maxNewlines;                   //@synthesize maxNewlines=_maxNewlines - In the implementation block
@property (nonatomic,copy,readonly) NSString * styles;                           //@synthesize styles=_styles - In the implementation block
@property (nonatomic,readonly) double fontSize;                                  //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,readonly) double lineHeightMultiplier;                      //@synthesize lineHeightMultiplier=_lineHeightMultiplier - In the implementation block
@property (nonatomic,readonly) double composerMinHeightAspectRatio;              //@synthesize composerMinHeightAspectRatio=_composerMinHeightAspectRatio - In the implementation block
@property (nonatomic,readonly) double verticalPadding;                           //@synthesize verticalPadding=_verticalPadding - In the implementation block
@property (nonatomic,readonly) double horizontalPadding;                         //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (nonatomic,readonly) BOOL stickyStylesEnabled;                         //@synthesize stickyStylesEnabled=_stickyStylesEnabled - In the implementation block
@property (nonatomic,readonly) BOOL composerPickerAutoOpen;                      //@synthesize composerPickerAutoOpen=_composerPickerAutoOpen - In the implementation block
@property (nonatomic,readonly) double pickerAnimationDurationMs;                 //@synthesize pickerAnimationDurationMs=_pickerAnimationDurationMs - In the implementation block
-(id)initWithEnabled:(BOOL)arg1 stylesCharLimit:(unsigned long long)arg2 maxNewlines:(unsigned long long)arg3 styles:(id)arg4 fontSize:(double)arg5 lineHeightMultiplier:(double)arg6 composerMinHeightAspectRatio:(double)arg7 verticalPadding:(double)arg8 horizontalPadding:(double)arg9 stickyStylesEnabled:(BOOL)arg10 composerPickerAutoOpen:(BOOL)arg11 pickerAnimationDurationMs:(double)arg12 ;
-(unsigned long long)stylesCharLimit;
-(unsigned long long)maxNewlines;
-(double)lineHeightMultiplier;
-(double)composerMinHeightAspectRatio;
-(BOOL)stickyStylesEnabled;
-(BOOL)composerPickerAutoOpen;
-(double)pickerAnimationDurationMs;
-(BOOL)enabled;
-(double)horizontalPadding;
-(double)fontSize;
-(double)verticalPadding;
-(NSString *)styles;
@end
