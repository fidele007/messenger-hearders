/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBUIConfigBuilder.h>

@class NSString, UIFont, UIColor, UIView;

@interface FBInterstitialViewConfigBuilder : NSObject <FBUIConfigBuilder> {

	NSString* _title;
	UIFont* _titleFont;
	UIColor* _titleColor;
	unsigned long long _titleMaxNumberOfLines;
	NSString* _subtitle;
	UIFont* _subtitleFont;
	UIColor* _subtitleColor;
	unsigned long long _subtitleMaxNumberOfLines;
	BOOL _subtitleAdjustsFontSizeToFitWidth;
	UIView* _contentView;
	UIEdgeInsets _contentViewEdgeInsets;
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
	BOOL _hasDismissButton;
	UIEdgeInsets _edgeInsets;
	UIColor* _backgroundColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderForInstance:(id)arg1 ;
+(id)builderFromConfig:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setTitleMaxNumberOfLines:(unsigned long long)arg1 ;
-(id)setPrimaryButtonTitle:(id)arg1 ;
-(id)setPrimaryButtonColor:(id)arg1 ;
-(id)setPrimaryButtonBackgroundColor:(id)arg1 ;
-(id)setPrimaryButtonSize:(unsigned long long)arg1 ;
-(id)setSecondaryButtonColor:(id)arg1 ;
-(id)setSecondaryButtonBackgroundColor:(id)arg1 ;
-(id)setPrimaryButtonStyle:(unsigned long long)arg1 ;
-(id)setContentViewEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)setSubtitleMaxNumberOfLines:(unsigned long long)arg1 ;
-(id)setSubtitleAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(id)setSecondaryButtonStyle:(unsigned long long)arg1 ;
-(id)setSecondaryButtonSize:(unsigned long long)arg1 ;
-(id)setBackgroundColor:(id)arg1 ;
-(id)setTitle:(id)arg1 ;
-(id)_init;
-(id)setContentView:(id)arg1 ;
-(id)setSubtitle:(id)arg1 ;
-(id)setTitleColor:(id)arg1 ;
-(id)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)build;
-(id)setSecondaryButtonTitle:(id)arg1 ;
-(id)setSubtitleColor:(id)arg1 ;
-(id)setSubtitleFont:(id)arg1 ;
-(id)setTitleFont:(id)arg1 ;
-(id)setHasDismissButton:(BOOL)arg1 ;
@end

