/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBElementDescriptor.h>

@interface FBTextElementDescriptor : FBElementDescriptor {

	UIEdgeInsets _baselineInsets;
	UIEdgeInsets _capHeightInsets;
	FBTextMetrics* _textMetrics;

}

@property (assign,nonatomic) FBTextMetrics* textMetrics;              //@synthesize textMetrics=_textMetrics - In the implementation block
+(id)elementDescriptorForDescription:(id)arg1 ;
-(FBTextMetrics*)textMetrics;
-(double)insetForKey:(id)arg1 forElementOfSize:(CGSize)arg2 ;
-(void)setTextMetrics:(FBTextMetrics*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

