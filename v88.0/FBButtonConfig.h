/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBUIConfig.h>

@class NSShadow, UIColor, UIFont, NSString;

@interface FBButtonConfig : FBValueObject <FBUIConfig> {

	BOOL _titleFontSizeToFit;
	BOOL _shouldLayoutImageRightToTitle;
	BOOL _shouldTitleColorOverrideGlyphColor;
	BOOL _shouldAdjustBackgroundWhenHighlighted;
	BOOL _shouldAdjustBackgroundWhenHovered;
	unsigned long long _buttonStyle;
	unsigned long long _buttonGlyphName;
	double _buttonGlyphAlpha;
	unsigned long long _buttonSize;
	double _smallHorizontalInset;
	double _mediumHorizontalInset;
	double _largeHorizontalInset;
	NSShadow* _shadow;
	UIColor* _regularTitleColor;
	UIColor* _regularBackgroundColor;
	UIColor* _regularBorderColor;
	unsigned long long _regularGlyphShading;
	UIColor* _primaryTitleColor;
	UIColor* _primaryBackgroundColor;
	UIColor* _primaryBorderColor;
	unsigned long long _primaryGlyphShading;
	UIColor* _specialTitleColor;
	UIColor* _specialBackgroundColor;
	UIColor* _specialBorderColor;
	unsigned long long _specialGlyphShading;
	UIColor* _promoTitleColor;
	UIColor* _promoBackgroundColor;
	UIColor* _promoBorderColor;
	unsigned long long _promoGlyphShading;
	UIColor* _bareTitleColor;
	UIColor* _bareBackgroundColor;
	UIColor* _bareBorderColor;
	unsigned long long _bareGlyphShading;
	double _borderRadius;
	unsigned long long _roundCorners;
	double _borderWidth;
	unsigned long long _smallButtonGlyphSize;
	unsigned long long _mediumButtonGlyphSize;
	unsigned long long _largeButtonGlyphSize;
	double _smallSizeExtraWidth;
	double _mediumSizeExtraWidth;
	double _largeSizeExtraWidth;
	unsigned long long _smallButtonLabelStyle;
	unsigned long long _mediumButtonLabelStyle;
	unsigned long long _largeButtonLabelStyle;
	UIFont* _titleFontOverride;
	/*^block*/id _resourceLoader;
	/*^block*/id _titleLoader;

}

