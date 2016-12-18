/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface MNPermissionsViewConfiguration : FBValueObject <NSCopying> {

	BOOL _showDismissButton;
	NSString* _iconName;
	NSString* _title;
	NSString* _descriptionText;
	NSString* _buttonTitle;
	UIColor* _backgroundColor;
	UIColor* _textColor;
	UIColor* _buttonColor;

}

@property (nonatomic,copy,readonly) NSString * iconName;                     //@synthesize iconName=_iconName - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonTitle;                  //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * textColor;                     //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * buttonColor;                   //@synthesize buttonColor=_buttonColor - In the implementation block
@property (nonatomic,readonly) BOOL showDismissButton;                       //@synthesize showDismissButton=_showDismissButton - In the implementation block
-(id)initWithIconName:(id)arg1 title:(id)arg2 descriptionText:(id)arg3 buttonTitle:(id)arg4 backgroundColor:(id)arg5 textColor:(id)arg6 buttonColor:(id)arg7 showDismissButton:(BOOL)arg8 ;
-(BOOL)showDismissButton;
-(UIColor *)backgroundColor;
-(NSString *)title;
-(UIColor *)textColor;
-(NSString *)buttonTitle;
-(NSString *)descriptionText;
-(UIColor *)buttonColor;
-(NSString *)iconName;
@end

