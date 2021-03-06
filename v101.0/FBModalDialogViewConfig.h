/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <Messenger/FBUIConfig.h>

@class NSString, UIFont, UIColor, NSArray, FBImageDownloader, UIView;

@interface FBModalDialogViewConfig : FBValueObject <FBUIConfig> {

	BOOL _hasDismissButton;
	BOOL _hasInteractiveDismissal;
	NSString* _title;
	UIFont* _titleFont;
	UIColor* _titleColor;
	unsigned long long _titleMaxNumberOfLines;
	NSString* _message;
	UIFont* _messageFont;
	UIColor* _messageColor;
	unsigned long long _messageMaxNumberOfLines;
	NSString* _facepileTitle;
	UIFont* _facepileTitleFont;
	UIColor* _facepileTitleColor;
	unsigned long long _facepileTitleMaxNumberOfLines;
	NSArray* _facepileItems;
	unsigned long long _facepileItemSize;
	FBImageDownloader* _facepileImageDownloader;
	UIView* _imageView;
	UIColor* _separatorColor;
	UIFont* _buttonTitleFont;
	unsigned long long _buttonLayout;
	NSString* _primaryButtonTitle;
	UIColor* _primaryButtonTitleColor;
	UIColor* _primaryButtonHighlightedTitleColor;
	NSString* _secondaryButtonTitle;
	UIColor* _secondaryButtonTitleColor;
	UIColor* _secondaryButtonHighlightedTitleColor;
	NSString* _tertiaryButtonTitle;
	UIColor* _tertiaryButtonTitleColor;
	UIColor* _tertiaryButtonHighlightedTitleColor;
	UIView* _customView;
	double _titleTextPadding;
	double _subtitleTextPadding;
	double _customViewPadding;
	double _separatorPadding;
	double _buttonHeight;
	UIColor* _backgroundColor;
	UIEdgeInsets _imageViewInsets;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,copy,readonly) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) UIFont * titleFont;                                          //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,copy,readonly) UIColor * titleColor;                                        //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,readonly) unsigned long long titleMaxNumberOfLines;                         //@synthesize titleMaxNumberOfLines=_titleMaxNumberOfLines - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                                          //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) UIFont * messageFont;                                        //@synthesize messageFont=_messageFont - In the implementation block