@property (nonatomic,readonly) unsigned long long buttonStyle;                          //@synthesize buttonStyle=_buttonStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long buttonGlyphName;                      //@synthesize buttonGlyphName=_buttonGlyphName - In the implementation block
@property (nonatomic,readonly) double buttonGlyphAlpha;                                 //@synthesize buttonGlyphAlpha=_buttonGlyphAlpha - In the implementation block
@property (nonatomic,readonly) unsigned long long buttonSize;                           //@synthesize buttonSize=_buttonSize - In the implementation block
@property (nonatomic,readonly) double smallHorizontalInset;                             //@synthesize smallHorizontalInset=_smallHorizontalInset - In the implementation block
@property (nonatomic,readonly) double mediumHorizontalInset;                            //@synthesize mediumHorizontalInset=_mediumHorizontalInset - In the implementation block
@property (nonatomic,readonly) double largeHorizontalInset;                             //@synthesize largeHorizontalInset=_largeHorizontalInset - In the implementation block
@property (nonatomic,copy,readonly) NSShadow * shadow;                                  //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,copy,readonly) UIColor * regularTitleColor;                        //@synthesize regularTitleColor=_regularTitleColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * regularBackgroundColor;                   //@synthesize regularBackgroundColor=_regularBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * regularBorderColor;                       //@synthesize regularBorderColor=_regularBorderColor - In the implementation block
@property (nonatomic,readonly) unsigned long long regularGlyphShading;                  //@synthesize regularGlyphShading=_regularGlyphShading - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryTitleColor;                        //@synthesize primaryTitleColor=_primaryTitleColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryBackgroundColor;                   //@synthesize primaryBackgroundColor=_primaryBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryBorderColor;                       //@synthesize primaryBorderColor=_primaryBorderColor - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryGlyphShading;                  //@synthesize primaryGlyphShading=_primaryGlyphShading - In the implementation block
@property (nonatomic,copy,readonly) UIColor * specialTitleColor;                        //@synthesize specialTitleColor=_specialTitleColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * specialBackgroundColor;                   //@synthesize specialBackgroundColor=_specialBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * specialBorderColor;                       //@synthesize specialBorderColor=_specialBorderColor - In the implementation block
@property (nonatomic,readonly) unsigned long long specialGlyphShading;                  //@synthesize specialGlyphShading=_specialGlyphShading - In the implementation block
@property (nonatomic,copy,readonly) UIColor * promoTitleColor;                          //@synthesize promoTitleColor=_promoTitleColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * promoBackgroundColor;                     //@synthesize promoBackgroundColor=_promoBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * promoBorderColor;                         //@synthesize promoBorderColor=_promoBorderColor - In the implementation block
@property (nonatomic,readonly) unsigned long long promoGlyphShading;                    //@synthesize promoGlyphShading=_promoGlyphShading - In the implementation block
@property (nonatomic,copy,readonly) UIColor * bareTitleColor;                           //@synthesize bareTitleColor=_bareTitleColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * bareBackgroundColor;                      //@synthesize bareBackgroundColor=_bareBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * bareBorderColor;                          //@synthesize bareBorderColor=_bareBorderColor - In the implementation block
@property (nonatomic,readonly) unsigned long long bareGlyphShading;                     //@synthesize bareGlyphShading=_bareGlyphShading - In the implementation block
@property (nonatomic,readonly) double borderRadius;                                     //@synthesize borderRadius=_borderRadius - In the implementation block
@property (nonatomic,readonly) unsigned long long roundCorners;                         //@synthesize roundCorners=_roundCorners - In the implementation block
@property (nonatomic,readonly) double borderWidth;                                      //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long smallButtonGlyphSize;                 //@synthesize smallButtonGlyphSize=_smallButtonGlyphSize - In the implementation block
@property (nonatomic,readonly) unsigned long long mediumButtonGlyphSize;                //@synthesize mediumButtonGlyphSize=_mediumButtonGlyphSize - In the implementation block
@property (nonatomic,readonly) unsigned long long largeButtonGlyphSize;                 //@synthesize largeButtonGlyphSize=_largeButtonGlyphSize - In the implementation block
@property (nonatomic,readonly) double smallSizeExtraWidth;                              //@synthesize smallSizeExtraWidth=_smallSizeExtraWidth - In the implementation block
@property (nonatomic,readonly) double mediumSizeExtraWidth;                             //@synthesize mediumSizeExtraWidth=_mediumSizeExtraWidth - In the implementation block
@property (nonatomic,readonly) double largeSizeExtraWidth;                              //@synthesize largeSizeExtraWidth=_largeSizeExtraWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long smallButtonLabelStyle;                //@synthesize smallButtonLabelStyle=_smallButtonLabelStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long mediumButtonLabelStyle;               //@synthesize mediumButtonLabelStyle=_mediumButtonLabelStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long largeButtonLabelStyle;                //@synthesize largeButtonLabelStyle=_largeButtonLabelStyle - In the implementation block
@property (nonatomic,copy,readonly) UIFont * titleFontOverride;                         //@synthesize titleFontOverride=_titleFontOverride - In the implementation block
@property (nonatomic,readonly) BOOL titleFontSizeToFit;                                 //@synthesize titleFontSizeToFit=_titleFontSizeToFit - In the implementation block
@property (nonatomic,copy,readonly) id resourceLoader;                                  //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (nonatomic,copy,readonly) id titleLoader;                                     //@synthesize titleLoader=_titleLoader - In the implementation block
@property (nonatomic,readonly) BOOL shouldLayoutImageRightToTitle;                      //@synthesize shouldLayoutImageRightToTitle=_shouldLayoutImageRightToTitle - In the implementation block
@property (nonatomic,readonly) BOOL shouldTitleColorOverrideGlyphColor;                 //@synthesize shouldTitleColorOverrideGlyphColor=_shouldTitleColorOverrideGlyphColor - In the implementation block
@property (nonatomic,readonly) BOOL shouldAdjustBackgroundWhenHighlighted;              //@synthesize shouldAdjustBackgroundWhenHighlighted=_shouldAdjustBackgroundWhenHighlighted - In the implementation block
@property (nonatomic,readonly) BOOL shouldAdjustBackgroundWhenHovered;                  //@synthesize shouldAdjustBackgroundWhenHovered=_shouldAdjustBackgroundWhenHovered - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithButtonStyle:(unsigned long long)arg1 buttonGlyphName:(unsigned long long)arg2 buttonGlyphAlpha:(double)arg3 buttonSize:(unsigned long long)arg4 smallHorizontalInset:(double)arg5 mediumHorizontalInset:(double)arg6 largeHorizontalInset:(double)arg7 shadow:(id)arg8 regularTitleColor:(id)arg9 regularBackgroundColor:(id)arg10 regularBorderColor:(id)arg11 regularGlyphShading:(unsigned long long)arg12 primaryTitleColor:(id)arg13 primaryBackgroundColor:(id)arg14 primaryBorderColor:(id)arg15 primaryGlyphShading:(unsigned long long)arg16 specialTitleColor:(id)arg17 specialBackgroundColor:(id)arg18 specialBorderColor:(id)arg19 specialGlyphShading:(unsigned long long)arg20 promoTitleColor:(id)arg21 promoBackgroundColor:(id)arg22 promoBorderColor:(id)arg23 promoGlyphShading:(unsigned long long)arg24 bareTitleColor:(id)arg25 bareBackgroundColor:(id)arg26 bareBorderColor:(id)arg27 bareGlyphShading:(unsigned long long)arg28 borderRadius:(double)arg29 roundCorners:(unsigned long long)arg30 borderWidth:(double)arg31 smallButtonGlyphSize:(unsigned long long)arg32 mediumButtonGlyphSize:(unsigned long long)arg33 largeButtonGlyphSize:(unsigned long long)arg34 smallSizeExtraWidth:(double)arg35 mediumSizeExtraWidth:(double)arg36 largeSizeExtraWidth:(double)arg37 smallButtonLabelStyle:(unsigned long long)arg38 mediumButtonLabelStyle:(unsigned long long)arg39 largeButtonLabelStyle:(unsigned long long)arg40 titleFontOverride:(id)arg41 titleFontSizeToFit:(BOOL)arg42 resourceLoader:(/*^block*/id)arg43 titleLoader:(/*^block*/id)arg44 shouldLayoutImageRightToTitle:(BOOL)arg45 shouldTitleColorOverrideGlyphColor:(BOOL)arg46 shouldAdjustBackgroundWhenHighlighted:(BOOL)arg47 shouldAdjustBackgroundWhenHovered:(BOOL)arg48 ;
+(Class)viewClass;
-(id)titleLoader;
-(BOOL)titleFontSizeToFit;
-(BOOL)shouldAdjustBackgroundWhenHighlighted;
-(unsigned long long)roundCorners;
-(BOOL)shouldLayoutImageRightToTitle;
-(double)smallSizeExtraWidth;
-(double)mediumSizeExtraWidth;
-(double)largeSizeExtraWidth;
-(unsigned long long)buttonGlyphName;
-(BOOL)shouldTitleColorOverrideGlyphColor;
-(double)buttonGlyphAlpha;
-(id)_initWithButtonStyle:(unsigned long long)arg1 buttonGlyphName:(unsigned long long)arg2 buttonGlyphAlpha:(double)arg3 buttonSize:(unsigned long long)arg4 smallHorizontalInset:(double)arg5 mediumHorizontalInset:(double)arg6 largeHorizontalInset:(double)arg7 shadow:(id)arg8 regularTitleColor:(id)arg9 regularBackgroundColor:(id)arg10 regularBorderColor:(id)arg11 regularGlyphShading:(unsigned long long)arg12 primaryTitleColor:(id)arg13 primaryBackgroundColor:(id)arg14 primaryBorderColor:(id)arg15 primaryGlyphShading:(unsigned long long)arg16 specialTitleColor:(id)arg17 specialBackgroundColor:(id)arg18 specialBorderColor:(id)arg19 specialGlyphShading:(unsigned long long)arg20 promoTitleColor:(id)arg21 promoBackgroundColor:(id)arg22 promoBorderColor:(id)arg23 promoGlyphShading:(unsigned long long)arg24 bareTitleColor:(id)arg25 bareBackgroundColor:(id)arg26 bareBorderColor:(id)arg27 bareGlyphShading:(unsigned long long)arg28 borderRadius:(double)arg29 roundCorners:(unsigned long long)arg30 borderWidth:(double)arg31 smallButtonGlyphSize:(unsigned long long)arg32 mediumButtonGlyphSize:(unsigned long long)arg33 largeButtonGlyphSize:(unsigned long long)arg34 smallSizeExtraWidth:(double)arg35 mediumSizeExtraWidth:(double)arg36 largeSizeExtraWidth:(double)arg37 smallButtonLabelStyle:(unsigned long long)arg38 mediumButtonLabelStyle:(unsigned long long)arg39 largeButtonLabelStyle:(unsigned long long)arg40 titleFontOverride:(id)arg41 titleFontSizeToFit:(BOOL)arg42 resourceLoader:(/*^block*/id)arg43 titleLoader:(/*^block*/id)arg44 shouldLayoutImageRightToTitle:(BOOL)arg45 shouldTitleColorOverrideGlyphColor:(BOOL)arg46 shouldAdjustBackgroundWhenHighlighted:(BOOL)arg47 shouldAdjustBackgroundWhenHovered:(BOOL)arg48 ;
-(double)smallHorizontalInset;
-(double)mediumHorizontalInset;
-(double)largeHorizontalInset;
-(UIColor *)regularTitleColor;
-(UIColor *)regularBackgroundColor;
-(UIColor *)regularBorderColor;
-(unsigned long long)regularGlyphShading;
-(UIColor *)primaryTitleColor;
-(UIColor *)primaryBackgroundColor;
-(UIColor *)primaryBorderColor;
-(unsigned long long)primaryGlyphShading;
-(UIColor *)specialTitleColor;
-(UIColor *)specialBackgroundColor;
-(UIColor *)specialBorderColor;
-(unsigned long long)specialGlyphShading;
-(UIColor *)promoTitleColor;
-(UIColor *)promoBackgroundColor;
-(UIColor *)promoBorderColor;
-(unsigned long long)promoGlyphShading;
-(UIColor *)bareTitleColor;
-(UIColor *)bareBackgroundColor;
-(UIColor *)bareBorderColor;
-(unsigned long long)bareGlyphShading;
-(unsigned long long)smallButtonGlyphSize;
-(unsigned long long)mediumButtonGlyphSize;
-(unsigned long long)largeButtonGlyphSize;
-(unsigned long long)smallButtonLabelStyle;
-(unsigned long long)mediumButtonLabelStyle;
-(unsigned long long)largeButtonLabelStyle;
-(UIFont *)titleFontOverride;
-(BOOL)shouldAdjustBackgroundWhenHovered;
-(double)borderWidth;
-(NSShadow *)shadow;
-(unsigned long long)buttonStyle;
-(id)resourceLoader;
-(double)borderRadius;
-(unsigned long long)buttonSize;
@end

