/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, UIFont;

@interface FBQuicksilverPlayerInfoLabelAttributes : FBValueObject <NSCopying> {

	NSString* _text;
	UIColor* _textColor;
	UIFont* _textFont;
	long long _alignment;
	UIEdgeInsets _insets;

}

@property (nonatomic,copy,readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) UIColor * textColor;              //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) UIFont * textFont;                //@synthesize textFont=_textFont - In the implementation block
@property (nonatomic,readonly) long long alignment;                   //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets insets;                   //@synthesize insets=_insets - In the implementation block
-(id)initWithText:(id)arg1 textColor:(id)arg2 textFont:(id)arg3 alignment:(long long)arg4 insets:(UIEdgeInsets)arg5 ;
-(NSString *)text;
-(UIColor *)textColor;
-(long long)alignment;
-(UIFont *)textFont;
-(UIEdgeInsets)insets;
@end

