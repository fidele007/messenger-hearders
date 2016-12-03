/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIColor, UIFont, UIButton, UIImage;

@interface FBNavigationBarSearchTextFieldConfig : NSObject {

	BOOL _useSelectedSearchIconButton;
	double _cornerRadius;
	UIColor* _borderColor;
	UIColor* _backgroundColor;

}

@property (nonatomic,copy,readonly) UIColor * textColor; 
@property (nonatomic,copy,readonly) UIColor * highlightedTextColor; 
@property (nonatomic,copy,readonly) UIColor * tintColor; 
@property (nonatomic,copy,readonly) UIFont * textFont; 
@property (nonatomic,copy,readonly) UIColor * placeholderTextColor; 
@property (nonatomic,readonly) UIEdgeInsets textFieldInsets; 
@property (nonatomic,readonly) BOOL useRightViewForSearchIcon; 
@property (nonatomic,readonly) long long leftViewMode; 
@property (nonatomic,readonly) long long rightViewMode; 
@property (nonatomic,copy,readonly) UIButton * defaultSearchIconButton; 
@property (nonatomic,copy,readonly) UIButton * selectedSearchIconButton; 
@property (nonatomic,readonly) BOOL useSelectedSearchIconButton;                      //@synthesize useSelectedSearchIconButton=_useSelectedSearchIconButton - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                                   //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) UIColor * borderColor;                                 //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,readonly) double borderWidth; 
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                        //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIImage * backgroundImage; 
@property (nonatomic,readonly) UIImage * highlightedBackgroundImage; 
@property (nonatomic,readonly) long long* keyboardAppearance; 
-(BOOL)useRightViewForSearchIcon;
-(UIEdgeInsets)textFieldInsets;
-(UIButton *)defaultSearchIconButton;
-(UIImage *)highlightedBackgroundImage;
-(UIButton *)selectedSearchIconButton;
-(BOOL)useSelectedSearchIconButton;
-(UIColor *)backgroundColor;
-(UIColor *)tintColor;
-(double)cornerRadius;
-(UIImage *)backgroundImage;
-(UIColor *)textColor;
-(long long*)keyboardAppearance;
-(UIColor *)highlightedTextColor;
-(UIColor *)borderColor;
-(double)borderWidth;
-(UIFont *)textFont;
-(long long)leftViewMode;
-(long long)rightViewMode;
-(UIColor *)placeholderTextColor;
@end
