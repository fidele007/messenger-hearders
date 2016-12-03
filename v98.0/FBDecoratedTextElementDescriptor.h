/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBTextElementDescriptor.h>

@interface FBDecoratedTextElementDescriptor : FBTextElementDescriptor {

	unsigned long long _displayStyle;
	UIEdgeInsets _innerPadding;
	FBBorderMetrics* _border;

}

@property (assign,nonatomic) FBBorderMetrics* border;                      //@synthesize border=_border - In the implementation block
@property (assign,nonatomic) UIEdgeInsets innerPadding;                    //@synthesize innerPadding=_innerPadding - In the implementation block
@property (assign,nonatomic) unsigned long long displayStyle;              //@synthesize displayStyle=_displayStyle - In the implementation block
+(id)elementDescriptorForDescription:(id)arg1 ;
-(UIEdgeInsets)innerPadding;
-(double)insetForKey:(id)arg1 forElementOfSize:(CGSize)arg2 ;
-(void)setInnerPadding:(UIEdgeInsets)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisplayStyle:(unsigned long long)arg1 ;
-(unsigned long long)displayStyle;
-(FBBorderMetrics*)border;
-(void)setBorder:(FBBorderMetrics*)arg1 ;
@end
