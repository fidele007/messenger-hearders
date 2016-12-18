/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <Messenger/FBUIConfig.h>

@class NSString, UIFont, UIColor, UIView;

@interface FBInterstitialViewConfig : FBValueObject <FBUIConfig> {

	BOOL _subtitleAdjustsFontSizeToFitWidth;
	BOOL _hasDismissButton;
	NSString* _title;
	UIFont* _titleFont;
	UIColor* _titleColor;
	unsigned long long _titleMaxNumberOfLines;
	NSString* _subtitle;
	UIFont* _subtitleFont;
	UIColor* _subtitleColor;
	unsigned long long _subtitleMaxNumberOfLines;
	UIView* _contentView;
	NSString* _primaryButtonTitle;
	unsigned long long _primaryButtonStyle;
	unsigned long long _primaryButtonSize;
	UIColor* _primaryButtonColor;
	UIColor* _primaryButtonBackgroundColor;
	NSString* _secondaryButtonTitle;
	unsigned long long _secondaryButtonStyle;
	unsigned long long _secondaryButtonSize;
	UIColor* _secondaryButtonColor;
	UIColor* _secondaryButtonBackgroundColor;
	UIColor* _backgroundColor;
	UIEdgeInsets _contentViewEdgeInsets;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,copy,readonly) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) UIFont * titleFont;                                    //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,copy,readonly) UIColor * titleColor;                                  //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,readonly) unsigned long long titleMaxNumberOfLines;                   //@synthesize titleMaxNumberOfLines=_titleMaxNumberOfLines - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) UIFont * subtitleFont;                                 //@synthesize subtitleFont=_subtitleFont - In the implementation block
@property (nonatomic,copy,readonly) UIColor * subtitleColor;                               //@synthesize subtitleColor=_subtitleColor - In the implementation block
@property (nonatomic,readonly) unsigned long long subtitleMaxNumberOfLines;                //@synthesize subtitleMaxNumberOfLines=_subtitleMaxNumberOfLines - In the implementation block
@property (nonatomic,readonly) BOOL subtitleAdjustsFontSizeToFitWidth;                     //@synthesize subtitleAdjustsFontSizeToFitWidth=_subtitleAdjustsFontSizeToFitWidth - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentViewEdgeInsets;                         //@synthesize contentViewEdgeInsets=_contentViewEdgeInsets - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryButtonTitle;                         //@synthesize primaryButtonTitle=_primaryButtonTitle - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryButtonStyle;                      //@synthesize primaryButtonStyle=_primaryButtonStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryButtonSize;                       //@synthesize primaryButtonSize=_primaryButtonSize - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryButtonColor;                          //@synthesize primaryButtonColor=_primaryButtonColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryButtonBackgroundColor;                //@synthesize primaryButtonBackgroundColor=_primaryButtonBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryButtonTitle;                       //@synthesize secondaryButtonTitle=_secondaryButtonTitle - In the implementation block
@property (nonatomic,readonly) unsigned long long secondaryButtonStyle;                    //@synthesize secondaryButtonStyle=_secondaryButtonStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long secondaryButtonSize;                     //@synthesize secondaryButtonSize=_secondaryButtonSize - In the implementation block
@property (nonatomic,copy,readonly) UIColor * secondaryButtonColor;                        //@synthesize secondaryButtonColor=_secondaryButtonColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * secondaryButtonBackgroundColor;              //@synthesize secondaryButtonBackgroundColor=_secondaryButtonBackgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasDismissButton;                                      //@synthesize hasDismissButton=_hasDismissButton - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets;                                    //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                             //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithTitle:(id)arg1 titleFont:(id)arg2 titleColor:(id)arg3 titleMaxNumberOfLines:(unsigned long long)arg4 subtitle:(id)arg5 subtitleFont:(id)arg6 subtitleColor:(id)arg7 subtitleMaxNumberOfLines:(unsigned long long)arg8 subtitleAdjustsFontSizeToFitWidth:(BOOL)arg9 contentView:(id)arg10 contentViewEdgeInsets:(UIEdgeInsets)arg11 primaryButtonTitle:(id)arg12 primaryButtonStyle:(unsigned long long)arg13 primaryButtonSize:(unsigned long long)arg14 primaryButtonColor:(id)arg15 primaryButtonBackgroundColor:(id)arg16 secondaryButtonTitle:(id)arg17 secondaryButtonStyle:(unsigned long long)arg18 secondaryButtonSize:(unsigned long long)arg19 secondaryButtonColor:(id)arg20 secondaryButtonBackgroundColor:(id)arg21 hasDismissButton:(BOOL)arg22 edgeInsets:(UIEdgeInsets)arg23 backgroundColor:(id)arg24 ;
+(Class)viewClass;
-(unsigned long long)titleMaxNumberOfLines;
-(unsigned long long)subtitleMaxNumberOfLines;
-(BOOL)subtitleAdjustsFontSizeToFitWidth;
-(unsigned long long)primaryButtonStyle;
-(unsigned long long)primaryButtonSize;
-(UIColor *)primaryButtonColor;
-(UIColor *)primaryButtonBackgroundColor;
-(unsigned long long)secondaryButtonStyle;
-(unsigned long long)secondaryButtonSize;
-(UIColor *)secondaryButtonColor;
-(UIColor *)secondaryButtonBackgroundColor;
-(UIEdgeInsets)contentViewEdgeInsets;
-(id)_initWithTitle:(id)arg1 titleFont:(id)arg2 titleColor:(id)arg3 titleMaxNumberOfLines:(unsigned long long)arg4 subtitle:(id)arg5 subtitleFont:(id)arg6 subtitleColor:(id)arg7 subtitleMaxNumberOfLines:(unsigned long long)arg8 subtitleAdjustsFontSizeToFitWidth:(BOOL)arg9 contentView:(id)arg10 contentViewEdgeInsets:(UIEdgeInsets)arg11 primaryButtonTitle:(id)arg12 primaryButtonStyle:(unsigned long long)arg13 primaryButtonSize:(unsigned long long)arg14 primaryButtonColor:(id)arg15 primaryButtonBackgroundColor:(id)arg16 secondaryButtonTitle:(id)arg17 secondaryButtonStyle:(unsigned long long)arg18 secondaryButtonSize:(unsigned long long)arg19 secondaryButtonColor:(id)arg20 secondaryButtonBackgroundColor:(id)arg21 hasDismissButton:(BOOL)arg22 edgeInsets:(UIEdgeInsets)arg23 backgroundColor:(id)arg24 ;
-(UIColor *)backgroundColor;
-(NSString *)title;
-(UIEdgeInsets)edgeInsets;
-(UIView *)contentView;
-(NSString *)subtitle;
-(UIColor *)titleColor;
-(UIFont *)titleFont;
-(UIFont *)subtitleFont;
-(NSString *)secondaryButtonTitle;
-(NSString *)primaryButtonTitle;
-(UIColor *)subtitleColor;
-(BOOL)hasDismissButton;
@end