@property (nonatomic,copy,readonly) UIColor * messageColor;                                      //@synthesize messageColor=_messageColor - In the implementation block
@property (nonatomic,readonly) unsigned long long messageMaxNumberOfLines;                       //@synthesize messageMaxNumberOfLines=_messageMaxNumberOfLines - In the implementation block
@property (nonatomic,copy,readonly) NSString * facepileTitle;                                    //@synthesize facepileTitle=_facepileTitle - In the implementation block
@property (nonatomic,copy,readonly) UIFont * facepileTitleFont;                                  //@synthesize facepileTitleFont=_facepileTitleFont - In the implementation block
@property (nonatomic,copy,readonly) UIColor * facepileTitleColor;                                //@synthesize facepileTitleColor=_facepileTitleColor - In the implementation block
@property (nonatomic,readonly) unsigned long long facepileTitleMaxNumberOfLines;                 //@synthesize facepileTitleMaxNumberOfLines=_facepileTitleMaxNumberOfLines - In the implementation block
@property (nonatomic,copy,readonly) NSArray * facepileItems;                                     //@synthesize facepileItems=_facepileItems - In the implementation block
@property (nonatomic,readonly) unsigned long long facepileItemSize;                              //@synthesize facepileItemSize=_facepileItemSize - In the implementation block
@property (nonatomic,readonly) FBImageDownloader * facepileImageDownloader;                      //@synthesize facepileImageDownloader=_facepileImageDownloader - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets imageViewInsets;                                     //@synthesize imageViewInsets=_imageViewInsets - In the implementation block
@property (nonatomic,readonly) UIView * imageView;                                               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) BOOL hasDismissButton;                                            //@synthesize hasDismissButton=_hasDismissButton - In the implementation block
@property (nonatomic,readonly) BOOL hasInteractiveDismissal;                                     //@synthesize hasInteractiveDismissal=_hasInteractiveDismissal - In the implementation block
@property (nonatomic,copy,readonly) UIColor * separatorColor;                                    //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,copy,readonly) UIFont * buttonTitleFont;                                    //@synthesize buttonTitleFont=_buttonTitleFont - In the implementation block
@property (nonatomic,readonly) unsigned long long buttonLayout;                                  //@synthesize buttonLayout=_buttonLayout - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryButtonTitle;                               //@synthesize primaryButtonTitle=_primaryButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryButtonTitleColor;                           //@synthesize primaryButtonTitleColor=_primaryButtonTitleColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryButtonHighlightedTitleColor;                //@synthesize primaryButtonHighlightedTitleColor=_primaryButtonHighlightedTitleColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryButtonTitle;                             //@synthesize secondaryButtonTitle=_secondaryButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) UIColor * secondaryButtonTitleColor;                         //@synthesize secondaryButtonTitleColor=_secondaryButtonTitleColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * secondaryButtonHighlightedTitleColor;              //@synthesize secondaryButtonHighlightedTitleColor=_secondaryButtonHighlightedTitleColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * tertiaryButtonTitle;                              //@synthesize tertiaryButtonTitle=_tertiaryButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) UIColor * tertiaryButtonTitleColor;                          //@synthesize tertiaryButtonTitleColor=_tertiaryButtonTitleColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * tertiaryButtonHighlightedTitleColor;               //@synthesize tertiaryButtonHighlightedTitleColor=_tertiaryButtonHighlightedTitleColor - In the implementation block
@property (nonatomic,readonly) UIView * customView;                                              //@synthesize customView=_customView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets;                                          //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,readonly) double titleTextPadding;                                          //@synthesize titleTextPadding=_titleTextPadding - In the implementation block
@property (nonatomic,readonly) double subtitleTextPadding;                                       //@synthesize subtitleTextPadding=_subtitleTextPadding - In the implementation block
@property (nonatomic,readonly) double customViewPadding;                                         //@synthesize customViewPadding=_customViewPadding - In the implementation block
@property (nonatomic,readonly) double separatorPadding;                                          //@synthesize separatorPadding=_separatorPadding - In the implementation block
@property (nonatomic,readonly) double buttonHeight;                                              //@synthesize buttonHeight=_buttonHeight - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                                   //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithTitle:(id)arg1 titleFont:(id)arg2 titleColor:(id)arg3 titleMaxNumberOfLines:(unsigned long long)arg4 message:(id)arg5 messageFont:(id)arg6 messageColor:(id)arg7 messageMaxNumberOfLines:(unsigned long long)arg8 facepileTitle:(id)arg9 facepileTitleFont:(id)arg10 facepileTitleColor:(id)arg11 facepileTitleMaxNumberOfLines:(unsigned long long)arg12 facepileItems:(id)arg13 facepileItemSize:(unsigned long long)arg14 facepileImageDownloader:(id)arg15 imageViewInsets:(UIEdgeInsets)arg16 imageView:(id)arg17 hasDismissButton:(BOOL)arg18 hasInteractiveDismissal:(BOOL)arg19 separatorColor:(id)arg20 buttonTitleFont:(id)arg21 buttonLayout:(unsigned long long)arg22 primaryButtonTitle:(id)arg23 primaryButtonTitleColor:(id)arg24 primaryButtonHighlightedTitleColor:(id)arg25 secondaryButtonTitle:(id)arg26 secondaryButtonTitleColor:(id)arg27 secondaryButtonHighlightedTitleColor:(id)arg28 tertiaryButtonTitle:(id)arg29 tertiaryButtonTitleColor:(id)arg30 tertiaryButtonHighlightedTitleColor:(id)arg31 customView:(id)arg32 edgeInsets:(UIEdgeInsets)arg33 titleTextPadding:(double)arg34 subtitleTextPadding:(double)arg35 customViewPadding:(double)arg36 separatorPadding:(double)arg37 buttonHeight:(double)arg38 backgroundColor:(id)arg39 ;
+(Class)viewClass;
-(unsigned long long)facepileItemSize;
-(unsigned long long)buttonLayout;
-(unsigned long long)titleMaxNumberOfLines;
-(id)_initWithTitle:(id)arg1 titleFont:(id)arg2 titleColor:(id)arg3 titleMaxNumberOfLines:(unsigned long long)arg4 message:(id)arg5 messageFont:(id)arg6 messageColor:(id)arg7 messageMaxNumberOfLines:(unsigned long long)arg8 facepileTitle:(id)arg9 facepileTitleFont:(id)arg10 facepileTitleColor:(id)arg11 facepileTitleMaxNumberOfLines:(unsigned long long)arg12 facepileItems:(id)arg13 facepileItemSize:(unsigned long long)arg14 facepileImageDownloader:(id)arg15 imageViewInsets:(UIEdgeInsets)arg16 imageView:(id)arg17 hasDismissButton:(BOOL)arg18 hasInteractiveDismissal:(BOOL)arg19 separatorColor:(id)arg20 buttonTitleFont:(id)arg21 buttonLayout:(unsigned long long)arg22 primaryButtonTitle:(id)arg23 primaryButtonTitleColor:(id)arg24 primaryButtonHighlightedTitleColor:(id)arg25 secondaryButtonTitle:(id)arg26 secondaryButtonTitleColor:(id)arg27 secondaryButtonHighlightedTitleColor:(id)arg28 tertiaryButtonTitle:(id)arg29 tertiaryButtonTitleColor:(id)arg30 tertiaryButtonHighlightedTitleColor:(id)arg31 customView:(id)arg32 edgeInsets:(UIEdgeInsets)arg33 titleTextPadding:(double)arg34 subtitleTextPadding:(double)arg35 customViewPadding:(double)arg36 separatorPadding:(double)arg37 buttonHeight:(double)arg38 backgroundColor:(id)arg39 ;
-(unsigned long long)messageMaxNumberOfLines;
-(NSString *)facepileTitle;
-(UIFont *)facepileTitleFont;
-(UIColor *)facepileTitleColor;
-(unsigned long long)facepileTitleMaxNumberOfLines;
-(NSArray *)facepileItems;
-(FBImageDownloader *)facepileImageDownloader;
-(UIEdgeInsets)imageViewInsets;
-(BOOL)hasInteractiveDismissal;
-(UIFont *)buttonTitleFont;
-(UIColor *)primaryButtonTitleColor;
-(UIColor *)primaryButtonHighlightedTitleColor;
-(UIColor *)secondaryButtonTitleColor;
-(UIColor *)secondaryButtonHighlightedTitleColor;
-(UIColor *)tertiaryButtonTitleColor;
-(UIColor *)tertiaryButtonHighlightedTitleColor;
-(double)titleTextPadding;
-(double)subtitleTextPadding;
-(double)customViewPadding;
-(double)separatorPadding;
-(UIColor *)backgroundColor;
-(NSString *)title;
-(UIEdgeInsets)edgeInsets;
-(double)buttonHeight;
-(UIColor *)separatorColor;
-(NSString *)message;
-(UIView *)imageView;
-(UIView *)customView;
-(UIColor *)titleColor;
-(UIFont *)titleFont;
-(NSString *)secondaryButtonTitle;
-(NSString *)tertiaryButtonTitle;
-(NSString *)primaryButtonTitle;
-(UIFont *)messageFont;
-(UIColor *)messageColor;
-(BOOL)hasDismissButton;
@end

