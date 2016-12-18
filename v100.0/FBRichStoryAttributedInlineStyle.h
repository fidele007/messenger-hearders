/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString, UIColor;

@interface FBRichStoryAttributedInlineStyle : NSObject {

	long long _style;
	NSString* _fontName;
	UIColor* _backgroundColor;
	NSRange _range;

}

@property (nonatomic,readonly) NSRange range;                          //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) long long style;                        //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * fontName;               //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL containsFontTraits; 
@property (nonatomic,readonly) unsigned fontTraits; 
-(BOOL)containsFontTraits;
-(unsigned)fontTraits;
-(id)initWithStyle:(long long)arg1 backgroundColor:(id)arg2 range:(NSRange)arg3 ;
-(id)initWithFontName:(id)arg1 backgroundColor:(id)arg2 range:(NSRange)arg3 ;
-(UIColor *)backgroundColor;
-(long long)style;
-(NSString *)fontName;
-(NSRange)range;
@end

