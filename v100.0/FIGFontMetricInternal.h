/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIColor;

@interface FIGFontMetricInternal : NSObject {

	unsigned long long _fontWeight;
	UIColor* _color;
	SCD_Struct_FI553 _fontSizeMetric;

}

@property (nonatomic,readonly) SCD_Struct_FI553 fontSizeMetric;              //@synthesize fontSizeMetric=_fontSizeMetric - In the implementation block
@property (nonatomic,readonly) unsigned long long fontWeight;                //@synthesize fontWeight=_fontWeight - In the implementation block
@property (nonatomic,readonly) UIColor * color;                              //@synthesize color=_color - In the implementation block
-(id)initWithFontSizeMetric:(SCD_Struct_FI553)arg1 fontWeight:(unsigned long long)arg2 color:(id)arg3 ;
-(SCD_Struct_FI553)fontSizeMetric;
-(UIColor *)color;
-(unsigned long long)fontWeight;
@end

