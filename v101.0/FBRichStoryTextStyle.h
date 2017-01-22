/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString, UIColor;

@interface FBRichStoryTextStyle : NSObject {

	NSString* _fontName;
	UIColor* _color;
	UIColor* _backgroundColor;
	unsigned long long _displayStyle;
	unsigned long long _capitalizationStyle;
	unsigned long long _underlineStyle;
	long long _alignment;
	double _fontSizeMultiplier;
	double _lineHeightMultiplier;
	SCD_Struct_FB338 _innerPadding;
	SCD_Struct_FB338 _margins;
	FBBorderMetrics* _borders;

}

@property (nonatomic,copy) NSString * fontName;                                   //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,retain) UIColor * color;                                     //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                           //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) long long alignment;                                 //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB338 innerPadding;                       //@synthesize innerPadding=_innerPadding - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB338 margins;                            //@synthesize margins=_margins - In the implementation block
@property (assign,nonatomic) unsigned long long displayStyle;                     //@synthesize displayStyle=_displayStyle - In the implementation block
@property (assign,nonatomic) FBBorderMetrics* borders;                            //@synthesize borders=_borders - In the implementation block
@property (assign,nonatomic) unsigned long long capitalizationStyle;              //@synthesize capitalizationStyle=_capitalizationStyle - In the implementation block
@property (assign,nonatomic) unsigned long long underlineStyle;                   //@synthesize underlineStyle=_underlineStyle - In the implementation block
@property (assign,nonatomic) double fontSizeMultiplier;                           //@synthesize fontSizeMultiplier=_fontSizeMultiplier - In the implementation block
@property (assign,nonatomic) double lineHeightMultiplier;                         //@synthesize lineHeightMultiplier=_lineHeightMultiplier - In the implementation block
+(id)styleWithFontName:(id)arg1 color:(id)arg2 backgroundColor:(id)arg3 alignment:(long long)arg4 innerPadding:(SCD_Struct_FB338)arg5 margins:(SCD_Struct_FB338)arg6 displayStyle:(unsigned long long)arg7 borders:(FBBorderMetrics*)arg8 capitalizationStyle:(unsigned long long)arg9 underlineStyle:(unsigned long long)arg10 fontSizeMultiplier:(double)arg11 lineHeightMultiplier:(double)arg12 ;
-(unsigned long long)underlineStyle;
-(SCD_Struct_FB338)innerPadding;
-(double)lineHeightMultiplier;
-(void)setInnerPadding:(SCD_Struct_FB338)arg1 ;
-(void)setCapitalizationStyle:(unsigned long long)arg1 ;
-(void)setUnderlineStyle:(unsigned long long)arg1 ;
-(void)setLineHeightMultiplier:(double)arg1 ;
-(unsigned long long)capitalizationStyle;
-(void)setAlignment:(long long)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(long long)alignment;
-(UIColor *)color;
-(NSString *)fontName;
-(void)setColor:(UIColor *)arg1 ;
-(void)setFontName:(NSString *)arg1 ;
-(void)setDisplayStyle:(unsigned long long)arg1 ;
-(unsigned long long)displayStyle;
-(SCD_Struct_FB338)margins;
-(void)setMargins:(SCD_Struct_FB338)arg1 ;
-(double)fontSizeMultiplier;
-(void)setFontSizeMultiplier:(double)arg1 ;
-(FBBorderMetrics*)borders;
-(void)setBorders:(FBBorderMetrics*)arg1 ;
@end
